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

// System.Text.StringBuilder
struct StringBuilder_t2233700968;
// System.String
struct String_t;
// Umeng.JSONNode
struct JSONNode_t2781243848;
// System.Void
struct Void_t2755788946;
// System.Collections.Generic.Dictionary`2<System.String,Umeng.JSONNode>
struct Dictionary_2_t1350526282;
// Umeng.JSONObject
struct JSONObject_t462250774;
// GoogleMobileAds.Api.BannerView
struct BannerView_t1004130855;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t215330160;




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
#ifndef VALUETYPE_T703042063_H
#define VALUETYPE_T703042063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t703042063  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t703042063_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t703042063_marshaled_com
{
};
#endif // VALUETYPE_T703042063_H
#ifndef JSONNODE_T2781243848_H
#define JSONNODE_T2781243848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode
struct  JSONNode_t2781243848  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t2781243848_StaticFields
{
public:
	// System.Text.StringBuilder Umeng.JSONNode::m_EscapeBuilder
	StringBuilder_t2233700968 * ___m_EscapeBuilder_0;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_0() { return static_cast<int32_t>(offsetof(JSONNode_t2781243848_StaticFields, ___m_EscapeBuilder_0)); }
	inline StringBuilder_t2233700968 * get_m_EscapeBuilder_0() const { return ___m_EscapeBuilder_0; }
	inline StringBuilder_t2233700968 ** get_address_of_m_EscapeBuilder_0() { return &___m_EscapeBuilder_0; }
	inline void set_m_EscapeBuilder_0(StringBuilder_t2233700968 * value)
	{
		___m_EscapeBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_EscapeBuilder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODE_T2781243848_H
#ifndef JSON_T274119751_H
#define JSON_T274119751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSON
struct  JSON_t274119751  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T274119751_H
#ifndef KEYVALUEPAIR_2_T3586480861_H
#define KEYVALUEPAIR_2_T3586480861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode>
struct  KeyValuePair_2_t3586480861 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t2781243848 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3586480861, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3586480861, ___value_1)); }
	inline JSONNode_t2781243848 * get_value_1() const { return ___value_1; }
	inline JSONNode_t2781243848 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t2781243848 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3586480861_H
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
#ifndef JSONNULL_T2842839459_H
#define JSONNULL_T2842839459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNull
struct  JSONNull_t2842839459  : public JSONNode_t2781243848
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNULL_T2842839459_H
#ifndef JSONBOOL_T1022235306_H
#define JSONBOOL_T1022235306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONBool
struct  JSONBool_t1022235306  : public JSONNode_t2781243848
{
public:
	// System.Boolean Umeng.JSONBool::m_Data
	bool ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONBool_t1022235306, ___m_Data_1)); }
	inline bool get_m_Data_1() const { return ___m_Data_1; }
	inline bool* get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(bool value)
	{
		___m_Data_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONBOOL_T1022235306_H
#ifndef JSONNUMBER_T692138339_H
#define JSONNUMBER_T692138339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNumber
struct  JSONNumber_t692138339  : public JSONNode_t2781243848
{
public:
	// System.Double Umeng.JSONNumber::m_Data
	double ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONNumber_t692138339, ___m_Data_1)); }
	inline double get_m_Data_1() const { return ___m_Data_1; }
	inline double* get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(double value)
	{
		___m_Data_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNUMBER_T692138339_H
#ifndef JSONSTRING_T1025557229_H
#define JSONSTRING_T1025557229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONString
struct  JSONString_t1025557229  : public JSONNode_t2781243848
{
public:
	// System.String Umeng.JSONString::m_Data
	String_t* ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONString_t1025557229, ___m_Data_1)); }
	inline String_t* get_m_Data_1() const { return ___m_Data_1; }
	inline String_t** get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(String_t* value)
	{
		___m_Data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSTRING_T1025557229_H
#ifndef JSONLAZYCREATOR_T2763380403_H
#define JSONLAZYCREATOR_T2763380403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONLazyCreator
struct  JSONLazyCreator_t2763380403  : public JSONNode_t2781243848
{
public:
	// Umeng.JSONNode Umeng.JSONLazyCreator::m_Node
	JSONNode_t2781243848 * ___m_Node_1;
	// System.String Umeng.JSONLazyCreator::m_Key
	String_t* ___m_Key_2;

public:
	inline static int32_t get_offset_of_m_Node_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2763380403, ___m_Node_1)); }
	inline JSONNode_t2781243848 * get_m_Node_1() const { return ___m_Node_1; }
	inline JSONNode_t2781243848 ** get_address_of_m_Node_1() { return &___m_Node_1; }
	inline void set_m_Node_1(JSONNode_t2781243848 * value)
	{
		___m_Node_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Node_1), value);
	}

	inline static int32_t get_offset_of_m_Key_2() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2763380403, ___m_Key_2)); }
	inline String_t* get_m_Key_2() const { return ___m_Key_2; }
	inline String_t** get_address_of_m_Key_2() { return &___m_Key_2; }
	inline void set_m_Key_2(String_t* value)
	{
		___m_Key_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Key_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONLAZYCREATOR_T2763380403_H
#ifndef OBJECT_T1342976088_H
#define OBJECT_T1342976088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1342976088  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1342976088, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1342976088_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1342976088_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1342976088_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1342976088_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1342976088_H
#ifndef ENUMERATOR_T281881105_H
#define ENUMERATOR_T281881105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode>
struct  Enumerator_t281881105 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1350526282 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3586480861  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t281881105, ___dictionary_0)); }
	inline Dictionary_2_t1350526282 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1350526282 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1350526282 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t281881105, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t281881105, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t281881105, ___current_3)); }
	inline KeyValuePair_2_t3586480861  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3586480861 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3586480861  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T281881105_H
#ifndef COMPONENT_T904455746_H
#define COMPONENT_T904455746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t904455746  : public Object_t1342976088
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T904455746_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T1237893194_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T1237893194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t1237893194  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t281881105  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::<N>__1
	KeyValuePair_2_t3586480861  ___U3CNU3E__1_1;
	// Umeng.JSONObject Umeng.JSONObject/<GetEnumerator>c__Iterator1::$this
	JSONObject_t462250774 * ___U24this_2;
	// System.Object Umeng.JSONObject/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Umeng.JSONObject/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONObject/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U24locvar0_0)); }
	inline Enumerator_t281881105  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t281881105 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t281881105  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t3586480861  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t3586480861 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t3586480861  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U24this_2)); }
	inline JSONObject_t462250774 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t462250774 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t462250774 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1237893194, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T1237893194_H
#ifndef BEHAVIOUR_T3592668684_H
#define BEHAVIOUR_T3592668684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3592668684  : public Component_t904455746
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3592668684_H
#ifndef MONOBEHAVIOUR_T2143097941_H
#define MONOBEHAVIOUR_T2143097941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2143097941  : public Behaviour_t3592668684
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2143097941_H
#ifndef UMENGMANAGER_T1933798979_H
#define UMENGMANAGER_T1933798979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UmengManager
struct  UmengManager_t1933798979  : public MonoBehaviour_t2143097941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMENGMANAGER_T1933798979_H
#ifndef GOOGLEAD_T3330415442_H
#define GOOGLEAD_T3330415442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleAD
struct  GoogleAD_t3330415442  : public MonoBehaviour_t2143097941
{
public:
	// System.String GoogleAD::appIdAll
	String_t* ___appIdAll_2;
	// System.String GoogleAD::appIdBanner
	String_t* ___appIdBanner_3;
	// System.String GoogleAD::appIdInterstial
	String_t* ___appIdInterstial_4;
	// System.String GoogleAD::phoneId
	String_t* ___phoneId_5;
	// GoogleMobileAds.Api.BannerView GoogleAD::bannerView
	BannerView_t1004130855 * ___bannerView_6;
	// GoogleMobileAds.Api.InterstitialAd GoogleAD::interstitial
	InterstitialAd_t215330160 * ___interstitial_7;

public:
	inline static int32_t get_offset_of_appIdAll_2() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___appIdAll_2)); }
	inline String_t* get_appIdAll_2() const { return ___appIdAll_2; }
	inline String_t** get_address_of_appIdAll_2() { return &___appIdAll_2; }
	inline void set_appIdAll_2(String_t* value)
	{
		___appIdAll_2 = value;
		Il2CppCodeGenWriteBarrier((&___appIdAll_2), value);
	}

	inline static int32_t get_offset_of_appIdBanner_3() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___appIdBanner_3)); }
	inline String_t* get_appIdBanner_3() const { return ___appIdBanner_3; }
	inline String_t** get_address_of_appIdBanner_3() { return &___appIdBanner_3; }
	inline void set_appIdBanner_3(String_t* value)
	{
		___appIdBanner_3 = value;
		Il2CppCodeGenWriteBarrier((&___appIdBanner_3), value);
	}

	inline static int32_t get_offset_of_appIdInterstial_4() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___appIdInterstial_4)); }
	inline String_t* get_appIdInterstial_4() const { return ___appIdInterstial_4; }
	inline String_t** get_address_of_appIdInterstial_4() { return &___appIdInterstial_4; }
	inline void set_appIdInterstial_4(String_t* value)
	{
		___appIdInterstial_4 = value;
		Il2CppCodeGenWriteBarrier((&___appIdInterstial_4), value);
	}

	inline static int32_t get_offset_of_phoneId_5() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___phoneId_5)); }
	inline String_t* get_phoneId_5() const { return ___phoneId_5; }
	inline String_t** get_address_of_phoneId_5() { return &___phoneId_5; }
	inline void set_phoneId_5(String_t* value)
	{
		___phoneId_5 = value;
		Il2CppCodeGenWriteBarrier((&___phoneId_5), value);
	}

	inline static int32_t get_offset_of_bannerView_6() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___bannerView_6)); }
	inline BannerView_t1004130855 * get_bannerView_6() const { return ___bannerView_6; }
	inline BannerView_t1004130855 ** get_address_of_bannerView_6() { return &___bannerView_6; }
	inline void set_bannerView_6(BannerView_t1004130855 * value)
	{
		___bannerView_6 = value;
		Il2CppCodeGenWriteBarrier((&___bannerView_6), value);
	}

	inline static int32_t get_offset_of_interstitial_7() { return static_cast<int32_t>(offsetof(GoogleAD_t3330415442, ___interstitial_7)); }
	inline InterstitialAd_t215330160 * get_interstitial_7() const { return ___interstitial_7; }
	inline InterstitialAd_t215330160 ** get_address_of_interstitial_7() { return &___interstitial_7; }
	inline void set_interstitial_7(InterstitialAd_t215330160 * value)
	{
		___interstitial_7 = value;
		Il2CppCodeGenWriteBarrier((&___interstitial_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEAD_T3330415442_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t1237893194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[6] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U3CNU3E__1_1(),
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U24this_2(),
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U24current_3(),
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U24disposing_4(),
	U3CGetEnumeratorU3Ec__Iterator1_t1237893194::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (JSONString_t1025557229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[1] = 
{
	JSONString_t1025557229::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (JSONNumber_t692138339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[1] = 
{
	JSONNumber_t692138339::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (JSONBool_t1022235306), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	JSONBool_t1022235306::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (JSONNull_t2842839459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (JSONLazyCreator_t2763380403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[2] = 
{
	JSONLazyCreator_t2763380403::get_offset_of_m_Node_1(),
	JSONLazyCreator_t2763380403::get_offset_of_m_Key_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (JSON_t274119751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (UmengManager_t1933798979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (GoogleAD_t3330415442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[6] = 
{
	GoogleAD_t3330415442::get_offset_of_appIdAll_2(),
	GoogleAD_t3330415442::get_offset_of_appIdBanner_3(),
	GoogleAD_t3330415442::get_offset_of_appIdInterstial_4(),
	GoogleAD_t3330415442::get_offset_of_phoneId_5(),
	GoogleAD_t3330415442::get_offset_of_bannerView_6(),
	GoogleAD_t3330415442::get_offset_of_interstitial_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
