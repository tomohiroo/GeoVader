﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t120987749;
// System.IAsyncResult
struct IAsyncResult_t1908054816;
// System.AsyncCallback
struct AsyncCallback_t2682097366;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t736040614;
// System.Char[]
struct CharU5BU5D_t757589385;
// System.Void
struct Void_t3394263177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3852585331;

extern RuntimeClass* AnalyticsSessionInfo_t1525110492_il2cpp_TypeInfo_var;
extern const uint32_t AnalyticsSessionInfo_CallSessionStateChanged_m1010350279_MetadataUsageId;
extern RuntimeClass* AnalyticsSessionState_t1919112203_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3367881308_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t3792624234_il2cpp_TypeInfo_var;
extern const uint32_t SessionStateChanged_BeginInvoke_m1354161374_MetadataUsageId;
extern RuntimeClass* RemoteSettings_t1278050300_il2cpp_TypeInfo_var;
extern const uint32_t RemoteSettings_CallOnUpdate_m4127053699_MetadataUsageId;



#ifndef U3CMODULEU3E_T2841851847_H
#define U3CMODULEU3E_T2841851847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2841851847 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2841851847_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef UNITYADSSETTINGS_T2437306967_H
#define UNITYADSSETTINGS_T2437306967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnityAdsSettings
struct  UnityAdsSettings_t2437306967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSSETTINGS_T2437306967_H
#ifndef VALUETYPE_T2320648697_H
#define VALUETYPE_T2320648697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2320648697  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2320648697_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2320648697_marshaled_com
{
};
#endif // VALUETYPE_T2320648697_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t757589385* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t757589385* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t757589385** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t757589385* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ANALYTICSSESSIONINFO_T1525110492_H
#define ANALYTICSSESSIONINFO_T1525110492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo
struct  AnalyticsSessionInfo_t1525110492  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_t1525110492_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t120987749 * ___sessionStateChanged_0;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t1525110492_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_t120987749 * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_t120987749 ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_t120987749 * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStateChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSSESSIONINFO_T1525110492_H
#ifndef REMOTESETTINGS_T1278050300_H
#define REMOTESETTINGS_T1278050300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t1278050300  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t1278050300_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t736040614 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t1278050300_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t736040614 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t736040614 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t736040614 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T1278050300_H
#ifndef ENUM_T2729981184_H
#define ENUM_T2729981184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2729981184  : public ValueType_t2320648697
{
public:

public:
};

struct Enum_t2729981184_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t757589385* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2729981184_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t757589385* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t757589385** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t757589385* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2729981184_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2729981184_marshaled_com
{
};
#endif // ENUM_T2729981184_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT64_T3367881308_H
#define INT64_T3367881308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3367881308 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3367881308, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3367881308_H
#ifndef VOID_T3394263177_H
#define VOID_T3394263177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3394263177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3394263177_H
#ifndef BOOLEAN_T3792624234_H
#define BOOLEAN_T3792624234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3792624234 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3792624234, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3792624234_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3792624234_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3792624234_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3792624234_H
#ifndef ANALYTICSSESSIONSTATE_T1919112203_H
#define ANALYTICSSESSIONSTATE_T1919112203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionState
struct  AnalyticsSessionState_t1919112203 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t1919112203, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSSESSIONSTATE_T1919112203_H
#ifndef RUNTIMEPLATFORM_T4154494222_H
#define RUNTIMEPLATFORM_T4154494222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4154494222 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4154494222, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4154494222_H
#ifndef DELEGATE_T837825617_H
#define DELEGATE_T837825617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t837825617  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3852585331 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___data_8)); }
	inline DelegateData_t3852585331 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3852585331 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3852585331 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T837825617_H
#ifndef MULTICASTDELEGATE_T1059367039_H
#define MULTICASTDELEGATE_T1059367039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1059367039  : public Delegate_t837825617
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1059367039 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1059367039 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1059367039, ___prev_9)); }
	inline MulticastDelegate_t1059367039 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1059367039 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1059367039 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1059367039, ___kpm_next_10)); }
	inline MulticastDelegate_t1059367039 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1059367039 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1059367039 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1059367039_H
#ifndef ASYNCCALLBACK_T2682097366_H
#define ASYNCCALLBACK_T2682097366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t2682097366  : public MulticastDelegate_t1059367039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T2682097366_H
#ifndef UPDATEDEVENTHANDLER_T736040614_H
#define UPDATEDEVENTHANDLER_T736040614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t736040614  : public MulticastDelegate_t1059367039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T736040614_H
#ifndef SESSIONSTATECHANGED_T120987749_H
#define SESSIONSTATECHANGED_T120987749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct  SessionStateChanged_t120987749  : public MulticastDelegate_t1059367039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONSTATECHANGED_T120987749_H



// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void SessionStateChanged_Invoke_m4003549753 (SessionStateChanged_t120987749 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C"  void UpdatedEventHandler_Invoke_m2576578023 (UpdatedEventHandler_t736040614 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_enabled()
extern "C"  bool UnityAdsSettings_get_enabled_m2242696640 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_enabled_m2242696640_ftn) ();
	static UnityAdsSettings_get_enabled_m2242696640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_enabled_m2242696640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_enabled()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()
extern "C"  bool UnityAdsSettings_get_initializeOnStartup_m1964273085 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_initializeOnStartup_m1964273085_ftn) ();
	static UnityAdsSettings_get_initializeOnStartup_m1964273085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_initializeOnStartup_m1964273085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
extern "C"  bool UnityAdsSettings_get_testMode_m2251270448 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_testMode_m2251270448_ftn) ();
	static UnityAdsSettings_get_testMode_m2251270448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_testMode_m2251270448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_testMode()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)
extern "C"  String_t* UnityAdsSettings_GetGameId_m2875591719 (RuntimeObject * __this /* static, unused */, int32_t ___platform0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityAdsSettings_GetGameId_m2875591719_ftn) (int32_t);
	static UnityAdsSettings_GetGameId_m2875591719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_GetGameId_m2875591719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)");
	String_t* retVal = _il2cpp_icall_func(___platform0);
	return retVal;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void AnalyticsSessionInfo_CallSessionStateChanged_m1010350279 (RuntimeObject * __this /* static, unused */, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallSessionStateChanged_m1010350279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t120987749 * V_0 = NULL;
	{
		SessionStateChanged_t120987749 * L_0 = ((AnalyticsSessionInfo_t1525110492_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t1525110492_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_t120987749 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SessionStateChanged_t120987749 * L_2 = V_0;
		int32_t L_3 = ___sessionState0;
		int64_t L_4 = ___sessionId1;
		int64_t L_5 = ___sessionElapsedTime2;
		bool L_6 = ___sessionChanged3;
		NullCheck(L_2);
		SessionStateChanged_Invoke_m4003549753(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_SessionStateChanged_t120987749 (SessionStateChanged_t120987749 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void SessionStateChanged__ctor_m1346401141 (SessionStateChanged_t120987749 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void SessionStateChanged_Invoke_m4003549753 (SessionStateChanged_t120987749 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SessionStateChanged_Invoke_m4003549753((SessionStateChanged_t120987749 *)__this->get_prev_9(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SessionStateChanged_BeginInvoke_m1354161374 (SessionStateChanged_t120987749 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_t2682097366 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionStateChanged_BeginInvoke_m1354161374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t1919112203_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t3367881308_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t3367881308_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_t3792624234_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void SessionStateChanged_EndInvoke_m2596585659 (SessionStateChanged_t120987749 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.RemoteSettings::CallOnUpdate()
extern "C"  void RemoteSettings_CallOnUpdate_m4127053699 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_CallOnUpdate_m4127053699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_t736040614 * V_0 = NULL;
	{
		UpdatedEventHandler_t736040614 * L_0 = ((RemoteSettings_t1278050300_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t1278050300_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_t736040614 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UpdatedEventHandler_t736040614 * L_2 = V_0;
		NullCheck(L_2);
		UpdatedEventHandler_Invoke_m2576578023(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_UpdatedEventHandler_t736040614 (UpdatedEventHandler_t736040614 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdatedEventHandler__ctor_m3990846537 (UpdatedEventHandler_t736040614 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C"  void UpdatedEventHandler_Invoke_m2576578023 (UpdatedEventHandler_t736040614 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UpdatedEventHandler_Invoke_m2576578023((UpdatedEventHandler_t736040614 *)__this->get_prev_9(), method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if ((__this->get_m_target_2() != NULL || MethodHasParameters((RuntimeMethod*)(__this->get_method_3()))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UpdatedEventHandler_BeginInvoke_m3673355000 (UpdatedEventHandler_t736040614 * __this, AsyncCallback_t2682097366 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UpdatedEventHandler_EndInvoke_m2600083007 (UpdatedEventHandler_t736040614 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
