#include "il2cpp-config.h"

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

// System.IntPtr[]
struct IntPtrU5BU5D_t2294628509;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1121718989;
// System.Collections.Hashtable
struct Hashtable_t3053979408;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ArrayList
struct ArrayList_t1021684485;
// System.Object[]
struct ObjectU5BU5D_t1489590390;
// System.Type[]
struct TypeU5BU5D_t3653254196;
// System.Reflection.MethodBase
struct MethodBase_t654568678;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t636091194;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3543689242;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t3639235552;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t1858893131;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t2031178192;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1614102020;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t4162186369;
// System.Threading.Timer
struct Timer_t3049072326;
// System.Int32[]
struct Int32U5BU5D_t2609634141;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t530769036;
// System.Collections.IList
struct IList_t490375023;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2822741861;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t504280898;
// System.String[]
struct StringU5BU5D_t871422453;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2267597949;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t2473013290;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t2505113763;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3385014929;
// System.Char[]
struct CharU5BU5D_t799435848;
// System.Void
struct Void_t580059052;
// System.Type
struct Type_t;
// System.Threading.WaitHandle
struct WaitHandle_t3613470655;
// System.Threading.ExecutionContext
struct ExecutionContext_t3164299321;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2272985395;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t50619873;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t2653295121;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t593299;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t3227941653;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t969103193;
// System.Threading.Mutex
struct Mutex_t3079754489;
// System.Threading.Thread
struct Thread_t2141620258;




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
#ifndef EXCEPTION_T773871832_H
#define EXCEPTION_T773871832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t773871832  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2294628509* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t773871832 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2294628509* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2294628509** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2294628509* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___inner_exception_1)); }
	inline Exception_t773871832 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t773871832 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t773871832 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t773871832, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t773871832, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t773871832, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T773871832_H
#ifndef CROSSAPPDOMAINCHANNEL_T4082152328_H
#define CROSSAPPDOMAINCHANNEL_T4082152328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t4082152328  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t4082152328_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t4082152328_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T4082152328_H
#ifndef CROSSAPPDOMAINSINK_T172490893_H
#define CROSSAPPDOMAINSINK_T172490893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t172490893  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t172490893, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t172490893_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t3053979408 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t172490893_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t3053979408 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t3053979408 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t3053979408 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t172490893_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T172490893_H
#ifndef SINKPROVIDERDATA_T2537567243_H
#define SINKPROVIDERDATA_T2537567243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2537567243  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t1021684485 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t3053979408 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t2537567243, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t2537567243, ___children_1)); }
	inline ArrayList_t1021684485 * get_children_1() const { return ___children_1; }
	inline ArrayList_t1021684485 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t1021684485 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t2537567243, ___properties_2)); }
	inline Hashtable_t3053979408 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t3053979408 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t3053979408 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T2537567243_H
#ifndef METHODCALL_T2715412562_H
#define METHODCALL_T2715412562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t2715412562  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t1489590390* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3653254196* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t654568678 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t636091194 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3653254196* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____args_3)); }
	inline ObjectU5BU5D_t1489590390* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t1489590390** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t1489590390* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____methodSignature_4)); }
	inline TypeU5BU5D_t3653254196* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3653254196** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3653254196* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____methodBase_5)); }
	inline MethodBase_t654568678 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t654568678 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t654568678 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____callContext_6)); }
	inline LogicalCallContext_t636091194 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t636091194 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t636091194 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ____genericArguments_7)); }
	inline TypeU5BU5D_t3653254196* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t3653254196** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t3653254196* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t2715412562_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t2715412562_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T2715412562_H
#ifndef DYNAMICPROPERTYCOLLECTION_T593299_H
#define DYNAMICPROPERTYCOLLECTION_T593299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t593299  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t1021684485 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t593299, ____properties_0)); }
	inline ArrayList_t1021684485 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t1021684485 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t1021684485 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T593299_H
#ifndef DYNAMICPROPERTYREG_T752700580_H
#define DYNAMICPROPERTYREG_T752700580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t752700580  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t752700580, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t752700580, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T752700580_H
#ifndef CALLCONTEXTREMOTINGDATA_T2031178192_H
#define CALLCONTEXTREMOTINGDATA_T2031178192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t2031178192  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t2031178192, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T2031178192_H
#ifndef LOGICALCALLCONTEXT_T636091194_H
#define LOGICALCALLCONTEXT_T636091194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t636091194  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t3053979408 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t2031178192 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t636091194, ____data_0)); }
	inline Hashtable_t3053979408 * get__data_0() const { return ____data_0; }
	inline Hashtable_t3053979408 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t3053979408 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t636091194, ____remotingData_1)); }
	inline CallContextRemotingData_t2031178192 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t2031178192 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t2031178192 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier((&____remotingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T636091194_H
#ifndef CROSSCONTEXTCHANNEL_T530769036_H
#define CROSSCONTEXTCHANNEL_T530769036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t530769036  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T530769036_H
#ifndef HEADER_T1059465360_H
#define HEADER_T1059465360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t1059465360  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace_0;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand_1;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name_2;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	RuntimeObject * ___Value_3;

public:
	inline static int32_t get_offset_of_HeaderNamespace_0() { return static_cast<int32_t>(offsetof(Header_t1059465360, ___HeaderNamespace_0)); }
	inline String_t* get_HeaderNamespace_0() const { return ___HeaderNamespace_0; }
	inline String_t** get_address_of_HeaderNamespace_0() { return &___HeaderNamespace_0; }
	inline void set_HeaderNamespace_0(String_t* value)
	{
		___HeaderNamespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___HeaderNamespace_0), value);
	}

	inline static int32_t get_offset_of_MustUnderstand_1() { return static_cast<int32_t>(offsetof(Header_t1059465360, ___MustUnderstand_1)); }
	inline bool get_MustUnderstand_1() const { return ___MustUnderstand_1; }
	inline bool* get_address_of_MustUnderstand_1() { return &___MustUnderstand_1; }
	inline void set_MustUnderstand_1(bool value)
	{
		___MustUnderstand_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Header_t1059465360, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(Header_t1059465360, ___Value_3)); }
	inline RuntimeObject * get_Value_3() const { return ___Value_3; }
	inline RuntimeObject ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(RuntimeObject * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T1059465360_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T2988797321_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T2988797321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t2988797321  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t4162186369 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t2988797321, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t2988797321, ____att_1)); }
	inline SynchronizationAttribute_t4162186369 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t4162186369 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t4162186369 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T2988797321_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T3789579883_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T3789579883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t3789579883  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t4162186369 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t3789579883, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t3789579883, ____att_1)); }
	inline SynchronizationAttribute_t4162186369 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t4162186369 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t4162186369 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T3789579883_H
#ifndef LEASEMANAGER_T969103193_H
#define LEASEMANAGER_T969103193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t969103193  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t1021684485 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t3049072326 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t969103193, ____objects_0)); }
	inline ArrayList_t1021684485 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t1021684485 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t1021684485 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t969103193, ____timer_1)); }
	inline Timer_t3049072326 * get__timer_1() const { return ____timer_1; }
	inline Timer_t3049072326 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t3049072326 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T969103193_H
#ifndef LEASESINK_T2727346575_H
#define LEASESINK_T2727346575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t2727346575  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t2727346575, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T2727346575_H
#ifndef ENVOYTERMINATORSINK_T3494739546_H
#define ENVOYTERMINATORSINK_T3494739546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t3494739546  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t3494739546_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t3494739546 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t3494739546_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t3494739546 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t3494739546 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t3494739546 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T3494739546_H
#ifndef ARGINFO_T3139670938_H
#define ARGINFO_T3139670938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t3139670938  : public RuntimeObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t2609634141* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t654568678 * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t3139670938, ____paramMap_0)); }
	inline Int32U5BU5D_t2609634141* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t2609634141** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t2609634141* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier((&____paramMap_0), value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t3139670938, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t3139670938, ____method_2)); }
	inline MethodBase_t654568678 * get__method_2() const { return ____method_2; }
	inline MethodBase_t654568678 ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t654568678 * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier((&____method_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFO_T3139670938_H
#ifndef CROSSAPPDOMAINDATA_T58400703_H
#define CROSSAPPDOMAINDATA_T58400703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t58400703  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t58400703, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t58400703, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t58400703, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T58400703_H
#ifndef CHANNELSERVICES_T3288193945_H
#define CHANNELSERVICES_T3288193945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t3288193945  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t3288193945_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t1021684485 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t1021684485 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t530769036 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t3288193945_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t1021684485 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t1021684485 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t1021684485 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t3288193945_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t1021684485 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t1021684485 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t1021684485 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t3288193945_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t530769036 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t530769036 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t530769036 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t3288193945_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t3288193945_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T3288193945_H
#ifndef CHANNELINFO_T1740939659_H
#define CHANNELINFO_T1740939659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t1740939659  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t1489590390* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t1740939659, ___channelData_0)); }
	inline ObjectU5BU5D_t1489590390* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t1489590390** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t1489590390* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T1740939659_H
#ifndef CLIENTCONTEXTTERMINATORSINK_T973194619_H
#define CLIENTCONTEXTTERMINATORSINK_T973194619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t973194619  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t2822741861 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t973194619, ____context_0)); }
	inline Context_t2822741861 * get__context_0() const { return ____context_0; }
	inline Context_t2822741861 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t2822741861 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXTTERMINATORSINK_T973194619_H
#ifndef METHODDICTIONARY_T2473013290_H
#define METHODDICTIONARY_T2473013290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t2473013290  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t871422453* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290, ____methodKeys_2)); }
	inline StringU5BU5D_t871422453* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t871422453** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t871422453* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t2473013290_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t2473013290_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T2473013290_H
#ifndef CONTEXTLEVELACTIVATOR_T1296447430_H
#define CONTEXTLEVELACTIVATOR_T1296447430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t1296447430  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t1296447430, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T1296447430_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T1493149112_H
#define CONSTRUCTIONLEVELACTIVATOR_T1493149112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t1493149112  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T1493149112_H
#ifndef APPDOMAINLEVELACTIVATOR_T199243815_H
#define APPDOMAINLEVELACTIVATOR_T199243815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t199243815  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t199243815, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t199243815, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T199243815_H
#ifndef ACTIVATIONSERVICES_T1301243176_H
#define ACTIVATIONSERVICES_T1301243176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t1301243176  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t1301243176_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t1301243176_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T1301243176_H
#ifndef DICTIONARYENUMERATOR_T2610507912_H
#define DICTIONARYENUMERATOR_T2610507912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t2610507912  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t2473013290 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2610507912, ____methodDictionary_0)); }
	inline MethodDictionary_t2473013290 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t2473013290 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t2473013290 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2610507912, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t2610507912, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T2610507912_H
#ifndef ATTRIBUTE_T108277153_H
#define ATTRIBUTE_T108277153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t108277153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T108277153_H
#ifndef ERRORWRAPPER_T4255271363_H
#define ERRORWRAPPER_T4255271363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t4255271363  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t4255271363, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T4255271363_H
#ifndef VALUETYPE_T563181542_H
#define VALUETYPE_T563181542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t563181542  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t563181542_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t563181542_marshaled_com
{
};
#endif // VALUETYPE_T563181542_H
#ifndef CRITICALFINALIZEROBJECT_T1648803812_H
#define CRITICALFINALIZEROBJECT_T1648803812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1648803812  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1648803812_H
#ifndef MARSHAL_T1477270375_H
#define MARSHAL_T1477270375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1477270375  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1477270375_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1477270375_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1477270375_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1477270375_H
#ifndef MARSHALBYREFOBJECT_T532826196_H
#define MARSHALBYREFOBJECT_T532826196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t532826196  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3385014929 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t532826196, ____identity_0)); }
	inline ServerIdentity_t3385014929 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3385014929 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3385014929 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T532826196_H
#ifndef CONSTRUCTIONCALLDICTIONARY_T465981239_H
#define CONSTRUCTIONCALLDICTIONARY_T465981239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t465981239  : public MethodDictionary_t2473013290
{
public:

public:
};

struct ConstructionCallDictionary_t465981239_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t871422453* ___InternalKeys_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map23
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map23_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map24
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map24_8;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t465981239_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t871422453* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t871422453** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t871422453* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_7() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t465981239_StaticFields, ___U3CU3Ef__switchU24map23_7)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map23_7() const { return ___U3CU3Ef__switchU24map23_7; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map23_7() { return &___U3CU3Ef__switchU24map23_7; }
	inline void set_U3CU3Ef__switchU24map23_7(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map23_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map24_8() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t465981239_StaticFields, ___U3CU3Ef__switchU24map24_8)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map24_8() const { return ___U3CU3Ef__switchU24map24_8; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map24_8() { return &___U3CU3Ef__switchU24map24_8; }
	inline void set_U3CU3Ef__switchU24map24_8(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map24_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map24_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T465981239_H
#ifndef CONTEXTBOUNDOBJECT_T1276924387_H
#define CONTEXTBOUNDOBJECT_T1276924387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1276924387  : public MarshalByRefObject_t532826196
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1276924387_H
#ifndef ENUM_T4218763987_H
#define ENUM_T4218763987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4218763987  : public ValueType_t563181542
{
public:

public:
};

struct Enum_t4218763987_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t799435848* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4218763987_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t799435848* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t799435848** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t799435848* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4218763987_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4218763987_marshaled_com
{
};
#endif // ENUM_T4218763987_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CONSTRUCTIONCALL_T10084497_H
#define CONSTRUCTIONCALL_T10084497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCall
struct  ConstructionCall_t10084497  : public MethodCall_t2715412562
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	RuntimeObject* ____activator_11;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t1489590390* ____activationAttributes_12;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	RuntimeObject* ____contextProperties_13;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType_14;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName_15;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk_16;

public:
	inline static int32_t get_offset_of__activator_11() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____activator_11)); }
	inline RuntimeObject* get__activator_11() const { return ____activator_11; }
	inline RuntimeObject** get_address_of__activator_11() { return &____activator_11; }
	inline void set__activator_11(RuntimeObject* value)
	{
		____activator_11 = value;
		Il2CppCodeGenWriteBarrier((&____activator_11), value);
	}

	inline static int32_t get_offset_of__activationAttributes_12() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____activationAttributes_12)); }
	inline ObjectU5BU5D_t1489590390* get__activationAttributes_12() const { return ____activationAttributes_12; }
	inline ObjectU5BU5D_t1489590390** get_address_of__activationAttributes_12() { return &____activationAttributes_12; }
	inline void set__activationAttributes_12(ObjectU5BU5D_t1489590390* value)
	{
		____activationAttributes_12 = value;
		Il2CppCodeGenWriteBarrier((&____activationAttributes_12), value);
	}

	inline static int32_t get_offset_of__contextProperties_13() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____contextProperties_13)); }
	inline RuntimeObject* get__contextProperties_13() const { return ____contextProperties_13; }
	inline RuntimeObject** get_address_of__contextProperties_13() { return &____contextProperties_13; }
	inline void set__contextProperties_13(RuntimeObject* value)
	{
		____contextProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&____contextProperties_13), value);
	}

	inline static int32_t get_offset_of__activationType_14() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____activationType_14)); }
	inline Type_t * get__activationType_14() const { return ____activationType_14; }
	inline Type_t ** get_address_of__activationType_14() { return &____activationType_14; }
	inline void set__activationType_14(Type_t * value)
	{
		____activationType_14 = value;
		Il2CppCodeGenWriteBarrier((&____activationType_14), value);
	}

	inline static int32_t get_offset_of__activationTypeName_15() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____activationTypeName_15)); }
	inline String_t* get__activationTypeName_15() const { return ____activationTypeName_15; }
	inline String_t** get_address_of__activationTypeName_15() { return &____activationTypeName_15; }
	inline void set__activationTypeName_15(String_t* value)
	{
		____activationTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationTypeName_15), value);
	}

	inline static int32_t get_offset_of__isContextOk_16() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497, ____isContextOk_16)); }
	inline bool get__isContextOk_16() const { return ____isContextOk_16; }
	inline bool* get_address_of__isContextOk_16() { return &____isContextOk_16; }
	inline void set__isContextOk_16(bool value)
	{
		____isContextOk_16 = value;
	}
};

struct ConstructionCall_t10084497_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t3543689242 * ___U3CU3Ef__switchU24map20_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_17() { return static_cast<int32_t>(offsetof(ConstructionCall_t10084497_StaticFields, ___U3CU3Ef__switchU24map20_17)); }
	inline Dictionary_2_t3543689242 * get_U3CU3Ef__switchU24map20_17() const { return ___U3CU3Ef__switchU24map20_17; }
	inline Dictionary_2_t3543689242 ** get_address_of_U3CU3Ef__switchU24map20_17() { return &___U3CU3Ef__switchU24map20_17; }
	inline void set_U3CU3Ef__switchU24map20_17(Dictionary_2_t3543689242 * value)
	{
		___U3CU3Ef__switchU24map20_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALL_T10084497_H
#ifndef SYSTEMEXCEPTION_T2850023335_H
#define SYSTEMEXCEPTION_T2850023335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2850023335  : public Exception_t773871832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2850023335_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef METHODCALLDICTIONARY_T4256938434_H
#define METHODCALLDICTIONARY_T4256938434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t4256938434  : public MethodDictionary_t2473013290
{
public:

public:
};

struct MethodCallDictionary_t4256938434_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t871422453* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t4256938434_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t871422453* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t871422453** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t871422453* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLDICTIONARY_T4256938434_H
#ifndef DISPIDATTRIBUTE_T1360447062_H
#define DISPIDATTRIBUTE_T1360447062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t1360447062  : public Attribute_t108277153
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t1360447062, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T1360447062_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2425602567_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2425602567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2425602567  : public Attribute_t108277153
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2425602567, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2425602567_H
#ifndef TIMESPAN_T707952860_H
#define TIMESPAN_T707952860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t707952860 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t707952860, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t707952860_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t707952860  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t707952860  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t707952860  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t707952860_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t707952860  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t707952860 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t707952860  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t707952860_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t707952860  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t707952860 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t707952860  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t707952860_StaticFields, ___Zero_2)); }
	inline TimeSpan_t707952860  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t707952860 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t707952860  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T707952860_H
#ifndef CONTEXTATTRIBUTE_T2298244319_H
#define CONTEXTATTRIBUTE_T2298244319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t2298244319  : public Attribute_t108277153
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t2298244319, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T2298244319_H
#ifndef GCHANDLE_T810284439_H
#define GCHANDLE_T810284439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t810284439 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t810284439, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T810284439_H
#ifndef REMOTEACTIVATOR_T2360364066_H
#define REMOTEACTIVATOR_T2360364066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t2360364066  : public MarshalByRefObject_t532826196
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T2360364066_H
#ifndef TYPELIBVERSIONATTRIBUTE_T3423370270_H
#define TYPELIBVERSIONATTRIBUTE_T3423370270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t3423370270  : public Attribute_t108277153
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3423370270, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3423370270, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T3423370270_H
#ifndef PRESERVESIGATTRIBUTE_T3019424377_H
#define PRESERVESIGATTRIBUTE_T3019424377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t3019424377  : public Attribute_t108277153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T3019424377_H
#ifndef EXTERNALEXCEPTION_T1978050648_H
#define EXTERNALEXCEPTION_T1978050648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1978050648  : public SystemException_t2850023335
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1978050648_H
#ifndef GCHANDLETYPE_T3855393388_H
#define GCHANDLETYPE_T3855393388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3855393388 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3855393388, ___value___1)); }
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
#endif // GCHANDLETYPE_T3855393388_H
#ifndef CALLINGCONVENTION_T3338961827_H
#define CALLINGCONVENTION_T3338961827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3338961827 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3338961827, ___value___1)); }
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
#endif // CALLINGCONVENTION_T3338961827_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1528086391_H
#define MARSHALDIRECTIVEEXCEPTION_T1528086391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1528086391  : public SystemException_t2850023335
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T1528086391_H
#ifndef COMINTERFACETYPE_T2259656661_H
#define COMINTERFACETYPE_T2259656661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2259656661 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2259656661, ___value___1)); }
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
#endif // COMINTERFACETYPE_T2259656661_H
#ifndef ARGINFOTYPE_T255159539_H
#define ARGINFOTYPE_T255159539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfoType
struct  ArgInfoType_t255159539 
{
public:
	// System.Byte System.Runtime.Remoting.Messaging.ArgInfoType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ArgInfoType_t255159539, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFOTYPE_T255159539_H
#ifndef ASYNCRESULT_T850648131_H
#define ASYNCRESULT_T850648131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t850648131  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t3613470655 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t3164299321 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t3164299321 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t2272985395 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___async_state_0)); }
	inline RuntimeObject * get_async_state_0() const { return ___async_state_0; }
	inline RuntimeObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(RuntimeObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___handle_1)); }
	inline WaitHandle_t3613470655 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t3613470655 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t3613470655 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___async_delegate_2)); }
	inline RuntimeObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline RuntimeObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(RuntimeObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___async_delegate_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___data_3)); }
	inline IntPtr_t get_data_3() const { return ___data_3; }
	inline IntPtr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(IntPtr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___object_data_4)); }
	inline RuntimeObject * get_object_data_4() const { return ___object_data_4; }
	inline RuntimeObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(RuntimeObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___object_data_4), value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___async_callback_8)); }
	inline RuntimeObject * get_async_callback_8() const { return ___async_callback_8; }
	inline RuntimeObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(RuntimeObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___current_9)); }
	inline ExecutionContext_t3164299321 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t3164299321 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t3164299321 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___original_10)); }
	inline ExecutionContext_t3164299321 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t3164299321 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t3164299321 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier((&___original_10), value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___call_message_12)); }
	inline MonoMethodMessage_t2272985395 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t2272985395 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t2272985395 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier((&___call_message_12), value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___message_ctrl_13)); }
	inline RuntimeObject* get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline RuntimeObject** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(RuntimeObject* value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___message_ctrl_13), value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t850648131, ___reply_message_14)); }
	inline RuntimeObject* get_reply_message_14() const { return ___reply_message_14; }
	inline RuntimeObject** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(RuntimeObject* value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier((&___reply_message_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCRESULT_T850648131_H
#ifndef UNMANAGEDTYPE_T355040596_H
#define UNMANAGEDTYPE_T355040596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t355040596 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t355040596, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T355040596_H
#ifndef URLATTRIBUTE_T939277080_H
#define URLATTRIBUTE_T939277080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t939277080  : public ContextAttribute_t2298244319
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t939277080, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T939277080_H
#ifndef CONTEXT_T2822741861_H
#define CONTEXT_T2822741861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t2822741861  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t  ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t1489590390* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t1021684485 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t593299 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t3227941653 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___static_data_2)); }
	inline UIntPtr_t  get_static_data_2() const { return ___static_data_2; }
	inline UIntPtr_t * get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(UIntPtr_t  value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___datastore_6)); }
	inline ObjectU5BU5D_t1489590390* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t1489590390** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t1489590390* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___context_properties_7)); }
	inline ArrayList_t1021684485 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t1021684485 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t1021684485 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t593299 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t593299 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t593299 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t2822741861, ___callback_object_13)); }
	inline ContextCallbackObject_t3227941653 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t3227941653 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t3227941653 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t2822741861_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t3053979408 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t593299 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t2822741861_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t2822741861_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t2822741861_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t3053979408 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t3053979408 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t3053979408 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t2822741861_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t593299 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t593299 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t593299 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T2822741861_H
#ifndef CONTEXTCALLBACKOBJECT_T3227941653_H
#define CONTEXTCALLBACKOBJECT_T3227941653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t3227941653  : public ContextBoundObject_t1276924387
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T3227941653_H
#ifndef LIFETIMESERVICES_T3585015749_H
#define LIFETIMESERVICES_T3585015749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t3585015749  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t3585015749_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t707952860  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t707952860  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t707952860  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t707952860  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t969103193 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t3585015749_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t707952860  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t707952860 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t707952860  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t3585015749_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t707952860  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t707952860 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t707952860  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t3585015749_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t707952860  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t707952860 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t707952860  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t3585015749_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t707952860  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t707952860 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t707952860  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t3585015749_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t969103193 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t969103193 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t969103193 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T3585015749_H
#ifndef SAFEHANDLE_T1291908356_H
#define SAFEHANDLE_T1291908356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1291908356  : public CriticalFinalizerObject_t1648803812
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1291908356, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1291908356, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1291908356, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1291908356, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T1291908356_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T4162186369_H
#define SYNCHRONIZATIONATTRIBUTE_T4162186369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t4162186369  : public ContextAttribute_t2298244319
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t3079754489 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t2141620258 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t4162186369, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t4162186369, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t4162186369, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t4162186369, ____mutex_4)); }
	inline Mutex_t3079754489 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t3079754489 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t3079754489 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t4162186369, ____ownerThread_5)); }
	inline Thread_t2141620258 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t2141620258 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t2141620258 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T4162186369_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2721492010_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2721492010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t2721492010  : public Attribute_t108277153
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t2721492010, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2721492010_H
#ifndef INTERFACETYPEATTRIBUTE_T2494331443_H
#define INTERFACETYPEATTRIBUTE_T2494331443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t2494331443  : public Attribute_t108277153
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t2494331443, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T2494331443_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (DispIdAttribute_t1360447062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable400[1] = 
{
	DispIdAttribute_t1360447062::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (ErrorWrapper_t4255271363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[1] = 
{
	ErrorWrapper_t4255271363::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (ExternalException_t1978050648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (GCHandle_t810284439)+ sizeof (RuntimeObject), sizeof(GCHandle_t810284439 ), 0, 0 };
extern const int32_t g_FieldOffsetTable403[1] = 
{
	GCHandle_t810284439::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (GCHandleType_t3855393388)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable404[5] = 
{
	GCHandleType_t3855393388::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (InterfaceTypeAttribute_t2494331443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable405[1] = 
{
	InterfaceTypeAttribute_t2494331443::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (Marshal_t1477270375), -1, sizeof(Marshal_t1477270375_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable406[2] = 
{
	Marshal_t1477270375_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t1477270375_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (MarshalDirectiveException_t1528086391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (PreserveSigAttribute_t3019424377), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (SafeHandle_t1291908356), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable409[4] = 
{
	SafeHandle_t1291908356::get_offset_of_handle_0(),
	SafeHandle_t1291908356::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t1291908356::get_offset_of_refcount_2(),
	SafeHandle_t1291908356::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (TypeLibImportClassAttribute_t2425602567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable410[1] = 
{
	TypeLibImportClassAttribute_t2425602567::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (TypeLibVersionAttribute_t3423370270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[2] = 
{
	TypeLibVersionAttribute_t3423370270::get_offset_of_major_0(),
	TypeLibVersionAttribute_t3423370270::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (UnmanagedFunctionPointerAttribute_t2721492010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[1] = 
{
	UnmanagedFunctionPointerAttribute_t2721492010::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (UnmanagedType_t355040596)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable413[36] = 
{
	UnmanagedType_t355040596::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (ActivationServices_t1301243176), -1, sizeof(ActivationServices_t1301243176_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable435[1] = 
{
	ActivationServices_t1301243176_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (AppDomainLevelActivator_t199243815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable436[2] = 
{
	AppDomainLevelActivator_t199243815::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t199243815::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ConstructionLevelActivator_t1493149112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ContextLevelActivator_t1296447430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable438[1] = 
{
	ContextLevelActivator_t1296447430::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (RemoteActivator_t2360364066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (UrlAttribute_t939277080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[1] = 
{
	UrlAttribute_t939277080::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (ChannelInfo_t1740939659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	ChannelInfo_t1740939659::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ChannelServices_t3288193945), -1, sizeof(ChannelServices_t3288193945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable444[5] = 
{
	ChannelServices_t3288193945_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t3288193945_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t3288193945_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t3288193945_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t3288193945_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (CrossAppDomainData_t58400703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable445[3] = 
{
	CrossAppDomainData_t58400703::get_offset_of__ContextID_0(),
	CrossAppDomainData_t58400703::get_offset_of__DomainID_1(),
	CrossAppDomainData_t58400703::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (CrossAppDomainChannel_t4082152328), -1, sizeof(CrossAppDomainChannel_t4082152328_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable446[1] = 
{
	CrossAppDomainChannel_t4082152328_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (CrossAppDomainSink_t172490893), -1, sizeof(CrossAppDomainSink_t172490893_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable447[3] = 
{
	CrossAppDomainSink_t172490893_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t172490893_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t172490893::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (SinkProviderData_t2537567243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable455[3] = 
{
	SinkProviderData_t2537567243::get_offset_of_sinkName_0(),
	SinkProviderData_t2537567243::get_offset_of_children_1(),
	SinkProviderData_t2537567243::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (Context_t2822741861), -1, sizeof(Context_t2822741861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable456[14] = 
{
	Context_t2822741861::get_offset_of_domain_id_0(),
	Context_t2822741861::get_offset_of_context_id_1(),
	Context_t2822741861::get_offset_of_static_data_2(),
	Context_t2822741861_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t2822741861::get_offset_of_server_context_sink_chain_4(),
	Context_t2822741861::get_offset_of_client_context_sink_chain_5(),
	Context_t2822741861::get_offset_of_datastore_6(),
	Context_t2822741861::get_offset_of_context_properties_7(),
	Context_t2822741861::get_offset_of_frozen_8(),
	Context_t2822741861_StaticFields::get_offset_of_global_count_9(),
	Context_t2822741861_StaticFields::get_offset_of_namedSlots_10(),
	Context_t2822741861_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t2822741861::get_offset_of_context_dynamic_properties_12(),
	Context_t2822741861::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (DynamicPropertyCollection_t593299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable457[1] = 
{
	DynamicPropertyCollection_t593299::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (DynamicPropertyReg_t752700580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable458[2] = 
{
	DynamicPropertyReg_t752700580::get_offset_of_Property_0(),
	DynamicPropertyReg_t752700580::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (ContextCallbackObject_t3227941653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (ContextAttribute_t2298244319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable460[1] = 
{
	ContextAttribute_t2298244319::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (CrossContextChannel_t530769036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (SynchronizationAttribute_t4162186369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable471[5] = 
{
	SynchronizationAttribute_t4162186369::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t4162186369::get_offset_of__flavor_2(),
	SynchronizationAttribute_t4162186369::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t4162186369::get_offset_of__mutex_4(),
	SynchronizationAttribute_t4162186369::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (SynchronizedClientContextSink_t2988797321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable472[2] = 
{
	SynchronizedClientContextSink_t2988797321::get_offset_of__next_0(),
	SynchronizedClientContextSink_t2988797321::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (SynchronizedServerContextSink_t3789579883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable473[2] = 
{
	SynchronizedServerContextSink_t3789579883::get_offset_of__next_0(),
	SynchronizedServerContextSink_t3789579883::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (LeaseManager_t969103193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable474[2] = 
{
	LeaseManager_t969103193::get_offset_of__objects_0(),
	LeaseManager_t969103193::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (LeaseSink_t2727346575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[1] = 
{
	LeaseSink_t2727346575::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (LifetimeServices_t3585015749), -1, sizeof(LifetimeServices_t3585015749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable476[5] = 
{
	LifetimeServices_t3585015749_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t3585015749_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t3585015749_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t3585015749_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t3585015749_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (ArgInfoType_t255159539)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable477[3] = 
{
	ArgInfoType_t255159539::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (ArgInfo_t3139670938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable478[3] = 
{
	ArgInfo_t3139670938::get_offset_of__paramMap_0(),
	ArgInfo_t3139670938::get_offset_of__inoutArgCount_1(),
	ArgInfo_t3139670938::get_offset_of__method_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (AsyncResult_t850648131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[15] = 
{
	AsyncResult_t850648131::get_offset_of_async_state_0(),
	AsyncResult_t850648131::get_offset_of_handle_1(),
	AsyncResult_t850648131::get_offset_of_async_delegate_2(),
	AsyncResult_t850648131::get_offset_of_data_3(),
	AsyncResult_t850648131::get_offset_of_object_data_4(),
	AsyncResult_t850648131::get_offset_of_sync_completed_5(),
	AsyncResult_t850648131::get_offset_of_completed_6(),
	AsyncResult_t850648131::get_offset_of_endinvoke_called_7(),
	AsyncResult_t850648131::get_offset_of_async_callback_8(),
	AsyncResult_t850648131::get_offset_of_current_9(),
	AsyncResult_t850648131::get_offset_of_original_10(),
	AsyncResult_t850648131::get_offset_of_gchandle_11(),
	AsyncResult_t850648131::get_offset_of_call_message_12(),
	AsyncResult_t850648131::get_offset_of_message_ctrl_13(),
	AsyncResult_t850648131::get_offset_of_reply_message_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (ClientContextTerminatorSink_t973194619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[1] = 
{
	ClientContextTerminatorSink_t973194619::get_offset_of__context_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ConstructionCall_t10084497), -1, sizeof(ConstructionCall_t10084497_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable481[7] = 
{
	ConstructionCall_t10084497::get_offset_of__activator_11(),
	ConstructionCall_t10084497::get_offset_of__activationAttributes_12(),
	ConstructionCall_t10084497::get_offset_of__contextProperties_13(),
	ConstructionCall_t10084497::get_offset_of__activationType_14(),
	ConstructionCall_t10084497::get_offset_of__activationTypeName_15(),
	ConstructionCall_t10084497::get_offset_of__isContextOk_16(),
	ConstructionCall_t10084497_StaticFields::get_offset_of_U3CU3Ef__switchU24map20_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (ConstructionCallDictionary_t465981239), -1, sizeof(ConstructionCallDictionary_t465981239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable482[3] = 
{
	ConstructionCallDictionary_t465981239_StaticFields::get_offset_of_InternalKeys_6(),
	ConstructionCallDictionary_t465981239_StaticFields::get_offset_of_U3CU3Ef__switchU24map23_7(),
	ConstructionCallDictionary_t465981239_StaticFields::get_offset_of_U3CU3Ef__switchU24map24_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (EnvoyTerminatorSink_t3494739546), -1, sizeof(EnvoyTerminatorSink_t3494739546_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable483[1] = 
{
	EnvoyTerminatorSink_t3494739546_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (Header_t1059465360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[4] = 
{
	Header_t1059465360::get_offset_of_HeaderNamespace_0(),
	Header_t1059465360::get_offset_of_MustUnderstand_1(),
	Header_t1059465360::get_offset_of_Name_2(),
	Header_t1059465360::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (LogicalCallContext_t636091194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[2] = 
{
	LogicalCallContext_t636091194::get_offset_of__data_0(),
	LogicalCallContext_t636091194::get_offset_of__remotingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (CallContextRemotingData_t2031178192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable495[1] = 
{
	CallContextRemotingData_t2031178192::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (MethodCall_t2715412562), -1, sizeof(MethodCall_t2715412562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable496[11] = 
{
	MethodCall_t2715412562::get_offset_of__uri_0(),
	MethodCall_t2715412562::get_offset_of__typeName_1(),
	MethodCall_t2715412562::get_offset_of__methodName_2(),
	MethodCall_t2715412562::get_offset_of__args_3(),
	MethodCall_t2715412562::get_offset_of__methodSignature_4(),
	MethodCall_t2715412562::get_offset_of__methodBase_5(),
	MethodCall_t2715412562::get_offset_of__callContext_6(),
	MethodCall_t2715412562::get_offset_of__genericArguments_7(),
	MethodCall_t2715412562::get_offset_of_ExternalProperties_8(),
	MethodCall_t2715412562::get_offset_of_InternalProperties_9(),
	MethodCall_t2715412562_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (MethodCallDictionary_t4256938434), -1, sizeof(MethodCallDictionary_t4256938434_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable497[1] = 
{
	MethodCallDictionary_t4256938434_StaticFields::get_offset_of_InternalKeys_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (MethodDictionary_t2473013290), -1, sizeof(MethodDictionary_t2473013290_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable498[6] = 
{
	MethodDictionary_t2473013290::get_offset_of__internalProperties_0(),
	MethodDictionary_t2473013290::get_offset_of__message_1(),
	MethodDictionary_t2473013290::get_offset_of__methodKeys_2(),
	MethodDictionary_t2473013290::get_offset_of__ownProperties_3(),
	MethodDictionary_t2473013290_StaticFields::get_offset_of_U3CU3Ef__switchU24map21_4(),
	MethodDictionary_t2473013290_StaticFields::get_offset_of_U3CU3Ef__switchU24map22_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (DictionaryEnumerator_t2610507912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable499[3] = 
{
	DictionaryEnumerator_t2610507912::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t2610507912::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t2610507912::get_offset_of__posMethod_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
