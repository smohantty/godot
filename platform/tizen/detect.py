import os
import sys
import platform
import subprocess

from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from SCons import Environment


def is_active():
    return True


def get_name():
    return "Tizen"


def can_build():
    return os.path.exists(get_env_tizen_sdk_root())


def get_opts():
    return [
        ("TIZEN_SDK_ROOT", "Path to the TIZEN SDK", get_env_tizen_sdk_root()),
    ]


def get_doc_classes():
    return [
        "EditorExportPlatformTizen",
    ]


def get_doc_path():
    return "doc_classes"


# Return the TIZEN_SDK_ROOT environment variable.
def get_env_tizen_sdk_root():
    return os.environ.get("TIZEN_SDK_ROOT", -1)


def get_min_sdk_version(platform):
    return int(platform.split("-")[1])


def get_flags():
    return [
        ("arch", "arm64"),  # Default for convenience.
        ("target", "template_debug"),
    ]


# Check if Android NDK version is installed
# If not, install it.
def install_sdk_if_needed(env):
    print("Checking for Tizen SDK...")
    sdk_root = env["TIZEN_SDK_ROOT"]
    if not os.path.exists(sdk_root):
        print(
            "Please ensure TIZEN_SDK_ROOT is correct and cmdline-tools are installed"
        )
        sys.exit()


def configure(env: "Environment"):
    # Validate arch.
    supported_arches = ["arm32", "arm64"]
    if env["arch"] not in supported_arches:
        print(
            'Unsupported CPU architecture "%s" for Tizen. Supported architectures are: %s.'
            % (env["arch"], ", ".join(supported_arches))
        )
        sys.exit()

    install_sdk_if_needed(env)
    sdk_root = env["TIZEN_SDK_ROOT"]

    # Architecture

    toolchain_path = sdk_root + "/tools/"

    if env["arch"] == "arm32":
        target_triple = "armv7l"
        compiler_path = toolchain_path + "/arm-linux-gnueabi-gcc-9.2" + "/bin"
    elif env["arch"] == "arm64":
        target_triple = "aarch64-linux-gnu"
        compiler_path = toolchain_path + "/aarch64-linux-gnu-gcc-9.2" + "/bin"

    #target_option = ["--target", target_triple]
    #env.Append(ASFLAGS=[target_option, "-c"])
    #env.Append(CCFLAGS=target_option)
    #env.Append(LINKFLAGS=target_option)

    # LTO

    if env["lto"] == "auto":  # LTO benefits for Android (size, performance) haven't been clearly established yet.
        env["lto"] = "none"

    if env["lto"] != "none":
        if env["lto"] == "thin":
            env.Append(CCFLAGS=["-flto=thin"])
            env.Append(LINKFLAGS=["-flto=thin"])
        else:
            env.Append(CCFLAGS=["-flto"])
            env.Append(LINKFLAGS=["-flto"])

    # Compiler configuration

    env["SHLIBSUFFIX"] = ".so"

    if env["arch"] == "arm32":
        env["CC"] = compiler_path + "/arm-linux-gnueabi-gcc"
        env["CXX"] = compiler_path + "/arm-linux-gnueabi-g++"
        env["AR"] = compiler_path + "/arm-linux-gnueabi-ar"
        env["RANLIB"] = compiler_path + "/arm-linux-gnueabi-ranlib"
        env["AS"] = compiler_path + "/arm-linux-gnueabi-as"
    elif env["arch"] == "arm64":
        env["CC"] = compiler_path + "/aarch64-linux-gnu-gcc"
        env["CXX"] = compiler_path + "/aarch64-linux-gnu-g++"
        env["AR"] = compiler_path + "/aarch64-linux-gnu-gcc-ar"
        env["RANLIB"] = compiler_path + "/aarch64-linux-gnu-gcc-ranlib"
        env["AS"] = compiler_path + "/aarch64-linux-gnu-gcc-as"

    base_sys_root = "/home/subhransu/tizen-studio/platforms/tizen-7.0/mobile/rootstraps/mobile-7.0-device.core"
    env.Append(CCFLAGS=["--sysroot=/home/subhransu/tizen-studio/platforms/tizen-7.0/mobile/rootstraps/mobile-7.0-device.core"])
    env.Append(LINKFLAGS=["--sysroot=/home/subhransu/tizen-studio/platforms/tizen-7.0/mobile/rootstraps/mobile-7.0-device.core"])

    # Disable exceptions on template builds
    if not env.editor_build:
        env.Append(CXXFLAGS=["-fno-exceptions"])

    env.Append(
        CCFLAGS=(
            "-fpic -ffunction-sections -funwind-tables -fstack-protector-strong -fvisibility=hidden -fno-strict-aliasing".split()
        )
    )

    if env["arch"] == "x86_32":
        # The NDK adds this if targeting API < 24, so we can drop it when Godot targets it at least
        env.Append(CCFLAGS=["-mstackrealign"])
    elif env["arch"] == "arm32":
        env.Append(CCFLAGS="-march=armv7-a -mfloat-abi=softfp".split())
        env.Append(CPPDEFINES=["__ARM_ARCH_7__", "__ARM_ARCH_7A__"])
        env.Append(CPPDEFINES=["__ARM_NEON__"])
    elif env["arch"] == "arm64":
        env.Append(CCFLAGS=["-mfix-cortex-a53-835769"])
        env.Append(CPPDEFINES=["__ARM_ARCH_8A__"])

    # Link flags

    env.Append(LINKFLAGS="-Wl,--gc-sections -Wl,--no-undefined -Wl,-z,now".split())
    env.Append(LINKFLAGS="-Wl,-soname,libgodot_android.so")

    env.Prepend(CPPPATH=["#platform/tizen"])
    env.Append(CPPDEFINES=["TIZEN_ENABLED", "UNIX_ENABLED"])
    env.Append(LIBS=["EGL", "log", "z", "dl"])

    if env["vulkan"]:
        env.Append(CPPDEFINES=["VULKAN_ENABLED"])
        if not env["use_volk"]:
            env.Append(LIBS=["vulkan"])

    if env["opengl3"]:
        env.Append(CPPDEFINES=["GLES3_ENABLED"])
        env.Append(LIBS=["GLESv3"])
