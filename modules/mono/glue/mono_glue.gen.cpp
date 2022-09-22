/* THIS FILE IS GENERATED DO NOT EDIT */
#include "glue_header.h"

#ifdef MONO_GLUE_ENABLED
int32_t godot_icall_3_0(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_0_2(MethodBind* method, Object* ptr) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

void godot_icall_0_3(MethodBind* method, Object* ptr) {
	ERR_FAIL_NULL(ptr);
	method->ptrcall(ptr, nullptr, nullptr);
}

Object* godot_icall_AESContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AESContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int64_t godot_icall_0_4(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int64_t)ret;
}

void godot_icall_3_5(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector2* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_6(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_2_7(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_1_8(MethodBind* method, Object* ptr, int64_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_2_9(MethodBind* method, Object* ptr, int64_t arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_10(MethodBind* method, Object* ptr, int64_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_11(MethodBind* method, Object* ptr, int64_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_1_12(MethodBind* method, Object* ptr, int64_t arg1) {
	PackedInt64Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt64Array_to_mono_array(ret);
}

Array* godot_icall_0_13(MethodBind* method, Object* ptr) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return memnew(Array(ret));
}

void godot_icall_2_14(MethodBind* method, Object* ptr, int64_t arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_15(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_3_16(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int64_t godot_icall_2_17(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_1_18(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoArray* godot_icall_2_19(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_20(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2) {
	PackedInt64Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt64Array_to_mono_array(ret);
}

Object* godot_icall_AStar2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AStar2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_21(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector3* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_22(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_23(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int64_t godot_icall_2_24(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_1_25(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoArray* godot_icall_2_26(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

Object* godot_icall_AStar3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AStar3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_27(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_28(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_29(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_0_30(MethodBind* method, Object* ptr) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	method->ptrcall(ptr, nullptr, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_3_31(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, MonoString* arg3) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_32(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_33(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_34(MethodBind* method, Object* ptr, MonoString* arg1) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoString* godot_icall_0_35(MethodBind* method, Object* ptr) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_AcceptDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AcceptDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatableBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatableBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatableBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatableBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_36(MethodBind* method, Object* ptr, Object* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_37(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_38(MethodBind* method, Object* ptr, StringName* arg1) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

StringName* godot_icall_0_39(MethodBind* method, Object* ptr) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return memnew(StringName(ret));
}

void godot_icall_2_40(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_41(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_42(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_1_43(MethodBind* method, Object* ptr, int32_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_44(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_45(MethodBind* method, Object* ptr, double arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { &arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

double godot_icall_0_46(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	method->ptrcall(ptr, nullptr, &ret);
	return ret;
}

Object* godot_icall_AnimatedSprite2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimatedSprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedSprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_47(MethodBind* method, Object* ptr, float arg1) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_0_48(MethodBind* method, Object* ptr) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	method->ptrcall(ptr, nullptr, &ret);
	return (float)ret;
}

void godot_icall_2_49(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_50(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_51(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_1_52(MethodBind* method, Object* ptr, int32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

Object* godot_icall_AnimatedTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimatedTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_53(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_54(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

NodePath* godot_icall_1_55(MethodBind* method, Object* ptr, int32_t arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_56(MethodBind* method, Object* ptr, int32_t arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_57(MethodBind* method, Object* ptr, NodePath* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_58(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_59(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_60(MethodBind* method, Object* ptr, int32_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_3_61(MethodBind* method, Object* ptr, int32_t arg1, double arg2, GDMonoMarshal::M_Vector3* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_62(MethodBind* method, Object* ptr, int32_t arg1, double arg2, GDMonoMarshal::M_Quaternion* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Quaternion arg3_in = MARSHALLED_IN(Quaternion, arg3);
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_63(MethodBind* method, Object* ptr, int32_t arg1, double arg2, float arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_64(MethodBind* method, Object* ptr, int32_t arg1, double arg2, MonoObject* arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_65(MethodBind* method, Object* ptr, int32_t arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_66(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_67(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_68(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, double arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_2_69(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_1_70(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_71(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

double godot_icall_2_72(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

int32_t godot_icall_3_73(MethodBind* method, Object* ptr, int32_t arg1, double arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_74(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_75(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_3_76(MethodBind* method, Object* ptr, int32_t arg1, double arg2, double arg3) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[3] = { &arg1_in, &arg2, &arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

MonoObject* godot_icall_2_77(MethodBind* method, Object* ptr, int32_t arg1, double arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

StringName* godot_icall_2_78(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

Array* godot_icall_2_79(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

int32_t godot_icall_6_80(MethodBind* method, Object* ptr, int32_t arg1, double arg2, float arg3, GDMonoMarshal::M_Vector2* arg4, GDMonoMarshal::M_Vector2* arg5, int32_t arg6) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg3_in = (double)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_81(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3, double arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_82(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

float godot_icall_2_83(MethodBind* method, Object* ptr, int32_t arg1, double arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_5_84(MethodBind* method, Object* ptr, int32_t arg1, double arg2, Object* arg3, float arg4, float arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_85(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_86(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_87(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, double arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_88(MethodBind* method, Object* ptr, int32_t arg1, double arg2, StringName* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_89(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_90(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_91(MethodBind* method, Object* ptr, uint32_t arg1, uint32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Animation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Animation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_92(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_93(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_94(MethodBind* method, Object* ptr, StringName* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_95(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_96(MethodBind* method, Object* ptr, Dictionary* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

Dictionary* godot_icall_0_97(MethodBind* method, Object* ptr) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_AnimationLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_98(MethodBind* method, Object* ptr, int32_t arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_2_99(MethodBind* method, Object* ptr, NodePath* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_100(MethodBind* method, Object* ptr, NodePath* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_1_101(MethodBind* method, Object* ptr, Array* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_102(MethodBind* method, Object* ptr, StringName* arg1, double arg2, double arg3, MonoBoolean arg4, MonoBoolean arg5, float arg6, int32_t arg7) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[7] = { &arg1_in, &arg2, &arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

double godot_icall_8_103(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2, double arg3, MonoBoolean arg4, MonoBoolean arg5, float arg6, int32_t arg7, MonoBoolean arg8) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	double arg6_in = (double)arg6;
	int64_t arg7_in = (int64_t)arg7;
	bool arg8_in = (bool)arg8;
	const void* call_args[8] = { &arg1_in, arg2, &arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

double godot_icall_7_104(MethodBind* method, Object* ptr, int32_t arg1, double arg2, MonoBoolean arg3, MonoBoolean arg4, float arg5, int32_t arg6, MonoBoolean arg7) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg1_in = (int64_t)arg1;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, &arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_2_105(MethodBind* method, Object* ptr, StringName* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_106(MethodBind* method, Object* ptr, StringName* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_AnimationNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeAdd2_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAdd2");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeAdd3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAdd3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_107(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeAnimation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeAnimation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeBlend2_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlend2");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeBlend3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlend3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_108(MethodBind* method, Object* ptr, Object* arg1, float arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_109(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AnimationNodeBlendSpace1D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendSpace1D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_110(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_111(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_112(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_113(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_114(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedInt32Array arg1_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_0_115(MethodBind* method, Object* ptr) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

int32_t godot_icall_0_116(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeBlendSpace2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendSpace2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_117(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_118(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_119(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_120(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_121(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_122(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_AnimationNodeBlendTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeBlendTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_123(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AnimationNodeOneShot_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeOneShot");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeOutput_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeOutput");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_124(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

StringName* godot_icall_1_125(MethodBind* method, Object* ptr, Object* arg1) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

MonoBoolean godot_icall_2_126(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_3_127(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_128(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

StringName* godot_icall_1_129(MethodBind* method, Object* ptr, int32_t arg1) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

Object* godot_icall_AnimationNodeStateMachine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_0_130(MethodBind* method, Object* ptr) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

Object* godot_icall_AnimationNodeStateMachinePlayback_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachinePlayback");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_131(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_132(MethodBind* method, Object* ptr, NodePath* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

NodePath* godot_icall_0_133(MethodBind* method, Object* ptr) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return memnew(NodePath(ret));
}

Object* godot_icall_AnimationNodeStateMachineTransition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeStateMachineTransition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeTimeScale_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTimeScale");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationNodeTimeSeek_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTimeSeek");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_134(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_AnimationNodeTransition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationNodeTransition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_135(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

StringName* godot_icall_1_136(MethodBind* method, Object* ptr, StringName* arg1) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

void godot_icall_3_137(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_2_138(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_4_139(MethodBind* method, Object* ptr, StringName* arg1, float arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_140(MethodBind* method, Object* ptr, StringName* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_141(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_142(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_143(MethodBind* method, Object* ptr, double arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_AnimationPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationRootNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationRootNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AnimationTrackEditPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTrackEditPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_144(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_145(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_0_146(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

void godot_icall_2_147(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_AnimationTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AnimationTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_148(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_1_149(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_Area2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_150(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_151(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_152(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

Object* godot_icall_Area3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Area3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_153(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_154(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_5_155(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2, Array* arg3, Dictionary* arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, arg2, arg3, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_156(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint32_t godot_icall_1_157(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

int32_t godot_icall_1_158(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_159(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_160(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1, float arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_161(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg1) {
	ERR_FAIL_NULL(ptr);
	AABB arg1_in = MARSHALLED_IN(AABB, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_162(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg_ret) {
	AABB ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_AABB(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(AABB, ret);
}

MonoObject* godot_icall_0_163(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_164(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedStringArray arg1_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_ArrayMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ArrayMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_165(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	PackedInt32Array arg2_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_166(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_ArrayOccluder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ArrayOccluder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_167(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_168(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AspectRatioContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AspectRatioContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_169(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_170(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_171(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

Object* godot_icall_AtlasTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AtlasTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioBusLayout_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioBusLayout");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectAmplify_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectAmplify");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandLimitFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandLimitFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectBandPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectBandPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_172(MethodBind* method, Object* ptr, int32_t arg1) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

Object* godot_icall_AudioEffectCapture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCapture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectChorus_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectChorus");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectCompressor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectCompressor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectDelay_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDelay");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_173(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectDistortion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectDistortion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ10_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ10");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ21_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ21");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectEQ6_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectEQ6");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_174(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectHighShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectHighShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectInstance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectInstance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLimiter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLimiter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowPassFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowPassFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectLowShelfFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectLowShelfFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectNotchFilter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectNotchFilter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPanner_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPanner");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectPhaser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPhaser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_175(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectPitchShift_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectPitchShift");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_176(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_177(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioEffectRecord_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectRecord");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioEffectReverb_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectReverb");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_178(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioEffectSpectrumAnalyzer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectSpectrumAnalyzer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_179(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_AudioEffectStereoEnhance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioEffectStereoEnhance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioListener2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioListener2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioListener3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioListener3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_180(MethodBind* method, Object* ptr, StringName* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_181(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_182(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_183(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_184(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_185(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_2_186(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_0_187(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_188(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("AudioServer");
}

MonoObject* godot_icall_0_189(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioStream_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStream");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_1_190(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_1_191(MethodBind* method, Object* ptr, MonoArray* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_1_192(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_AudioStreamMP3_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamMP3");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamMicrophone_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamMicrophone");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_193(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_AudioStreamOGGVorbis_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamOGGVorbis");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamPlayback_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayback");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamPlaybackOGGVorbis_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlaybackOGGVorbis");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_AudioStreamPlaybackResampled_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlaybackResampled");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_194(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_195(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_196(MethodBind* method, Object* ptr, uint32_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint32_t godot_icall_0_197(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (uint32_t)ret;
}

Object* godot_icall_AudioStreamPlayer2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_198(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_199(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamPlayer3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamPlayer3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_200(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_201(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamRandomizer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamRandomizer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_202(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_203(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_AudioStreamSample_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "AudioStreamSample");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_204(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_BackBufferCopy_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BackBufferCopy");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_205(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_206(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_207(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_208(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_209(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_210(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_BaseButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BaseButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_211(MethodBind* method, Object* ptr, GDMonoMarshal::M_Color* arg1) {
	ERR_FAIL_NULL(ptr);
	Color arg1_in = MARSHALLED_IN(Color, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_212(MethodBind* method, Object* ptr, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

int32_t godot_icall_0_213(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_214(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_215(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_216(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_217(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_218(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_219(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_220(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_221(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_222(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_223(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_224(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_225(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_226(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_227(MethodBind* method, Object* ptr, Object* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_228(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_229(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_230(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_231(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Array* godot_icall_2_232(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, float arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_BitMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BitMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_233(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_234(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_Bone2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Bone2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoneAttachment3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoneAttachment3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_235(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_236(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_BoxMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoxOccluder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxOccluder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_BoxShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "BoxShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_237(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_238(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_239(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_240(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Button_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Button");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_241(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ButtonGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ButtonGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_242(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_243(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_244(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_245(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_246(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_0_247(MethodBind* method, Object* ptr) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

void godot_icall_1_248(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedColorArray arg1_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_0_249(MethodBind* method, Object* ptr) {
	PackedColorArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedColorArray_to_mono_array(ret);
}

MonoObject* godot_icall_0_250(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CPUParticles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CPUParticles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_251(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_252(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_253(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_0_254(MethodBind* method, Object* ptr) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

Object* godot_icall_CPUParticles3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CPUParticles3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_255(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CSGBox3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGBox3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CSGCombiner3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGCombiner3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CSGCylinder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGCylinder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CSGMesh3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGMesh3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_256(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_257(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_258(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CSGPolygon3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGPolygon3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_259(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CSGSphere3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGSphere3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CSGTorus3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSGTorus3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_260(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int vararg_length = mono_array_length(arg1);
	int total_length = 0 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg1, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(0 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_CSharpScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CSharpScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_261(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CallbackTweener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CallbackTweener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_262(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_263(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Camera2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_264(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_1_265(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoBoolean godot_icall_1_266(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_267(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_3_268(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_269(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector2* arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_270(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_271(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_272(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_273(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_274(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

RID* godot_icall_0_275(MethodBind* method, Object* ptr) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return memnew(RID(ret));
}

Object* godot_icall_Camera3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Camera3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CameraEffects_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CameraEffects");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_276(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_277(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CameraFeed_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CameraFeed");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_278(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CameraServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("CameraServer");
}

int32_t godot_icall_0_279(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CameraTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CameraTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasGroup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasGroup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_280(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, float arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_281(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_282(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Color* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_283(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedColorArray arg2_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_8_284(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, float arg3, float arg4, int32_t arg5, GDMonoMarshal::M_Color* arg6, float arg7, MonoBoolean arg8) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	double arg7_in = (double)arg7;
	bool arg8_in = (bool)arg8;
	const void* call_args[8] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_285(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Color* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_286(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedColorArray arg2_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_287(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_288(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_289(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_290(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_291(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_292(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Color* arg4, double arg5, double arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5, &arg6 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_293(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_294(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedColorArray arg2_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg2);
	PackedVector2Array arg3_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg3);
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_295(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedColorArray arg2_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg2);
	PackedVector2Array arg3_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg3);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_296(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Color* arg2, MonoArray* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	PackedVector2Array arg3_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg3);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_10_297(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, int32_t arg4, float arg5, int32_t arg6, GDMonoMarshal::M_Color* arg7, int32_t arg8, GDMonoMarshal::M_Color* arg9, uint16_t arg10) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	int64_t arg8_in = (int64_t)arg8;
	Color arg9_in = MARSHALLED_IN(Color, arg9);
	int64_t arg10_in = (int64_t)arg10;
	const void* call_args[10] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_11_298(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, int32_t arg4, float arg5, int32_t arg6, int32_t arg7, GDMonoMarshal::M_Color* arg8, int32_t arg9, GDMonoMarshal::M_Color* arg10, uint16_t arg11) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	Color arg8_in = MARSHALLED_IN(Color, arg8);
	int64_t arg9_in = (int64_t)arg9;
	Color arg10_in = MARSHALLED_IN(Color, arg10);
	int64_t arg11_in = (int64_t)arg11;
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_8_299(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, MonoString* arg4, int32_t arg5, GDMonoMarshal::M_Color* arg6, int32_t arg7, GDMonoMarshal::M_Color* arg8) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	int64_t arg7_in = (int64_t)arg7;
	Color arg8_in = MARSHALLED_IN(Color, arg8);
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_4_300(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_301(MethodBind* method, Object* ptr, Object* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_302(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_303(MethodBind* method, Object* ptr, double arg1, double arg2, double arg3, double arg4) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[4] = { &arg1, &arg2, &arg3, &arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_304(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_305(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_306(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_307(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_308(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_309(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CanvasItemMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasItemMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasModulate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasModulate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CanvasTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CanvasTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CapsuleShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CapsuleShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CenterContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CenterContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_0_310(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_1_311(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint8_t godot_icall_0_312(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint8_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (uint8_t)ret;
}

void godot_icall_1_313(MethodBind* method, Object* ptr, uint8_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint16_t godot_icall_0_314(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint16_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (uint16_t)ret;
}

void godot_icall_1_315(MethodBind* method, Object* ptr, uint16_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_316(MethodBind* method, Object* ptr, RID* arg1) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_CharFXTransform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CharFXTransform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_317(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_318(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

float godot_icall_1_319(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_320(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_321(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CharacterBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CharacterBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_322(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_323(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

float godot_icall_1_324(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_325(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_326(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CharacterBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CharacterBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CheckButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CheckButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CircleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CircleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_327(MethodBind* method, Object* ptr, StringName* arg1) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

Dictionary* godot_icall_2_328(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_329(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoObject* godot_icall_2_330(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_3_331(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2, MonoObject* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg2_in = arg2 ? *arg2 : StringName();
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_3_332(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_2_333(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

int64_t godot_icall_2_334(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

MonoArray* godot_icall_3_335(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, MonoBoolean arg3) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

StringName* godot_icall_3_336(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, MonoBoolean arg3) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

Object* godot_icall_ClassDB_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ClassDB");
}

MonoBoolean godot_icall_1_337(MethodBind* method, Object* ptr, MonoString* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoString* godot_icall_1_338(MethodBind* method, Object* ptr, MonoString* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_3_339(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_340(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoString* arg3, GDMonoMarshal::M_Color* arg4, Object* arg5, MonoObject* arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	Variant arg6_in = GDMonoMarshal::mono_object_to_variant(arg6);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Dictionary* godot_icall_1_341(MethodBind* method, Object* ptr, int32_t arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_CodeEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CodeEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_342(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_343(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_4_344(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Color* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_CodeHighlighter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CodeHighlighter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_345(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

uint32_t godot_icall_1_346(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

void godot_icall_2_347(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_348(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

MonoObject* godot_icall_1_349(MethodBind* method, Object* ptr, uint32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_350(MethodBind* method, Object* ptr, uint32_t arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_351(MethodBind* method, Object* ptr, uint32_t arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_352(MethodBind* method, Object* ptr, uint32_t arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_1_353(MethodBind* method, Object* ptr, uint32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_2_354(MethodBind* method, Object* ptr, uint32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_355(MethodBind* method, Object* ptr, uint32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_356(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_2_357(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_358(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_359(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_360(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform3D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_361(MethodBind* method, Object* ptr, uint32_t arg1, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

MonoObject* godot_icall_2_362(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_363(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CollisionPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CollisionPolygon3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionPolygon3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_364(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_365(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_CollisionShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CollisionShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_366(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ColorPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_367(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_368(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ColorPickerButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorPickerButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ColorRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ColorRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CompressedCubemap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CompressedCubemap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CompressedCubemapArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CompressedCubemapArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CompressedTexture2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CompressedTexture2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CompressedTexture2DArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CompressedTexture2DArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CompressedTexture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CompressedTexture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConcavePolygonShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConcavePolygonShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConeTwistJoint3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConeTwistJoint3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_369(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_3_370(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoObject* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoBoolean godot_icall_2_371(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_1_372(MethodBind* method, Object* ptr, MonoString* arg1) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

int32_t godot_icall_2_373(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_374(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ConfigFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfigFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConfirmationDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConfirmationDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_375(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Container_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Container");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_376(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_4_377(MethodBind* method, Object* ptr, int32_t arg1, float arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_378(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_379(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_380(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_381(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_382(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_383(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_384(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_385(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_2_386(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_387(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

MonoObject* godot_icall_0_388(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_389(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_390(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_0_391(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_392(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_393(MethodBind* method, Object* ptr, MonoObject* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_394(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_395(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Control_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Control");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ConvexPolygonShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ConvexPolygonShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_1_396(MethodBind* method, Object* ptr, int32_t arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoObject* godot_icall_1_397(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_4_398(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoString* arg3, MonoString* arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_3_399(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, Object* arg3) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoBoolean godot_icall_4_400(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3, Object* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_2_401(MethodBind* method, Object* ptr, Object* arg1, MonoArray* arg2) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_3_402(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoArray* arg3) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoBoolean godot_icall_2_403(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_Crypto_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Crypto");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_404(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_405(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_CryptoKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CryptoKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Cubemap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Cubemap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CubemapArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CubemapArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_406(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, float arg2, float arg3, int32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_407(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

float godot_icall_1_408(MethodBind* method, Object* ptr, float arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_1_409(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Curve_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_410(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_411(MethodBind* method, Object* ptr, int32_t arg1, float arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_1_412(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_2_413(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoArray* godot_icall_2_414(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

Object* godot_icall_Curve2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_415(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_416(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_417(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_418(MethodBind* method, Object* ptr, int32_t arg1, float arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_1_419(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_420(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoArray* godot_icall_0_421(MethodBind* method, Object* ptr) {
	PackedFloat32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedFloat32Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_422(MethodBind* method, Object* ptr, int32_t arg1, float arg2) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

Object* godot_icall_Curve3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Curve3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_423(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_CurveTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CurveTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CurveXYZTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CurveXYZTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_CylinderShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "CylinderShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_424(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_425(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_DTLSServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DTLSServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DampedSpringJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DampedSpringJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Decal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Decal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_DirectionalLight2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DirectionalLight2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_426(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_427(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_DirectionalLight3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "DirectionalLight3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_428(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

uint64_t godot_icall_0_429(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (uint64_t)ret;
}

Object* godot_icall_Directory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Directory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_6_430(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Callable* arg3, MonoObject* arg4, int32_t arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Callable arg3_in = GDMonoMarshal::managed_to_callable(*arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_431(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoString* arg3, GDMonoMarshal::M_Callable* arg4, MonoObject* arg5, int32_t arg6, int32_t arg7) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Callable arg4_in = GDMonoMarshal::managed_to_callable(*arg4);
	Variant arg5_in = GDMonoMarshal::mono_object_to_variant(arg5);
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[7] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_8_432(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3, int32_t arg4, GDMonoMarshal::M_Callable* arg5, MonoObject* arg6, int32_t arg7, int32_t arg8) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	Callable arg5_in = GDMonoMarshal::managed_to_callable(*arg5);
	Variant arg6_in = GDMonoMarshal::mono_object_to_variant(arg6);
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	const void* call_args[8] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_433(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoString* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_434(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_435(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_2_436(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_437(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, GDMonoMarshal::M_Callable* arg_ret) {
	Callable ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Callable(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = GDMonoMarshal::callable_to_managed(ret);
}

MonoObject* godot_icall_2_438(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoString* godot_icall_2_439(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_2_440(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_441(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_442(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_443(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_444(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, GDMonoMarshal::M_Callable* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	Callable arg3_in = GDMonoMarshal::managed_to_callable(*arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_445(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_446(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_447(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_448(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_449(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3, float arg4, float arg5, int32_t arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_450(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Callable* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_451(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_0_452(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2i* arg_ret) {
	Rect2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2i, ret);
}

void godot_icall_1_453(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_1_454(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2i* arg_ret) {
	Rect2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2i, ret);
}

int32_t godot_icall_1_455(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_456(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_457(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, uint32_t arg3, GDMonoMarshal::M_Rect2i* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Rect2i arg4_in = MARSHALLED_IN(Rect2i, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int64_t godot_icall_2_458(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_2_459(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2i* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Rect2i arg2_in = MARSHALLED_IN(Rect2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_460(MethodBind* method, Object* ptr, MonoArray* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_461(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_462(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_463(MethodBind* method, Object* ptr, uint64_t arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint64_t godot_icall_1_464(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

int32_t godot_icall_1_465(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_466(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_467(MethodBind* method, Object* ptr, MonoBoolean arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_468(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_6_469(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Rect2* arg2, MonoBoolean arg3, int32_t arg4, int32_t arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_470(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_471(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_4_472(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoArray* arg3, GDMonoMarshal::M_Callable* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PackedStringArray arg3_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg3);
	Callable arg4_in = GDMonoMarshal::managed_to_callable(*arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_473(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoString* arg3, GDMonoMarshal::M_Callable* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Callable arg4_in = GDMonoMarshal::managed_to_callable(*arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_474(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_DisplayServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("DisplayServer");
}

int32_t godot_icall_6_475(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_476(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_4_477(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Array* godot_icall_1_478(MethodBind* method, Object* ptr, int32_t arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_479(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_480(MethodBind* method, Object* ptr, Object* arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_481(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

double godot_icall_1_482(MethodBind* method, Object* ptr, int32_t arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

Object* godot_icall_ENetConnection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ENetConnection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_483(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_484(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_485(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_486(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_487(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ENetMultiplayerPeer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ENetMultiplayerPeer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_488(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_489(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

#ifdef TOOLS_ENABLED
void godot_icall_4_490(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, GDMonoMarshal::M_Callable* arg3, MonoString* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Callable arg3_in = GDMonoMarshal::managed_to_callable(*arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorCommandPalette_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorCommandPalette");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_491(MethodBind* method, Object* ptr, MonoString* arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_492(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Callable* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_EditorDebuggerPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorDebuggerPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_493(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_494(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorExportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorExportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_495(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFeatureProfile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFeatureProfile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
int32_t godot_icall_0_496(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
MonoObject* godot_icall_0_497(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
int32_t godot_icall_0_498(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
int32_t godot_icall_0_499(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_500(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_501(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_1_502(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorFileSystemDirectory_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileSystemDirectory");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorFileSystemImportFormatSupportQuery_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorFileSystemImportFormatSupportQuery");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorImportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorImportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorInspector_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorInspector");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_503(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_504(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorInspectorPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorInspectorPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_505(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_506(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_507(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_508(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_509(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_510(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_511(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
Array* godot_icall_2_512(MethodBind* method, Object* ptr, Array* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_513(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_514(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_515(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
void godot_icall_2_516(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_517(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_518(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_519(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, GDMonoMarshal::M_Transform3D* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg3_in = MARSHALLED_IN(Transform3D, arg3);
	const void* call_args[4] = { arg1, arg2, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_520(MethodBind* method, Object* ptr, Object* arg1, float arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_5_521(MethodBind* method, Object* ptr, MonoArray* arg1, Object* arg2, MonoArray* arg3, MonoBoolean arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	PackedInt32Array arg3_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg3);
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
MonoObject* godot_icall_0_522(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_523(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorNode3DGizmo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorNode3DGizmo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_5_524(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, MonoBoolean arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_525(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_3_526(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
void godot_icall_2_527(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_528(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorNode3DGizmoPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorNode3DGizmoPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorPaths_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorPaths");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_2_529(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_2_530(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_2_531(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Callable* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
void godot_icall_2_532(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_533(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
void godot_icall_4_534(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_535(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
void godot_icall_1_536(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1) {
	ERR_FAIL_NULL(ptr);
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_537(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_538(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_539(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_540(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#ifdef TOOLS_ENABLED
void godot_icall_4_541(MethodBind* method, Object* ptr, StringName* arg1, MonoObject* arg2, StringName* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	StringName arg3_in = arg3 ? *arg3 : StringName();
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorProperty_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorProperty");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorResourceConversionPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourceConversionPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_542(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_EditorResourcePicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourcePicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_4_543(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, StringName* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	StringName arg3_in = arg3 ? *arg3 : StringName();
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
#ifdef TOOLS_ENABLED
void godot_icall_4_544(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, StringName* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg3_in = arg3 ? *arg3 : StringName();
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorResourcePreviewGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorResourcePreviewGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSceneFormatImporter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneFormatImporter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSceneFormatImporterBlend_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneFormatImporterBlend");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSceneFormatImporterFBX_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneFormatImporterFBX");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSceneFormatImporterGLTF_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSceneFormatImporterGLTF");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScenePostImport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScenePostImport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_545(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#ifdef TOOLS_ENABLED
void godot_icall_6_546(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoObject* arg3, int32_t arg4, MonoString* arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	int64_t arg4_in = (int64_t)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorScenePostImportPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScenePostImportPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorScriptPicker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorScriptPicker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSelection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSelection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_547(MethodBind* method, Object* ptr, MonoString* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_548(MethodBind* method, Object* ptr, StringName* arg1, MonoObject* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_EditorSpinSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSpinSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorSyntaxHighlighter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorSyntaxHighlighter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_EditorTranslationParserPlugin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorTranslationParserPlugin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
Array* godot_icall_1_549(MethodBind* method, Object* ptr, MonoString* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

#endif // TOOLS_ENABLED
Object* godot_icall_EditorVCSInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EditorVCSInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_550(MethodBind* method, Object* ptr, uint64_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_EncodedObjectAsID_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EncodedObjectAsID");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_551(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_552(MethodBind* method, Object* ptr, StringName* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_553(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_554(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Engine_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Engine");
}

void godot_icall_2_555(MethodBind* method, Object* ptr, StringName* arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_556(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2, Array* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_EngineDebugger_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("EngineDebugger");
}

Object* godot_icall_EngineProfiler_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "EngineProfiler");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_557(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_558(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_559(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_560(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_561(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_562(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_563(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_564(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Environment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Environment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_565(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_4_566(MethodBind* method, Object* ptr, Array* arg1, Object* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_Expression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Expression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_567(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_568(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_569(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_570(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_571(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_572(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_FastNoiseLite_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FastNoiseLite");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_573(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoArray* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_574(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_575(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_576(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_577(MethodBind* method, Object* ptr, int64_t arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoObject* godot_icall_1_578(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_2_579(MethodBind* method, Object* ptr, MonoArray* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedStringArray arg1_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_580(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_581(MethodBind* method, MonoString* arg1) {
	bool ret;
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(nullptr, call_args, &ret);
	return (MonoBoolean)ret;
}

uint64_t godot_icall_1_582(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

Object* godot_icall_File_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "File");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_583(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_584(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_585(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_FileDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FileDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_586(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_FogMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FogMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_587(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_FogVolume_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FogVolume");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_588(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

RID* godot_icall_1_589(MethodBind* method, Object* ptr, int32_t arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_5_590(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3, float arg4, uint16_t arg5, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_591(MethodBind* method, Object* ptr, MonoString* arg1, float arg2, int32_t arg3, uint16_t arg4, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_10_592(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, int32_t arg4, float arg5, int32_t arg6, GDMonoMarshal::M_Color* arg7, int32_t arg8, GDMonoMarshal::M_Color* arg9, uint16_t arg10) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	int64_t arg8_in = (int64_t)arg8;
	Color arg9_in = MARSHALLED_IN(Color, arg9);
	int64_t arg10_in = (int64_t)arg10;
	const void* call_args[10] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_11_593(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, MonoString* arg3, int32_t arg4, float arg5, int32_t arg6, int32_t arg7, GDMonoMarshal::M_Color* arg8, int32_t arg9, GDMonoMarshal::M_Color* arg10, uint16_t arg11) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	Color arg8_in = MARSHALLED_IN(Color, arg8);
	int64_t arg9_in = (int64_t)arg9;
	Color arg10_in = MARSHALLED_IN(Color, arg10);
	int64_t arg11_in = (int64_t)arg11;
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_594(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

float godot_icall_8_595(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, int32_t arg4, int32_t arg5, GDMonoMarshal::M_Color* arg6, int32_t arg7, GDMonoMarshal::M_Color* arg8) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	int64_t arg7_in = (int64_t)arg7;
	Color arg8_in = MARSHALLED_IN(Color, arg8);
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

Object* godot_icall_Font_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Font");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_596(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_597(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

RID* godot_icall_1_598(MethodBind* method, Object* ptr, Dictionary* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_599(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_600(MethodBind* method, Object* ptr, int32_t arg1, Dictionary* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_601(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_602(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_603(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_604(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_3_605(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_606(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, MonoArray* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	PackedInt32Array arg4_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_3_607(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

Array* godot_icall_2_608(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_4_609(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_610(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_611(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_612(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_613(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_4_614(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_615(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_616(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_617(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_618(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

Object* godot_icall_FontData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "FontData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GDScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GDScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoArray* godot_icall_0_619(MethodBind* method, Object* ptr) {
	PackedFloat64Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::PackedFloat64Array_to_mono_array(ret);
}

void godot_icall_1_620(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedFloat64Array arg1_in = GDMonoMarshal::mono_array_to_PackedFloat64Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_GLTFAccessor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFAccessor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFAnimation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFAnimation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFBufferView_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFBufferView");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFCamera_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFCamera");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_621(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, uint32_t arg3, int32_t arg4, MonoString* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_622(MethodBind* method, Object* ptr, MonoArray* arg1, MonoString* arg2, Object* arg3, uint32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_623(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, uint32_t arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_624(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoArray* godot_icall_1_625(MethodBind* method, Object* ptr, Object* arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

int32_t godot_icall_2_626(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GLTFDocument_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFDocument");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFDocumentExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFDocumentExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFDocumentExtensionConvertImporterMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFDocumentExtensionConvertImporterMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFLight_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFLight");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_627(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_628(MethodBind* method, Object* ptr, MonoArray* arg1) {
	ERR_FAIL_NULL(ptr);
	PackedFloat32Array arg1_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_GLTFMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_629(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_630(MethodBind* method, Object* ptr, GDMonoMarshal::M_Quaternion* arg_ret) {
	Quaternion ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Quaternion(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Quaternion, ret);
}

void godot_icall_1_631(MethodBind* method, Object* ptr, GDMonoMarshal::M_Quaternion* arg1) {
	ERR_FAIL_NULL(ptr);
	Quaternion arg1_in = MARSHALLED_IN(Quaternion, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_GLTFNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_632(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_633(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GLTFSkeleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSkeleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_634(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_GLTFSkin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSkin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFSpecGloss_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFSpecGloss");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_635(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_636(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GLTFState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GLTFTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GLTFTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_637(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_5_638(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, GDMonoMarshal::M_Color* arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_GPUParticles2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticles2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_639(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_640(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_5_641(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Color* arg3, GDMonoMarshal::M_Color* arg4, uint32_t arg5) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_642(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GPUParticles3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticles3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GPUParticlesAttractorBox3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesAttractorBox3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GPUParticlesAttractorSphere3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesAttractorSphere3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GPUParticlesAttractorVectorField3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesAttractorVectorField3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GPUParticlesCollisionBox3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesCollisionBox3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_643(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_644(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GPUParticlesCollisionHeightField3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesCollisionHeightField3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_645(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GPUParticlesCollisionSDF3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesCollisionSDF3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GPUParticlesCollisionSphere3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GPUParticlesCollisionSphere3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Generic6DOFJoint3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Generic6DOFJoint3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_3_646(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, float arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_4_647(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_648(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

void godot_icall_3_649(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

MonoBoolean godot_icall_4_650(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_2_651(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoArray* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_1_652(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

MonoArray* godot_icall_1_653(MethodBind* method, Object* ptr, MonoArray* arg1) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

Array* godot_icall_2_654(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_3_655(MethodBind* method, Object* ptr, MonoArray* arg1, float arg2, int32_t arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_4_656(MethodBind* method, Object* ptr, MonoArray* arg1, float arg2, int32_t arg3, int32_t arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_1_657(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_Geometry2D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Geometry2D");
}

Array* godot_icall_1_658(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_4_659(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, int32_t arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_5_660(MethodBind* method, Object* ptr, float arg1, float arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoArray* godot_icall_4_661(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

void godot_icall_3_662(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoObject* godot_icall_5_663(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4, GDMonoMarshal::M_Vector3* arg5) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	Vector3 arg5_in = MARSHALLED_IN(Vector3, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoArray* godot_icall_4_664(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, float arg4) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_665(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, float arg3, float arg4) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_3_666(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, Array* arg3) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_667(MethodBind* method, Object* ptr, MonoArray* arg1, GDMonoMarshal::M_Plane* arg2) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	Plane arg2_in = MARSHALLED_IN(Plane, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

Object* godot_icall_Geometry3D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Geometry3D");
}

int32_t godot_icall_0_668(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_669(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_670(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_671(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GeometryInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GeometryInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GodotSharp_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("GodotSharp");
}

void godot_icall_2_672(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_673(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_674(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_1_675(MethodBind* method, Object* ptr, float arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

int32_t godot_icall_0_676(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Gradient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Gradient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GradientTexture1D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GradientTexture1D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_677(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_678(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GradientTexture2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GradientTexture2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_679(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, StringName* arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_4_680(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, StringName* arg3, int32_t arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_4_681(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, StringName* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_682(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, StringName* arg3, int32_t arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_2_683(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

int32_t godot_icall_0_684(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_685(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_GraphEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_10_686(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, int32_t arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, int32_t arg6, GDMonoMarshal::M_Color* arg7, Object* arg8, Object* arg9, MonoBoolean arg10) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	bool arg10_in = (bool)arg10;
	const void* call_args[10] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, arg8, arg9, &arg10_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_687(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_GraphNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GraphNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GridContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_688(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_689(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_690(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3i* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Vector3i arg1_in = MARSHALLED_IN(Vector3i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_691(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3i* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector3i arg1_in = MARSHALLED_IN(Vector3i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_692(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3i* arg_ret) {
	Vector3i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3i, ret);
}

void godot_icall_1_693(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3i* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3i arg1_in = MARSHALLED_IN(Vector3i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_694(MethodBind* method, Object* ptr, MonoBoolean arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_GridMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GridMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_GrooveJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "GrooveJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HFlowContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HFlowContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_695(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_696(MethodBind* method, Object* ptr, MonoArray* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_HMACContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HMACContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_697(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoBoolean arg3, MonoBoolean arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_698(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_4_699(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoArray* arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PackedStringArray arg3_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg3);
	PackedByteArray arg4_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_700(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoArray* arg3, MonoString* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	PackedStringArray arg3_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_701(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_1_702(MethodBind* method, Object* ptr, Dictionary* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_HTTPClient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPClient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_703(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, int32_t arg4, MonoString* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_704(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, int32_t arg4, MonoArray* arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	PackedByteArray arg5_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_HTTPRequest_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HTTPRequest");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HashingContext_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HashingContext");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HeightMapShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HeightMapShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_HingeJoint3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "HingeJoint3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_2_705(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

int32_t godot_icall_1_706(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_IP_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("IP");
}

int32_t godot_icall_0_707(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_708(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_709(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_710(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, int32_t arg4, MonoArray* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	PackedByteArray arg5_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_711(MethodBind* method, Object* ptr, MonoString* arg1, float arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_712(MethodBind* method, Object* ptr, float arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoArray* godot_icall_1_713(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

int32_t godot_icall_3_714(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, float arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_2_715(MethodBind* method, Object* ptr, MonoBoolean arg1, float arg2) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

int32_t godot_icall_0_716(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_717(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_718(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Dictionary* godot_icall_2_719(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_3_720(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_721(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_722(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_723(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Rect2 arg1_in = MARSHALLED_IN(Rect2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_1_724(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_725(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_726(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_727(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Image_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Image");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ImageTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImageTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_6_728(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, MonoBoolean arg5, Array* arg6) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ImageTexture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImageTexture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_729(MethodBind* method, Object* ptr, Array* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_730(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_731(MethodBind* method, Object* ptr, GDMonoMarshal::M_Plane* arg1) {
	ERR_FAIL_NULL(ptr);
	Plane arg1_in = MARSHALLED_IN(Plane, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_ImmediateMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImmediateMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_7_732(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2, Array* arg3, Dictionary* arg4, Object* arg5, MonoString* arg6, uint32_t arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg6_in = GDMonoMarshal::mono_string_to_godot(arg6);
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[7] = { &arg1_in, arg2, arg3, arg4, arg5, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_2_733(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_734(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_735(MethodBind* method, Object* ptr, float arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_736(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ImporterMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImporterMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ImporterMeshInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ImporterMeshInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_737(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

float godot_icall_2_738(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_5_739(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, StringName* arg3, StringName* arg4, float arg5, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	StringName arg4_in = arg4 ? *arg4 : StringName();
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_740(MethodBind* method, Object* ptr, int32_t arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_741(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_742(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Input_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Input");
}

MonoBoolean godot_icall_3_743(MethodBind* method, Object* ptr, StringName* arg1, MonoBoolean arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_2_744(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_1_745(MethodBind* method, Object* ptr, Object* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_2_746(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_InputEventAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_747(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_InputEventJoypadButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_748(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_InputEventJoypadMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventJoypadMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_749(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_InputEventKey_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventKey");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_750(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_InputEventMIDI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMIDI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMagnifyGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMagnifyGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventMouseMotion_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventMouseMotion");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventPanGesture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventPanGesture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenDrag_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenDrag");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventScreenTouch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventScreenTouch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_InputEventShortcut_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "InputEventShortcut");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

float godot_icall_1_751(MethodBind* method, Object* ptr, StringName* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoBoolean godot_icall_2_752(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Array* godot_icall_1_753(MethodBind* method, Object* ptr, StringName* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoBoolean godot_icall_3_754(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2, MonoBoolean arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg2_in = arg2 ? *arg2 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_InputMap_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("InputMap");
}

Dictionary* godot_icall_1_755(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

MonoObject* godot_icall_2_756(MethodBind* method, Object* ptr, MonoBoolean arg1, Object* arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_IntervalTweener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "IntervalTweener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_757(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_758(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_759(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_760(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_761(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_1_762(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_2_763(MethodBind* method, Object* ptr, int32_t arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_764(MethodBind* method, Object* ptr, int32_t arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_0_765(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_766(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_2_767(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_768(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ItemList_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ItemList");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_JNISingleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JNISingleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_4_769(MethodBind* method, Object* ptr, MonoObject* arg1, MonoString* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_0_770(MethodBind* method, Object* ptr) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_JSON_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSON");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_771(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Dictionary* godot_icall_3_772(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2, MonoObject* arg3) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_2_773(MethodBind* method, Object* ptr, MonoObject* arg1, MonoObject* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_2_774(MethodBind* method, Object* ptr, MonoString* arg1, MonoObject* arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Dictionary* godot_icall_3_775(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, MonoObject* arg3) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_JSONRPC_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JSONRPC");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_JavaClass_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "JavaClass");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_776(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_JavaClassWrapper_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JavaClassWrapper");
}

MonoObject* godot_icall_2_777(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_1_778(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_779(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_780(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_781(MethodBind* method, Object* ptr, MonoArray* arg1, MonoString* arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_JavaScript_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("JavaScript");
}

Object* godot_icall_KinematicCollision2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

float godot_icall_2_782(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector3* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg1_in = (int64_t)arg1;
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_783(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_KinematicCollision3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "KinematicCollision3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_784(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_785(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_786(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_787(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Label_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Label");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_788(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_789(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_790(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Label3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Label3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_791(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_792(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_793(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_794(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_LightOccluder2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightOccluder2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_795(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_796(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_797(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_798(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_LightmapGI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightmapGI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_799(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_800(MethodBind* method, Object* ptr, NodePath* arg1, GDMonoMarshal::M_Rect2* arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_LightmapGIData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightmapGIData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LightmapProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightmapProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LightmapperRD_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LightmapperRD");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_801(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_802(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_803(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_804(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Line2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Line2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_LineEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LineEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_805(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_LinkButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "LinkButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MainLoop_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MainLoop");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MarginContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MarginContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_2_806(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoString* godot_icall_1_807(MethodBind* method, Object* ptr, MonoArray* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_1_808(MethodBind* method, Object* ptr, MonoString* arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

Object* godot_icall_Marshalls_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Marshalls");
}

Object* godot_icall_Material_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Material");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MenuButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MenuButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_2_809(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_810(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Mesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Mesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_811(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_812(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_813(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Plane* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Plane arg2_in = MARSHALLED_IN(Plane, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_814(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Plane* arg_ret) {
	Plane ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Plane(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Plane, ret);
}

void godot_icall_2_815(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedInt32Array arg2_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_816(MethodBind* method, Object* ptr, int32_t arg1) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

void godot_icall_2_817(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedFloat32Array arg2_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_818(MethodBind* method, Object* ptr, int32_t arg1) {
	PackedFloat32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedFloat32Array_to_mono_array(ret);
}

Object* godot_icall_MeshDataTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshDataTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MeshInstance2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_819(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_MeshInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_820(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform3D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_821(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_822(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

MonoObject* godot_icall_1_823(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MeshLibrary_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshLibrary");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MeshTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MeshTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_824(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_825(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MethodTweener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MethodTweener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MissingNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MissingNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MissingResource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MissingResource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MobileVRInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MobileVRInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_826(MethodBind* method, Object* arg1) {
	const void* call_args[1] = { arg1 };
	method->ptrcall(nullptr, call_args, nullptr);
}

Object* godot_icall_MovieWriter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MovieWriter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_827(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_828(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_829(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_MultiMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_830(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiMeshInstance2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMeshInstance2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_MultiMeshInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiMeshInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_831(MethodBind* method, Object* ptr, MonoArray* arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_832(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiplayerAPI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerAPI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_833(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_834(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_MultiplayerPeerExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerPeerExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_835(MethodBind* method, Object* ptr, MonoObject* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_MultiplayerSpawner_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerSpawner");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_836(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_MultiplayerSynchronizer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "MultiplayerSynchronizer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Mutex_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Mutex");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_837(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_NativeExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NativeExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_838(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_839(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NativeExtensionManager_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("NativeExtensionManager");
}

Object* godot_icall_NavigationAgent2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationAgent2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NavigationAgent3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationAgent3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_840(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_841(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_842(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_NavigationMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_843(MethodBind* method, Object* ptr, Object* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_NavigationMeshGenerator_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("NavigationMeshGenerator");
}

Object* godot_icall_NavigationObstacle2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationObstacle2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NavigationObstacle3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationObstacle3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_844(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_845(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_NavigationPolygon_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationPolygon");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_846(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NavigationRegion2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationRegion2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_NavigationRegion3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NavigationRegion3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_847(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_848(MethodBind* method, Object* ptr, RID* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_849(MethodBind* method, Object* ptr, RID* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_1_850(MethodBind* method, Object* ptr, RID* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoArray* godot_icall_5_851(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, MonoBoolean arg4, uint32_t arg5) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

void godot_icall_2_852(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

RID* godot_icall_2_853(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

Array* godot_icall_1_854(MethodBind* method, Object* ptr, RID* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoBoolean godot_icall_2_855(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_856(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_1_857(MethodBind* method, Object* ptr, RID* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_858(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint32_t godot_icall_1_859(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

void godot_icall_2_860(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform2D* arg2) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_861(MethodBind* method, Object* ptr, RID* arg1, Object* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_862(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_2_863(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_2_864(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_865(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_866(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, StringName* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg3_in = arg3 ? *arg3 : StringName();
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_NavigationServer2D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("NavigationServer2D");
}

void godot_icall_2_867(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_868(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

MonoArray* godot_icall_5_869(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, MonoBoolean arg4, uint32_t arg5) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

void godot_icall_4_870(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3, MonoBoolean arg4, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

void godot_icall_2_871(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

RID* godot_icall_2_872(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoBoolean godot_icall_2_873(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_874(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform3D* arg2) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_875(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Vector3* arg_ret) {
	Vector3 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3, ret);
}

Object* godot_icall_NavigationServer3D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("NavigationServer3D");
}

int32_t godot_icall_0_876(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_NinePatchRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NinePatchRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_877(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_878(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_879(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Array* godot_icall_1_880(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoObject* godot_icall_2_881(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_882(MethodBind* method, Object* ptr, NodePath* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_3_883(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, MonoBoolean arg3) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Array* godot_icall_4_884(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoObject* godot_icall_1_885(MethodBind* method, Object* ptr, MonoString* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Array* godot_icall_1_886(MethodBind* method, Object* ptr, NodePath* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

NodePath* godot_icall_1_887(MethodBind* method, Object* ptr, Object* arg1) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

void godot_icall_2_888(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_889(MethodBind* method, Object* ptr, StringName* arg1, Array* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_890(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_891(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_892(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_893(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_894(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

uint16_t godot_icall_5_895(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, MonoBoolean arg3, int32_t arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint16_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint16_t)ret;
}

void godot_icall_2_896(MethodBind* method, Object* ptr, StringName* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1 ? *arg1 : StringName();
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

void godot_icall_3_897(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = arg2 ? *arg2 : StringName();
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

Object* godot_icall_Node_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_898(MethodBind* method, Object* ptr, float arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_899(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

Object* godot_icall_Node2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_900(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_901(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_902(MethodBind* method, Object* ptr, GDMonoMarshal::M_Basis* arg1) {
	ERR_FAIL_NULL(ptr);
	Basis arg1_in = MARSHALLED_IN(Basis, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_903(MethodBind* method, Object* ptr, GDMonoMarshal::M_Basis* arg_ret) {
	Basis ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Basis(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Basis, ret);
}

MonoObject* godot_icall_0_904(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_905(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, GDMonoMarshal::M_Transform3D* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform3D arg3_in = MARSHALLED_IN(Transform3D, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_906(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_907(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_908(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Node3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Node3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

float godot_icall_2_909(MethodBind* method, Object* ptr, float arg1, float arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

float godot_icall_3_910(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_4_911(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, MonoBoolean arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_5_912(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoBoolean arg3, MonoBoolean arg4, float arg5) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_913(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_NoiseTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "NoiseTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OGGPacketSequence_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OGGPacketSequence");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OGGPacketSequencePlayback_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OGGPacketSequencePlayback");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ORMMaterial3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ORMMaterial3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_5_914(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, Array* arg3, MonoBoolean arg4, MonoBoolean arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_915(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_916(MethodBind* method, Object* ptr, MonoArray* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	PackedStringArray arg1_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_2_917(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_1_918(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OS_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("OS");
}

void godot_icall_2_919(MethodBind* method, Object* ptr, NodePath* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_920(MethodBind* method, Object* ptr, NodePath* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_921(MethodBind* method, Object* ptr, MonoObject* arg1) {
	ERR_FAIL_NULL(ptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_922(MethodBind* method, Object* ptr, StringName* arg1, MonoObject* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_2_923(MethodBind* method, Object* ptr, StringName* arg1, MonoArray* arg2) {
	Variant vararg_ret;
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1 ? *arg1 : StringName();
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	vararg_ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	ret = vararg_ret;
	return (int32_t)ret;
}

MonoObject* godot_icall_2_924(MethodBind* method, Object* ptr, StringName* arg1, MonoArray* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int vararg_length = mono_array_length(arg2);
	int total_length = 1 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1 ? *arg1 : StringName();
	call_args.set(0, &arg1_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg2, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(1 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	ret = method->call(ptr, call_args.ptr(), total_length, vcall_error);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoObject* godot_icall_2_925(MethodBind* method, Object* ptr, StringName* arg1, Array* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

int32_t godot_icall_4_926(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Callable* arg2, Array* arg3, uint32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_2_927(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Callable* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoString* godot_icall_2_928(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoString* godot_icall_4_929(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, int32_t arg3, StringName* arg4) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	StringName arg4_in = arg4 ? *arg4 : StringName();
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_0_930(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_OccluderInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_931(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OccluderPolygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OccluderPolygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_932(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OmniLight3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OmniLight3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_933(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_OpenXRAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_934(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_935(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_936(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_937(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_OpenXRActionMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRActionMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OpenXRActionSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRActionSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_938(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_OpenXRIPBinding_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRIPBinding");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_939(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_OpenXRInteractionProfile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRInteractionProfile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OpenXRInterface_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OpenXRInterface");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_OptimizedTranslation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OptimizedTranslation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_940(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_OptionButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "OptionButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_941(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, MonoString* arg3, MonoBoolean arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_942(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PCKPacker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PCKPacker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_943(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PackedDataContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedDataContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_944(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_945(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PackedScene_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PackedScene");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_946(MethodBind* method, Object* ptr, MonoObject* arg1, MonoBoolean arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_947(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2, MonoString* arg3, Object* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	bool arg2_in = (bool)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_948(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PacketPeerDTLS_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerDTLS");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PacketPeerExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PacketPeerStream_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerStream");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_949(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PacketPeerUDP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PacketPeerUDP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Panel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Panel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanelContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanelContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PanoramaSkyMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PanoramaSkyMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxBackground_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxBackground");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ParallaxLayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParallaxLayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_950(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_951(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ParticlesMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ParticlesMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_952(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_953(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Path3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Path3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PathFollow2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_954(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PathFollow3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PathFollow3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_955(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Callable* arg2, Array* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Performance_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Performance");
}

MonoObject* godot_icall_0_956(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_PhysicalBone2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicalBone2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_957(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_958(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PhysicalBone3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicalBone3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicalSkyMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicalSkyMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_959(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, MonoBoolean arg2, float arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoBoolean godot_icall_4_960(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, Object* arg3, float arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_4_961(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, MonoBoolean arg2, float arg3, int32_t arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoBoolean godot_icall_5_962(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1, GDMonoMarshal::M_Vector3* arg2, Object* arg3, float arg4, int32_t arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_963(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_964(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_965(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_PhysicsDirectBodyState3DExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsDirectBodyState3DExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_2_966(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Dictionary* godot_icall_1_967(MethodBind* method, Object* ptr, Object* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_1_968(MethodBind* method, Object* ptr, Object* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_PhysicsDirectSpaceState3DExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsDirectSpaceState3DExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsPointQueryParameters2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsPointQueryParameters2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsPointQueryParameters3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsPointQueryParameters3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsRayQueryParameters2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsRayQueryParameters2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsRayQueryParameters3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsRayQueryParameters3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_969(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2) {
	ERR_FAIL_NULL(ptr);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_970(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_971(MethodBind* method, Object* ptr, RID* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_3_972(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_2_973(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

MonoObject* godot_icall_1_974(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_4_975(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_976(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_977(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_978(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_2_979(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_2_980(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_3_981(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_982(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_1_983(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform2D* arg_ret) {
	Transform2D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform2D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform2D, ret);
}

void godot_icall_2_984(MethodBind* method, Object* ptr, RID* arg1, uint64_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint64_t godot_icall_1_985(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

void godot_icall_2_986(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Callable* arg2) {
	ERR_FAIL_NULL(ptr);
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_987(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_988(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, MonoBoolean arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_989(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_990(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_991(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_3_992(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Callable* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_3_993(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, Object* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_994(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_4_995(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, RID* arg3, RID* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	const void* call_args[4] = { arg1, &arg2_in, arg3, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_996(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Vector2* arg4, RID* arg5, RID* arg6) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, arg6 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_997(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, RID* arg4, RID* arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, arg4, arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_998(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_PhysicsServer2D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("PhysicsServer2D");
}

int32_t godot_icall_1_999(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1000(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_4_1001(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform3D* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg3_in = MARSHALLED_IN(Transform3D, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1002(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform3D* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Transform3D arg3_in = MARSHALLED_IN(Transform3D, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1003(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

void godot_icall_1_1004(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

int32_t godot_icall_1_1005(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1006(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3* arg2, GDMonoMarshal::M_Vector3* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_2_1007(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_1008(MethodBind* method, Object* ptr, RID* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_1_1009(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_AABB* arg_ret) {
	AABB ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_AABB(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(AABB, ret);
}

void godot_icall_5_1010(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector3* arg3, RID* arg4, GDMonoMarshal::M_Vector3* arg5) {
	ERR_FAIL_NULL(ptr);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg5_in = MARSHALLED_IN(Vector3, arg5);
	const void* call_args[5] = { arg1, arg2, &arg3_in, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1011(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform3D* arg3, RID* arg4, GDMonoMarshal::M_Transform3D* arg5) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg3_in = MARSHALLED_IN(Transform3D, arg3);
	Transform3D arg5_in = MARSHALLED_IN(Transform3D, arg5);
	const void* call_args[5] = { arg1, arg2, &arg3_in, arg4, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1012(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_1013(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_3_1014(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_4_1015(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_3_1016(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_PhysicsServer3D_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("PhysicsServer3D");
}

Object* godot_icall_PhysicsServer3DRenderingServerHandler_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsServer3DRenderingServerHandler");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsShapeQueryParameters2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsShapeQueryParameters2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsShapeQueryParameters3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsShapeQueryParameters3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsTestMotionParameters2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsTestMotionParameters2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsTestMotionParameters3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsTestMotionParameters3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsTestMotionResult2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsTestMotionResult2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PhysicsTestMotionResult3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PhysicsTestMotionResult3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PinJoint3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PinJoint3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderCubemap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderCubemap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderCubemapArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderCubemapArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderTexture2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderTexture2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaceholderTexture2DArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderTexture2DArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1017(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3i* arg1) {
	ERR_FAIL_NULL(ptr);
	Vector3i arg1_in = MARSHALLED_IN(Vector3i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_0_1018(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3i* arg_ret) {
	Vector3i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3i, ret);
}

Object* godot_icall_PlaceholderTexture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaceholderTexture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PlaneMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PlaneMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PointLight2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PointLight2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PointMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PointMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1019(MethodBind* method, Object* ptr, NodePath* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedFloat32Array arg2_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Polygon2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Polygon2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PolygonOccluder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PolygonOccluder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1020(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg1);
	PackedInt32Array arg2_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_PolygonPathFinder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PolygonPathFinder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Popup_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Popup");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1021(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1022(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1023(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1024(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, int32_t arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1025(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1026(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1027(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PopupMenu_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupMenu");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PopupPanel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PopupPanel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1028(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, MonoBoolean arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	bool arg3_in = (bool)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_1029(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_1030(MethodBind* method, MonoBoolean arg1) {
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(nullptr, call_args, nullptr);
}

MonoBoolean godot_icall_0_1031(MethodBind* method) {
	bool ret;
	method->ptrcall(nullptr, nullptr, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_PortableCompressedTexture2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PortableCompressedTexture2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Position3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Position3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PrimitiveMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PrimitiveMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_PrismMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PrismMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProceduralSkyMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProceduralSkyMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProgressBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProgressBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_3_1032(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Object* godot_icall_ProjectSettings_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ProjectSettings");
}

MonoObject* godot_icall_1_1033(MethodBind* method, Object* ptr, MonoObject* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1034(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1035(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1036(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_PropertyTweener_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "PropertyTweener");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ProxyTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ProxyTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_QuadMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "QuadMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_QuadOccluder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "QuadOccluder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1037(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1038(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDAttachmentFormat_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDAttachmentFormat");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RDFramebufferPass_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDFramebufferPass");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1039(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDPipelineColorBlendState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineColorBlendState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1040(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1041(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDPipelineColorBlendStateAttachment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineColorBlendStateAttachment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1042(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1043(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDPipelineDepthStencilState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineDepthStencilState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RDPipelineMultisampleState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineMultisampleState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1044(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1045(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDPipelineRasterizationState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineRasterizationState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RDPipelineSpecializationConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDPipelineSpecializationConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1046(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1047(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1048(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDSamplerState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDSamplerState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1049(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1050(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_RDShaderFile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDShaderFile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1051(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_RDShaderSPIRV_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDShaderSPIRV");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1052(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDShaderSource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDShaderSource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1053(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDTextureFormat_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDTextureFormat");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1054(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDTextureView_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDTextureView");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1055(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1056(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RDVertexAttribute_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RDVertexAttribute");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RandomNumberGenerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RandomNumberGenerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Range_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Range");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RayCast3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RayCast3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RectangleShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RectangleShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RefCounted_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RefCounted");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ReferenceRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReferenceRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1057(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1058(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ReflectionProbe_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ReflectionProbe");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_3_1059(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Array* godot_icall_3_1060(MethodBind* method, Object* ptr, MonoString* arg1, int32_t arg2, int32_t arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoString* godot_icall_5_1061(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3, int32_t arg4, int32_t arg5) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_RegEx_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegEx");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoString* godot_icall_1_1062(MethodBind* method, Object* ptr, MonoObject* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int32_t godot_icall_1_1063(MethodBind* method, Object* ptr, MonoObject* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RegExMatch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RegExMatch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RemoteTransform3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RemoteTransform3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

RID* godot_icall_3_1064(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Array* arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_2_1065(MethodBind* method, Object* ptr, Object* arg1, RID* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_6_1066(MethodBind* method, Object* ptr, Object* arg1, RID* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, int32_t arg6) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_4_1067(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2, MonoArray* arg3, uint32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_2_1068(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

MonoBoolean godot_icall_2_1069(MethodBind* method, Object* ptr, int32_t arg1, uint32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_10_1070(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4, GDMonoMarshal::M_Vector3* arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	Vector3 arg5_in = MARSHALLED_IN(Vector3, arg5);
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	int64_t arg9_in = (int64_t)arg9;
	int64_t arg10_in = (int64_t)arg10;
	const void* call_args[10] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_7_1071(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	int64_t arg7_in = (int64_t)arg7;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_1072(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, uint32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int64_t godot_icall_2_1073(MethodBind* method, Object* ptr, Array* arg1, uint32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int64_t godot_icall_3_1074(MethodBind* method, Object* ptr, Array* arg1, Array* arg2, uint32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int64_t godot_icall_1_1075(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int32_t godot_icall_2_1076(MethodBind* method, Object* ptr, int64_t arg1, uint32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

RID* godot_icall_3_1077(MethodBind* method, Object* ptr, Array* arg1, int64_t arg2, uint32_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_4_1078(MethodBind* method, Object* ptr, Array* arg1, Array* arg2, int64_t arg3, uint32_t arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1079(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, int64_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int64_t godot_icall_1_1080(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

RID* godot_icall_1_1081(MethodBind* method, Object* ptr, Object* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1082(MethodBind* method, Object* ptr, uint32_t arg1, MonoArray* arg2, MonoBoolean arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int64_t godot_icall_1_1083(MethodBind* method, Object* ptr, Array* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

RID* godot_icall_4_1084(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2, MonoArray* arg3, MonoBoolean arg4) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1085(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2, uint32_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

MonoObject* godot_icall_2_1086(MethodBind* method, Object* ptr, Object* arg1, MonoBoolean arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_2_1087(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

RID* godot_icall_2_1088(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_1_1089(MethodBind* method, Object* ptr, MonoArray* arg1) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_2_1090(MethodBind* method, Object* ptr, uint32_t arg1, MonoArray* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1091(MethodBind* method, Object* ptr, uint32_t arg1, MonoArray* arg2, uint32_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1092(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2, MonoArray* arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PackedByteArray arg3_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_3_1093(MethodBind* method, Object* ptr, Array* arg1, RID* arg2, uint32_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_5_1094(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2, uint32_t arg3, MonoArray* arg4, uint32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	PackedByteArray arg4_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_4_1095(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1096(MethodBind* method, Object* ptr, RID* arg1) {
	PackedByteArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedByteArray_to_mono_array(ret);
}

RID* godot_icall_11_1097(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3, int32_t arg4, Object* arg5, Object* arg6, Object* arg7, Object* arg8, int32_t arg9, uint32_t arg10, Array* arg11) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg9_in = (int64_t)arg9;
	int64_t arg10_in = (int64_t)arg10;
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, arg6, arg7, arg8, &arg9_in, &arg10_in, arg11 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_2_1098(MethodBind* method, Object* ptr, RID* arg1, Array* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int64_t godot_icall_2_1099(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg1_in = (int64_t)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int64_t godot_icall_10_1100(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, MonoArray* arg6, float arg7, uint32_t arg8, GDMonoMarshal::M_Rect2* arg9, Array* arg10) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	PackedColorArray arg6_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg6);
	double arg7_in = (double)arg7;
	int64_t arg8_in = (int64_t)arg8;
	Rect2 arg9_in = MARSHALLED_IN(Rect2, arg9);
	const void* call_args[10] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, arg10 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

MonoArray* godot_icall_11_1101(MethodBind* method, Object* ptr, RID* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, MonoArray* arg7, float arg8, uint32_t arg9, GDMonoMarshal::M_Rect2* arg10, Array* arg11) {
	PackedInt64Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	PackedColorArray arg7_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg7);
	double arg8_in = (double)arg8;
	int64_t arg9_in = (int64_t)arg9;
	Rect2 arg10_in = MARSHALLED_IN(Rect2, arg10);
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, arg11 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt64Array_to_mono_array(ret);
}

void godot_icall_2_1102(MethodBind* method, Object* ptr, int64_t arg1, RID* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1103(MethodBind* method, Object* ptr, int64_t arg1, RID* arg2, uint32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1104(MethodBind* method, Object* ptr, int64_t arg1, MonoArray* arg2, uint32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1105(MethodBind* method, Object* ptr, int64_t arg1, MonoBoolean arg2, uint32_t arg3, uint32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1106(MethodBind* method, Object* ptr, int64_t arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_1107(MethodBind* method, Object* ptr, uint32_t arg1) {
	PackedInt64Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt64Array_to_mono_array(ret);
}

int64_t godot_icall_1_1108(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_4_1109(MethodBind* method, Object* ptr, int64_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint64_t godot_icall_1_1110(MethodBind* method, Object* ptr, uint32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

MonoString* godot_icall_1_1111(MethodBind* method, Object* ptr, uint32_t arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_2_1112(MethodBind* method, Object* ptr, uint32_t arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_0_1113(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_1114(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint64_t godot_icall_3_1115(MethodBind* method, Object* ptr, int32_t arg1, RID* arg2, uint64_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint64_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint64_t)ret;
}

RID* godot_icall_2_1116(MethodBind* method, Object* ptr, Array* arg1, int32_t arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

RID* godot_icall_6_1117(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, MonoBoolean arg5, Array* arg6) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_1118(MethodBind* method, Object* ptr, RID* arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1119(MethodBind* method, Object* ptr, RID* arg1, Array* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1120(MethodBind* method, Object* ptr, RID* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_2_1121(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1122(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoString* godot_icall_1_1123(MethodBind* method, Object* ptr, RID* arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_2_1124(MethodBind* method, Object* ptr, RID* arg1, StringName* arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_4_1125(MethodBind* method, Object* ptr, RID* arg1, StringName* arg2, RID* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, arg3, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_3_1126(MethodBind* method, Object* ptr, RID* arg1, StringName* arg2, int32_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_3_1127(MethodBind* method, Object* ptr, RID* arg1, StringName* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

uint32_t godot_icall_3_1128(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

uint32_t godot_icall_2_1129(MethodBind* method, Object* ptr, uint32_t arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, uint32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (uint32_t)ret;
}

void godot_icall_2_1130(MethodBind* method, Object* ptr, RID* arg1, Dictionary* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1131(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, Array* arg3, Array* arg4, Dictionary* arg5, uint32_t arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, &arg2_in, arg3, arg4, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1132(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Dictionary* godot_icall_2_1133(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_1134(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_2_1135(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_AABB* arg2) {
	ERR_FAIL_NULL(ptr);
	AABB arg2_in = MARSHALLED_IN(AABB, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1136(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, MonoArray* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	PackedByteArray arg4_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1137(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3, MonoBoolean arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1138(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1139(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, GDMonoMarshal::M_Color* arg_ret) {
	Color ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Color(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Color, ret);
}

void godot_icall_2_1140(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedFloat32Array arg2_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_1141(MethodBind* method, Object* ptr, RID* arg1) {
	PackedFloat32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedFloat32Array_to_mono_array(ret);
}

void godot_icall_2_1142(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1143(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1144(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1145(MethodBind* method, Object* ptr, RID* arg1, float arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_8_1146(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform3D* arg2, GDMonoMarshal::M_AABB* arg3, GDMonoMarshal::M_Vector3i* arg4, MonoArray* arg5, MonoArray* arg6, MonoArray* arg7, MonoArray* arg8) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	AABB arg3_in = MARSHALLED_IN(AABB, arg3);
	Vector3i arg4_in = MARSHALLED_IN(Vector3i, arg4);
	PackedByteArray arg5_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg5);
	PackedByteArray arg6_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg6);
	PackedByteArray arg7_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg7);
	PackedInt32Array arg8_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg8);
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_1147(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector3i* arg_ret) {
	Vector3i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector3i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector3i, ret);
}

MonoArray* godot_icall_1_1148(MethodBind* method, Object* ptr, RID* arg1) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

void godot_icall_3_1149(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1150(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg2);
	PackedColorArray arg3_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg3);
	PackedInt32Array arg4_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg4);
	PackedInt32Array arg5_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_1151(MethodBind* method, Object* ptr, RID* arg1) {
	PackedVector3Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector3Array_to_mono_array(ret);
}

MonoArray* godot_icall_1_1152(MethodBind* method, Object* ptr, RID* arg1) {
	PackedColorArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedColorArray_to_mono_array(ret);
}

void godot_icall_2_1153(MethodBind* method, Object* ptr, RID* arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1154(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1155(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Transform3D* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Color* arg4, GDMonoMarshal::M_Color* arg5, uint32_t arg6) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1156(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Callable* arg2, GDMonoMarshal::M_Callable* arg3) {
	ERR_FAIL_NULL(ptr);
	Callable arg2_in = GDMonoMarshal::managed_to_callable(*arg2);
	Callable arg3_in = GDMonoMarshal::managed_to_callable(*arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1157(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg2);
	PackedInt32Array arg3_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1158(MethodBind* method, Object* ptr, RID* arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1159(MethodBind* method, Object* ptr, RID* arg1, float arg2, GDMonoMarshal::M_Vector2* arg3, float arg4, float arg5) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1160(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1161(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1162(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int32_t arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_1163(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

double godot_icall_1_1164(MethodBind* method, Object* ptr, RID* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

MonoObject* godot_icall_4_1165(MethodBind* method, Object* ptr, RID* arg1, float arg2, MonoBoolean arg3, GDMonoMarshal::M_Vector2i* arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg2_in = (double)arg2;
	bool arg3_in = (bool)arg3;
	Vector2i arg4_in = MARSHALLED_IN(Vector2i, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_1166(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Basis* arg2) {
	ERR_FAIL_NULL(ptr);
	Basis arg2_in = MARSHALLED_IN(Basis, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1167(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2, int32_t arg3, float arg4, float arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_13_1168(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, MonoArray* arg3, float arg4, float arg5, float arg6, float arg7, int32_t arg8, float arg9, float arg10, float arg11, float arg12, RID* arg13) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	PackedFloat32Array arg3_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg3);
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	int64_t arg8_in = (int64_t)arg8;
	double arg9_in = (double)arg9;
	double arg10_in = (double)arg10;
	double arg11_in = (double)arg11;
	double arg12_in = (double)arg12;
	const void* call_args[13] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in, &arg12_in, arg13 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_9_1169(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, float arg3, float arg4, MonoBoolean arg5, float arg6, float arg7, float arg8, float arg9) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1170(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, MonoBoolean arg6, RID* arg7) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[7] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, arg7 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1171(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, int32_t arg3, float arg4, float arg5, float arg6) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_10_1172(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	double arg10_in = (double)arg10;
	const void* call_args[10] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_9_1173(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Color* arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_11_1174(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, int32_t arg3, float arg4, int32_t arg5, MonoBoolean arg6, float arg7, MonoBoolean arg8, float arg9, float arg10, float arg11) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	int64_t arg3_in = (int64_t)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	bool arg6_in = (bool)arg6;
	double arg7_in = (double)arg7;
	bool arg8_in = (bool)arg8;
	double arg9_in = (double)arg9;
	double arg10_in = (double)arg10;
	double arg11_in = (double)arg11;
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_13_1175(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, GDMonoMarshal::M_Color* arg4, GDMonoMarshal::M_Color* arg5, float arg6, float arg7, float arg8, float arg9, float arg10, MonoBoolean arg11, float arg12, float arg13) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	double arg9_in = (double)arg9;
	double arg10_in = (double)arg10;
	bool arg11_in = (bool)arg11;
	double arg12_in = (double)arg12;
	double arg13_in = (double)arg13;
	const void* call_args[13] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in, &arg11_in, &arg12_in, &arg13_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1176(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, float arg3, int32_t arg4, float arg5, float arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	int64_t arg4_in = (int64_t)arg4;
	double arg5_in = (double)arg5;
	double arg6_in = (double)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_3_1177(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector2i* arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg2_in = (bool)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1178(MethodBind* method, Object* ptr, MonoBoolean arg1, float arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_8_1179(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, float arg3, float arg4, MonoBoolean arg5, float arg6, float arg7, float arg8) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	double arg6_in = (double)arg6;
	double arg7_in = (double)arg7;
	double arg8_in = (double)arg8;
	const void* call_args[8] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8_in };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_2_1180(MethodBind* method, Object* ptr, RID* arg1, RID* arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_6_1181(MethodBind* method, Object* ptr, RID* arg1, float arg2, float arg3, float arg4, float arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	double arg5_in = (double)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1182(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Rect2* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Array* godot_icall_2_1183(MethodBind* method, Object* ptr, GDMonoMarshal::M_AABB* arg1, RID* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	AABB arg1_in = MARSHALLED_IN(AABB, arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_3_1184(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector3* arg1, GDMonoMarshal::M_Vector3* arg2, RID* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector3 arg1_in = MARSHALLED_IN(Vector3, arg1);
	Vector3 arg2_in = MARSHALLED_IN(Vector3, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_2_1185(MethodBind* method, Object* ptr, Array* arg1, RID* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_3_1186(MethodBind* method, Object* ptr, RID* arg1, Array* arg2, GDMonoMarshal::M_Vector2i* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_1187(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { arg1, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1188(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Color* arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	double arg3_in = (double)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1189(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Rect2* arg3) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1190(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Vector2* arg3, GDMonoMarshal::M_Color* arg4, float arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1191(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, float arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	PackedColorArray arg3_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg3);
	double arg4_in = (double)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1192(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1193(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, float arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	double arg3_in = (double)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1194(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, RID* arg3, MonoBoolean arg4, GDMonoMarshal::M_Color* arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg4_in = (bool)arg4;
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1195(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, RID* arg3, GDMonoMarshal::M_Rect2* arg4, GDMonoMarshal::M_Color* arg5, int32_t arg6, float arg7) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	int64_t arg6_in = (int64_t)arg6;
	double arg7_in = (double)arg7;
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1196(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, RID* arg3, GDMonoMarshal::M_Rect2* arg4, GDMonoMarshal::M_Color* arg5, MonoBoolean arg6, MonoBoolean arg7) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	bool arg6_in = (bool)arg6;
	bool arg7_in = (bool)arg7;
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_10_1197(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, RID* arg4, GDMonoMarshal::M_Vector2* arg5, GDMonoMarshal::M_Vector2* arg6, int32_t arg7, int32_t arg8, MonoBoolean arg9, GDMonoMarshal::M_Color* arg10) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	Vector2 arg6_in = MARSHALLED_IN(Vector2, arg6);
	int64_t arg7_in = (int64_t)arg7;
	int64_t arg8_in = (int64_t)arg8;
	bool arg9_in = (bool)arg9;
	Color arg10_in = MARSHALLED_IN(Color, arg10);
	const void* call_args[10] = { arg1, &arg2_in, &arg3_in, arg4, &arg5_in, &arg6_in, &arg7_in, &arg8_in, &arg9_in, &arg10_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1198(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5, float arg6) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	PackedColorArray arg3_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg3);
	PackedVector2Array arg4_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg4);
	double arg6_in = (double)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1199(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, RID* arg5) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	PackedColorArray arg3_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg3);
	PackedVector2Array arg4_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg4);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_9_1200(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, MonoArray* arg6, MonoArray* arg7, RID* arg8, int32_t arg9) {
	ERR_FAIL_NULL(ptr);
	PackedInt32Array arg2_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg2);
	PackedVector2Array arg3_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg3);
	PackedColorArray arg4_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg4);
	PackedVector2Array arg5_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg5);
	PackedInt32Array arg6_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg6);
	PackedFloat32Array arg7_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg7);
	int64_t arg9_in = (int64_t)arg9;
	const void* call_args[9] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, arg8, &arg9_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1201(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Transform2D* arg3, GDMonoMarshal::M_Color* arg4, RID* arg5) {
	ERR_FAIL_NULL(ptr);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[5] = { arg1, arg2, &arg3_in, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1202(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, RID* arg3) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[3] = { arg1, arg2, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1203(MethodBind* method, Object* ptr, RID* arg1, double arg2, double arg3, double arg4, double arg5) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[5] = { arg1, &arg2, &arg3, &arg4, &arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1204(MethodBind* method, Object* ptr, RID* arg1, MonoBoolean arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Callable* arg4, GDMonoMarshal::M_Callable* arg5) {
	ERR_FAIL_NULL(ptr);
	bool arg2_in = (bool)arg2;
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Callable arg4_in = GDMonoMarshal::managed_to_callable(*arg4);
	Callable arg5_in = GDMonoMarshal::managed_to_callable(*arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1205(MethodBind* method, Object* ptr, RID* arg1, int32_t arg2, float arg3, MonoBoolean arg4, float arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	double arg5_in = (double)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1206(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1207(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1208(MethodBind* method, Object* ptr, StringName* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1209(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

RID* godot_icall_3_1210(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, float arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

void godot_icall_4_1211(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1212(MethodBind* method, Object* ptr, MonoBoolean arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_RenderingServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("RenderingServer");
}

MonoObject* godot_icall_1_1213(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Resource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Resource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ResourceFormatLoader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourceFormatLoader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ResourceFormatSaver_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourceFormatSaver");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1214(MethodBind* method, Object* ptr, MonoString* arg1, Array* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1215(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_3_1216(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, int32_t arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int64_t godot_icall_1_1217(MethodBind* method, Object* ptr, MonoString* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

Object* godot_icall_ResourceLoader_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceLoader");
}

MonoObject* godot_icall_1_1218(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ResourcePreloader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ResourcePreloader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_1219(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, uint32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoArray* godot_icall_1_1220(MethodBind* method, Object* ptr, Object* arg1) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

Object* godot_icall_ResourceSaver_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceSaver");
}

MonoString* godot_icall_1_1221(MethodBind* method, Object* ptr, int64_t arg1) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

void godot_icall_2_1222(MethodBind* method, Object* ptr, int64_t arg1, MonoString* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_ResourceUID_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("ResourceUID");
}

int32_t godot_icall_0_1223(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RibbonTrailMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RibbonTrailMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_RichTextEffect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RichTextEffect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_5_1224(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3, GDMonoMarshal::M_Color* arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1225(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoString* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1226(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg4, GDMonoMarshal::M_Color* arg5, int32_t arg6, GDMonoMarshal::M_Color* arg7) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	const void* call_args[7] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1227(MethodBind* method, Object* ptr, GDMonoMarshal::M_Color* arg1, GDMonoMarshal::M_Color* arg2) {
	ERR_FAIL_NULL(ptr);
	Color arg1_in = MARSHALLED_IN(Color, arg1);
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Dictionary* godot_icall_1_1228(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedStringArray arg1_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Object* godot_icall_RichTextLabel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RichTextLabel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1229(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1230(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1231(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1232(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RigidDynamicBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidDynamicBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1233(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1234(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1235(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_RigidDynamicBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "RigidDynamicBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1236(MethodBind* method, Object* ptr, NodePath* arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1237(MethodBind* method, Object* ptr, NodePath* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SceneReplicationConfig_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SceneReplicationConfig");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

NodePath* godot_icall_2_1238(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2) {
	NodePath ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(NodePath(ret));
}

MonoObject* godot_icall_1_1239(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoArray* godot_icall_1_1240(MethodBind* method, Object* ptr, int32_t arg1) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

MonoObject* godot_icall_0_1241(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_2_1242(MethodBind* method, Object* ptr, double arg1, MonoBoolean arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_1243(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3, MonoArray* arg4) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg4);
	int total_length = 3 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = (Variant)arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = arg2 ? *arg2 : StringName();
	call_args.set(1, &arg2_in);
	Variant arg3_in = arg3 ? *arg3 : StringName();
	call_args.set(2, &arg3_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg4, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(3 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

void godot_icall_3_1244(MethodBind* method, Object* ptr, uint32_t arg1, StringName* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1245(MethodBind* method, Object* ptr, uint32_t arg1, StringName* arg2, MonoString* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1246(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1 ? *arg1 : StringName();
	call_args.set(0, &arg1_in);
	Variant arg2_in = arg2 ? *arg2 : StringName();
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

void godot_icall_3_1247(MethodBind* method, Object* ptr, StringName* arg1, MonoString* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1248(MethodBind* method, Object* ptr, StringName* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_1249(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2) {
	ERR_FAIL_NULL(ptr);
	const void* call_args[2] = { arg1, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1250(MethodBind* method, Object* ptr, NodePath* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SceneTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SceneTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1251(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

#ifdef TOOLS_ENABLED
void godot_icall_4_1252(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, MonoBoolean arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_ScriptCreateDialog_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScriptCreateDialog");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
MonoObject* godot_icall_0_1253(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

#endif // TOOLS_ENABLED
Object* godot_icall_ScriptExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScriptExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ScriptLanguageExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScriptLanguageExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1254(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1255(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_ScrollContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ScrollContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SegmentShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SegmentShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Semaphore_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Semaphore");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SeparationRayShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SeparationRayShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SeparationRayShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SeparationRayShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1256(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1257(MethodBind* method, Object* ptr, StringName* arg1, Object* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_1258(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Shader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Shader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_ShaderGlobalsOverride_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShaderGlobalsOverride");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1259(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_ShaderMaterial_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShaderMaterial");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_3_1260(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_5_1261(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, Object* arg3, GDMonoMarshal::M_Transform2D* arg4, GDMonoMarshal::M_Vector2* arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Transform2D arg4_in = MARSHALLED_IN(Transform2D, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Array* godot_icall_3_1262(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, Object* arg2, GDMonoMarshal::M_Transform2D* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Transform2D arg3_in = MARSHALLED_IN(Transform2D, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Array* godot_icall_5_1263(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform2D* arg1, GDMonoMarshal::M_Vector2* arg2, Object* arg3, GDMonoMarshal::M_Transform2D* arg4, GDMonoMarshal::M_Vector2* arg5) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Transform2D arg1_in = MARSHALLED_IN(Transform2D, arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Transform2D arg4_in = MARSHALLED_IN(Transform2D, arg4);
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	const void* call_args[5] = { &arg1_in, &arg2_in, arg3, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_ShapeCast2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ShapeCast2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Shortcut_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Shortcut");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1264(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_1265(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_1266(MethodBind* method, Object* ptr, float arg1, int32_t arg2) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1267(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform2D* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform2D arg2_in = MARSHALLED_IN(Transform2D, arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Skeleton2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1268(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_2_1269(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Quaternion* arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Quaternion arg2_in = MARSHALLED_IN(Quaternion, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_1270(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Quaternion* arg_ret) {
	Quaternion ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Quaternion(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Quaternion, ret);
}

void godot_icall_4_1271(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform3D* arg2, float arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_1272(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

void godot_icall_2_1273(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Transform3D* arg2, GDMonoMarshal::M_Transform3D* arg_ret) {
	Transform3D ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Transform3D(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Transform3D, ret);
}

void godot_icall_2_1274(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Basis* arg2, GDMonoMarshal::M_Basis* arg_ret) {
	Basis ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Basis(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Basis arg2_in = MARSHALLED_IN(Basis, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Basis, ret);
}

MonoObject* godot_icall_0_1275(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_Skeleton3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skeleton3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonIK3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonIK3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

float godot_icall_4_1276(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3, MonoBoolean arg4) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

Object* godot_icall_SkeletonModification2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DCCDIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DCCDIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DFABRIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DFABRIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DJiggle_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DJiggle");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DLookAt_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DLookAt");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DPhysicalBones_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DPhysicalBones");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DStackHolder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DStackHolder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification2DTwoBoneIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification2DTwoBoneIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DCCDIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DCCDIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DFABRIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DFABRIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DJiggle_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DJiggle");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DLookAt_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DLookAt");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DStackHolder_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DStackHolder");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SkeletonModification3DTwoBoneIK_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModification3DTwoBoneIK");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1277(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1278(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_SkeletonModificationStack2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModificationStack2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1279(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SkeletonModificationStack3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SkeletonModificationStack3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1280(MethodBind* method, Object* ptr, MonoString* arg1, GDMonoMarshal::M_Transform3D* arg2) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Skin_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Skin");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1281(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1282(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Sky_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sky");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SliderJoint3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SliderJoint3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1283(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1284(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, NodePath* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_SoftDynamicBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SoftDynamicBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereOccluder3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereOccluder3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SphereShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SphereShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpinBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpinBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1285(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SpotLight3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpotLight3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SpringArm3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpringArm3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Sprite3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Sprite3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1286(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1287(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_1288(MethodBind* method, Object* ptr, StringName* arg1, double arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

double godot_icall_1_1289(MethodBind* method, Object* ptr, StringName* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_3_1290(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_SpriteFrames_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SpriteFrames");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StandardMaterial3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StandardMaterial3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StaticBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StaticBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Array* godot_icall_1_1291(MethodBind* method, Object* ptr, MonoArray* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedByteArray arg1_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_1_1292(MethodBind* method, Object* ptr, int8_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_1293(MethodBind* method, Object* ptr, int16_t arg1) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int8_t godot_icall_0_1294(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int8_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int8_t)ret;
}

int16_t godot_icall_0_1295(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int16_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int16_t)ret;
}

MonoObject* godot_icall_0_1296(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_StreamPeerBuffer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerBuffer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StreamPeerExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_1297(MethodBind* method, Object* ptr, Object* arg1, Object* arg2, Object* arg3, Object* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[4] = { arg1, arg2, arg3, arg4 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1298(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StreamPeerSSL_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerSSL");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1299(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1300(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StreamPeerTCP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StreamPeerTCP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_1301(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Rect2* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_0_1302(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_1303(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_StyleBox_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBox");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StyleBoxEmpty_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxEmpty");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1304(MethodBind* method, Object* ptr, float arg1, float arg2, float arg3, float arg4) {
	ERR_FAIL_NULL(ptr);
	double arg1_in = (double)arg1;
	double arg2_in = (double)arg2;
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_StyleBoxFlat_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxFlat");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_StyleBoxLine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxLine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1305(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_StyleBoxTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "StyleBoxTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1306(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1307(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_SubViewport_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SubViewport");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_SubViewportContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SubViewportContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1308(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1309(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_6_1310(MethodBind* method, Object* ptr, MonoArray* arg1, MonoArray* arg2, MonoArray* arg3, MonoArray* arg4, MonoArray* arg5, Array* arg6) {
	ERR_FAIL_NULL(ptr);
	PackedVector3Array arg1_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg1);
	PackedVector2Array arg2_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg2);
	PackedColorArray arg3_in = GDMonoMarshal::mono_array_to_PackedColorArray(arg3);
	PackedVector2Array arg4_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg4);
	PackedVector3Array arg5_in = GDMonoMarshal::mono_array_to_PackedVector3Array(arg5);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, arg6 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_2_1311(MethodBind* method, Object* ptr, float arg1, int32_t arg2) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

int32_t godot_icall_0_1312(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1313(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_1314(MethodBind* method, Object* ptr, Object* arg1, uint32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_SurfaceTool_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SurfaceTool");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1315(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_SyntaxHighlighter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "SyntaxHighlighter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1316(MethodBind* method, Object* ptr, uint16_t arg1, MonoString* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1317(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TCPServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TCPServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_1318(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1319(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1320(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TabBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TabBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1321(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_1_1322(MethodBind* method, Object* ptr, Object* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1323(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_TabContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TabContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1324(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_4_1325(MethodBind* method, Object* ptr, MonoString* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_2_1326(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, MonoBoolean arg2, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_2_1327(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_2_1328(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Rect2i* arg_ret) {
	Rect2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2i, ret);
}

MonoBoolean godot_icall_1_1329(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

int32_t godot_icall_0_1330(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_4_1331(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, MonoBoolean arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	bool arg3_in = (bool)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_1332(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1333(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1334(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1335(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoString* godot_icall_2_1336(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoObject* godot_icall_2_1337(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1338(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TextEdit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextEdit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1339(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_6_1340(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int32_t arg3, Dictionary* arg4, MonoString* arg5, MonoObject* arg6) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	Variant arg6_in = GDMonoMarshal::mono_object_to_variant(arg6);
	const void* call_args[6] = { &arg1_in, arg2, &arg3_in, arg4, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_4_1341(MethodBind* method, Object* ptr, MonoObject* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, int32_t arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_3_1342(MethodBind* method, Object* ptr, MonoObject* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_1_1343(MethodBind* method, Object* ptr, MonoObject* arg1, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_3_1344(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1345(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1346(MethodBind* method, Object* ptr, float arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TextLine_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextLine");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_6_1347(MethodBind* method, Object* ptr, MonoString* arg1, Object* arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg4, Dictionary* arg5, MonoString* arg6) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	int64_t arg3_in = (int64_t)arg3;
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	String arg6_in = GDMonoMarshal::mono_string_to_godot(arg6);
	const void* call_args[6] = { &arg1_in, arg2, &arg3_in, &arg4_in, arg5, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_1348(MethodBind* method, Object* ptr, int32_t arg1, MonoObject* arg2, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_4_1349(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, GDMonoMarshal::M_Color* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1350(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, GDMonoMarshal::M_Color* arg4, GDMonoMarshal::M_Color* arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1351(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, int32_t arg3, int32_t arg4, GDMonoMarshal::M_Color* arg5) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_TextParagraph_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextParagraph");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1352(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	ERR_FAIL_NULL(ptr);
	PackedByteArray arg2_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1353(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1354(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1355(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Dictionary* godot_icall_1_1356(MethodBind* method, Object* ptr, RID* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_2_1357(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1358(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, double arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[3] = { arg1, &arg2_in, &arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

double godot_icall_2_1359(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_4_1360(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int32_t arg3, int64_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int64_t godot_icall_3_1361(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

int64_t godot_icall_2_1362(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_3_1363(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1364(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, Object* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, arg4 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_3_1365(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_4_1366(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, MonoArray* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	PackedInt32Array arg4_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_3_1367(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

Array* godot_icall_2_1368(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_1369(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_1370(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1371(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_4_1372(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1373(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

void godot_icall_4_1374(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, GDMonoMarshal::M_Rect2* arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Rect2 arg4_in = MARSHALLED_IN(Rect2, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int64_t godot_icall_3_1375(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_4_1376(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3, int64_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_3_1377(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg2, int64_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

Dictionary* godot_icall_3_1378(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

Array* godot_icall_2_1379(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_3_1380(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, GDMonoMarshal::M_Vector2i* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1381(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, GDMonoMarshal::M_Vector2i* arg3, GDMonoMarshal::M_Vector2* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1382(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, GDMonoMarshal::M_Vector2i* arg3, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

int64_t godot_icall_4_1383(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

MonoBoolean godot_icall_2_1384(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_6_1385(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int64_t arg3, GDMonoMarshal::M_Vector2* arg4, int64_t arg5, GDMonoMarshal::M_Color* arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	Vector2 arg4_in = MARSHALLED_IN(Vector2, arg4);
	int64_t arg5_in = (int64_t)arg5;
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	const void* call_args[6] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1386(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, int64_t arg3, int64_t arg4, GDMonoMarshal::M_Vector2* arg5, int64_t arg6, GDMonoMarshal::M_Color* arg7) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	Vector2 arg5_in = MARSHALLED_IN(Vector2, arg5);
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	const void* call_args[7] = { arg1, arg2, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_2_1387(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_3_1388(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_1_1389(MethodBind* method, Object* ptr, RID* arg1) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

void godot_icall_2_1390(MethodBind* method, Object* ptr, int64_t arg1, int64_t arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_5_1391(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, GDMonoMarshal::M_Vector2* arg3, int64_t arg4, GDMonoMarshal::M_Color* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	Color arg5_in = MARSHALLED_IN(Color, arg5);
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_2_1392(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

int32_t godot_icall_1_1393(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1394(MethodBind* method, Object* ptr, RID* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoBoolean godot_icall_7_1395(MethodBind* method, Object* ptr, RID* arg1, MonoString* arg2, Array* arg3, int64_t arg4, Dictionary* arg5, MonoString* arg6, MonoObject* arg7) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	int64_t arg4_in = (int64_t)arg4;
	String arg6_in = GDMonoMarshal::mono_string_to_godot(arg6);
	Variant arg7_in = GDMonoMarshal::mono_object_to_variant(arg7);
	const void* call_args[7] = { arg1, &arg2_in, arg3, &arg4_in, arg5, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_5_1396(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4, int64_t arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_4_1397(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_2_1398(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

void godot_icall_5_1399(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, Array* arg3, int64_t arg4, Dictionary* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[5] = { arg1, &arg2_in, arg3, &arg4_in, arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

RID* godot_icall_3_1400(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3) {
	RID ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(RID(ret));
}

double godot_icall_3_1401(MethodBind* method, Object* ptr, RID* arg1, double arg2, int64_t arg3) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

double godot_icall_2_1402(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, double());
	PackedFloat32Array arg2_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return ret;
}

void godot_icall_1_1403(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

MonoArray* godot_icall_5_1404(MethodBind* method, Object* ptr, RID* arg1, MonoArray* arg2, int64_t arg3, MonoBoolean arg4, int64_t arg5) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	PackedFloat32Array arg2_in = GDMonoMarshal::mono_array_to_PackedFloat32Array(arg2);
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

MonoArray* godot_icall_4_1405(MethodBind* method, Object* ptr, RID* arg1, double arg2, int64_t arg3, int64_t arg4) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { arg1, &arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

MonoArray* godot_icall_2_1406(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

void godot_icall_3_1407(MethodBind* method, Object* ptr, RID* arg1, double arg2, int64_t arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_2_1408(MethodBind* method, Object* ptr, RID* arg1, MonoObject* arg2, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

Dictionary* godot_icall_2_1409(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

MonoArray* godot_icall_3_1410(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

int64_t godot_icall_2_1411(MethodBind* method, Object* ptr, RID* arg1, double arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	const void* call_args[2] = { arg1, &arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_2_1412(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

int64_t godot_icall_2_1413(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

void godot_icall_6_1414(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector2* arg3, double arg4, double arg5, GDMonoMarshal::M_Color* arg6) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	Color arg6_in = MARSHALLED_IN(Color, arg6);
	const void* call_args[6] = { arg1, arg2, &arg3_in, &arg4, &arg5, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_7_1415(MethodBind* method, Object* ptr, RID* arg1, RID* arg2, GDMonoMarshal::M_Vector2* arg3, double arg4, double arg5, int64_t arg6, GDMonoMarshal::M_Color* arg7) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg6_in = (int64_t)arg6;
	Color arg7_in = MARSHALLED_IN(Color, arg7);
	const void* call_args[7] = { arg1, arg2, &arg3_in, &arg4, &arg5, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_1416(MethodBind* method, Object* ptr, RID* arg1, int64_t arg2, int64_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoString* godot_icall_2_1417(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

MonoArray* godot_icall_2_1418(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2) {
	PackedInt32Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedInt32Array_to_mono_array(ret);
}

Array* godot_icall_3_1419(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2, MonoString* arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

Object* godot_icall_TextServerAdvanced_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextServerAdvanced");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextServerDummy_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextServerDummy");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextServerExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextServerExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1420(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1421(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1422(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TextServerManager_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("TextServerManager");
}

Object* godot_icall_Texture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Texture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1423(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Vector2* arg2, GDMonoMarshal::M_Color* arg3, MonoBoolean arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2 arg2_in = MARSHALLED_IN(Vector2, arg2);
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	bool arg4_in = (bool)arg4;
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1424(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, MonoBoolean arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	bool arg3_in = (bool)arg3;
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_6_1425(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2* arg3, GDMonoMarshal::M_Color* arg4, MonoBoolean arg5, MonoBoolean arg6) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2 arg3_in = MARSHALLED_IN(Rect2, arg3);
	Color arg4_in = MARSHALLED_IN(Color, arg4);
	bool arg5_in = (bool)arg5;
	bool arg6_in = (bool)arg6;
	const void* call_args[6] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Texture2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Texture2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Texture2DArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Texture2DArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_Texture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Texture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1426(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1427(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TextureButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1428(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1429(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TextureLayered_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureLayered");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TextureProgressBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureProgressBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1430(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TextureRect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TextureRect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1431(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1432(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1433(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, GDMonoMarshal::M_Color* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	Color arg3_in = MARSHALLED_IN(Color, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_4_1434(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3, MonoObject* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	Variant arg4_in = GDMonoMarshal::mono_object_to_variant(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_3_1435(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

MonoBoolean godot_icall_3_1436(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_4_1437(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3, StringName* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	StringName arg4_in = arg4 ? *arg4 : StringName();
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1438(MethodBind* method, Object* ptr, int32_t arg1, StringName* arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg2_in = arg2 ? *arg2 : StringName();
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_2_1439(MethodBind* method, Object* ptr, int32_t arg1, MonoString* arg2) {
	PackedStringArray ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedStringArray_to_mono_array(ret);
}

Object* godot_icall_Theme_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Theme");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1440(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Thread_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Thread");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1441(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1442(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	PackedVector2Array arg3_in = GDMonoMarshal::mono_array_to_PackedVector2Array(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoArray* godot_icall_2_1443(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

MonoObject* godot_icall_1_1444(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TileData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1445(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1446(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_5_1447(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Vector2i* arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Vector2i arg4_in = MARSHALLED_IN(Vector2i, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_3_1448(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1449(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, MonoBoolean arg3, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

MonoObject* godot_icall_2_1450(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1451(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2i* arg2, Object* arg3, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_3_1452(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1453(MethodBind* method, Object* ptr, int32_t arg1, Array* arg2, int32_t arg3, int32_t arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Array* godot_icall_1_1454(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

void godot_icall_1_1455(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2* arg_ret) {
	Vector2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2, ret);
}

void godot_icall_1_1456(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

void godot_icall_2_1457(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

Object* godot_icall_TileMap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileMap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1458(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, GDMonoMarshal::M_Vector2i* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_1_1459(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_1460(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, MonoBoolean arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_1_1461(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2i* arg_ret) {
	Vector2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Vector2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Vector2i, ret);
}

Object* godot_icall_TileMapPattern_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileMapPattern");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_2_1462(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1463(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1464(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1465(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1466(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_2_1467(MethodBind* method, Object* ptr, int32_t arg1, uint32_t arg2) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1468(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_1_1469(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_4_1470(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Vector2i* arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Vector2i arg4_in = MARSHALLED_IN(Vector2i, arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_2_1471(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_6_1472(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, int32_t arg4, GDMonoMarshal::M_Vector2i* arg5, int32_t arg6) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	Vector2i arg5_in = MARSHALLED_IN(Vector2i, arg5);
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Array* godot_icall_3_1473(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Array(ret));
}

MonoBoolean godot_icall_3_1474(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_1475(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TileSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_2_1476(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2i* arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1477(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2i* arg2, GDMonoMarshal::M_Vector2i* arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_6_1478(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, GDMonoMarshal::M_Vector2i* arg2, int32_t arg3, GDMonoMarshal::M_Vector2i* arg4, int32_t arg5, GDMonoMarshal::M_Vector2i* arg6) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	int64_t arg3_in = (int64_t)arg3;
	Vector2i arg4_in = MARSHALLED_IN(Vector2i, arg4);
	int64_t arg5_in = (int64_t)arg5;
	Vector2i arg6_in = MARSHALLED_IN(Vector2i, arg6);
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoArray* godot_icall_4_1479(MethodBind* method, Object* ptr, Object* arg1, GDMonoMarshal::M_Vector2i* arg2, GDMonoMarshal::M_Vector2i* arg3, GDMonoMarshal::M_Vector2i* arg4) {
	PackedVector2Array ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg2_in = MARSHALLED_IN(Vector2i, arg2);
	Vector2i arg3_in = MARSHALLED_IN(Vector2i, arg3);
	Vector2i arg4_in = MARSHALLED_IN(Vector2i, arg4);
	const void* call_args[4] = { arg1, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::PackedVector2Array_to_mono_array(ret);
}

void godot_icall_2_1480(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, float arg2) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	double arg2_in = (double)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_1_1481(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

void godot_icall_3_1482(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, float arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	double arg3_in = (double)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

float godot_icall_2_1483(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2) {
	double ret;
	ERR_FAIL_NULL_V(ptr, float());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (float)ret;
}

int32_t godot_icall_2_1484(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1485(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_1486(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

void godot_icall_2_1487(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2, GDMonoMarshal::M_Rect2i* arg_ret) {
	Rect2i ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2i(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2i, ret);
}

Object* godot_icall_TileSetAtlasSource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileSetAtlasSource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TileSetScenesCollectionSource_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TileSetScenesCollectionSource");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoBoolean godot_icall_2_1488(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2i* arg1, int32_t arg2) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	Vector2i arg1_in = MARSHALLED_IN(Vector2i, arg1);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

Dictionary* godot_icall_1_1489(MethodBind* method, Object* ptr, int64_t arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

MonoString* godot_icall_2_1490(MethodBind* method, Object* ptr, int64_t arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Dictionary* godot_icall_2_1491(MethodBind* method, Object* ptr, MonoString* arg1, MonoBoolean arg2) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

MonoString* godot_icall_2_1492(MethodBind* method, Object* ptr, Dictionary* arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

int64_t godot_icall_1_1493(MethodBind* method, Object* ptr, Dictionary* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int64_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int64_t)ret;
}

MonoString* godot_icall_2_1494(MethodBind* method, Object* ptr, MonoBoolean arg1, MonoBoolean arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_Time_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("Time");
}

int32_t godot_icall_0_1495(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_Timer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Timer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1496(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_TouchScreenButton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TouchScreenButton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1497(MethodBind* method, Object* ptr, StringName* arg1, MonoArray* arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

StringName* godot_icall_2_1498(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

StringName* godot_icall_4_1499(MethodBind* method, Object* ptr, StringName* arg1, StringName* arg2, int32_t arg3, StringName* arg4) {
	StringName ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	StringName arg2_in = arg2 ? *arg2 : StringName();
	int64_t arg3_in = (int64_t)arg3;
	StringName arg4_in = arg4 ? *arg4 : StringName();
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(StringName(ret));
}

Object* godot_icall_Translation_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Translation");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1500(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_TranslationServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("TranslationServer");
}

MonoObject* godot_icall_2_1501(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { arg1, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_1502(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_1503(MethodBind* method, Object* ptr, Object* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_1504(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1505(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3, GDMonoMarshal::M_Rect2* arg_ret) {
	Rect2 ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Rect2(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	*arg_ret = MARSHALLED_OUT(Rect2, ret);
}

MonoObject* godot_icall_1_1506(MethodBind* method, Object* ptr, GDMonoMarshal::M_Vector2* arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Vector2 arg1_in = MARSHALLED_IN(Vector2, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_Tree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_1_1507(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1508(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_5_1509(MethodBind* method, Object* ptr, int32_t arg1, double arg2, double arg3, double arg4, MonoBoolean arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	bool arg5_in = (bool)arg5;
	const void* call_args[5] = { &arg1_in, &arg2, &arg3, &arg4, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1510(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, StringName* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	StringName arg3_in = arg3 ? *arg3 : StringName();
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1511(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1512(MethodBind* method, Object* ptr, int32_t arg1, GDMonoMarshal::M_Color* arg2, MonoBoolean arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Color arg2_in = MARSHALLED_IN(Color, arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_5_1513(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, int32_t arg3, MonoBoolean arg4, MonoString* arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg3_in = (int64_t)arg3;
	bool arg4_in = (bool)arg4;
	String arg5_in = GDMonoMarshal::mono_string_to_godot(arg5);
	const void* call_args[5] = { &arg1_in, arg2, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_1_1514(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1515(MethodBind* method, Object* ptr, int32_t arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_0_1516(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

MonoObject* godot_icall_1_1517(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

Object* godot_icall_TriangleMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TriangleMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_TubeTrailMesh_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "TubeTrailMesh");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_4_1518(MethodBind* method, Object* ptr, Object* arg1, NodePath* arg2, MonoObject* arg3, float arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { arg1, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1519(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1520(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_4_1521(MethodBind* method, Object* ptr, GDMonoMarshal::M_Callable* arg1, MonoObject* arg2, MonoObject* arg3, float arg4) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	Callable arg1_in = GDMonoMarshal::managed_to_callable(*arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	double arg4_in = (double)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoBoolean godot_icall_1_1522(MethodBind* method, Object* ptr, float arg1) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoObject* godot_icall_1_1523(MethodBind* method, Object* ptr, Object* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1524(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1525(MethodBind* method, Object* ptr, MonoBoolean arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	bool arg1_in = (bool)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1526(MethodBind* method, Object* ptr, float arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	double arg1_in = (double)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_6_1527(MethodBind* method, MonoObject* arg1, MonoObject* arg2, float arg3, float arg4, int32_t arg5, int32_t arg6) {
	Variant ret;
	Variant arg1_in = GDMonoMarshal::mono_object_to_variant(arg1);
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	double arg3_in = (double)arg3;
	double arg4_in = (double)arg4;
	int64_t arg5_in = (int64_t)arg5;
	int64_t arg6_in = (int64_t)arg6;
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in };
	method->ptrcall(nullptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_Tween_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Tween");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1528(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_UDPServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UDPServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1529(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1530(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_3_1531(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoString* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_5_1532(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, MonoString* arg3, MonoString* arg4, int32_t arg5) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	String arg4_in = GDMonoMarshal::mono_string_to_godot(arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_UPNP_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UPNP");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1533(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_UPNPDevice_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UPNPDevice");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1534(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2, MonoArray* arg3) {
	ERR_FAIL_NULL(ptr);
	int vararg_length = mono_array_length(arg3);
	int total_length = 2 + vararg_length;
	ArgumentsVector<Variant> varargs(vararg_length);
	ArgumentsVector<const Variant *> call_args(total_length);
	Variant arg1_in = arg1;
	call_args.set(0, &arg1_in);
	Variant arg2_in = arg2 ? *arg2 : StringName();
	call_args.set(1, &arg2_in);
	for (int i = 0; i < vararg_length; i++) {
		MonoObject* elem = mono_array_get(arg3, MonoObject*, i);
		varargs.set(i, GDMonoMarshal::mono_object_to_variant(elem));
		call_args.set(2 + i, &varargs.get(i));
	}
	Callable::CallError vcall_error;
	method->call(ptr, call_args.ptr(), total_length, vcall_error);
}

void godot_icall_3_1535(MethodBind* method, Object* ptr, Object* arg1, StringName* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_UndoRedo_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "UndoRedo");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VBoxContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VBoxContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VFlowContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VFlowContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VScrollBar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VScrollBar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSeparator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSeparator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSlider_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSlider");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VSplitContainer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VSplitContainer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleBody3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleBody3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VehicleWheel3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VehicleWheel3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VelocityTracker3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VelocityTracker3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1536(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VideoStreamPlayer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamPlayer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VideoStreamTheora_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VideoStreamTheora");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1537(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1538(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1539(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1540(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1541(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_1_1542(MethodBind* method, Object* ptr, int32_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1543(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1544(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1545(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1546(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1547(MethodBind* method, Object* ptr) {
	Object* ret = nullptr;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret);
}

int32_t godot_icall_0_1548(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_ViewportTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "ViewportTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1549(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisibleOnScreenEnabler2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibleOnScreenEnabler2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1550(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisibleOnScreenEnabler3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibleOnScreenEnabler3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibleOnScreenNotifier2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibleOnScreenNotifier2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisibleOnScreenNotifier3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisibleOnScreenNotifier3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualInstance3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualInstance3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1551(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, arg2, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1552(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoBoolean godot_icall_3_1553(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

MonoBoolean godot_icall_4_1554(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_2_1555(MethodBind* method, Object* ptr, StringName* arg1, Dictionary* arg2) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, nullptr);
}

Dictionary* godot_icall_1_1556(MethodBind* method, Object* ptr, StringName* arg1) {
	Dictionary ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return memnew(Dictionary(ret));
}

void godot_icall_4_1557(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, MonoString* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

void godot_icall_3_1558(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, int32_t arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_2_1559(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

void godot_icall_3_1560(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2, MonoString* arg3) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	String arg3_in = GDMonoMarshal::mono_string_to_godot(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoString* godot_icall_2_1561(MethodBind* method, Object* ptr, StringName* arg1, int32_t arg2) {
	String ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::mono_string_from_godot(ret);
}

Object* godot_icall_VisualScript_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScript");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1562(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptBasicTypeConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBasicTypeConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1563(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptBuiltinFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptBuiltinFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptClassConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptClassConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptComment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptComment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptComposeArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptComposeArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCondition_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCondition");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptConstructor_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptConstructor");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptCustomNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptCustomNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

#ifdef TOOLS_ENABLED
void godot_icall_3_1564(MethodBind* method, Object* ptr, MonoString* arg1, MonoString* arg2, Object* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

#endif // TOOLS_ENABLED
Object* godot_icall_VisualScriptCustomNodes_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("VisualScriptCustomNodes");
}

Object* godot_icall_VisualScriptDeconstruct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptDeconstruct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEmitSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEmitSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptEngineSingleton_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptEngineSingleton");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptFunction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1565(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1566(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptFunctionCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunctionCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1567(MethodBind* method, Object* ptr, Object* arg1, MonoString* arg2, Array* arg3) {
	ERR_FAIL_NULL(ptr);
	String arg2_in = GDMonoMarshal::mono_string_to_godot(arg2);
	const void* call_args[3] = { arg1, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_1_1568(MethodBind* method, Object* ptr, Array* arg1) {
	Variant ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoMarshal::variant_to_mono_object(ret);
}

Object* godot_icall_VisualScriptFunctionState_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptFunctionState");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptGlobalConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptGlobalConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIndexGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIndexGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIndexSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIndexSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1569(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptInputAction_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptInputAction");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptIterator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptIterator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptLocalVar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptLocalVar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptLocalVarSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptLocalVarSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1570(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptMathConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptMathConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1571(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1572(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptOperator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptOperator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptPreload_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPreload");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1573(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptPropertyGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertyGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1574(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1575(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptPropertySet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptPropertySet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptResourcePath_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptResourcePath");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptReturn_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptReturn");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSceneNode_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSceneNode");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSceneTree_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSceneTree");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelect_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelect");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSelf_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSelf");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSequence_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSequence");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSubCall_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSubCall");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptTypeCast_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptTypeCast");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableGet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableGet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptVariableSet_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptVariableSet");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualScriptWhile_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptWhile");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1576(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptYield_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYield");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1577(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualScriptYieldSignal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualScriptYieldSignal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_4_1578(MethodBind* method, Object* ptr, int32_t arg1, Object* arg2, GDMonoMarshal::M_Vector2* arg3, int32_t arg4) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	int64_t arg4_in = (int64_t)arg4;
	const void* call_args[4] = { &arg1_in, arg2, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoObject* godot_icall_2_1579(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	const void* call_args[2] = { &arg1_in, &arg2_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_3_1580(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, GDMonoMarshal::M_Vector2* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	Vector2 arg3_in = MARSHALLED_IN(Vector2, arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

MonoBoolean godot_icall_5_1581(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	bool ret;
	ERR_FAIL_NULL_V(ptr, MonoBoolean());
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, &ret);
	return (MonoBoolean)ret;
}

void godot_icall_5_1582(MethodBind* method, Object* ptr, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	int64_t arg4_in = (int64_t)arg4;
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_VisualShader_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShader");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_3_1583(MethodBind* method, Object* ptr, int32_t arg1, MonoObject* arg2, MonoObject* arg3) {
	ERR_FAIL_NULL(ptr);
	int64_t arg1_in = (int64_t)arg1;
	Variant arg2_in = GDMonoMarshal::mono_object_to_variant(arg2);
	Variant arg3_in = GDMonoMarshal::mono_object_to_variant(arg3);
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_1584(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeBillboard_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeBillboard");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeBooleanConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeBooleanConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeBooleanUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeBooleanUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1585(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeClamp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeClamp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeColorConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1586(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeColorFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1587(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeColorOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeColorUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeColorUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeComment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeComment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1588(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1589(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1590(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeCompare_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCompare");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1591(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1592(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1593(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeCubemap_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCubemap");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeCubemapUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCubemapUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1594(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VisualShaderNodeCurveTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCurveTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1595(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VisualShaderNodeCurveXYZTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCurveXYZTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeCustom_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeCustom");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1596(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1597(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeDerivativeFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeDerivativeFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeDeterminant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeDeterminant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeDotProduct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeDotProduct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeFaceForward_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFaceForward");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeFloatConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFloatConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1598(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeFloatFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFloatFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1599(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeFloatOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFloatOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1600(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeFloatUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFloatUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeFresnel_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeFresnel");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeGlobalExpression_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeGlobalExpression");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeIf_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIf");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeInput_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeInput");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeIntConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIntConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1601(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeIntFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIntFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1602(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeIntOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIntOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1603(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeIntUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIntUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1604(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeIs_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeIs");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1605(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeMix_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeMix");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1606(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeMultiplyAdd_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeMultiplyAdd");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeOuterProduct_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeOuterProduct");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1607(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeParticleAccelerator_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleAccelerator");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleBoxEmitter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleBoxEmitter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleConeVelocity_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleConeVelocity");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1608(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeParticleEmit_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleEmit");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleMeshEmitter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleMeshEmitter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleMultiplyByAxisAngle_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleMultiplyByAxisAngle");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleOutput_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleOutput");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1609(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeParticleRandomness_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleRandomness");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleRingEmitter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleRingEmitter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeParticleSphereEmitter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeParticleSphereEmitter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeSDFRaymarch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeSDFRaymarch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeSDFToScreenUV_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeSDFToScreenUV");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1610(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeScreenUVToSDF_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeScreenUVToSDF");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1611(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeSmoothStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeSmoothStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1612(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeStep_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeStep");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1613(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeSwitch_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeSwitch");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1614(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1615(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTexture_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1616(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_VisualShaderNodeTexture2DArray_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture2DArray");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTexture2DArrayUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture2DArrayUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTexture3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTexture3DUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTexture3DUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTextureSDF_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureSDF");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTextureSDFNormal_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureSDFNormal");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1617(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1618(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1619(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1620(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTextureUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTextureUniformTriplanar");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformCompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformCompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformConstant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformConstant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformDecompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformDecompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1621(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1622(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeTransformUniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformUniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1623(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeTransformVecMult_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeTransformVecMult");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1624(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeUVFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeUVFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1625(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeUniformRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeUniformRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1626(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVaryingGetter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVaryingGetter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVaryingSetter_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVaryingSetter");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec2Constant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec2Constant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec2Uniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec2Uniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec3Constant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec3Constant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec3Uniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec3Uniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec4Constant_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec4Constant");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVec4Uniform_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVec4Uniform");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1627(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorCompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorCompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorDecompose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorDecompose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorDistance_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorDistance");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1628(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorFunc_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorFunc");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorLen_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorLen");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1629(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VisualShaderNodeVectorOp_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorOp");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_VisualShaderNodeVectorRefract_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VisualShaderNodeVectorRefract");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1630(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1631(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_VoxelGI_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VoxelGI");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_7_1632(MethodBind* method, Object* ptr, GDMonoMarshal::M_Transform3D* arg1, GDMonoMarshal::M_AABB* arg2, GDMonoMarshal::M_Vector3* arg3, MonoArray* arg4, MonoArray* arg5, MonoArray* arg6, MonoArray* arg7) {
	ERR_FAIL_NULL(ptr);
	Transform3D arg1_in = MARSHALLED_IN(Transform3D, arg1);
	AABB arg2_in = MARSHALLED_IN(AABB, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	PackedByteArray arg4_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg4);
	PackedByteArray arg5_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg5);
	PackedByteArray arg6_in = GDMonoMarshal::mono_array_to_PackedByteArray(arg6);
	PackedInt32Array arg7_in = GDMonoMarshal::mono_array_to_PackedInt32Array(arg7);
	const void* call_args[7] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_VoxelGIData_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "VoxelGIData");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WeakRef_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WeakRef");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1633(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1634(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCDataChannelExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCDataChannelExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_1635(MethodBind* method, Object* ptr, int32_t arg1, MonoBoolean arg2, Array* arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	bool arg2_in = (bool)arg2;
	const void* call_args[3] = { &arg1_in, &arg2_in, arg3 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_3_1636(MethodBind* method, Object* ptr, Object* arg1, int32_t arg2, int32_t arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg2_in = (int64_t)arg2;
	int64_t arg3_in = (int64_t)arg3;
	const void* call_args[3] = { arg1, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCMultiplayerPeer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCMultiplayerPeer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_1_1637(MethodBind* method, StringName* arg1) {
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(nullptr, call_args, nullptr);
}

int32_t godot_icall_1_1638(MethodBind* method, Object* ptr, Dictionary* arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	const void* call_args[1] = { arg1 };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_2_1639(MethodBind* method, Object* ptr, MonoString* arg1, Dictionary* arg2) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[2] = { &arg1_in, arg2 };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1640(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebRTCPeerConnection_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCPeerConnection");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WebRTCPeerConnectionExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebRTCPeerConnectionExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_4_1641(MethodBind* method, Object* ptr, MonoString* arg1, MonoArray* arg2, MonoBoolean arg3, MonoArray* arg4) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg3_in = (bool)arg3;
	PackedStringArray arg4_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg4);
	const void* call_args[4] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1642(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_WebSocketClient_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketClient");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1643(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1644(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_WebSocketPeer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketPeer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_3_1645(MethodBind* method, Object* ptr, int32_t arg1, MonoArray* arg2, MonoBoolean arg3) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	PackedStringArray arg2_in = GDMonoMarshal::mono_array_to_PackedStringArray(arg2);
	bool arg3_in = (bool)arg3;
	const void* call_args[3] = { &arg1_in, &arg2_in, &arg3_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_0_1646(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_WebSocketServer_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WebSocketServer");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1647(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

int32_t godot_icall_0_1648(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1649(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1650(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_0_1651(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_1_1652(MethodBind* method, Object* ptr, GDMonoMarshal::M_Rect2i* arg1) {
	ERR_FAIL_NULL(ptr);
	Rect2i arg1_in = MARSHALLED_IN(Rect2i, arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_Window_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "Window");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_World3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "World3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WorldBoundaryShape2D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldBoundaryShape2D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

void godot_icall_0_1653(MethodBind* method, Object* ptr, GDMonoMarshal::M_Plane* arg_ret) {
	Plane ret;
	if (ptr == nullptr) { *arg_ret = GDMonoMarshal::M_Plane(); ERR_FAIL_MSG("Parameter ' ptr ' is null."); }
	method->ptrcall(ptr, nullptr, &ret);
	*arg_ret = MARSHALLED_OUT(Plane, ret);
}

Object* godot_icall_WorldBoundaryShape3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldBoundaryShape3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_WorldEnvironment_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "WorldEnvironment");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_X509Certificate_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "X509Certificate");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1654(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

int32_t godot_icall_1_1655(MethodBind* method, Object* ptr, uint64_t arg1) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return (int32_t)ret;
}

Object* godot_icall_XMLParser_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XMLParser");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_XRAnchor3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRAnchor3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

Object* godot_icall_XRCamera3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRCamera3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1656(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_XRController3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRController3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1657(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_6_1658(MethodBind* method, Object* ptr, MonoString* arg1, StringName* arg2, double arg3, double arg4, double arg5, double arg6) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	StringName arg2_in = arg2 ? *arg2 : StringName();
	const void* call_args[6] = { &arg1_in, &arg2_in, &arg3, &arg4, &arg5, &arg6 };
	method->ptrcall(ptr, call_args, nullptr);
}

int32_t godot_icall_0_1659(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

void godot_icall_11_1660(MethodBind* method, Object* ptr, RID* arg1, GDMonoMarshal::M_Rect2* arg2, GDMonoMarshal::M_Rect2i* arg3, MonoBoolean arg4, uint32_t arg5, MonoBoolean arg6, GDMonoMarshal::M_Vector2* arg7, double arg8, double arg9, double arg10, double arg11) {
	ERR_FAIL_NULL(ptr);
	Rect2 arg2_in = MARSHALLED_IN(Rect2, arg2);
	Rect2i arg3_in = MARSHALLED_IN(Rect2i, arg3);
	bool arg4_in = (bool)arg4;
	int64_t arg5_in = (int64_t)arg5;
	bool arg6_in = (bool)arg6;
	Vector2 arg7_in = MARSHALLED_IN(Vector2, arg7);
	const void* call_args[11] = { arg1, &arg2_in, &arg3_in, &arg4_in, &arg5_in, &arg6_in, &arg7_in, &arg8, &arg9, &arg10, &arg11 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_XRInterfaceExtension_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRInterfaceExtension");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_0_1661(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_5_1662(MethodBind* method, Object* ptr, MonoString* arg1, double arg2, double arg3, double arg4, double arg5) {
	ERR_FAIL_NULL(ptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[5] = { &arg1_in, &arg2, &arg3, &arg4, &arg5 };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_XROrigin3D_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XROrigin3D");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1663(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

Object* godot_icall_XRPose_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRPose");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

int32_t godot_icall_0_1664(MethodBind* method, Object* ptr) {
	int64_t ret;
	ERR_FAIL_NULL_V(ptr, int32_t());
	method->ptrcall(ptr, nullptr, &ret);
	return (int32_t)ret;
}

MonoObject* godot_icall_1_1665(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

void godot_icall_5_1666(MethodBind* method, Object* ptr, StringName* arg1, GDMonoMarshal::M_Transform3D* arg2, GDMonoMarshal::M_Vector3* arg3, GDMonoMarshal::M_Vector3* arg4, int32_t arg5) {
	ERR_FAIL_NULL(ptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	Transform3D arg2_in = MARSHALLED_IN(Transform3D, arg2);
	Vector3 arg3_in = MARSHALLED_IN(Vector3, arg3);
	Vector3 arg4_in = MARSHALLED_IN(Vector3, arg4);
	int64_t arg5_in = (int64_t)arg5;
	const void* call_args[5] = { &arg1_in, &arg2_in, &arg3_in, &arg4_in, &arg5_in };
	method->ptrcall(ptr, call_args, nullptr);
}

Object* godot_icall_XRPositionalTracker_Ctor(MonoObject* obj) {
	GODOTSHARP_INSTANCE_OBJECT(instance, "XRPositionalTracker");
	GDMonoInternals::tie_managed_to_unmanaged(obj, instance);
	return instance;
}

MonoObject* godot_icall_1_1667(MethodBind* method, Object* ptr, int32_t arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	int64_t arg1_in = (int64_t)arg1;
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1668(MethodBind* method, Object* ptr, MonoString* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	String arg1_in = GDMonoMarshal::mono_string_to_godot(arg1);
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_1_1669(MethodBind* method, Object* ptr, StringName* arg1) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	StringName arg1_in = arg1 ? *arg1 : StringName();
	const void* call_args[1] = { &arg1_in };
	method->ptrcall(ptr, call_args, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

MonoObject* godot_icall_0_1670(MethodBind* method, Object* ptr) {
	Ref<RefCounted> ret;
	ERR_FAIL_NULL_V(ptr, nullptr);
	method->ptrcall(ptr, nullptr, &ret);
	return GDMonoUtils::unmanaged_get_managed(ret.ptr());
}

Object* godot_icall_XRServer_get_singleton() {
	return Engine::get_singleton()->get_singleton_object("XRServer");
}

namespace GodotSharpBindings
{

uint64_t get_core_api_hash() { return 2665045511U; }
#ifdef TOOLS_ENABLED
uint64_t get_editor_api_hash() { return 387030559U; }
#endif // TOOLS_ENABLED
uint32_t get_bindings_version() { return 13; }
uint32_t get_cs_glue_version() { return 1663233787; }

void register_generated_icalls() {
	godot_register_glue_header_icalls();
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AESContext_Ctor", godot_icall_AESContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AStar2D_Ctor", godot_icall_AStar2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AStar3D_Ctor", godot_icall_AStar3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AcceptDialog_Ctor", godot_icall_AcceptDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatableBody2D_Ctor", godot_icall_AnimatableBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatableBody3D_Ctor", godot_icall_AnimatableBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite2D_Ctor", godot_icall_AnimatedSprite2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedSprite3D_Ctor", godot_icall_AnimatedSprite3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimatedTexture_Ctor", godot_icall_AnimatedTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Animation_Ctor", godot_icall_Animation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationLibrary_Ctor", godot_icall_AnimationLibrary_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNode_Ctor", godot_icall_AnimationNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAdd2_Ctor", godot_icall_AnimationNodeAdd2_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAdd3_Ctor", godot_icall_AnimationNodeAdd3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeAnimation_Ctor", godot_icall_AnimationNodeAnimation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlend2_Ctor", godot_icall_AnimationNodeBlend2_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlend3_Ctor", godot_icall_AnimationNodeBlend3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendSpace1D_Ctor", godot_icall_AnimationNodeBlendSpace1D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendSpace2D_Ctor", godot_icall_AnimationNodeBlendSpace2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeBlendTree_Ctor", godot_icall_AnimationNodeBlendTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeOneShot_Ctor", godot_icall_AnimationNodeOneShot_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeOutput_Ctor", godot_icall_AnimationNodeOutput_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachine_Ctor", godot_icall_AnimationNodeStateMachine_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachinePlayback_Ctor", godot_icall_AnimationNodeStateMachinePlayback_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeStateMachineTransition_Ctor", godot_icall_AnimationNodeStateMachineTransition_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTimeScale_Ctor", godot_icall_AnimationNodeTimeScale_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTimeSeek_Ctor", godot_icall_AnimationNodeTimeSeek_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationNodeTransition_Ctor", godot_icall_AnimationNodeTransition_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationPlayer_Ctor", godot_icall_AnimationPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationRootNode_Ctor", godot_icall_AnimationRootNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AnimationTree_Ctor", godot_icall_AnimationTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Area2D_Ctor", godot_icall_Area2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Area3D_Ctor", godot_icall_Area3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ArrayMesh_Ctor", godot_icall_ArrayMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ArrayOccluder3D_Ctor", godot_icall_ArrayOccluder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AspectRatioContainer_Ctor", godot_icall_AspectRatioContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AtlasTexture_Ctor", godot_icall_AtlasTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioBusLayout_Ctor", godot_icall_AudioBusLayout_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffect_Ctor", godot_icall_AudioEffect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectAmplify_Ctor", godot_icall_AudioEffectAmplify_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandLimitFilter_Ctor", godot_icall_AudioEffectBandLimitFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectBandPassFilter_Ctor", godot_icall_AudioEffectBandPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCapture_Ctor", godot_icall_AudioEffectCapture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectChorus_Ctor", godot_icall_AudioEffectChorus_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectCompressor_Ctor", godot_icall_AudioEffectCompressor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDelay_Ctor", godot_icall_AudioEffectDelay_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectDistortion_Ctor", godot_icall_AudioEffectDistortion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ_Ctor", godot_icall_AudioEffectEQ_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ10_Ctor", godot_icall_AudioEffectEQ10_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ21_Ctor", godot_icall_AudioEffectEQ21_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectEQ6_Ctor", godot_icall_AudioEffectEQ6_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectFilter_Ctor", godot_icall_AudioEffectFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighPassFilter_Ctor", godot_icall_AudioEffectHighPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectHighShelfFilter_Ctor", godot_icall_AudioEffectHighShelfFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectInstance_Ctor", godot_icall_AudioEffectInstance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLimiter_Ctor", godot_icall_AudioEffectLimiter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowPassFilter_Ctor", godot_icall_AudioEffectLowPassFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectLowShelfFilter_Ctor", godot_icall_AudioEffectLowShelfFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectNotchFilter_Ctor", godot_icall_AudioEffectNotchFilter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPanner_Ctor", godot_icall_AudioEffectPanner_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPhaser_Ctor", godot_icall_AudioEffectPhaser_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectPitchShift_Ctor", godot_icall_AudioEffectPitchShift_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectRecord_Ctor", godot_icall_AudioEffectRecord_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectReverb_Ctor", godot_icall_AudioEffectReverb_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectSpectrumAnalyzer_Ctor", godot_icall_AudioEffectSpectrumAnalyzer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioEffectStereoEnhance_Ctor", godot_icall_AudioEffectStereoEnhance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioListener2D_Ctor", godot_icall_AudioListener2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioListener3D_Ctor", godot_icall_AudioListener3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioServer_get_singleton", godot_icall_AudioServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStream_Ctor", godot_icall_AudioStream_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamGenerator_Ctor", godot_icall_AudioStreamGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamMP3_Ctor", godot_icall_AudioStreamMP3_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamMicrophone_Ctor", godot_icall_AudioStreamMicrophone_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamOGGVorbis_Ctor", godot_icall_AudioStreamOGGVorbis_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayback_Ctor", godot_icall_AudioStreamPlayback_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlaybackOGGVorbis_Ctor", godot_icall_AudioStreamPlaybackOGGVorbis_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlaybackResampled_Ctor", godot_icall_AudioStreamPlaybackResampled_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer_Ctor", godot_icall_AudioStreamPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer2D_Ctor", godot_icall_AudioStreamPlayer2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamPlayer3D_Ctor", godot_icall_AudioStreamPlayer3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamRandomizer_Ctor", godot_icall_AudioStreamRandomizer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_AudioStreamSample_Ctor", godot_icall_AudioStreamSample_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BackBufferCopy_Ctor", godot_icall_BackBufferCopy_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BaseButton_Ctor", godot_icall_BaseButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BitMap_Ctor", godot_icall_BitMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Bone2D_Ctor", godot_icall_Bone2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoneAttachment3D_Ctor", godot_icall_BoneAttachment3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoxMesh_Ctor", godot_icall_BoxMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoxOccluder3D_Ctor", godot_icall_BoxOccluder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_BoxShape3D_Ctor", godot_icall_BoxShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Button_Ctor", godot_icall_Button_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ButtonGroup_Ctor", godot_icall_ButtonGroup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CPUParticles2D_Ctor", godot_icall_CPUParticles2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CPUParticles3D_Ctor", godot_icall_CPUParticles3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGBox3D_Ctor", godot_icall_CSGBox3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGCombiner3D_Ctor", godot_icall_CSGCombiner3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGCylinder3D_Ctor", godot_icall_CSGCylinder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGMesh3D_Ctor", godot_icall_CSGMesh3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGPolygon3D_Ctor", godot_icall_CSGPolygon3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGSphere3D_Ctor", godot_icall_CSGSphere3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSGTorus3D_Ctor", godot_icall_CSGTorus3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CSharpScript_Ctor", godot_icall_CSharpScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CallbackTweener_Ctor", godot_icall_CallbackTweener_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Camera2D_Ctor", godot_icall_Camera2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Camera3D_Ctor", godot_icall_Camera3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraEffects_Ctor", godot_icall_CameraEffects_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraFeed_Ctor", godot_icall_CameraFeed_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraServer_get_singleton", godot_icall_CameraServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CameraTexture_Ctor", godot_icall_CameraTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasGroup_Ctor", godot_icall_CanvasGroup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasItemMaterial_Ctor", godot_icall_CanvasItemMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasLayer_Ctor", godot_icall_CanvasLayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasModulate_Ctor", godot_icall_CanvasModulate_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CanvasTexture_Ctor", godot_icall_CanvasTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleMesh_Ctor", godot_icall_CapsuleMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape2D_Ctor", godot_icall_CapsuleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CapsuleShape3D_Ctor", godot_icall_CapsuleShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CenterContainer_Ctor", godot_icall_CenterContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CharFXTransform_Ctor", godot_icall_CharFXTransform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CharacterBody2D_Ctor", godot_icall_CharacterBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CharacterBody3D_Ctor", godot_icall_CharacterBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CheckBox_Ctor", godot_icall_CheckBox_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CheckButton_Ctor", godot_icall_CheckButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CircleShape2D_Ctor", godot_icall_CircleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ClassDB_get_singleton", godot_icall_ClassDB_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CodeEdit_Ctor", godot_icall_CodeEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CodeHighlighter_Ctor", godot_icall_CodeHighlighter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon2D_Ctor", godot_icall_CollisionPolygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionPolygon3D_Ctor", godot_icall_CollisionPolygon3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape2D_Ctor", godot_icall_CollisionShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CollisionShape3D_Ctor", godot_icall_CollisionShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorPicker_Ctor", godot_icall_ColorPicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorPickerButton_Ctor", godot_icall_ColorPickerButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ColorRect_Ctor", godot_icall_ColorRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CompressedCubemap_Ctor", godot_icall_CompressedCubemap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CompressedCubemapArray_Ctor", godot_icall_CompressedCubemapArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CompressedTexture2D_Ctor", godot_icall_CompressedTexture2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CompressedTexture2DArray_Ctor", godot_icall_CompressedTexture2DArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CompressedTexture3D_Ctor", godot_icall_CompressedTexture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape2D_Ctor", godot_icall_ConcavePolygonShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConcavePolygonShape3D_Ctor", godot_icall_ConcavePolygonShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConeTwistJoint3D_Ctor", godot_icall_ConeTwistJoint3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConfigFile_Ctor", godot_icall_ConfigFile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConfirmationDialog_Ctor", godot_icall_ConfirmationDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Container_Ctor", godot_icall_Container_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Control_Ctor", godot_icall_Control_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape2D_Ctor", godot_icall_ConvexPolygonShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ConvexPolygonShape3D_Ctor", godot_icall_ConvexPolygonShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Crypto_Ctor", godot_icall_Crypto_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CryptoKey_Ctor", godot_icall_CryptoKey_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Cubemap_Ctor", godot_icall_Cubemap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CubemapArray_Ctor", godot_icall_CubemapArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve_Ctor", godot_icall_Curve_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve2D_Ctor", godot_icall_Curve2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Curve3D_Ctor", godot_icall_Curve3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CurveTexture_Ctor", godot_icall_CurveTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CurveXYZTexture_Ctor", godot_icall_CurveXYZTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CylinderMesh_Ctor", godot_icall_CylinderMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_CylinderShape3D_Ctor", godot_icall_CylinderShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DTLSServer_Ctor", godot_icall_DTLSServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DampedSpringJoint2D_Ctor", godot_icall_DampedSpringJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Decal_Ctor", godot_icall_Decal_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DirectionalLight2D_Ctor", godot_icall_DirectionalLight2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DirectionalLight3D_Ctor", godot_icall_DirectionalLight3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Directory_Ctor", godot_icall_Directory_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_DisplayServer_get_singleton", godot_icall_DisplayServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ENetConnection_Ctor", godot_icall_ENetConnection_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ENetMultiplayerPeer_Ctor", godot_icall_ENetMultiplayerPeer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_EncodedObjectAsID_Ctor", godot_icall_EncodedObjectAsID_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Engine_get_singleton", godot_icall_Engine_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_EngineDebugger_get_singleton", godot_icall_EngineDebugger_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_EngineProfiler_Ctor", godot_icall_EngineProfiler_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Environment_Ctor", godot_icall_Environment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Expression_Ctor", godot_icall_Expression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FastNoiseLite_Ctor", godot_icall_FastNoiseLite_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_File_Ctor", godot_icall_File_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FileDialog_Ctor", godot_icall_FileDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FogMaterial_Ctor", godot_icall_FogMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FogVolume_Ctor", godot_icall_FogVolume_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Font_Ctor", godot_icall_Font_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_FontData_Ctor", godot_icall_FontData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GDScript_Ctor", godot_icall_GDScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFAccessor_Ctor", godot_icall_GLTFAccessor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFAnimation_Ctor", godot_icall_GLTFAnimation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFBufferView_Ctor", godot_icall_GLTFBufferView_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFCamera_Ctor", godot_icall_GLTFCamera_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFDocument_Ctor", godot_icall_GLTFDocument_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFDocumentExtension_Ctor", godot_icall_GLTFDocumentExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFDocumentExtensionConvertImporterMesh_Ctor", godot_icall_GLTFDocumentExtensionConvertImporterMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFLight_Ctor", godot_icall_GLTFLight_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFMesh_Ctor", godot_icall_GLTFMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFNode_Ctor", godot_icall_GLTFNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSkeleton_Ctor", godot_icall_GLTFSkeleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSkin_Ctor", godot_icall_GLTFSkin_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFSpecGloss_Ctor", godot_icall_GLTFSpecGloss_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFState_Ctor", godot_icall_GLTFState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GLTFTexture_Ctor", godot_icall_GLTFTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticles2D_Ctor", godot_icall_GPUParticles2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticles3D_Ctor", godot_icall_GPUParticles3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesAttractorBox3D_Ctor", godot_icall_GPUParticlesAttractorBox3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesAttractorSphere3D_Ctor", godot_icall_GPUParticlesAttractorSphere3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesAttractorVectorField3D_Ctor", godot_icall_GPUParticlesAttractorVectorField3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesCollisionBox3D_Ctor", godot_icall_GPUParticlesCollisionBox3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesCollisionHeightField3D_Ctor", godot_icall_GPUParticlesCollisionHeightField3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesCollisionSDF3D_Ctor", godot_icall_GPUParticlesCollisionSDF3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GPUParticlesCollisionSphere3D_Ctor", godot_icall_GPUParticlesCollisionSphere3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Generic6DOFJoint3D_Ctor", godot_icall_Generic6DOFJoint3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Geometry2D_get_singleton", godot_icall_Geometry2D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Geometry3D_get_singleton", godot_icall_Geometry3D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GeometryInstance3D_Ctor", godot_icall_GeometryInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GodotSharp_get_singleton", godot_icall_GodotSharp_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Gradient_Ctor", godot_icall_Gradient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GradientTexture1D_Ctor", godot_icall_GradientTexture1D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GradientTexture2D_Ctor", godot_icall_GradientTexture2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GraphEdit_Ctor", godot_icall_GraphEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GraphNode_Ctor", godot_icall_GraphNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GridContainer_Ctor", godot_icall_GridContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GridMap_Ctor", godot_icall_GridMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_GrooveJoint2D_Ctor", godot_icall_GrooveJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HBoxContainer_Ctor", godot_icall_HBoxContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HFlowContainer_Ctor", godot_icall_HFlowContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HMACContext_Ctor", godot_icall_HMACContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HScrollBar_Ctor", godot_icall_HScrollBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSeparator_Ctor", godot_icall_HSeparator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSlider_Ctor", godot_icall_HSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HSplitContainer_Ctor", godot_icall_HSplitContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HTTPClient_Ctor", godot_icall_HTTPClient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HTTPRequest_Ctor", godot_icall_HTTPRequest_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HashingContext_Ctor", godot_icall_HashingContext_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HeightMapShape3D_Ctor", godot_icall_HeightMapShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_HingeJoint3D_Ctor", godot_icall_HingeJoint3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_IP_get_singleton", godot_icall_IP_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Image_Ctor", godot_icall_Image_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImageTexture_Ctor", godot_icall_ImageTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImageTexture3D_Ctor", godot_icall_ImageTexture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImmediateMesh_Ctor", godot_icall_ImmediateMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImporterMesh_Ctor", godot_icall_ImporterMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ImporterMeshInstance3D_Ctor", godot_icall_ImporterMeshInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Input_get_singleton", godot_icall_Input_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventAction_Ctor", godot_icall_InputEventAction_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadButton_Ctor", godot_icall_InputEventJoypadButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventJoypadMotion_Ctor", godot_icall_InputEventJoypadMotion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventKey_Ctor", godot_icall_InputEventKey_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMIDI_Ctor", godot_icall_InputEventMIDI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMagnifyGesture_Ctor", godot_icall_InputEventMagnifyGesture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseButton_Ctor", godot_icall_InputEventMouseButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventMouseMotion_Ctor", godot_icall_InputEventMouseMotion_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventPanGesture_Ctor", godot_icall_InputEventPanGesture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenDrag_Ctor", godot_icall_InputEventScreenDrag_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventScreenTouch_Ctor", godot_icall_InputEventScreenTouch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputEventShortcut_Ctor", godot_icall_InputEventShortcut_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_InputMap_get_singleton", godot_icall_InputMap_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_IntervalTweener_Ctor", godot_icall_IntervalTweener_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ItemList_Ctor", godot_icall_ItemList_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JNISingleton_Ctor", godot_icall_JNISingleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JSON_Ctor", godot_icall_JSON_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JSONRPC_Ctor", godot_icall_JSONRPC_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaClass_Ctor", godot_icall_JavaClass_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaClassWrapper_get_singleton", godot_icall_JavaClassWrapper_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_JavaScript_get_singleton", godot_icall_JavaScript_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision2D_Ctor", godot_icall_KinematicCollision2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_KinematicCollision3D_Ctor", godot_icall_KinematicCollision3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Label_Ctor", godot_icall_Label_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Label3D_Ctor", godot_icall_Label3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightOccluder2D_Ctor", godot_icall_LightOccluder2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightmapGI_Ctor", godot_icall_LightmapGI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightmapGIData_Ctor", godot_icall_LightmapGIData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightmapProbe_Ctor", godot_icall_LightmapProbe_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LightmapperRD_Ctor", godot_icall_LightmapperRD_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Line2D_Ctor", godot_icall_Line2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LineEdit_Ctor", godot_icall_LineEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_LinkButton_Ctor", godot_icall_LinkButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MainLoop_Ctor", godot_icall_MainLoop_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MarginContainer_Ctor", godot_icall_MarginContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Marshalls_get_singleton", godot_icall_Marshalls_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Material_Ctor", godot_icall_Material_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MenuButton_Ctor", godot_icall_MenuButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Mesh_Ctor", godot_icall_Mesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshDataTool_Ctor", godot_icall_MeshDataTool_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance2D_Ctor", godot_icall_MeshInstance2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshInstance3D_Ctor", godot_icall_MeshInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshLibrary_Ctor", godot_icall_MeshLibrary_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MeshTexture_Ctor", godot_icall_MeshTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MethodTweener_Ctor", godot_icall_MethodTweener_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MissingNode_Ctor", godot_icall_MissingNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MissingResource_Ctor", godot_icall_MissingResource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MobileVRInterface_Ctor", godot_icall_MobileVRInterface_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MovieWriter_Ctor", godot_icall_MovieWriter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMesh_Ctor", godot_icall_MultiMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance2D_Ctor", godot_icall_MultiMeshInstance2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiMeshInstance3D_Ctor", godot_icall_MultiMeshInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerAPI_Ctor", godot_icall_MultiplayerAPI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerPeerExtension_Ctor", godot_icall_MultiplayerPeerExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerSpawner_Ctor", godot_icall_MultiplayerSpawner_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_MultiplayerSynchronizer_Ctor", godot_icall_MultiplayerSynchronizer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Mutex_Ctor", godot_icall_Mutex_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NativeExtension_Ctor", godot_icall_NativeExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NativeExtensionManager_get_singleton", godot_icall_NativeExtensionManager_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationAgent2D_Ctor", godot_icall_NavigationAgent2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationAgent3D_Ctor", godot_icall_NavigationAgent3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationMesh_Ctor", godot_icall_NavigationMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationMeshGenerator_get_singleton", godot_icall_NavigationMeshGenerator_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationObstacle2D_Ctor", godot_icall_NavigationObstacle2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationObstacle3D_Ctor", godot_icall_NavigationObstacle3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationPolygon_Ctor", godot_icall_NavigationPolygon_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationRegion2D_Ctor", godot_icall_NavigationRegion2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationRegion3D_Ctor", godot_icall_NavigationRegion3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationServer2D_get_singleton", godot_icall_NavigationServer2D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NavigationServer3D_get_singleton", godot_icall_NavigationServer3D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NinePatchRect_Ctor", godot_icall_NinePatchRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Node_Ctor", godot_icall_Node_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Node2D_Ctor", godot_icall_Node2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Node3D_Ctor", godot_icall_Node3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_NoiseTexture_Ctor", godot_icall_NoiseTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OGGPacketSequence_Ctor", godot_icall_OGGPacketSequence_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OGGPacketSequencePlayback_Ctor", godot_icall_OGGPacketSequencePlayback_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ORMMaterial3D_Ctor", godot_icall_ORMMaterial3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OS_get_singleton", godot_icall_OS_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OccluderInstance3D_Ctor", godot_icall_OccluderInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OccluderPolygon2D_Ctor", godot_icall_OccluderPolygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OmniLight3D_Ctor", godot_icall_OmniLight3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRAction_Ctor", godot_icall_OpenXRAction_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRActionMap_Ctor", godot_icall_OpenXRActionMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRActionSet_Ctor", godot_icall_OpenXRActionSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRIPBinding_Ctor", godot_icall_OpenXRIPBinding_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRInteractionProfile_Ctor", godot_icall_OpenXRInteractionProfile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OpenXRInterface_Ctor", godot_icall_OpenXRInterface_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OptimizedTranslation_Ctor", godot_icall_OptimizedTranslation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_OptionButton_Ctor", godot_icall_OptionButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PCKPacker_Ctor", godot_icall_PCKPacker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PackedDataContainer_Ctor", godot_icall_PackedDataContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PackedScene_Ctor", godot_icall_PackedScene_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerDTLS_Ctor", godot_icall_PacketPeerDTLS_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerExtension_Ctor", godot_icall_PacketPeerExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerStream_Ctor", godot_icall_PacketPeerStream_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PacketPeerUDP_Ctor", godot_icall_PacketPeerUDP_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Panel_Ctor", godot_icall_Panel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PanelContainer_Ctor", godot_icall_PanelContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PanoramaSkyMaterial_Ctor", godot_icall_PanoramaSkyMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParallaxBackground_Ctor", godot_icall_ParallaxBackground_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParallaxLayer_Ctor", godot_icall_ParallaxLayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ParticlesMaterial_Ctor", godot_icall_ParticlesMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Path2D_Ctor", godot_icall_Path2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Path3D_Ctor", godot_icall_Path3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PathFollow2D_Ctor", godot_icall_PathFollow2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PathFollow3D_Ctor", godot_icall_PathFollow3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Performance_get_singleton", godot_icall_Performance_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicalBone2D_Ctor", godot_icall_PhysicalBone2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicalBone3D_Ctor", godot_icall_PhysicalBone3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicalSkyMaterial_Ctor", godot_icall_PhysicalSkyMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsDirectBodyState3DExtension_Ctor", godot_icall_PhysicsDirectBodyState3DExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsDirectSpaceState3DExtension_Ctor", godot_icall_PhysicsDirectSpaceState3DExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsMaterial_Ctor", godot_icall_PhysicsMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsPointQueryParameters2D_Ctor", godot_icall_PhysicsPointQueryParameters2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsPointQueryParameters3D_Ctor", godot_icall_PhysicsPointQueryParameters3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsRayQueryParameters2D_Ctor", godot_icall_PhysicsRayQueryParameters2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsRayQueryParameters3D_Ctor", godot_icall_PhysicsRayQueryParameters3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer2D_get_singleton", godot_icall_PhysicsServer2D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer3D_get_singleton", godot_icall_PhysicsServer3D_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsServer3DRenderingServerHandler_Ctor", godot_icall_PhysicsServer3DRenderingServerHandler_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsShapeQueryParameters2D_Ctor", godot_icall_PhysicsShapeQueryParameters2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsShapeQueryParameters3D_Ctor", godot_icall_PhysicsShapeQueryParameters3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsTestMotionParameters2D_Ctor", godot_icall_PhysicsTestMotionParameters2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsTestMotionParameters3D_Ctor", godot_icall_PhysicsTestMotionParameters3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsTestMotionResult2D_Ctor", godot_icall_PhysicsTestMotionResult2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PhysicsTestMotionResult3D_Ctor", godot_icall_PhysicsTestMotionResult3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PinJoint2D_Ctor", godot_icall_PinJoint2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PinJoint3D_Ctor", godot_icall_PinJoint3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderCubemap_Ctor", godot_icall_PlaceholderCubemap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderCubemapArray_Ctor", godot_icall_PlaceholderCubemapArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderMaterial_Ctor", godot_icall_PlaceholderMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderMesh_Ctor", godot_icall_PlaceholderMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderTexture2D_Ctor", godot_icall_PlaceholderTexture2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderTexture2DArray_Ctor", godot_icall_PlaceholderTexture2DArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaceholderTexture3D_Ctor", godot_icall_PlaceholderTexture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PlaneMesh_Ctor", godot_icall_PlaneMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PointLight2D_Ctor", godot_icall_PointLight2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PointMesh_Ctor", godot_icall_PointMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Polygon2D_Ctor", godot_icall_Polygon2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PolygonOccluder3D_Ctor", godot_icall_PolygonOccluder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PolygonPathFinder_Ctor", godot_icall_PolygonPathFinder_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Popup_Ctor", godot_icall_Popup_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PopupMenu_Ctor", godot_icall_PopupMenu_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PopupPanel_Ctor", godot_icall_PopupPanel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PortableCompressedTexture2D_Ctor", godot_icall_PortableCompressedTexture2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Position2D_Ctor", godot_icall_Position2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Position3D_Ctor", godot_icall_Position3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PrimitiveMesh_Ctor", godot_icall_PrimitiveMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PrismMesh_Ctor", godot_icall_PrismMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProceduralSkyMaterial_Ctor", godot_icall_ProceduralSkyMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProgressBar_Ctor", godot_icall_ProgressBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProjectSettings_get_singleton", godot_icall_ProjectSettings_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_PropertyTweener_Ctor", godot_icall_PropertyTweener_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ProxyTexture_Ctor", godot_icall_ProxyTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_QuadMesh_Ctor", godot_icall_QuadMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_QuadOccluder3D_Ctor", godot_icall_QuadOccluder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDAttachmentFormat_Ctor", godot_icall_RDAttachmentFormat_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDFramebufferPass_Ctor", godot_icall_RDFramebufferPass_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineColorBlendState_Ctor", godot_icall_RDPipelineColorBlendState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineColorBlendStateAttachment_Ctor", godot_icall_RDPipelineColorBlendStateAttachment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineDepthStencilState_Ctor", godot_icall_RDPipelineDepthStencilState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineMultisampleState_Ctor", godot_icall_RDPipelineMultisampleState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineRasterizationState_Ctor", godot_icall_RDPipelineRasterizationState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDPipelineSpecializationConstant_Ctor", godot_icall_RDPipelineSpecializationConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDSamplerState_Ctor", godot_icall_RDSamplerState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDShaderFile_Ctor", godot_icall_RDShaderFile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDShaderSPIRV_Ctor", godot_icall_RDShaderSPIRV_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDShaderSource_Ctor", godot_icall_RDShaderSource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDTextureFormat_Ctor", godot_icall_RDTextureFormat_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDTextureView_Ctor", godot_icall_RDTextureView_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDUniform_Ctor", godot_icall_RDUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RDVertexAttribute_Ctor", godot_icall_RDVertexAttribute_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RandomNumberGenerator_Ctor", godot_icall_RandomNumberGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Range_Ctor", godot_icall_Range_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayCast2D_Ctor", godot_icall_RayCast2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RayCast3D_Ctor", godot_icall_RayCast3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RectangleShape2D_Ctor", godot_icall_RectangleShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RefCounted_Ctor", godot_icall_RefCounted_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ReferenceRect_Ctor", godot_icall_ReferenceRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ReflectionProbe_Ctor", godot_icall_ReflectionProbe_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RegEx_Ctor", godot_icall_RegEx_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RegExMatch_Ctor", godot_icall_RegExMatch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform2D_Ctor", godot_icall_RemoteTransform2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RemoteTransform3D_Ctor", godot_icall_RemoteTransform3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RenderingServer_get_singleton", godot_icall_RenderingServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Resource_Ctor", godot_icall_Resource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceFormatLoader_Ctor", godot_icall_ResourceFormatLoader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceFormatSaver_Ctor", godot_icall_ResourceFormatSaver_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceLoader_get_singleton", godot_icall_ResourceLoader_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourcePreloader_Ctor", godot_icall_ResourcePreloader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceSaver_get_singleton", godot_icall_ResourceSaver_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ResourceUID_get_singleton", godot_icall_ResourceUID_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RibbonTrailMesh_Ctor", godot_icall_RibbonTrailMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RichTextEffect_Ctor", godot_icall_RichTextEffect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RichTextLabel_Ctor", godot_icall_RichTextLabel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RigidDynamicBody2D_Ctor", godot_icall_RigidDynamicBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_RigidDynamicBody3D_Ctor", godot_icall_RigidDynamicBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SceneReplicationConfig_Ctor", godot_icall_SceneReplicationConfig_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SceneTree_Ctor", godot_icall_SceneTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ScriptExtension_Ctor", godot_icall_ScriptExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ScriptLanguageExtension_Ctor", godot_icall_ScriptLanguageExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ScrollContainer_Ctor", godot_icall_ScrollContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SegmentShape2D_Ctor", godot_icall_SegmentShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Semaphore_Ctor", godot_icall_Semaphore_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SeparationRayShape2D_Ctor", godot_icall_SeparationRayShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SeparationRayShape3D_Ctor", godot_icall_SeparationRayShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Shader_Ctor", godot_icall_Shader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ShaderGlobalsOverride_Ctor", godot_icall_ShaderGlobalsOverride_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ShaderMaterial_Ctor", godot_icall_ShaderMaterial_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ShapeCast2D_Ctor", godot_icall_ShapeCast2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Shortcut_Ctor", godot_icall_Shortcut_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skeleton2D_Ctor", godot_icall_Skeleton2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skeleton3D_Ctor", godot_icall_Skeleton3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonIK3D_Ctor", godot_icall_SkeletonIK3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2D_Ctor", godot_icall_SkeletonModification2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DCCDIK_Ctor", godot_icall_SkeletonModification2DCCDIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DFABRIK_Ctor", godot_icall_SkeletonModification2DFABRIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DJiggle_Ctor", godot_icall_SkeletonModification2DJiggle_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DLookAt_Ctor", godot_icall_SkeletonModification2DLookAt_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DPhysicalBones_Ctor", godot_icall_SkeletonModification2DPhysicalBones_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DStackHolder_Ctor", godot_icall_SkeletonModification2DStackHolder_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification2DTwoBoneIK_Ctor", godot_icall_SkeletonModification2DTwoBoneIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3D_Ctor", godot_icall_SkeletonModification3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DCCDIK_Ctor", godot_icall_SkeletonModification3DCCDIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DFABRIK_Ctor", godot_icall_SkeletonModification3DFABRIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DJiggle_Ctor", godot_icall_SkeletonModification3DJiggle_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DLookAt_Ctor", godot_icall_SkeletonModification3DLookAt_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DStackHolder_Ctor", godot_icall_SkeletonModification3DStackHolder_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModification3DTwoBoneIK_Ctor", godot_icall_SkeletonModification3DTwoBoneIK_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModificationStack2D_Ctor", godot_icall_SkeletonModificationStack2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SkeletonModificationStack3D_Ctor", godot_icall_SkeletonModificationStack3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Skin_Ctor", godot_icall_Skin_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Sky_Ctor", godot_icall_Sky_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SliderJoint3D_Ctor", godot_icall_SliderJoint3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SoftDynamicBody3D_Ctor", godot_icall_SoftDynamicBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SphereMesh_Ctor", godot_icall_SphereMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SphereOccluder3D_Ctor", godot_icall_SphereOccluder3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SphereShape3D_Ctor", godot_icall_SphereShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpinBox_Ctor", godot_icall_SpinBox_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpotLight3D_Ctor", godot_icall_SpotLight3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpringArm3D_Ctor", godot_icall_SpringArm3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Sprite2D_Ctor", godot_icall_Sprite2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Sprite3D_Ctor", godot_icall_Sprite3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SpriteFrames_Ctor", godot_icall_SpriteFrames_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StandardMaterial3D_Ctor", godot_icall_StandardMaterial3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StaticBody2D_Ctor", godot_icall_StaticBody2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StaticBody3D_Ctor", godot_icall_StaticBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerBuffer_Ctor", godot_icall_StreamPeerBuffer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerExtension_Ctor", godot_icall_StreamPeerExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerSSL_Ctor", godot_icall_StreamPeerSSL_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StreamPeerTCP_Ctor", godot_icall_StreamPeerTCP_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBox_Ctor", godot_icall_StyleBox_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxEmpty_Ctor", godot_icall_StyleBoxEmpty_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxFlat_Ctor", godot_icall_StyleBoxFlat_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxLine_Ctor", godot_icall_StyleBoxLine_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_StyleBoxTexture_Ctor", godot_icall_StyleBoxTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SubViewport_Ctor", godot_icall_SubViewport_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SubViewportContainer_Ctor", godot_icall_SubViewportContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SurfaceTool_Ctor", godot_icall_SurfaceTool_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_SyntaxHighlighter_Ctor", godot_icall_SyntaxHighlighter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TCPServer_Ctor", godot_icall_TCPServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TabBar_Ctor", godot_icall_TabBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TabContainer_Ctor", godot_icall_TabContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextEdit_Ctor", godot_icall_TextEdit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextLine_Ctor", godot_icall_TextLine_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextMesh_Ctor", godot_icall_TextMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextParagraph_Ctor", godot_icall_TextParagraph_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextServerAdvanced_Ctor", godot_icall_TextServerAdvanced_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextServerDummy_Ctor", godot_icall_TextServerDummy_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextServerExtension_Ctor", godot_icall_TextServerExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextServerManager_get_singleton", godot_icall_TextServerManager_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Texture_Ctor", godot_icall_Texture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Texture2D_Ctor", godot_icall_Texture2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Texture2DArray_Ctor", godot_icall_Texture2DArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Texture3D_Ctor", godot_icall_Texture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureButton_Ctor", godot_icall_TextureButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureLayered_Ctor", godot_icall_TextureLayered_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureProgressBar_Ctor", godot_icall_TextureProgressBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TextureRect_Ctor", godot_icall_TextureRect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Theme_Ctor", godot_icall_Theme_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Thread_Ctor", godot_icall_Thread_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileData_Ctor", godot_icall_TileData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileMap_Ctor", godot_icall_TileMap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileMapPattern_Ctor", godot_icall_TileMapPattern_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileSet_Ctor", godot_icall_TileSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileSetAtlasSource_Ctor", godot_icall_TileSetAtlasSource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TileSetScenesCollectionSource_Ctor", godot_icall_TileSetScenesCollectionSource_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Time_get_singleton", godot_icall_Time_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Timer_Ctor", godot_icall_Timer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TouchScreenButton_Ctor", godot_icall_TouchScreenButton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Translation_Ctor", godot_icall_Translation_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TranslationServer_get_singleton", godot_icall_TranslationServer_get_singleton);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Tree_Ctor", godot_icall_Tree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TriangleMesh_Ctor", godot_icall_TriangleMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_TubeTrailMesh_Ctor", godot_icall_TubeTrailMesh_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Tween_Ctor", godot_icall_Tween_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UDPServer_Ctor", godot_icall_UDPServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UPNP_Ctor", godot_icall_UPNP_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UPNPDevice_Ctor", godot_icall_UPNPDevice_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_UndoRedo_Ctor", godot_icall_UndoRedo_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VBoxContainer_Ctor", godot_icall_VBoxContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VFlowContainer_Ctor", godot_icall_VFlowContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VScrollBar_Ctor", godot_icall_VScrollBar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSeparator_Ctor", godot_icall_VSeparator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSlider_Ctor", godot_icall_VSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VSplitContainer_Ctor", godot_icall_VSplitContainer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VehicleBody3D_Ctor", godot_icall_VehicleBody3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VehicleWheel3D_Ctor", godot_icall_VehicleWheel3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VelocityTracker3D_Ctor", godot_icall_VelocityTracker3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamPlayer_Ctor", godot_icall_VideoStreamPlayer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VideoStreamTheora_Ctor", godot_icall_VideoStreamTheora_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_ViewportTexture_Ctor", godot_icall_ViewportTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibleOnScreenEnabler2D_Ctor", godot_icall_VisibleOnScreenEnabler2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibleOnScreenEnabler3D_Ctor", godot_icall_VisibleOnScreenEnabler3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibleOnScreenNotifier2D_Ctor", godot_icall_VisibleOnScreenNotifier2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisibleOnScreenNotifier3D_Ctor", godot_icall_VisibleOnScreenNotifier3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualInstance3D_Ctor", godot_icall_VisualInstance3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScript_Ctor", godot_icall_VisualScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBasicTypeConstant_Ctor", godot_icall_VisualScriptBasicTypeConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptBuiltinFunc_Ctor", godot_icall_VisualScriptBuiltinFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptClassConstant_Ctor", godot_icall_VisualScriptClassConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptComment_Ctor", godot_icall_VisualScriptComment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptComposeArray_Ctor", godot_icall_VisualScriptComposeArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCondition_Ctor", godot_icall_VisualScriptCondition_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstant_Ctor", godot_icall_VisualScriptConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptConstructor_Ctor", godot_icall_VisualScriptConstructor_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptCustomNode_Ctor", godot_icall_VisualScriptCustomNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptDeconstruct_Ctor", godot_icall_VisualScriptDeconstruct_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEmitSignal_Ctor", godot_icall_VisualScriptEmitSignal_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptEngineSingleton_Ctor", godot_icall_VisualScriptEngineSingleton_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptExpression_Ctor", godot_icall_VisualScriptExpression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunction_Ctor", godot_icall_VisualScriptFunction_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunctionCall_Ctor", godot_icall_VisualScriptFunctionCall_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptFunctionState_Ctor", godot_icall_VisualScriptFunctionState_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptGlobalConstant_Ctor", godot_icall_VisualScriptGlobalConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexGet_Ctor", godot_icall_VisualScriptIndexGet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIndexSet_Ctor", godot_icall_VisualScriptIndexSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptInputAction_Ctor", godot_icall_VisualScriptInputAction_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptIterator_Ctor", godot_icall_VisualScriptIterator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVar_Ctor", godot_icall_VisualScriptLocalVar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptLocalVarSet_Ctor", godot_icall_VisualScriptLocalVarSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptMathConstant_Ctor", godot_icall_VisualScriptMathConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptOperator_Ctor", godot_icall_VisualScriptOperator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPreload_Ctor", godot_icall_VisualScriptPreload_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertyGet_Ctor", godot_icall_VisualScriptPropertyGet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptPropertySet_Ctor", godot_icall_VisualScriptPropertySet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptResourcePath_Ctor", godot_icall_VisualScriptResourcePath_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptReturn_Ctor", godot_icall_VisualScriptReturn_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneNode_Ctor", godot_icall_VisualScriptSceneNode_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSceneTree_Ctor", godot_icall_VisualScriptSceneTree_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelect_Ctor", godot_icall_VisualScriptSelect_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSelf_Ctor", godot_icall_VisualScriptSelf_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSequence_Ctor", godot_icall_VisualScriptSequence_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSubCall_Ctor", godot_icall_VisualScriptSubCall_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptSwitch_Ctor", godot_icall_VisualScriptSwitch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptTypeCast_Ctor", godot_icall_VisualScriptTypeCast_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableGet_Ctor", godot_icall_VisualScriptVariableGet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptVariableSet_Ctor", godot_icall_VisualScriptVariableSet_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptWhile_Ctor", godot_icall_VisualScriptWhile_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYield_Ctor", godot_icall_VisualScriptYield_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualScriptYieldSignal_Ctor", godot_icall_VisualScriptYieldSignal_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShader_Ctor", godot_icall_VisualShader_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeBillboard_Ctor", godot_icall_VisualShaderNodeBillboard_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeBooleanConstant_Ctor", godot_icall_VisualShaderNodeBooleanConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeBooleanUniform_Ctor", godot_icall_VisualShaderNodeBooleanUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeClamp_Ctor", godot_icall_VisualShaderNodeClamp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorConstant_Ctor", godot_icall_VisualShaderNodeColorConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorFunc_Ctor", godot_icall_VisualShaderNodeColorFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorOp_Ctor", godot_icall_VisualShaderNodeColorOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeColorUniform_Ctor", godot_icall_VisualShaderNodeColorUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeComment_Ctor", godot_icall_VisualShaderNodeComment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCompare_Ctor", godot_icall_VisualShaderNodeCompare_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCubemap_Ctor", godot_icall_VisualShaderNodeCubemap_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCubemapUniform_Ctor", godot_icall_VisualShaderNodeCubemapUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCurveTexture_Ctor", godot_icall_VisualShaderNodeCurveTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCurveXYZTexture_Ctor", godot_icall_VisualShaderNodeCurveXYZTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeCustom_Ctor", godot_icall_VisualShaderNodeCustom_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeDerivativeFunc_Ctor", godot_icall_VisualShaderNodeDerivativeFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeDeterminant_Ctor", godot_icall_VisualShaderNodeDeterminant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeDotProduct_Ctor", godot_icall_VisualShaderNodeDotProduct_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeExpression_Ctor", godot_icall_VisualShaderNodeExpression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFaceForward_Ctor", godot_icall_VisualShaderNodeFaceForward_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFloatConstant_Ctor", godot_icall_VisualShaderNodeFloatConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFloatFunc_Ctor", godot_icall_VisualShaderNodeFloatFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFloatOp_Ctor", godot_icall_VisualShaderNodeFloatOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFloatUniform_Ctor", godot_icall_VisualShaderNodeFloatUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeFresnel_Ctor", godot_icall_VisualShaderNodeFresnel_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeGlobalExpression_Ctor", godot_icall_VisualShaderNodeGlobalExpression_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIf_Ctor", godot_icall_VisualShaderNodeIf_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeInput_Ctor", godot_icall_VisualShaderNodeInput_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIntConstant_Ctor", godot_icall_VisualShaderNodeIntConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIntFunc_Ctor", godot_icall_VisualShaderNodeIntFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIntOp_Ctor", godot_icall_VisualShaderNodeIntOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIntUniform_Ctor", godot_icall_VisualShaderNodeIntUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeIs_Ctor", godot_icall_VisualShaderNodeIs_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeMix_Ctor", godot_icall_VisualShaderNodeMix_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeMultiplyAdd_Ctor", godot_icall_VisualShaderNodeMultiplyAdd_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeOuterProduct_Ctor", godot_icall_VisualShaderNodeOuterProduct_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleAccelerator_Ctor", godot_icall_VisualShaderNodeParticleAccelerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleBoxEmitter_Ctor", godot_icall_VisualShaderNodeParticleBoxEmitter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleConeVelocity_Ctor", godot_icall_VisualShaderNodeParticleConeVelocity_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleEmit_Ctor", godot_icall_VisualShaderNodeParticleEmit_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleMeshEmitter_Ctor", godot_icall_VisualShaderNodeParticleMeshEmitter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleMultiplyByAxisAngle_Ctor", godot_icall_VisualShaderNodeParticleMultiplyByAxisAngle_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleOutput_Ctor", godot_icall_VisualShaderNodeParticleOutput_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleRandomness_Ctor", godot_icall_VisualShaderNodeParticleRandomness_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleRingEmitter_Ctor", godot_icall_VisualShaderNodeParticleRingEmitter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeParticleSphereEmitter_Ctor", godot_icall_VisualShaderNodeParticleSphereEmitter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeSDFRaymarch_Ctor", godot_icall_VisualShaderNodeSDFRaymarch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeSDFToScreenUV_Ctor", godot_icall_VisualShaderNodeSDFToScreenUV_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeScreenUVToSDF_Ctor", godot_icall_VisualShaderNodeScreenUVToSDF_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeSmoothStep_Ctor", godot_icall_VisualShaderNodeSmoothStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeStep_Ctor", godot_icall_VisualShaderNodeStep_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeSwitch_Ctor", godot_icall_VisualShaderNodeSwitch_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture_Ctor", godot_icall_VisualShaderNodeTexture_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture2DArray_Ctor", godot_icall_VisualShaderNodeTexture2DArray_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture2DArrayUniform_Ctor", godot_icall_VisualShaderNodeTexture2DArrayUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture3D_Ctor", godot_icall_VisualShaderNodeTexture3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTexture3DUniform_Ctor", godot_icall_VisualShaderNodeTexture3DUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureSDF_Ctor", godot_icall_VisualShaderNodeTextureSDF_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureSDFNormal_Ctor", godot_icall_VisualShaderNodeTextureSDFNormal_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureUniform_Ctor", godot_icall_VisualShaderNodeTextureUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor", godot_icall_VisualShaderNodeTextureUniformTriplanar_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformCompose_Ctor", godot_icall_VisualShaderNodeTransformCompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformConstant_Ctor", godot_icall_VisualShaderNodeTransformConstant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformDecompose_Ctor", godot_icall_VisualShaderNodeTransformDecompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformFunc_Ctor", godot_icall_VisualShaderNodeTransformFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformOp_Ctor", godot_icall_VisualShaderNodeTransformOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformUniform_Ctor", godot_icall_VisualShaderNodeTransformUniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeTransformVecMult_Ctor", godot_icall_VisualShaderNodeTransformVecMult_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeUVFunc_Ctor", godot_icall_VisualShaderNodeUVFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeUniformRef_Ctor", godot_icall_VisualShaderNodeUniformRef_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVaryingGetter_Ctor", godot_icall_VisualShaderNodeVaryingGetter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVaryingSetter_Ctor", godot_icall_VisualShaderNodeVaryingSetter_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec2Constant_Ctor", godot_icall_VisualShaderNodeVec2Constant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec2Uniform_Ctor", godot_icall_VisualShaderNodeVec2Uniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec3Constant_Ctor", godot_icall_VisualShaderNodeVec3Constant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec3Uniform_Ctor", godot_icall_VisualShaderNodeVec3Uniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec4Constant_Ctor", godot_icall_VisualShaderNodeVec4Constant_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVec4Uniform_Ctor", godot_icall_VisualShaderNodeVec4Uniform_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorCompose_Ctor", godot_icall_VisualShaderNodeVectorCompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorDecompose_Ctor", godot_icall_VisualShaderNodeVectorDecompose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorDistance_Ctor", godot_icall_VisualShaderNodeVectorDistance_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorFunc_Ctor", godot_icall_VisualShaderNodeVectorFunc_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorLen_Ctor", godot_icall_VisualShaderNodeVectorLen_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorOp_Ctor", godot_icall_VisualShaderNodeVectorOp_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VisualShaderNodeVectorRefract_Ctor", godot_icall_VisualShaderNodeVectorRefract_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VoxelGI_Ctor", godot_icall_VoxelGI_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_VoxelGIData_Ctor", godot_icall_VoxelGIData_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WeakRef_Ctor", godot_icall_WeakRef_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCDataChannelExtension_Ctor", godot_icall_WebRTCDataChannelExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCMultiplayerPeer_Ctor", godot_icall_WebRTCMultiplayerPeer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCPeerConnection_Ctor", godot_icall_WebRTCPeerConnection_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebRTCPeerConnectionExtension_Ctor", godot_icall_WebRTCPeerConnectionExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketClient_Ctor", godot_icall_WebSocketClient_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketPeer_Ctor", godot_icall_WebSocketPeer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WebSocketServer_Ctor", godot_icall_WebSocketServer_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_Window_Ctor", godot_icall_Window_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_World2D_Ctor", godot_icall_World2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_World3D_Ctor", godot_icall_World3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WorldBoundaryShape2D_Ctor", godot_icall_WorldBoundaryShape2D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WorldBoundaryShape3D_Ctor", godot_icall_WorldBoundaryShape3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_WorldEnvironment_Ctor", godot_icall_WorldEnvironment_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_X509Certificate_Ctor", godot_icall_X509Certificate_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XMLParser_Ctor", godot_icall_XMLParser_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRAnchor3D_Ctor", godot_icall_XRAnchor3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRCamera3D_Ctor", godot_icall_XRCamera3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRController3D_Ctor", godot_icall_XRController3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRInterfaceExtension_Ctor", godot_icall_XRInterfaceExtension_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XROrigin3D_Ctor", godot_icall_XROrigin3D_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRPose_Ctor", godot_icall_XRPose_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRPositionalTracker_Ctor", godot_icall_XRPositionalTracker_Ctor);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_XRServer_get_singleton", godot_icall_XRServer_get_singleton);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_AnimationTrackEditPlugin_Ctor", godot_icall_AnimationTrackEditPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorCommandPalette_Ctor", godot_icall_EditorCommandPalette_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorDebuggerPlugin_Ctor", godot_icall_EditorDebuggerPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorExportPlugin_Ctor", godot_icall_EditorExportPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFeatureProfile_Ctor", godot_icall_EditorFeatureProfile_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileDialog_Ctor", godot_icall_EditorFileDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileSystemDirectory_Ctor", godot_icall_EditorFileSystemDirectory_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorFileSystemImportFormatSupportQuery_Ctor", godot_icall_EditorFileSystemImportFormatSupportQuery_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorImportPlugin_Ctor", godot_icall_EditorImportPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorInspector_Ctor", godot_icall_EditorInspector_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorInspectorPlugin_Ctor", godot_icall_EditorInspectorPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorNode3DGizmo_Ctor", godot_icall_EditorNode3DGizmo_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorNode3DGizmoPlugin_Ctor", godot_icall_EditorNode3DGizmoPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorPaths_Ctor", godot_icall_EditorPaths_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorPlugin_Ctor", godot_icall_EditorPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorProperty_Ctor", godot_icall_EditorProperty_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourceConversionPlugin_Ctor", godot_icall_EditorResourceConversionPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePicker_Ctor", godot_icall_EditorResourcePicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorResourcePreviewGenerator_Ctor", godot_icall_EditorResourcePreviewGenerator_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneFormatImporter_Ctor", godot_icall_EditorSceneFormatImporter_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneFormatImporterBlend_Ctor", godot_icall_EditorSceneFormatImporterBlend_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneFormatImporterFBX_Ctor", godot_icall_EditorSceneFormatImporterFBX_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSceneFormatImporterGLTF_Ctor", godot_icall_EditorSceneFormatImporterGLTF_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScenePostImport_Ctor", godot_icall_EditorScenePostImport_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScenePostImportPlugin_Ctor", godot_icall_EditorScenePostImportPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScript_Ctor", godot_icall_EditorScript_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorScriptPicker_Ctor", godot_icall_EditorScriptPicker_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSelection_Ctor", godot_icall_EditorSelection_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSpinSlider_Ctor", godot_icall_EditorSpinSlider_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorSyntaxHighlighter_Ctor", godot_icall_EditorSyntaxHighlighter_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorTranslationParserPlugin_Ctor", godot_icall_EditorTranslationParserPlugin_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_EditorVCSInterface_Ctor", godot_icall_EditorVCSInterface_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_ScriptCreateDialog_Ctor", godot_icall_ScriptCreateDialog_Ctor);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_VisualScriptCustomNodes_get_singleton", godot_icall_VisualScriptCustomNodes_get_singleton);
#endif // TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_0", godot_icall_3_0);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1", godot_icall_1_1);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_2", godot_icall_0_2);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_3", godot_icall_0_3);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_4", godot_icall_0_4);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_5", godot_icall_3_5);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_6", godot_icall_1_6);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_7", godot_icall_2_7);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_8", godot_icall_1_8);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_9", godot_icall_2_9);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_10", godot_icall_1_10);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_11", godot_icall_1_11);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_12", godot_icall_1_12);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_13", godot_icall_0_13);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_14", godot_icall_2_14);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_15", godot_icall_3_15);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_16", godot_icall_3_16);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_17", godot_icall_2_17);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_18", godot_icall_1_18);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_19", godot_icall_2_19);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_20", godot_icall_2_20);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_21", godot_icall_3_21);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_22", godot_icall_1_22);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_23", godot_icall_2_23);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_24", godot_icall_2_24);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_25", godot_icall_1_25);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_26", godot_icall_2_26);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_27", godot_icall_0_27);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_28", godot_icall_0_28);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_29", godot_icall_1_29);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_30", godot_icall_0_30);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_31", godot_icall_3_31);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_32", godot_icall_1_32);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_33", godot_icall_1_33);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_34", godot_icall_1_34);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_35", godot_icall_0_35);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_36", godot_icall_1_36);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_37", godot_icall_0_37);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_38", godot_icall_1_38);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_39", godot_icall_0_39);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_40", godot_icall_2_40);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_41", godot_icall_1_41);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_42", godot_icall_0_42);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_43", godot_icall_1_43);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_44", godot_icall_0_44);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_45", godot_icall_1_45);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_46", godot_icall_0_46);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_47", godot_icall_1_47);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_48", godot_icall_0_48);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_49", godot_icall_2_49);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_50", godot_icall_1_50);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_51", godot_icall_2_51);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_52", godot_icall_1_52);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_53", godot_icall_2_53);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_54", godot_icall_1_54);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_55", godot_icall_1_55);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_56", godot_icall_2_56);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_57", godot_icall_2_57);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_58", godot_icall_2_58);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_59", godot_icall_2_59);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_60", godot_icall_1_60);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_61", godot_icall_3_61);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_62", godot_icall_3_62);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_63", godot_icall_3_63);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_64", godot_icall_4_64);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_65", godot_icall_2_65);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_66", godot_icall_3_66);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_67", godot_icall_3_67);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_68", godot_icall_3_68);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_69", godot_icall_2_69);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_70", godot_icall_1_70);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_71", godot_icall_2_71);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_72", godot_icall_2_72);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_73", godot_icall_3_73);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_74", godot_icall_1_74);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_75", godot_icall_1_75);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_76", godot_icall_3_76);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_77", godot_icall_2_77);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_78", godot_icall_2_78);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_79", godot_icall_2_79);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_80", godot_icall_6_80);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_81", godot_icall_4_81);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_82", godot_icall_2_82);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_83", godot_icall_2_83);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_84", godot_icall_5_84);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_85", godot_icall_3_85);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_86", godot_icall_2_86);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_87", godot_icall_4_87);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_88", godot_icall_3_88);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_89", godot_icall_3_89);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_90", godot_icall_0_90);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_91", godot_icall_3_91);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_92", godot_icall_2_92);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_93", godot_icall_2_93);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_94", godot_icall_1_94);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_95", godot_icall_1_95);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_96", godot_icall_1_96);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_97", godot_icall_0_97);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_98", godot_icall_1_98);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_99", godot_icall_2_99);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_100", godot_icall_1_100);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_101", godot_icall_1_101);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_102", godot_icall_7_102);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_103", godot_icall_8_103);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_104", godot_icall_7_104);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_105", godot_icall_2_105);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_106", godot_icall_1_106);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_107", godot_icall_0_107);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_108", godot_icall_3_108);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_109", godot_icall_1_109);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_110", godot_icall_3_110);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_111", godot_icall_2_111);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_112", godot_icall_1_112);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_113", godot_icall_4_113);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_114", godot_icall_1_114);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_115", godot_icall_0_115);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_116", godot_icall_0_116);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_117", godot_icall_3_117);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_118", godot_icall_1_118);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_119", godot_icall_3_119);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_120", godot_icall_2_120);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_121", godot_icall_2_121);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_122", godot_icall_1_122);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_123", godot_icall_0_123);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_124", godot_icall_2_124);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_125", godot_icall_1_125);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_126", godot_icall_2_126);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_127", godot_icall_3_127);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_128", godot_icall_1_128);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_129", godot_icall_1_129);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_130", godot_icall_0_130);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_131", godot_icall_0_131);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_132", godot_icall_1_132);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_133", godot_icall_0_133);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_134", godot_icall_2_134);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_135", godot_icall_1_135);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_136", godot_icall_1_136);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_137", godot_icall_3_137);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_138", godot_icall_2_138);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_139", godot_icall_4_139);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_140", godot_icall_2_140);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_141", godot_icall_0_141);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_142", godot_icall_0_142);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_143", godot_icall_2_143);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_144", godot_icall_0_144);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_145", godot_icall_0_145);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_146", godot_icall_0_146);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_147", godot_icall_2_147);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_148", godot_icall_0_148);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_149", godot_icall_1_149);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_150", godot_icall_0_150);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_151", godot_icall_1_151);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_152", godot_icall_0_152);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_153", godot_icall_2_153);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_154", godot_icall_0_154);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_155", godot_icall_5_155);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_156", godot_icall_3_156);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_157", godot_icall_1_157);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_158", godot_icall_1_158);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_159", godot_icall_1_159);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_160", godot_icall_2_160);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_161", godot_icall_1_161);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_162", godot_icall_0_162);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_163", godot_icall_0_163);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_164", godot_icall_1_164);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_165", godot_icall_2_165);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_166", godot_icall_1_166);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_167", godot_icall_0_167);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_168", godot_icall_0_168);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_169", godot_icall_0_169);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_170", godot_icall_1_170);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_171", godot_icall_0_171);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_172", godot_icall_1_172);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_173", godot_icall_0_173);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_174", godot_icall_0_174);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_175", godot_icall_0_175);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_176", godot_icall_0_176);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_177", godot_icall_0_177);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_178", godot_icall_0_178);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_179", godot_icall_3_179);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_180", godot_icall_1_180);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_181", godot_icall_3_181);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_182", godot_icall_2_182);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_183", godot_icall_3_183);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_184", godot_icall_3_184);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_185", godot_icall_3_185);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_186", godot_icall_2_186);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_187", godot_icall_0_187);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_188", godot_icall_0_188);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_189", godot_icall_0_189);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_190", godot_icall_1_190);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_191", godot_icall_1_191);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_192", godot_icall_1_192);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_193", godot_icall_0_193);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_194", godot_icall_0_194);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_195", godot_icall_0_195);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_196", godot_icall_1_196);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_197", godot_icall_0_197);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_198", godot_icall_0_198);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_199", godot_icall_0_199);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_200", godot_icall_1_200);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_201", godot_icall_0_201);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_202", godot_icall_0_202);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_203", godot_icall_1_203);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_204", godot_icall_0_204);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_205", godot_icall_0_205);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_206", godot_icall_0_206);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_207", godot_icall_0_207);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_208", godot_icall_0_208);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_209", godot_icall_0_209);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_210", godot_icall_0_210);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_211", godot_icall_1_211);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_212", godot_icall_0_212);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_213", godot_icall_0_213);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_214", godot_icall_0_214);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_215", godot_icall_0_215);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_216", godot_icall_0_216);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_217", godot_icall_0_217);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_218", godot_icall_0_218);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_219", godot_icall_0_219);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_220", godot_icall_0_220);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_221", godot_icall_0_221);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_222", godot_icall_0_222);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_223", godot_icall_0_223);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_224", godot_icall_0_224);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_225", godot_icall_0_225);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_226", godot_icall_0_226);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_227", godot_icall_2_227);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_228", godot_icall_2_228);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_229", godot_icall_2_229);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_230", godot_icall_2_230);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_231", godot_icall_0_231);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_232", godot_icall_2_232);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_233", godot_icall_1_233);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_234", godot_icall_0_234);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_235", godot_icall_1_235);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_236", godot_icall_0_236);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_237", godot_icall_0_237);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_238", godot_icall_0_238);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_239", godot_icall_2_239);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_240", godot_icall_0_240);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_241", godot_icall_0_241);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_242", godot_icall_0_242);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_243", godot_icall_1_243);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_244", godot_icall_0_244);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_245", godot_icall_0_245);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_246", godot_icall_1_246);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_247", godot_icall_0_247);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_248", godot_icall_1_248);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_249", godot_icall_0_249);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_250", godot_icall_0_250);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_251", godot_icall_0_251);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_252", godot_icall_0_252);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_253", godot_icall_0_253);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_254", godot_icall_0_254);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_255", godot_icall_0_255);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_256", godot_icall_0_256);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_257", godot_icall_0_257);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_258", godot_icall_0_258);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_259", godot_icall_0_259);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_260", godot_icall_1_260);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_261", godot_icall_1_261);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_262", godot_icall_0_262);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_263", godot_icall_0_263);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_264", godot_icall_1_264);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_265", godot_icall_1_265);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_266", godot_icall_1_266);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_267", godot_icall_2_267);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_268", godot_icall_3_268);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_269", godot_icall_4_269);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_270", godot_icall_0_270);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_271", godot_icall_0_271);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_272", godot_icall_0_272);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_273", godot_icall_0_273);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_274", godot_icall_0_274);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_275", godot_icall_0_275);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_276", godot_icall_0_276);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_277", godot_icall_0_277);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_278", godot_icall_1_278);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_279", godot_icall_0_279);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_280", godot_icall_5_280);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_281", godot_icall_5_281);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_282", godot_icall_4_282);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_283", godot_icall_4_283);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_284", godot_icall_8_284);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_285", godot_icall_3_285);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_286", godot_icall_3_286);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_287", godot_icall_4_287);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_288", godot_icall_3_288);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_289", godot_icall_3_289);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_290", godot_icall_5_290);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_291", godot_icall_6_291);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_292", godot_icall_6_292);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_293", godot_icall_2_293);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_294", godot_icall_5_294);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_295", godot_icall_4_295);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_296", godot_icall_4_296);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_297", godot_icall_10_297);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_298", godot_icall_11_298);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_299", godot_icall_8_299);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_300", godot_icall_4_300);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_301", godot_icall_2_301);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_302", godot_icall_3_302);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_303", godot_icall_4_303);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_304", godot_icall_0_304);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_305", godot_icall_1_305);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_306", godot_icall_0_306);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_307", godot_icall_0_307);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_308", godot_icall_0_308);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_309", godot_icall_0_309);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_310", godot_icall_0_310);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_311", godot_icall_1_311);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_312", godot_icall_0_312);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_313", godot_icall_1_313);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_314", godot_icall_0_314);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_315", godot_icall_1_315);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_316", godot_icall_1_316);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_317", godot_icall_0_317);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_318", godot_icall_0_318);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_319", godot_icall_1_319);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_320", godot_icall_1_320);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_321", godot_icall_0_321);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_322", godot_icall_0_322);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_323", godot_icall_0_323);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_324", godot_icall_1_324);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_325", godot_icall_1_325);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_326", godot_icall_0_326);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_327", godot_icall_1_327);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_328", godot_icall_2_328);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_329", godot_icall_2_329);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_330", godot_icall_2_330);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_331", godot_icall_3_331);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_332", godot_icall_3_332);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_333", godot_icall_2_333);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_334", godot_icall_2_334);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_335", godot_icall_3_335);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_336", godot_icall_3_336);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_337", godot_icall_1_337);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_338", godot_icall_1_338);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_339", godot_icall_3_339);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_340", godot_icall_6_340);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_341", godot_icall_1_341);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_342", godot_icall_2_342);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_343", godot_icall_1_343);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_344", godot_icall_4_344);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_345", godot_icall_0_345);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_346", godot_icall_1_346);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_347", godot_icall_2_347);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_348", godot_icall_1_348);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_349", godot_icall_1_349);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_350", godot_icall_2_350);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_351", godot_icall_1_351);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_352", godot_icall_2_352);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_353", godot_icall_1_353);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_354", godot_icall_2_354);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_355", godot_icall_1_355);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_356", godot_icall_2_356);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_357", godot_icall_2_357);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_358", godot_icall_2_358);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_359", godot_icall_0_359);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_360", godot_icall_2_360);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_361", godot_icall_1_361);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_362", godot_icall_2_362);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_363", godot_icall_0_363);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_364", godot_icall_0_364);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_365", godot_icall_0_365);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_366", godot_icall_0_366);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_367", godot_icall_0_367);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_368", godot_icall_0_368);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_369", godot_icall_3_369);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_370", godot_icall_3_370);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_371", godot_icall_2_371);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_372", godot_icall_1_372);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_373", godot_icall_2_373);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_374", godot_icall_2_374);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_375", godot_icall_2_375);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_376", godot_icall_0_376);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_377", godot_icall_4_377);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_378", godot_icall_4_378);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_379", godot_icall_0_379);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_380", godot_icall_0_380);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_381", godot_icall_0_381);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_382", godot_icall_2_382);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_383", godot_icall_2_383);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_384", godot_icall_2_384);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_385", godot_icall_2_385);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_386", godot_icall_2_386);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_387", godot_icall_2_387);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_388", godot_icall_0_388);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_389", godot_icall_0_389);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_390", godot_icall_1_390);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_391", godot_icall_0_391);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_392", godot_icall_1_392);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_393", godot_icall_2_393);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_394", godot_icall_0_394);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_395", godot_icall_0_395);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_396", godot_icall_1_396);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_397", godot_icall_1_397);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_398", godot_icall_4_398);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_399", godot_icall_3_399);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_400", godot_icall_4_400);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_401", godot_icall_2_401);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_402", godot_icall_3_402);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_403", godot_icall_2_403);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_404", godot_icall_2_404);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_405", godot_icall_1_405);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_406", godot_icall_5_406);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_407", godot_icall_2_407);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_408", godot_icall_1_408);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_409", godot_icall_1_409);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_410", godot_icall_4_410);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_411", godot_icall_2_411);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_412", godot_icall_1_412);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_413", godot_icall_2_413);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_414", godot_icall_2_414);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_415", godot_icall_4_415);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_416", godot_icall_2_416);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_417", godot_icall_1_417);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_418", godot_icall_2_418);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_419", godot_icall_1_419);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_420", godot_icall_2_420);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_421", godot_icall_0_421);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_422", godot_icall_2_422);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_423", godot_icall_0_423);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_424", godot_icall_3_424);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_425", godot_icall_1_425);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_426", godot_icall_0_426);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_427", godot_icall_0_427);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_428", godot_icall_0_428);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_429", godot_icall_0_429);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_430", godot_icall_6_430);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_431", godot_icall_7_431);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_432", godot_icall_8_432);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_433", godot_icall_4_433);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_434", godot_icall_2_434);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_435", godot_icall_2_435);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_436", godot_icall_2_436);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_437", godot_icall_2_437);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_438", godot_icall_2_438);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_439", godot_icall_2_439);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_440", godot_icall_2_440);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_441", godot_icall_2_441);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_442", godot_icall_2_442);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_443", godot_icall_3_443);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_444", godot_icall_3_444);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_445", godot_icall_3_445);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_446", godot_icall_3_446);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_447", godot_icall_3_447);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_448", godot_icall_3_448);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_449", godot_icall_7_449);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_450", godot_icall_2_450);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_451", godot_icall_0_451);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_452", godot_icall_0_452);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_453", godot_icall_1_453);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_454", godot_icall_1_454);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_455", godot_icall_1_455);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_456", godot_icall_1_456);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_457", godot_icall_4_457);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_458", godot_icall_2_458);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_459", godot_icall_2_459);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_460", godot_icall_2_460);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_461", godot_icall_2_461);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_462", godot_icall_2_462);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_463", godot_icall_2_463);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_464", godot_icall_1_464);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_465", godot_icall_1_465);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_466", godot_icall_3_466);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_467", godot_icall_2_467);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_468", godot_icall_1_468);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_469", godot_icall_6_469);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_470", godot_icall_0_470);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_471", godot_icall_3_471);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_472", godot_icall_4_472);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_473", godot_icall_4_473);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_474", godot_icall_1_474);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_475", godot_icall_6_475);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_476", godot_icall_4_476);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_477", godot_icall_4_477);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_478", godot_icall_1_478);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_479", godot_icall_3_479);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_480", godot_icall_2_480);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_481", godot_icall_3_481);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_482", godot_icall_1_482);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_483", godot_icall_5_483);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_484", godot_icall_1_484);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_485", godot_icall_2_485);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_486", godot_icall_0_486);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_487", godot_icall_1_487);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_488", godot_icall_3_488);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_489", godot_icall_0_489);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_490", godot_icall_4_490);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_491", godot_icall_2_491);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_492", godot_icall_2_492);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_493", godot_icall_3_493);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_494", godot_icall_3_494);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_495", godot_icall_3_495);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_496", godot_icall_0_496);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_497", godot_icall_0_497);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_498", godot_icall_0_498);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_499", godot_icall_0_499);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_500", godot_icall_0_500);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_1_501", godot_icall_1_501);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_1_502", godot_icall_1_502);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_503", godot_icall_3_503);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_504", godot_icall_3_504);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_505", godot_icall_3_505);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_506", godot_icall_0_506);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_507", godot_icall_0_507);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_508", godot_icall_0_508);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_509", godot_icall_4_509);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_510", godot_icall_0_510);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_511", godot_icall_0_511);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_512", godot_icall_2_512);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_513", godot_icall_0_513);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_514", godot_icall_0_514);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_515", godot_icall_0_515);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_516", godot_icall_2_516);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_517", godot_icall_0_517);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_518", godot_icall_4_518);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_519", godot_icall_4_519);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_520", godot_icall_3_520);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_5_521", godot_icall_5_521);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_522", godot_icall_0_522);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_523", godot_icall_0_523);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_5_524", godot_icall_5_524);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_525", godot_icall_4_525);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_526", godot_icall_3_526);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_527", godot_icall_2_527);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_528", godot_icall_2_528);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_529", godot_icall_2_529);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_530", godot_icall_2_530);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_2_531", godot_icall_2_531);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_532", godot_icall_2_532);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_533", godot_icall_0_533);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_534", godot_icall_4_534);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_535", godot_icall_0_535);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_536", godot_icall_1_536);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_537", godot_icall_2_537);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_538", godot_icall_0_538);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_539", godot_icall_0_539);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_540", godot_icall_0_540);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_541", godot_icall_4_541);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_542", godot_icall_0_542);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_543", godot_icall_4_543);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_544", godot_icall_4_544);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_545", godot_icall_2_545);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_6_546", godot_icall_6_546);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_547", godot_icall_1_547);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_548", godot_icall_3_548);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_1_549", godot_icall_1_549);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_550", godot_icall_1_550);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_551", godot_icall_0_551);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_552", godot_icall_1_552);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_553", godot_icall_2_553);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_554", godot_icall_1_554);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_555", godot_icall_2_555);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_556", godot_icall_3_556);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_557", godot_icall_0_557);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_558", godot_icall_0_558);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_559", godot_icall_0_559);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_560", godot_icall_0_560);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_561", godot_icall_0_561);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_562", godot_icall_0_562);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_563", godot_icall_0_563);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_564", godot_icall_0_564);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_565", godot_icall_2_565);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_566", godot_icall_4_566);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_567", godot_icall_0_567);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_568", godot_icall_0_568);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_569", godot_icall_0_569);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_570", godot_icall_0_570);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_571", godot_icall_0_571);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_572", godot_icall_0_572);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_573", godot_icall_3_573);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_574", godot_icall_3_574);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_575", godot_icall_3_575);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_576", godot_icall_2_576);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_577", godot_icall_1_577);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_578", godot_icall_1_578);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_579", godot_icall_2_579);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_580", godot_icall_2_580);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_581", godot_icall_1_581);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_582", godot_icall_1_582);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_583", godot_icall_0_583);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_584", godot_icall_0_584);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_585", godot_icall_0_585);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_586", godot_icall_0_586);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_587", godot_icall_0_587);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_588", godot_icall_1_588);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_589", godot_icall_1_589);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_590", godot_icall_5_590);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_591", godot_icall_4_591);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_592", godot_icall_10_592);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_593", godot_icall_11_593);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_594", godot_icall_3_594);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_595", godot_icall_8_595);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_596", godot_icall_0_596);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_597", godot_icall_0_597);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_598", godot_icall_1_598);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_599", godot_icall_2_599);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_600", godot_icall_2_600);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_601", godot_icall_3_601);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_602", godot_icall_2_602);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_603", godot_icall_3_603);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_604", godot_icall_4_604);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_605", godot_icall_3_605);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_606", godot_icall_4_606);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_607", godot_icall_3_607);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_608", godot_icall_2_608);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_609", godot_icall_4_609);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_610", godot_icall_4_610);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_611", godot_icall_3_611);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_612", godot_icall_4_612);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_613", godot_icall_3_613);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_614", godot_icall_4_614);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_615", godot_icall_3_615);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_616", godot_icall_3_616);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_617", godot_icall_4_617);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_618", godot_icall_3_618);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_619", godot_icall_0_619);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_620", godot_icall_1_620);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_621", godot_icall_5_621);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_622", godot_icall_5_622);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_623", godot_icall_4_623);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_624", godot_icall_2_624);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_625", godot_icall_1_625);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_626", godot_icall_2_626);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_627", godot_icall_0_627);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_628", godot_icall_1_628);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_629", godot_icall_1_629);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_630", godot_icall_0_630);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_631", godot_icall_1_631);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_632", godot_icall_0_632);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_633", godot_icall_1_633);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_634", godot_icall_0_634);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_635", godot_icall_1_635);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_636", godot_icall_1_636);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_637", godot_icall_0_637);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_638", godot_icall_5_638);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_639", godot_icall_0_639);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_640", godot_icall_1_640);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_641", godot_icall_5_641);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_642", godot_icall_0_642);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_643", godot_icall_0_643);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_644", godot_icall_0_644);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_645", godot_icall_0_645);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_646", godot_icall_3_646);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_647", godot_icall_4_647);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_648", godot_icall_4_648);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_649", godot_icall_3_649);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_650", godot_icall_4_650);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_651", godot_icall_2_651);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_652", godot_icall_1_652);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_653", godot_icall_1_653);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_654", godot_icall_2_654);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_655", godot_icall_3_655);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_656", godot_icall_4_656);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_657", godot_icall_1_657);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_658", godot_icall_1_658);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_659", godot_icall_4_659);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_660", godot_icall_5_660);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_661", godot_icall_4_661);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_662", godot_icall_3_662);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_663", godot_icall_5_663);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_664", godot_icall_4_664);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_665", godot_icall_4_665);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_666", godot_icall_3_666);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_667", godot_icall_2_667);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_668", godot_icall_0_668);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_669", godot_icall_0_669);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_670", godot_icall_0_670);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_671", godot_icall_0_671);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_672", godot_icall_2_672);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_673", godot_icall_2_673);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_674", godot_icall_1_674);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_675", godot_icall_1_675);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_676", godot_icall_0_676);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_677", godot_icall_0_677);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_678", godot_icall_0_678);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_679", godot_icall_4_679);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_680", godot_icall_4_680);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_681", godot_icall_4_681);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_682", godot_icall_5_682);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_683", godot_icall_2_683);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_684", godot_icall_0_684);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_685", godot_icall_0_685);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_686", godot_icall_10_686);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_687", godot_icall_0_687);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_688", godot_icall_0_688);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_689", godot_icall_0_689);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_690", godot_icall_3_690);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_691", godot_icall_1_691);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_692", godot_icall_1_692);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_693", godot_icall_1_693);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_694", godot_icall_2_694);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_695", godot_icall_2_695);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_696", godot_icall_1_696);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_697", godot_icall_4_697);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_698", godot_icall_0_698);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_699", godot_icall_4_699);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_700", godot_icall_4_700);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_701", godot_icall_0_701);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_702", godot_icall_1_702);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_703", godot_icall_5_703);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_704", godot_icall_5_704);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_705", godot_icall_2_705);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_706", godot_icall_1_706);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_707", godot_icall_0_707);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_708", godot_icall_1_708);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_709", godot_icall_4_709);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_710", godot_icall_5_710);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_711", godot_icall_2_711);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_712", godot_icall_1_712);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_713", godot_icall_1_713);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_714", godot_icall_3_714);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_715", godot_icall_2_715);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_716", godot_icall_0_716);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_717", godot_icall_1_717);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_718", godot_icall_3_718);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_719", godot_icall_2_719);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_720", godot_icall_3_720);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_721", godot_icall_4_721);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_722", godot_icall_2_722);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_723", godot_icall_1_723);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_724", godot_icall_1_724);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_725", godot_icall_2_725);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_726", godot_icall_2_726);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_727", godot_icall_3_727);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_728", godot_icall_6_728);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_729", godot_icall_1_729);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_730", godot_icall_2_730);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_731", godot_icall_1_731);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_732", godot_icall_7_732);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_733", godot_icall_2_733);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_734", godot_icall_1_734);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_735", godot_icall_2_735);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_736", godot_icall_1_736);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_737", godot_icall_2_737);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_738", godot_icall_2_738);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_739", godot_icall_5_739);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_740", godot_icall_4_740);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_741", godot_icall_0_741);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_742", godot_icall_0_742);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_743", godot_icall_3_743);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_744", godot_icall_2_744);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_745", godot_icall_1_745);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_746", godot_icall_2_746);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_747", godot_icall_0_747);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_748", godot_icall_0_748);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_749", godot_icall_0_749);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_750", godot_icall_0_750);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_751", godot_icall_1_751);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_752", godot_icall_2_752);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_753", godot_icall_1_753);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_754", godot_icall_3_754);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_755", godot_icall_1_755);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_756", godot_icall_2_756);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_757", godot_icall_3_757);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_758", godot_icall_2_758);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_759", godot_icall_1_759);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_760", godot_icall_3_760);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_761", godot_icall_2_761);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_762", godot_icall_1_762);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_763", godot_icall_2_763);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_764", godot_icall_1_764);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_765", godot_icall_0_765);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_766", godot_icall_0_766);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_767", godot_icall_2_767);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_768", godot_icall_0_768);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_769", godot_icall_4_769);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_770", godot_icall_0_770);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_771", godot_icall_2_771);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_772", godot_icall_3_772);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_773", godot_icall_2_773);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_774", godot_icall_2_774);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_775", godot_icall_3_775);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_776", godot_icall_1_776);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_777", godot_icall_2_777);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_778", godot_icall_1_778);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_779", godot_icall_1_779);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_780", godot_icall_2_780);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_781", godot_icall_3_781);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_782", godot_icall_2_782);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_783", godot_icall_1_783);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_784", godot_icall_0_784);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_785", godot_icall_0_785);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_786", godot_icall_0_786);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_787", godot_icall_0_787);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_788", godot_icall_0_788);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_789", godot_icall_0_789);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_790", godot_icall_0_790);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_791", godot_icall_0_791);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_792", godot_icall_0_792);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_793", godot_icall_0_793);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_794", godot_icall_0_794);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_795", godot_icall_0_795);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_796", godot_icall_0_796);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_797", godot_icall_0_797);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_798", godot_icall_0_798);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_799", godot_icall_0_799);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_800", godot_icall_4_800);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_801", godot_icall_2_801);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_802", godot_icall_0_802);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_803", godot_icall_0_803);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_804", godot_icall_0_804);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_805", godot_icall_0_805);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_806", godot_icall_2_806);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_807", godot_icall_1_807);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_808", godot_icall_1_808);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_809", godot_icall_2_809);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_810", godot_icall_1_810);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_811", godot_icall_2_811);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_812", godot_icall_1_812);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_813", godot_icall_2_813);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_814", godot_icall_1_814);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_815", godot_icall_2_815);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_816", godot_icall_1_816);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_817", godot_icall_2_817);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_818", godot_icall_1_818);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_819", godot_icall_2_819);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_820", godot_icall_2_820);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_821", godot_icall_2_821);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_822", godot_icall_1_822);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_823", godot_icall_1_823);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_824", godot_icall_1_824);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_825", godot_icall_1_825);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_826", godot_icall_1_826);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_827", godot_icall_0_827);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_828", godot_icall_2_828);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_829", godot_icall_1_829);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_830", godot_icall_0_830);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_831", godot_icall_4_831);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_832", godot_icall_0_832);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_833", godot_icall_0_833);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_834", godot_icall_0_834);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_835", godot_icall_1_835);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_836", godot_icall_0_836);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_837", godot_icall_0_837);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_838", godot_icall_1_838);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_839", godot_icall_1_839);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_840", godot_icall_0_840);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_841", godot_icall_0_841);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_842", godot_icall_0_842);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_843", godot_icall_2_843);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_844", godot_icall_0_844);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_845", godot_icall_2_845);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_846", godot_icall_0_846);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_847", godot_icall_2_847);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_848", godot_icall_1_848);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_849", godot_icall_2_849);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_850", godot_icall_1_850);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_851", godot_icall_5_851);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_852", godot_icall_2_852);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_853", godot_icall_2_853);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_854", godot_icall_1_854);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_855", godot_icall_2_855);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_856", godot_icall_2_856);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_857", godot_icall_1_857);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_858", godot_icall_2_858);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_859", godot_icall_1_859);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_860", godot_icall_2_860);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_861", godot_icall_2_861);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_862", godot_icall_1_862);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_863", godot_icall_2_863);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_864", godot_icall_2_864);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_865", godot_icall_2_865);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_866", godot_icall_4_866);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_867", godot_icall_2_867);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_868", godot_icall_1_868);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_869", godot_icall_5_869);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_870", godot_icall_4_870);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_871", godot_icall_2_871);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_872", godot_icall_2_872);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_873", godot_icall_2_873);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_874", godot_icall_2_874);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_875", godot_icall_2_875);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_876", godot_icall_0_876);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_877", godot_icall_2_877);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_878", godot_icall_3_878);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_879", godot_icall_1_879);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_880", godot_icall_1_880);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_881", godot_icall_2_881);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_882", godot_icall_1_882);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_883", godot_icall_3_883);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_884", godot_icall_4_884);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_885", godot_icall_1_885);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_886", godot_icall_1_886);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_887", godot_icall_1_887);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_888", godot_icall_2_888);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_889", godot_icall_3_889);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_890", godot_icall_0_890);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_891", godot_icall_0_891);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_892", godot_icall_0_892);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_893", godot_icall_0_893);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_894", godot_icall_0_894);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_895", godot_icall_5_895);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_896", godot_icall_2_896);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_897", godot_icall_3_897);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_898", godot_icall_2_898);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_899", godot_icall_1_899);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_900", godot_icall_0_900);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_901", godot_icall_0_901);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_902", godot_icall_1_902);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_903", godot_icall_0_903);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_904", godot_icall_0_904);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_905", godot_icall_3_905);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_906", godot_icall_2_906);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_907", godot_icall_2_907);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_908", godot_icall_3_908);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_909", godot_icall_2_909);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_910", godot_icall_3_910);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_911", godot_icall_4_911);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_912", godot_icall_5_912);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_913", godot_icall_0_913);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_914", godot_icall_5_914);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_915", godot_icall_3_915);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_916", godot_icall_1_916);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_917", godot_icall_2_917);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_918", godot_icall_1_918);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_919", godot_icall_2_919);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_920", godot_icall_1_920);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_921", godot_icall_1_921);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_922", godot_icall_2_922);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_923", godot_icall_2_923);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_924", godot_icall_2_924);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_925", godot_icall_2_925);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_926", godot_icall_4_926);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_927", godot_icall_2_927);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_928", godot_icall_2_928);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_929", godot_icall_4_929);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_930", godot_icall_0_930);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_931", godot_icall_0_931);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_932", godot_icall_0_932);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_933", godot_icall_0_933);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_934", godot_icall_1_934);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_935", godot_icall_1_935);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_936", godot_icall_1_936);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_937", godot_icall_1_937);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_938", godot_icall_0_938);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_939", godot_icall_1_939);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_940", godot_icall_3_940);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_941", godot_icall_4_941);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_942", godot_icall_3_942);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_943", godot_icall_1_943);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_944", godot_icall_1_944);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_945", godot_icall_0_945);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_946", godot_icall_2_946);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_947", godot_icall_4_947);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_948", godot_icall_0_948);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_949", godot_icall_3_949);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_950", godot_icall_0_950);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_951", godot_icall_0_951);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_952", godot_icall_0_952);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_953", godot_icall_0_953);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_954", godot_icall_0_954);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_955", godot_icall_3_955);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_956", godot_icall_0_956);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_957", godot_icall_0_957);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_958", godot_icall_0_958);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_959", godot_icall_3_959);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_960", godot_icall_4_960);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_961", godot_icall_4_961);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_962", godot_icall_5_962);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_963", godot_icall_2_963);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_964", godot_icall_0_964);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_965", godot_icall_0_965);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_966", godot_icall_2_966);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_967", godot_icall_1_967);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_968", godot_icall_1_968);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_969", godot_icall_2_969);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_970", godot_icall_1_970);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_971", godot_icall_1_971);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_972", godot_icall_3_972);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_973", godot_icall_2_973);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_974", godot_icall_1_974);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_975", godot_icall_4_975);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_976", godot_icall_3_976);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_977", godot_icall_3_977);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_978", godot_icall_3_978);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_979", godot_icall_2_979);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_980", godot_icall_2_980);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_981", godot_icall_3_981);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_982", godot_icall_2_982);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_983", godot_icall_1_983);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_984", godot_icall_2_984);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_985", godot_icall_1_985);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_986", godot_icall_2_986);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_987", godot_icall_1_987);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_988", godot_icall_4_988);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_989", godot_icall_1_989);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_990", godot_icall_3_990);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_991", godot_icall_1_991);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_992", godot_icall_3_992);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_993", godot_icall_3_993);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_994", godot_icall_1_994);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_995", godot_icall_4_995);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_996", godot_icall_6_996);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_997", godot_icall_5_997);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_998", godot_icall_1_998);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_999", godot_icall_1_999);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1000", godot_icall_1_1000);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1001", godot_icall_4_1001);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1002", godot_icall_3_1002);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1003", godot_icall_2_1003);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1004", godot_icall_1_1004);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1005", godot_icall_1_1005);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1006", godot_icall_3_1006);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1007", godot_icall_2_1007);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1008", godot_icall_1_1008);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1009", godot_icall_1_1009);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1010", godot_icall_5_1010);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1011", godot_icall_5_1011);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1012", godot_icall_1_1012);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1013", godot_icall_4_1013);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1014", godot_icall_3_1014);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1015", godot_icall_4_1015);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1016", godot_icall_3_1016);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1017", godot_icall_1_1017);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1018", godot_icall_0_1018);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1019", godot_icall_2_1019);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1020", godot_icall_2_1020);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1021", godot_icall_4_1021);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1022", godot_icall_5_1022);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1023", godot_icall_3_1023);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1024", godot_icall_4_1024);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1025", godot_icall_3_1025);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1026", godot_icall_3_1026);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1027", godot_icall_1_1027);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1028", godot_icall_4_1028);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1029", godot_icall_0_1029);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1030", godot_icall_1_1030);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1031", godot_icall_0_1031);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1032", godot_icall_3_1032);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1033", godot_icall_1_1033);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1034", godot_icall_0_1034);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1035", godot_icall_1_1035);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1036", godot_icall_1_1036);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1037", godot_icall_0_1037);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1038", godot_icall_0_1038);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1039", godot_icall_0_1039);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1040", godot_icall_0_1040);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1041", godot_icall_0_1041);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1042", godot_icall_0_1042);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1043", godot_icall_0_1043);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1044", godot_icall_0_1044);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1045", godot_icall_0_1045);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1046", godot_icall_0_1046);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1047", godot_icall_0_1047);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1048", godot_icall_0_1048);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1049", godot_icall_2_1049);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1050", godot_icall_1_1050);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1051", godot_icall_2_1051);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1052", godot_icall_0_1052);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1053", godot_icall_0_1053);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1054", godot_icall_0_1054);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1055", godot_icall_0_1055);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1056", godot_icall_0_1056);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1057", godot_icall_0_1057);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1058", godot_icall_0_1058);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1059", godot_icall_3_1059);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1060", godot_icall_3_1060);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1061", godot_icall_5_1061);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1062", godot_icall_1_1062);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1063", godot_icall_1_1063);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1064", godot_icall_3_1064);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1065", godot_icall_2_1065);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1066", godot_icall_6_1066);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1067", godot_icall_4_1067);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1068", godot_icall_2_1068);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1069", godot_icall_2_1069);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_1070", godot_icall_10_1070);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1071", godot_icall_7_1071);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1072", godot_icall_3_1072);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1073", godot_icall_2_1073);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1074", godot_icall_3_1074);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1075", godot_icall_1_1075);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1076", godot_icall_2_1076);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1077", godot_icall_3_1077);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1078", godot_icall_4_1078);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1079", godot_icall_3_1079);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1080", godot_icall_1_1080);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1081", godot_icall_1_1081);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1082", godot_icall_3_1082);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1083", godot_icall_1_1083);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1084", godot_icall_4_1084);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1085", godot_icall_3_1085);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1086", godot_icall_2_1086);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1087", godot_icall_2_1087);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1088", godot_icall_2_1088);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1089", godot_icall_1_1089);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1090", godot_icall_2_1090);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1091", godot_icall_3_1091);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1092", godot_icall_3_1092);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1093", godot_icall_3_1093);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1094", godot_icall_5_1094);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1095", godot_icall_4_1095);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1096", godot_icall_1_1096);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_1097", godot_icall_11_1097);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1098", godot_icall_2_1098);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1099", godot_icall_2_1099);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_1100", godot_icall_10_1100);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_1101", godot_icall_11_1101);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1102", godot_icall_2_1102);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1103", godot_icall_3_1103);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1104", godot_icall_3_1104);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1105", godot_icall_4_1105);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1106", godot_icall_2_1106);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1107", godot_icall_1_1107);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1108", godot_icall_1_1108);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1109", godot_icall_4_1109);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1110", godot_icall_1_1110);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1111", godot_icall_1_1111);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1112", godot_icall_2_1112);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1113", godot_icall_0_1113);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1114", godot_icall_2_1114);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1115", godot_icall_3_1115);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1116", godot_icall_2_1116);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1117", godot_icall_6_1117);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1118", godot_icall_3_1118);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1119", godot_icall_2_1119);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1120", godot_icall_1_1120);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1121", godot_icall_2_1121);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1122", godot_icall_3_1122);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1123", godot_icall_1_1123);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1124", godot_icall_2_1124);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1125", godot_icall_4_1125);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1126", godot_icall_3_1126);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1127", godot_icall_3_1127);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1128", godot_icall_3_1128);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1129", godot_icall_2_1129);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1130", godot_icall_2_1130);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1131", godot_icall_6_1131);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1132", godot_icall_1_1132);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1133", godot_icall_2_1133);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1134", godot_icall_2_1134);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1135", godot_icall_2_1135);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1136", godot_icall_4_1136);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1137", godot_icall_5_1137);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1138", godot_icall_3_1138);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1139", godot_icall_2_1139);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1140", godot_icall_2_1140);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1141", godot_icall_1_1141);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1142", godot_icall_2_1142);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1143", godot_icall_5_1143);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1144", godot_icall_4_1144);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1145", godot_icall_3_1145);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_1146", godot_icall_8_1146);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1147", godot_icall_1_1147);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1148", godot_icall_1_1148);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1149", godot_icall_3_1149);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1150", godot_icall_5_1150);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1151", godot_icall_1_1151);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1152", godot_icall_1_1152);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1153", godot_icall_2_1153);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1154", godot_icall_3_1154);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1155", godot_icall_6_1155);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1156", godot_icall_3_1156);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1157", godot_icall_3_1157);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1158", godot_icall_4_1158);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1159", godot_icall_5_1159);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1160", godot_icall_3_1160);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1161", godot_icall_3_1161);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1162", godot_icall_4_1162);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1163", godot_icall_3_1163);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1164", godot_icall_1_1164);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1165", godot_icall_4_1165);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1166", godot_icall_2_1166);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1167", godot_icall_6_1167);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_13_1168", godot_icall_13_1168);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_1169", godot_icall_9_1169);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1170", godot_icall_7_1170);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1171", godot_icall_6_1171);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_1172", godot_icall_10_1172);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_1173", godot_icall_9_1173);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_1174", godot_icall_11_1174);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_13_1175", godot_icall_13_1175);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1176", godot_icall_6_1176);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1177", godot_icall_3_1177);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1178", godot_icall_3_1178);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_8_1179", godot_icall_8_1179);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1180", godot_icall_2_1180);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1181", godot_icall_6_1181);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1182", godot_icall_4_1182);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1183", godot_icall_2_1183);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1184", godot_icall_3_1184);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1185", godot_icall_2_1185);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1186", godot_icall_3_1186);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1187", godot_icall_3_1187);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1188", godot_icall_3_1188);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1189", godot_icall_3_1189);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1190", godot_icall_6_1190);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1191", godot_icall_5_1191);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1192", godot_icall_3_1192);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1193", godot_icall_4_1193);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1194", godot_icall_6_1194);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1195", godot_icall_7_1195);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1196", godot_icall_7_1196);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_10_1197", godot_icall_10_1197);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1198", godot_icall_6_1198);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1199", godot_icall_5_1199);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_9_1200", godot_icall_9_1200);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1201", godot_icall_5_1201);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1202", godot_icall_3_1202);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1203", godot_icall_5_1203);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1204", godot_icall_5_1204);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1205", godot_icall_6_1205);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1206", godot_icall_3_1206);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1207", godot_icall_3_1207);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1208", godot_icall_1_1208);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1209", godot_icall_0_1209);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1210", godot_icall_3_1210);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1211", godot_icall_4_1211);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1212", godot_icall_2_1212);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1213", godot_icall_1_1213);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1214", godot_icall_2_1214);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1215", godot_icall_1_1215);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1216", godot_icall_3_1216);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1217", godot_icall_1_1217);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1218", godot_icall_1_1218);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1219", godot_icall_3_1219);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1220", godot_icall_1_1220);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1221", godot_icall_1_1221);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1222", godot_icall_2_1222);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1223", godot_icall_0_1223);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1224", godot_icall_5_1224);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1225", godot_icall_4_1225);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1226", godot_icall_7_1226);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1227", godot_icall_2_1227);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1228", godot_icall_1_1228);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1229", godot_icall_0_1229);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1230", godot_icall_0_1230);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1231", godot_icall_0_1231);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1232", godot_icall_0_1232);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1233", godot_icall_0_1233);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1234", godot_icall_0_1234);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1235", godot_icall_0_1235);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1236", godot_icall_2_1236);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1237", godot_icall_1_1237);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1238", godot_icall_2_1238);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1239", godot_icall_1_1239);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1240", godot_icall_1_1240);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1241", godot_icall_0_1241);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1242", godot_icall_2_1242);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1243", godot_icall_4_1243);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1244", godot_icall_3_1244);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1245", godot_icall_4_1245);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1246", godot_icall_3_1246);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1247", godot_icall_3_1247);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1248", godot_icall_1_1248);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1249", godot_icall_2_1249);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1250", godot_icall_1_1250);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1251", godot_icall_0_1251);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_4_1252", godot_icall_4_1252);
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_0_1253", godot_icall_0_1253);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1254", godot_icall_0_1254);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1255", godot_icall_0_1255);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1256", godot_icall_0_1256);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1257", godot_icall_3_1257);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1258", godot_icall_2_1258);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1259", godot_icall_0_1259);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1260", godot_icall_3_1260);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1261", godot_icall_5_1261);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1262", godot_icall_3_1262);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1263", godot_icall_5_1263);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1264", godot_icall_1_1264);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1265", godot_icall_0_1265);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1266", godot_icall_2_1266);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1267", godot_icall_4_1267);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1268", godot_icall_1_1268);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1269", godot_icall_2_1269);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1270", godot_icall_1_1270);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1271", godot_icall_4_1271);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1272", godot_icall_1_1272);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1273", godot_icall_2_1273);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1274", godot_icall_2_1274);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1275", godot_icall_0_1275);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1276", godot_icall_4_1276);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1277", godot_icall_1_1277);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1278", godot_icall_0_1278);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1279", godot_icall_1_1279);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1280", godot_icall_2_1280);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1281", godot_icall_0_1281);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1282", godot_icall_0_1282);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1283", godot_icall_0_1283);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1284", godot_icall_3_1284);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1285", godot_icall_0_1285);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1286", godot_icall_0_1286);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1287", godot_icall_0_1287);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1288", godot_icall_2_1288);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1289", godot_icall_1_1289);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1290", godot_icall_3_1290);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1291", godot_icall_1_1291);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1292", godot_icall_1_1292);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1293", godot_icall_1_1293);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1294", godot_icall_0_1294);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1295", godot_icall_0_1295);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1296", godot_icall_0_1296);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1297", godot_icall_4_1297);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1298", godot_icall_0_1298);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1299", godot_icall_2_1299);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1300", godot_icall_0_1300);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1301", godot_icall_2_1301);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1302", godot_icall_0_1302);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1303", godot_icall_2_1303);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1304", godot_icall_4_1304);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1305", godot_icall_0_1305);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1306", godot_icall_0_1306);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1307", godot_icall_0_1307);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1308", godot_icall_0_1308);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1309", godot_icall_1_1309);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1310", godot_icall_6_1310);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1311", godot_icall_2_1311);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1312", godot_icall_0_1312);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1313", godot_icall_3_1313);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1314", godot_icall_2_1314);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1315", godot_icall_0_1315);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1316", godot_icall_2_1316);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1317", godot_icall_0_1317);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1318", godot_icall_1_1318);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1319", godot_icall_0_1319);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1320", godot_icall_0_1320);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1321", godot_icall_1_1321);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1322", godot_icall_1_1322);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1323", godot_icall_0_1323);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1324", godot_icall_3_1324);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1325", godot_icall_4_1325);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1326", godot_icall_2_1326);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1327", godot_icall_2_1327);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1328", godot_icall_2_1328);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1329", godot_icall_1_1329);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1330", godot_icall_0_1330);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1331", godot_icall_4_1331);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1332", godot_icall_0_1332);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1333", godot_icall_0_1333);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1334", godot_icall_1_1334);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1335", godot_icall_3_1335);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1336", godot_icall_2_1336);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1337", godot_icall_2_1337);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1338", godot_icall_0_1338);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1339", godot_icall_0_1339);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1340", godot_icall_6_1340);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1341", godot_icall_4_1341);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1342", godot_icall_3_1342);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1343", godot_icall_1_1343);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1344", godot_icall_3_1344);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1345", godot_icall_4_1345);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1346", godot_icall_1_1346);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1347", godot_icall_6_1347);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1348", godot_icall_2_1348);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1349", godot_icall_4_1349);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1350", godot_icall_5_1350);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1351", godot_icall_5_1351);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1352", godot_icall_2_1352);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1353", godot_icall_2_1353);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1354", godot_icall_1_1354);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1355", godot_icall_1_1355);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1356", godot_icall_1_1356);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1357", godot_icall_2_1357);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1358", godot_icall_3_1358);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1359", godot_icall_2_1359);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1360", godot_icall_4_1360);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1361", godot_icall_3_1361);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1362", godot_icall_2_1362);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1363", godot_icall_3_1363);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1364", godot_icall_4_1364);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1365", godot_icall_3_1365);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1366", godot_icall_4_1366);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1367", godot_icall_3_1367);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1368", godot_icall_2_1368);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1369", godot_icall_3_1369);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1370", godot_icall_4_1370);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1371", godot_icall_3_1371);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1372", godot_icall_4_1372);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1373", godot_icall_3_1373);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1374", godot_icall_4_1374);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1375", godot_icall_3_1375);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1376", godot_icall_4_1376);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1377", godot_icall_3_1377);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1378", godot_icall_3_1378);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1379", godot_icall_2_1379);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1380", godot_icall_3_1380);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1381", godot_icall_4_1381);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1382", godot_icall_3_1382);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1383", godot_icall_4_1383);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1384", godot_icall_2_1384);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1385", godot_icall_6_1385);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1386", godot_icall_7_1386);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1387", godot_icall_2_1387);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1388", godot_icall_3_1388);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1389", godot_icall_1_1389);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1390", godot_icall_2_1390);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1391", godot_icall_5_1391);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1392", godot_icall_2_1392);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1393", godot_icall_1_1393);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1394", godot_icall_1_1394);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1395", godot_icall_7_1395);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1396", godot_icall_5_1396);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1397", godot_icall_4_1397);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1398", godot_icall_2_1398);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1399", godot_icall_5_1399);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1400", godot_icall_3_1400);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1401", godot_icall_3_1401);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1402", godot_icall_2_1402);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1403", godot_icall_1_1403);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1404", godot_icall_5_1404);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1405", godot_icall_4_1405);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1406", godot_icall_2_1406);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1407", godot_icall_3_1407);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1408", godot_icall_2_1408);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1409", godot_icall_2_1409);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1410", godot_icall_3_1410);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1411", godot_icall_2_1411);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1412", godot_icall_2_1412);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1413", godot_icall_2_1413);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1414", godot_icall_6_1414);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1415", godot_icall_7_1415);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1416", godot_icall_3_1416);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1417", godot_icall_2_1417);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1418", godot_icall_2_1418);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1419", godot_icall_3_1419);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1420", godot_icall_1_1420);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1421", godot_icall_1_1421);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1422", godot_icall_0_1422);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1423", godot_icall_4_1423);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1424", godot_icall_5_1424);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1425", godot_icall_6_1425);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1426", godot_icall_0_1426);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1427", godot_icall_0_1427);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1428", godot_icall_0_1428);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1429", godot_icall_1_1429);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1430", godot_icall_0_1430);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1431", godot_icall_3_1431);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1432", godot_icall_3_1432);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1433", godot_icall_3_1433);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1434", godot_icall_4_1434);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1435", godot_icall_3_1435);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1436", godot_icall_3_1436);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1437", godot_icall_4_1437);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1438", godot_icall_3_1438);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1439", godot_icall_2_1439);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1440", godot_icall_2_1440);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1441", godot_icall_1_1441);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1442", godot_icall_3_1442);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1443", godot_icall_2_1443);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1444", godot_icall_1_1444);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1445", godot_icall_0_1445);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1446", godot_icall_0_1446);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1447", godot_icall_5_1447);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1448", godot_icall_3_1448);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1449", godot_icall_3_1449);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1450", godot_icall_2_1450);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1451", godot_icall_3_1451);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1452", godot_icall_3_1452);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1453", godot_icall_5_1453);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1454", godot_icall_1_1454);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1455", godot_icall_1_1455);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1456", godot_icall_1_1456);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1457", godot_icall_2_1457);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1458", godot_icall_4_1458);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1459", godot_icall_1_1459);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1460", godot_icall_2_1460);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1461", godot_icall_1_1461);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1462", godot_icall_2_1462);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1463", godot_icall_1_1463);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1464", godot_icall_0_1464);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1465", godot_icall_0_1465);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1466", godot_icall_0_1466);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1467", godot_icall_2_1467);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1468", godot_icall_1_1468);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1469", godot_icall_1_1469);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1470", godot_icall_4_1470);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1471", godot_icall_2_1471);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1472", godot_icall_6_1472);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1473", godot_icall_3_1473);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1474", godot_icall_3_1474);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1475", godot_icall_1_1475);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1476", godot_icall_2_1476);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1477", godot_icall_3_1477);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1478", godot_icall_6_1478);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1479", godot_icall_4_1479);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1480", godot_icall_2_1480);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1481", godot_icall_1_1481);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1482", godot_icall_3_1482);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1483", godot_icall_2_1483);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1484", godot_icall_2_1484);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1485", godot_icall_3_1485);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1486", godot_icall_2_1486);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1487", godot_icall_2_1487);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1488", godot_icall_2_1488);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1489", godot_icall_1_1489);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1490", godot_icall_2_1490);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1491", godot_icall_2_1491);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1492", godot_icall_2_1492);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1493", godot_icall_1_1493);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1494", godot_icall_2_1494);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1495", godot_icall_0_1495);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1496", godot_icall_0_1496);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1497", godot_icall_3_1497);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1498", godot_icall_2_1498);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1499", godot_icall_4_1499);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1500", godot_icall_1_1500);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1501", godot_icall_2_1501);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1502", godot_icall_0_1502);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1503", godot_icall_1_1503);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1504", godot_icall_0_1504);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1505", godot_icall_3_1505);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1506", godot_icall_1_1506);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1507", godot_icall_1_1507);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1508", godot_icall_1_1508);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1509", godot_icall_5_1509);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1510", godot_icall_3_1510);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1511", godot_icall_1_1511);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1512", godot_icall_3_1512);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1513", godot_icall_5_1513);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1514", godot_icall_1_1514);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1515", godot_icall_1_1515);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1516", godot_icall_0_1516);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1517", godot_icall_1_1517);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1518", godot_icall_4_1518);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1519", godot_icall_1_1519);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1520", godot_icall_1_1520);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1521", godot_icall_4_1521);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1522", godot_icall_1_1522);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1523", godot_icall_1_1523);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1524", godot_icall_1_1524);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1525", godot_icall_1_1525);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1526", godot_icall_1_1526);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1527", godot_icall_6_1527);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1528", godot_icall_0_1528);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1529", godot_icall_1_1529);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1530", godot_icall_0_1530);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1531", godot_icall_3_1531);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1532", godot_icall_5_1532);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1533", godot_icall_0_1533);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1534", godot_icall_3_1534);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1535", godot_icall_3_1535);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1536", godot_icall_0_1536);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1537", godot_icall_0_1537);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1538", godot_icall_0_1538);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1539", godot_icall_0_1539);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1540", godot_icall_0_1540);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1541", godot_icall_0_1541);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1542", godot_icall_1_1542);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1543", godot_icall_0_1543);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1544", godot_icall_0_1544);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1545", godot_icall_0_1545);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1546", godot_icall_0_1546);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1547", godot_icall_0_1547);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1548", godot_icall_0_1548);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1549", godot_icall_0_1549);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1550", godot_icall_0_1550);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1551", godot_icall_3_1551);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1552", godot_icall_1_1552);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1553", godot_icall_3_1553);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1554", godot_icall_4_1554);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1555", godot_icall_2_1555);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1556", godot_icall_1_1556);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1557", godot_icall_4_1557);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1558", godot_icall_3_1558);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1559", godot_icall_2_1559);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1560", godot_icall_3_1560);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1561", godot_icall_2_1561);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1562", godot_icall_0_1562);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1563", godot_icall_0_1563);
#ifdef TOOLS_ENABLED
	GDMonoUtils::add_internal_call("Godot.EditorNativeCalls::godot_icall_3_1564", godot_icall_3_1564);
#endif
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1565", godot_icall_0_1565);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1566", godot_icall_0_1566);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1567", godot_icall_3_1567);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1568", godot_icall_1_1568);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1569", godot_icall_0_1569);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1570", godot_icall_0_1570);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1571", godot_icall_0_1571);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1572", godot_icall_0_1572);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1573", godot_icall_0_1573);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1574", godot_icall_0_1574);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1575", godot_icall_0_1575);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1576", godot_icall_0_1576);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1577", godot_icall_0_1577);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1578", godot_icall_4_1578);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1579", godot_icall_2_1579);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1580", godot_icall_3_1580);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1581", godot_icall_5_1581);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1582", godot_icall_5_1582);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1583", godot_icall_3_1583);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1584", godot_icall_0_1584);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1585", godot_icall_0_1585);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1586", godot_icall_0_1586);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1587", godot_icall_0_1587);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1588", godot_icall_0_1588);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1589", godot_icall_0_1589);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1590", godot_icall_0_1590);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1591", godot_icall_0_1591);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1592", godot_icall_0_1592);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1593", godot_icall_0_1593);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1594", godot_icall_0_1594);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1595", godot_icall_0_1595);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1596", godot_icall_0_1596);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1597", godot_icall_0_1597);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1598", godot_icall_0_1598);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1599", godot_icall_0_1599);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1600", godot_icall_0_1600);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1601", godot_icall_0_1601);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1602", godot_icall_0_1602);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1603", godot_icall_0_1603);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1604", godot_icall_0_1604);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1605", godot_icall_0_1605);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1606", godot_icall_0_1606);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1607", godot_icall_0_1607);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1608", godot_icall_0_1608);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1609", godot_icall_0_1609);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1610", godot_icall_0_1610);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1611", godot_icall_0_1611);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1612", godot_icall_0_1612);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1613", godot_icall_0_1613);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1614", godot_icall_0_1614);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1615", godot_icall_0_1615);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1616", godot_icall_0_1616);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1617", godot_icall_0_1617);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1618", godot_icall_0_1618);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1619", godot_icall_0_1619);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1620", godot_icall_0_1620);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1621", godot_icall_0_1621);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1622", godot_icall_0_1622);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1623", godot_icall_0_1623);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1624", godot_icall_0_1624);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1625", godot_icall_0_1625);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1626", godot_icall_0_1626);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1627", godot_icall_0_1627);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1628", godot_icall_0_1628);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1629", godot_icall_0_1629);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1630", godot_icall_0_1630);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1631", godot_icall_0_1631);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_7_1632", godot_icall_7_1632);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1633", godot_icall_0_1633);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1634", godot_icall_0_1634);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1635", godot_icall_3_1635);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1636", godot_icall_3_1636);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1637", godot_icall_1_1637);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1638", godot_icall_1_1638);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_2_1639", godot_icall_2_1639);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1640", godot_icall_0_1640);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_4_1641", godot_icall_4_1641);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1642", godot_icall_0_1642);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1643", godot_icall_1_1643);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1644", godot_icall_0_1644);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_3_1645", godot_icall_3_1645);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1646", godot_icall_0_1646);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1647", godot_icall_1_1647);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1648", godot_icall_0_1648);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1649", godot_icall_0_1649);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1650", godot_icall_0_1650);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1651", godot_icall_0_1651);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1652", godot_icall_1_1652);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1653", godot_icall_0_1653);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1654", godot_icall_0_1654);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1655", godot_icall_1_1655);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1656", godot_icall_0_1656);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1657", godot_icall_0_1657);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_6_1658", godot_icall_6_1658);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1659", godot_icall_0_1659);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_11_1660", godot_icall_11_1660);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1661", godot_icall_0_1661);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1662", godot_icall_5_1662);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1663", godot_icall_0_1663);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1664", godot_icall_0_1664);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1665", godot_icall_1_1665);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_5_1666", godot_icall_5_1666);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1667", godot_icall_1_1667);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1668", godot_icall_1_1668);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_1_1669", godot_icall_1_1669);
	GDMonoUtils::add_internal_call("Godot.NativeCalls::godot_icall_0_1670", godot_icall_0_1670);
}

} // namespace GodotSharpBindings

#endif // MONO_GLUE_ENABLED
