Name:           godot
Version:        4.0.0
Release:        0
License:        MIT
Summary:        godot engine
Source:         %{name}-%{version}.tar.gz

BuildRequires:  scons
BuildRequires:  pkgconfig(python3)
BuildRequires:  pkgconfig(wayland-client)
BuildRequires:  pkgconfig(xkbcommon)

%description
godot core engine

%prep
%setup -q

%build
scons -j 4 platform=linuxbsd x11=false wayland=true target=template_release module_mono_enabled=yes
scons -j 4 platform=linuxbsd x11=false wayland=true target=template_release

%install
rm -rf %{buildroot}
rm -rf %{buildroot}/usr/bin/local/godot/*
rm -rf %{buildroot}%{_bindir}/godot
mkdir -p %{buildroot}%{_bindir}
mkdir -p %{buildroot}/usr/bin/local/godot
cp bin/* %{buildroot}%{_bindir}/local/godot

%files
%defattr(-,root,root,-)
%{_bindir}/local/godot/*

