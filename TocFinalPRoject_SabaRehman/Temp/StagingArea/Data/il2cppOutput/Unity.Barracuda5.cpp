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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<Unity.Barracuda.Layer>
struct List_1_tC659ECDE2256B255284CC9F67B817DBB8318E961;
// System.Collections.Generic.List`1<Unity.Barracuda.Model/ImporterWarning>
struct List_1_tCE49624AE16775B26DC341B575300D35B1D38E16;
// System.Collections.Generic.List`1<Unity.Barracuda.Model/Input>
struct List_1_t4F732667E640554A11740A9B6949EF49C3E128A8;
// System.Collections.Generic.List`1<Unity.Barracuda.Model/Memory>
struct List_1_tF5AECB50A085F696C4299BD51B5154F2158BC9CC;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Barracuda.ITensorAllocator
struct ITensorAllocator_t9011F27444F73BA4044D57F8F5B86FA8D8F5E9C1;
// Unity.Barracuda.ITensorData
struct ITensorData_t80387BDEAEDD4DAB6428AA75C7AD25101D3B49EA;
// Unity.Barracuda.IWorker
struct IWorker_t097E095A4F99621A292907BD8930C13FEE57E7C9;
// Unity.Barracuda.Model
struct Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5;
// Unity.Barracuda.Tensor
struct Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA;
// Unity.Barracuda.WaitForCompletion
struct WaitForCompletion_tFA4C83060A23BC78C9B877FD8B581C1C81C3D4E9;
// Unity.Barracuda.WorkerFactory
struct WorkerFactory_t154598237F3402FE04EA5977473CF4F5A197A8F3;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWorker_t097E095A4F99621A292907BD8930C13FEE57E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE5595A14D0AC42E47E80A1E881AC6C639732FC;
IL2CPP_EXTERN_C const RuntimeMethod* WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t WorkerExtensions_CopyOutput_m3F657D369FA058A457C6AA9D453EB6FC5C650F9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorkerExtensions_CopyOutput_mCB7F6168CAED5960F037CCD8DBE19A4506D10CCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Barracuda.Model
struct  Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.Barracuda.Model_Input> Unity.Barracuda.Model::inputs
	List_1_t4F732667E640554A11740A9B6949EF49C3E128A8 * ___inputs_1;
	// System.Collections.Generic.List`1<System.String> Unity.Barracuda.Model::outputs
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___outputs_2;
	// System.Collections.Generic.List`1<Unity.Barracuda.Model_Memory> Unity.Barracuda.Model::memories
	List_1_tF5AECB50A085F696C4299BD51B5154F2158BC9CC * ___memories_3;
	// System.Collections.Generic.List`1<Unity.Barracuda.Layer> Unity.Barracuda.Model::layers
	List_1_tC659ECDE2256B255284CC9F67B817DBB8318E961 * ___layers_4;
	// System.String Unity.Barracuda.Model::IrSource
	String_t* ___IrSource_5;
	// System.String Unity.Barracuda.Model::IrVersion
	String_t* ___IrVersion_6;
	// System.String Unity.Barracuda.Model::ProducerName
	String_t* ___ProducerName_7;
	// System.Collections.Generic.List`1<Unity.Barracuda.Model_ImporterWarning> Unity.Barracuda.Model::<Warnings>k__BackingField
	List_1_tCE49624AE16775B26DC341B575300D35B1D38E16 * ___U3CWarningsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_inputs_1() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___inputs_1)); }
	inline List_1_t4F732667E640554A11740A9B6949EF49C3E128A8 * get_inputs_1() const { return ___inputs_1; }
	inline List_1_t4F732667E640554A11740A9B6949EF49C3E128A8 ** get_address_of_inputs_1() { return &___inputs_1; }
	inline void set_inputs_1(List_1_t4F732667E640554A11740A9B6949EF49C3E128A8 * value)
	{
		___inputs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputs_2() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___outputs_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_outputs_2() const { return ___outputs_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_outputs_2() { return &___outputs_2; }
	inline void set_outputs_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___outputs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputs_2), (void*)value);
	}

	inline static int32_t get_offset_of_memories_3() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___memories_3)); }
	inline List_1_tF5AECB50A085F696C4299BD51B5154F2158BC9CC * get_memories_3() const { return ___memories_3; }
	inline List_1_tF5AECB50A085F696C4299BD51B5154F2158BC9CC ** get_address_of_memories_3() { return &___memories_3; }
	inline void set_memories_3(List_1_tF5AECB50A085F696C4299BD51B5154F2158BC9CC * value)
	{
		___memories_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memories_3), (void*)value);
	}

	inline static int32_t get_offset_of_layers_4() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___layers_4)); }
	inline List_1_tC659ECDE2256B255284CC9F67B817DBB8318E961 * get_layers_4() const { return ___layers_4; }
	inline List_1_tC659ECDE2256B255284CC9F67B817DBB8318E961 ** get_address_of_layers_4() { return &___layers_4; }
	inline void set_layers_4(List_1_tC659ECDE2256B255284CC9F67B817DBB8318E961 * value)
	{
		___layers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layers_4), (void*)value);
	}

	inline static int32_t get_offset_of_IrSource_5() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___IrSource_5)); }
	inline String_t* get_IrSource_5() const { return ___IrSource_5; }
	inline String_t** get_address_of_IrSource_5() { return &___IrSource_5; }
	inline void set_IrSource_5(String_t* value)
	{
		___IrSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IrSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_IrVersion_6() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___IrVersion_6)); }
	inline String_t* get_IrVersion_6() const { return ___IrVersion_6; }
	inline String_t** get_address_of_IrVersion_6() { return &___IrVersion_6; }
	inline void set_IrVersion_6(String_t* value)
	{
		___IrVersion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IrVersion_6), (void*)value);
	}

	inline static int32_t get_offset_of_ProducerName_7() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___ProducerName_7)); }
	inline String_t* get_ProducerName_7() const { return ___ProducerName_7; }
	inline String_t** get_address_of_ProducerName_7() { return &___ProducerName_7; }
	inline void set_ProducerName_7(String_t* value)
	{
		___ProducerName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProducerName_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWarningsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5, ___U3CWarningsU3Ek__BackingField_8)); }
	inline List_1_tCE49624AE16775B26DC341B575300D35B1D38E16 * get_U3CWarningsU3Ek__BackingField_8() const { return ___U3CWarningsU3Ek__BackingField_8; }
	inline List_1_tCE49624AE16775B26DC341B575300D35B1D38E16 ** get_address_of_U3CWarningsU3Ek__BackingField_8() { return &___U3CWarningsU3Ek__BackingField_8; }
	inline void set_U3CWarningsU3Ek__BackingField_8(List_1_tCE49624AE16775B26DC341B575300D35B1D38E16 * value)
	{
		___U3CWarningsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWarningsU3Ek__BackingField_8), (void*)value);
	}
};


// Unity.Barracuda.WorkerExtensions
struct  WorkerExtensions_tF4EDB6D729994433F4764F40EC3BFA8A9835B1D2  : public RuntimeObject
{
public:

public:
};


// Unity.Barracuda.WorkerFactory
struct  WorkerFactory_t154598237F3402FE04EA5977473CF4F5A197A8F3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Barracuda.TensorShape
struct  TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC 
{
public:
	// System.Int32 Unity.Barracuda.TensorShape::batch
	int32_t ___batch_0;
	// System.Int32 Unity.Barracuda.TensorShape::height
	int32_t ___height_1;
	// System.Int32 Unity.Barracuda.TensorShape::width
	int32_t ___width_2;
	// System.Int32 Unity.Barracuda.TensorShape::channels
	int32_t ___channels_3;

public:
	inline static int32_t get_offset_of_batch_0() { return static_cast<int32_t>(offsetof(TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC, ___batch_0)); }
	inline int32_t get_batch_0() const { return ___batch_0; }
	inline int32_t* get_address_of_batch_0() { return &___batch_0; }
	inline void set_batch_0(int32_t value)
	{
		___batch_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_channels_3() { return static_cast<int32_t>(offsetof(TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC, ___channels_3)); }
	inline int32_t get_channels_3() const { return ___channels_3; }
	inline int32_t* get_address_of_channels_3() { return &___channels_3; }
	inline void set_channels_3(int32_t value)
	{
		___channels_3 = value;
	}
};


// Unity.Barracuda.WaitForCompletion
struct  WaitForCompletion_tFA4C83060A23BC78C9B877FD8B581C1C81C3D4E9  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// Unity.Barracuda.Tensor Unity.Barracuda.WaitForCompletion::m_Tensor
	Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * ___m_Tensor_0;

public:
	inline static int32_t get_offset_of_m_Tensor_0() { return static_cast<int32_t>(offsetof(WaitForCompletion_tFA4C83060A23BC78C9B877FD8B581C1C81C3D4E9, ___m_Tensor_0)); }
	inline Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * get_m_Tensor_0() const { return ___m_Tensor_0; }
	inline Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA ** get_address_of_m_Tensor_0() { return &___m_Tensor_0; }
	inline void set_m_Tensor_0(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * value)
	{
		___m_Tensor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tensor_0), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Barracuda.CompareOpsUtils_LogLevel
struct  LogLevel_tE1B31A45C947262DD0AEEFA29CFB546F518202AA 
{
public:
	// System.Int32 Unity.Barracuda.CompareOpsUtils_LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tE1B31A45C947262DD0AEEFA29CFB546F518202AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.Tensor
struct  Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA  : public RuntimeObject
{
public:
	// Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::m_TensorOnDevice
	RuntimeObject* ___m_TensorOnDevice_0;
	// Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::m_TensorAllocator
	RuntimeObject* ___m_TensorAllocator_1;
	// System.Single[] Unity.Barracuda.Tensor::m_Cache
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Cache_2;
	// System.Boolean Unity.Barracuda.Tensor::m_CacheIsDirty
	bool ___m_CacheIsDirty_3;
	// System.Boolean Unity.Barracuda.Tensor::m_Disposed
	bool ___m_Disposed_4;
	// System.String Unity.Barracuda.Tensor::name
	String_t* ___name_5;
	// Unity.Barracuda.TensorShape Unity.Barracuda.Tensor::shape
	TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC  ___shape_6;
	// System.Boolean Unity.Barracuda.Tensor::m_Disposing
	bool ___m_Disposing_7;

public:
	inline static int32_t get_offset_of_m_TensorOnDevice_0() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_TensorOnDevice_0)); }
	inline RuntimeObject* get_m_TensorOnDevice_0() const { return ___m_TensorOnDevice_0; }
	inline RuntimeObject** get_address_of_m_TensorOnDevice_0() { return &___m_TensorOnDevice_0; }
	inline void set_m_TensorOnDevice_0(RuntimeObject* value)
	{
		___m_TensorOnDevice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorOnDevice_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TensorAllocator_1() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_TensorAllocator_1)); }
	inline RuntimeObject* get_m_TensorAllocator_1() const { return ___m_TensorAllocator_1; }
	inline RuntimeObject** get_address_of_m_TensorAllocator_1() { return &___m_TensorAllocator_1; }
	inline void set_m_TensorAllocator_1(RuntimeObject* value)
	{
		___m_TensorAllocator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorAllocator_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_2() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_Cache_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Cache_2() const { return ___m_Cache_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Cache_2() { return &___m_Cache_2; }
	inline void set_m_Cache_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Cache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheIsDirty_3() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_CacheIsDirty_3)); }
	inline bool get_m_CacheIsDirty_3() const { return ___m_CacheIsDirty_3; }
	inline bool* get_address_of_m_CacheIsDirty_3() { return &___m_CacheIsDirty_3; }
	inline void set_m_CacheIsDirty_3(bool value)
	{
		___m_CacheIsDirty_3 = value;
	}

	inline static int32_t get_offset_of_m_Disposed_4() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_Disposed_4)); }
	inline bool get_m_Disposed_4() const { return ___m_Disposed_4; }
	inline bool* get_address_of_m_Disposed_4() { return &___m_Disposed_4; }
	inline void set_m_Disposed_4(bool value)
	{
		___m_Disposed_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_shape_6() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___shape_6)); }
	inline TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC  get_shape_6() const { return ___shape_6; }
	inline TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC * get_address_of_shape_6() { return &___shape_6; }
	inline void set_shape_6(TensorShape_t12A401C96ECE93406DEDD172784CA8F1774216FC  value)
	{
		___shape_6 = value;
	}

	inline static int32_t get_offset_of_m_Disposing_7() { return static_cast<int32_t>(offsetof(Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA, ___m_Disposing_7)); }
	inline bool get_m_Disposing_7() const { return ___m_Disposing_7; }
	inline bool* get_address_of_m_Disposing_7() { return &___m_Disposing_7; }
	inline void set_m_Disposing_7(bool value)
	{
		___m_Disposing_7 = value;
	}
};


// Unity.Barracuda.WorkerFactory_Device
struct  Device_tF012A1509807B51098C63CBEEA0263B365A173B8 
{
public:
	// System.Int32 Unity.Barracuda.WorkerFactory_Device::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Device_tF012A1509807B51098C63CBEEA0263B365A173B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.WorkerFactory_Type
struct  Type_tBA5AD913B219145CFE1AEC249178B2EF5408D458 
{
public:
	// System.Int32 Unity.Barracuda.WorkerFactory_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tBA5AD913B219145CFE1AEC249178B2EF5408D458, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Barracuda.WorkerFactory_WorkerConfiguration
struct  WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 
{
public:
	// System.Boolean Unity.Barracuda.WorkerFactory_WorkerConfiguration::verbose
	bool ___verbose_0;
	// Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory_WorkerConfiguration::compareAgainstType
	int32_t ___compareAgainstType_1;
	// Unity.Barracuda.CompareOpsUtils_LogLevel Unity.Barracuda.WorkerFactory_WorkerConfiguration::compareLogLevel
	int32_t ___compareLogLevel_2;
	// System.Single Unity.Barracuda.WorkerFactory_WorkerConfiguration::compareEpsilon
	float ___compareEpsilon_3;

public:
	inline static int32_t get_offset_of_verbose_0() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5, ___verbose_0)); }
	inline bool get_verbose_0() const { return ___verbose_0; }
	inline bool* get_address_of_verbose_0() { return &___verbose_0; }
	inline void set_verbose_0(bool value)
	{
		___verbose_0 = value;
	}

	inline static int32_t get_offset_of_compareAgainstType_1() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5, ___compareAgainstType_1)); }
	inline int32_t get_compareAgainstType_1() const { return ___compareAgainstType_1; }
	inline int32_t* get_address_of_compareAgainstType_1() { return &___compareAgainstType_1; }
	inline void set_compareAgainstType_1(int32_t value)
	{
		___compareAgainstType_1 = value;
	}

	inline static int32_t get_offset_of_compareLogLevel_2() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5, ___compareLogLevel_2)); }
	inline int32_t get_compareLogLevel_2() const { return ___compareLogLevel_2; }
	inline int32_t* get_address_of_compareLogLevel_2() { return &___compareLogLevel_2; }
	inline void set_compareLogLevel_2(int32_t value)
	{
		___compareLogLevel_2 = value;
	}

	inline static int32_t get_offset_of_compareEpsilon_3() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5, ___compareEpsilon_3)); }
	inline float get_compareEpsilon_3() const { return ___compareEpsilon_3; }
	inline float* get_address_of_compareEpsilon_3() { return &___compareEpsilon_3; }
	inline void set_compareEpsilon_3(float value)
	{
		___compareEpsilon_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.WorkerFactory/WorkerConfiguration
struct WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_pinvoke
{
	int32_t ___verbose_0;
	int32_t ___compareAgainstType_1;
	int32_t ___compareLogLevel_2;
	float ___compareEpsilon_3;
};
// Native definition for COM marshalling of Unity.Barracuda.WorkerFactory/WorkerConfiguration
struct WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_com
{
	int32_t ___verbose_0;
	int32_t ___compareAgainstType_1;
	int32_t ___compareLogLevel_2;
	float ___compareEpsilon_3;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tensor_PrepareCacheForAccess_m4BAD797724D6671872128679BF7B274F23E6C79E (Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * __this, bool ___blocking0, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tensor_DetachFromDevice_m589956BCE22B738F75B355A95A3C41EFDF9B2C9A (Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * __this, bool ___disposeDeviceData0, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Tensor::TakeOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tensor_TakeOwnership_mDFDC166C8DED59805A6C7F4FBBC3697D4549E2BC (Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342 (WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BarracudaBackendsFactory_CreateWorker_m91A8F0E25FF5200C4A922D6DCFBA38E6430940C1 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs3, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  ___workerConfiguration4, const RuntimeMethod* method);
// Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkerFactory_GetBestTypeForDevice_mECE474337A347A07311E99FD67C9C78762E60B28 (int32_t ___device0, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/WorkerConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs3, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  ___workerConfiguration4, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory/Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m5B4819BBB1BC17DBDB9A3236877B54B70D72759E (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, int32_t ___device1, bool ___verbose2, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m669DE5F7EF5CB91D689A0C04D51AA12F2E21DEA2 (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs1, int32_t ___device2, bool ___verbose3, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory/Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mB889C06662D4A43B029066BDA1AE16DB5893916D (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs2, int32_t ___device3, bool ___verbose4, const RuntimeMethod* method);
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory/Type,Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, bool ___verbose2, const RuntimeMethod* method);
// Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BarracudaBackendsFactory_ResolveAutoType_m6330F6A994BAF98556AF57DCB19862FF7F2B3233 (int32_t ___type0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory/Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BarracudaBackendsFactory_GetBestTypeForDevice_m8FD9451309406BB2AFD8A158EBF6A3794A5D8689 (int32_t ___device0, const RuntimeMethod* method);
// Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BarracudaBackendsFactory_ValidateType_m2CBFC1545CE27DB8F0534FE6FF644D02EBDCE35E (int32_t ___type0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForCompletion_get_keepWaiting_m383F96A9D64B27E4BA7788CF20D91FD29BF601F6 (WaitForCompletion_tFA4C83060A23BC78C9B877FD8B581C1C81C3D4E9 * __this, const RuntimeMethod* method)
{
	{
		// bool cpuCacheIsReady = m_Tensor.PrepareCacheForAccess(blocking:false);
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_0 = __this->get_m_Tensor_0();
		bool L_1 = Tensor_PrepareCacheForAccess_m4BAD797724D6671872128679BF7B274F23E6C79E(L_0, (bool)0, /*hidden argument*/NULL);
		// return !cpuCacheIsReady;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_mC085295D00EDD1F60CAB8A1F364518600C2AF227 (WaitForCompletion_tFA4C83060A23BC78C9B877FD8B581C1C81C3D4E9 * __this, Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * ___tensor0, const RuntimeMethod* method)
{
	{
		// public WaitForCompletion(Tensor tensor)
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5(__this, /*hidden argument*/NULL);
		// m_Tensor = tensor;
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_0 = ___tensor0;
		__this->set_m_Tensor_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * WorkerExtensions_CopyOutput_mCB7F6168CAED5960F037CCD8DBE19A4506D10CCC (RuntimeObject* ___worker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorkerExtensions_CopyOutput_mCB7F6168CAED5960F037CCD8DBE19A4506D10CCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var output = worker.PeekOutput();
		RuntimeObject* L_0 = ___worker0;
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_1 = InterfaceFuncInvoker0< Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * >::Invoke(11 /* Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput() */, IWorker_t097E095A4F99621A292907BD8930C13FEE57E7C9_il2cpp_TypeInfo_var, L_0);
		// output.DetachFromDevice(); // detach will readback to CPU and
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_2 = L_1;
		Tensor_DetachFromDevice_m589956BCE22B738F75B355A95A3C41EFDF9B2C9A(L_2, (bool)1, /*hidden argument*/NULL);
		// output.TakeOwnership();
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_3 = L_2;
		Tensor_TakeOwnership_mDFDC166C8DED59805A6C7F4FBBC3697D4549E2BC(L_3, /*hidden argument*/NULL);
		// return output;
		return L_3;
	}
}
// Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * WorkerExtensions_CopyOutput_m3F657D369FA058A457C6AA9D453EB6FC5C650F9E (RuntimeObject* ___worker0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorkerExtensions_CopyOutput_m3F657D369FA058A457C6AA9D453EB6FC5C650F9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var output = worker.PeekOutput(name);
		RuntimeObject* L_0 = ___worker0;
		String_t* L_1 = ___name1;
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_2 = InterfaceFuncInvoker1< Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA *, String_t* >::Invoke(12 /* Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String) */, IWorker_t097E095A4F99621A292907BD8930C13FEE57E7C9_il2cpp_TypeInfo_var, L_0, L_1);
		// output.DetachFromDevice(); // detach will readback to CPU and
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_3 = L_2;
		Tensor_DetachFromDevice_m589956BCE22B738F75B355A95A3C41EFDF9B2C9A(L_3, (bool)1, /*hidden argument*/NULL);
		// output.TakeOwnership();
		Tensor_tCDDAACA0A48F8BB6DA070CA849A882D1B73A3DEA * L_4 = L_3;
		Tensor_TakeOwnership_mDFDC166C8DED59805A6C7F4FBBC3697D4549E2BC(L_4, /*hidden argument*/NULL);
		// return output;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m09AD7713E2302335DFE56D345D6A329207286166 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs3, bool ___verbose4, int32_t ___compareAgainstType5, int32_t ___differenceLogLevel6, const RuntimeMethod* method)
{
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_0 = ___type0;
		bool L_1 = ___verbose4;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_0), L_0, L_1, 0, (0.0001f), /*hidden argument*/NULL);
		// workerConfiguration.compareAgainstType = compareAgainstType;
		int32_t L_2 = ___compareAgainstType5;
		(&V_0)->set_compareAgainstType_1(L_2);
		// workerConfiguration.compareLogLevel = differenceLogLevel;
		int32_t L_3 = ___differenceLogLevel6;
		(&V_0)->set_compareLogLevel_2(L_3);
		// return BarracudaBackendsFactory.CreateWorker(type, model, additionalOutputs, trimOutputs, workerConfiguration);
		int32_t L_4 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_5 = ___model1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___additionalOutputs2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___trimOutputs3;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_8 = V_0;
		RuntimeObject* L_9 = BarracudaBackendsFactory_CreateWorker_m91A8F0E25FF5200C4A922D6DCFBA38E6430940C1(L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_WorkerConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs3, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  ___workerConfiguration4, const RuntimeMethod* method)
{
	{
		// return BarracudaBackendsFactory.CreateWorker(type, model, additionalOutputs, trimOutputs, workerConfiguration);
		int32_t L_0 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_1 = ___model1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ___additionalOutputs2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___trimOutputs3;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_4 = ___workerConfiguration4;
		RuntimeObject* L_5 = BarracudaBackendsFactory_CreateWorker_m91A8F0E25FF5200C4A922D6DCFBA38E6430940C1(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mB889C06662D4A43B029066BDA1AE16DB5893916D (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs2, int32_t ___device3, bool ___verbose4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var type = GetBestTypeForDevice(device);
		int32_t L_0 = ___device3;
		int32_t L_1 = WorkerFactory_GetBestTypeForDevice_mECE474337A347A07311E99FD67C9C78762E60B28(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_2 = V_0;
		bool L_3 = ___verbose4;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_1), L_2, L_3, 0, (0.0001f), /*hidden argument*/NULL);
		// return CreateWorker(type, model, additionalOutputs, trimOutputs, workerConfiguration);
		int32_t L_4 = V_0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_5 = ___model0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___additionalOutputs1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___trimOutputs2;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_8 = V_1;
		RuntimeObject* L_9 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, bool ___verbose2, const RuntimeMethod* method)
{
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_0 = ___type0;
		bool L_1 = ___verbose2;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_0), L_0, L_1, 0, (0.0001f), /*hidden argument*/NULL);
		// return CreateWorker(type, model, null, null, workerConfiguration);
		int32_t L_2 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_3 = ___model1;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_4 = V_0;
		RuntimeObject* L_5 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_2, L_3, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m5B90B3DE28FEFBAC55AC35E127F378C6F85F43F7 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, bool ___verbose3, const RuntimeMethod* method)
{
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_0 = ___type0;
		bool L_1 = ___verbose3;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_0), L_0, L_1, 0, (0.0001f), /*hidden argument*/NULL);
		// return CreateWorker(type, model, additionalOutputs, null, workerConfiguration);
		int32_t L_2 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_3 = ___model1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___additionalOutputs2;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_5 = V_0;
		RuntimeObject* L_6 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_2, L_3, L_4, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m25FBD1B16ABB9BA31173AA1C1F06CC7C6EB4048C (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___trimOutputs3, bool ___verbose4, const RuntimeMethod* method)
{
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_0 = ___type0;
		bool L_1 = ___verbose4;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_0), L_0, L_1, 0, (0.0001f), /*hidden argument*/NULL);
		// return CreateWorker(type, model, additionalOutputs, trimOutputs, workerConfiguration);
		int32_t L_2 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_3 = ___model1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___additionalOutputs2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___trimOutputs3;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_6 = V_0;
		RuntimeObject* L_7 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mCD91A6662B6C9F06926DD8F320FDB50E05441E91 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, bool ___verbose2, int32_t ___compareAgainstType3, int32_t ___differenceLogLevel4, const RuntimeMethod* method)
{
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var workerConfiguration = new WorkerConfiguration(type, verbose);
		int32_t L_0 = ___type0;
		bool L_1 = ___verbose2;
		WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342((WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *)(&V_0), L_0, L_1, 0, (0.0001f), /*hidden argument*/NULL);
		// workerConfiguration.compareAgainstType = compareAgainstType;
		int32_t L_2 = ___compareAgainstType3;
		(&V_0)->set_compareAgainstType_1(L_2);
		// workerConfiguration.compareLogLevel = differenceLogLevel;
		int32_t L_3 = ___differenceLogLevel4;
		(&V_0)->set_compareLogLevel_2(L_3);
		// return CreateWorker(type, model, additionalOutputs:null, trimOutputs:null, workerConfiguration);
		int32_t L_4 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_5 = ___model1;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_6 = V_0;
		RuntimeObject* L_7 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_4, L_5, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_WorkerConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m467D98343D1C1734A28882C5C8856B20657754F3 (int32_t ___type0, Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model1, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  ___workerConfiguration2, const RuntimeMethod* method)
{
	{
		// return CreateWorker(type, model, additionalOutputs:null, trimOutputs:null, workerConfiguration);
		int32_t L_0 = ___type0;
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_1 = ___model1;
		WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5  L_2 = ___workerConfiguration2;
		RuntimeObject* L_3 = WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A(L_0, L_1, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_mF8F6A808363F246F77A70C4F3D6EBAFC8C70F137 (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, bool ___verbose1, const RuntimeMethod* method)
{
	{
		// return CreateWorker(model, Device.Auto, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		bool L_1 = ___verbose1;
		RuntimeObject* L_2 = WorkerFactory_CreateWorker_m5B4819BBB1BC17DBDB9A3236877B54B70D72759E(L_0, ((int32_t)32768), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m5B4819BBB1BC17DBDB9A3236877B54B70D72759E (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, int32_t ___device1, bool ___verbose2, const RuntimeMethod* method)
{
	{
		// return CreateWorker(model, additionalOutputs:null, device, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		int32_t L_1 = ___device1;
		bool L_2 = ___verbose2;
		RuntimeObject* L_3 = WorkerFactory_CreateWorker_m669DE5F7EF5CB91D689A0C04D51AA12F2E21DEA2(L_0, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateWorker_m669DE5F7EF5CB91D689A0C04D51AA12F2E21DEA2 (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalOutputs1, int32_t ___device2, bool ___verbose3, const RuntimeMethod* method)
{
	{
		// return CreateWorker(model, additionalOutputs, trimOutputs:null, device, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___additionalOutputs1;
		int32_t L_2 = ___device2;
		bool L_3 = ___verbose3;
		RuntimeObject* L_4 = WorkerFactory_CreateWorker_mB889C06662D4A43B029066BDA1AE16DB5893916D(L_0, L_1, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateReferenceCPUWorker_m38040CE3269D215E2A9B2B9051215D942B96372A (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, bool ___verbose1, const RuntimeMethod* method)
{
	{
		// return CreateWorker(Type.CSharpRef, model, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		bool L_1 = ___verbose1;
		RuntimeObject* L_2 = WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412(((int32_t)514), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateReferenceComputeWorker_mE3E6BF21D92695185DCBB8F55BDE1F4E93107F39 (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, bool ___verbose1, const RuntimeMethod* method)
{
	{
		// return CreateWorker(Type.ComputeRef, model, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		bool L_1 = ___verbose1;
		RuntimeObject* L_2 = WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412(((int32_t)258), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkerFactory_CreateComputeWorker_mCF9C0D7DF7E40451660DECC86F9D3A172DD5C6E1 (Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * ___model0, bool ___verbose1, const RuntimeMethod* method)
{
	{
		// return CreateWorker(Type.ComputePrecompiled, model, verbose);
		Model_t61187C3553BD5E1B5718B94A65A9D0A3540FA1B5 * L_0 = ___model0;
		bool L_1 = ___verbose1;
		RuntimeObject* L_2 = WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412(((int32_t)256), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.WorkerFactory_Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E (int32_t ___type0, int32_t ___device1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = BarracudaBackendsFactory.ResolveAutoType(type);
		int32_t L_0 = ___type0;
		int32_t L_1 = BarracudaBackendsFactory_ResolveAutoType_m6330F6A994BAF98556AF57DCB19862FF7F2B3233(L_0, /*hidden argument*/NULL);
		___type0 = L_1;
		// if (type == Type.Auto)
		int32_t L_2 = ___type0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentException($"Auto type is ambiguous in this context and not supported");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteral7EE5595A14D0AC42E47E80A1E881AC6C639732FC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E_RuntimeMethod_var);
	}

IL_001b:
	{
		// return ((int)type & (int)device) == (int)device;
		int32_t L_4 = ___type0;
		int32_t L_5 = ___device1;
		int32_t L_6 = ___device1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
	}
}
// Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory_Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkerFactory_GetBestTypeForDevice_mECE474337A347A07311E99FD67C9C78762E60B28 (int32_t ___device0, const RuntimeMethod* method)
{
	{
		// return BarracudaBackendsFactory.GetBestTypeForDevice(device);
		int32_t L_0 = ___device0;
		int32_t L_1 = BarracudaBackendsFactory_GetBestTypeForDevice_m8FD9451309406BB2AFD8A158EBF6A3794A5D8689(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory_Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkerFactory_ValidateType_m3D9C07E4F47D53CFA0DBE83591B9CFD0913899C8 (int32_t ___type0, const RuntimeMethod* method)
{
	{
		// return BarracudaBackendsFactory.ValidateType(type);
		int32_t L_0 = ___type0;
		int32_t L_1 = BarracudaBackendsFactory_ValidateType_m2CBFC1545CE27DB8F0534FE6FF644D02EBDCE35E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Barracuda.WorkerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerFactory__ctor_m3203619B4166E69246AB5EC0E1C0E74CA0EDED9A (WorkerFactory_t154598237F3402FE04EA5977473CF4F5A197A8F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_pinvoke(const WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5& unmarshaled, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_pinvoke& marshaled)
{
	marshaled.___verbose_0 = static_cast<int32_t>(unmarshaled.get_verbose_0());
	marshaled.___compareAgainstType_1 = unmarshaled.get_compareAgainstType_1();
	marshaled.___compareLogLevel_2 = unmarshaled.get_compareLogLevel_2();
	marshaled.___compareEpsilon_3 = unmarshaled.get_compareEpsilon_3();
}
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_pinvoke_back(const WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_pinvoke& marshaled, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5& unmarshaled)
{
	bool unmarshaled_verbose_temp_0 = false;
	unmarshaled_verbose_temp_0 = static_cast<bool>(marshaled.___verbose_0);
	unmarshaled.set_verbose_0(unmarshaled_verbose_temp_0);
	int32_t unmarshaled_compareAgainstType_temp_1 = 0;
	unmarshaled_compareAgainstType_temp_1 = marshaled.___compareAgainstType_1;
	unmarshaled.set_compareAgainstType_1(unmarshaled_compareAgainstType_temp_1);
	int32_t unmarshaled_compareLogLevel_temp_2 = 0;
	unmarshaled_compareLogLevel_temp_2 = marshaled.___compareLogLevel_2;
	unmarshaled.set_compareLogLevel_2(unmarshaled_compareLogLevel_temp_2);
	float unmarshaled_compareEpsilon_temp_3 = 0.0f;
	unmarshaled_compareEpsilon_temp_3 = marshaled.___compareEpsilon_3;
	unmarshaled.set_compareEpsilon_3(unmarshaled_compareEpsilon_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_pinvoke_cleanup(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_com(const WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5& unmarshaled, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_com& marshaled)
{
	marshaled.___verbose_0 = static_cast<int32_t>(unmarshaled.get_verbose_0());
	marshaled.___compareAgainstType_1 = unmarshaled.get_compareAgainstType_1();
	marshaled.___compareLogLevel_2 = unmarshaled.get_compareLogLevel_2();
	marshaled.___compareEpsilon_3 = unmarshaled.get_compareEpsilon_3();
}
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_com_back(const WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_com& marshaled, WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5& unmarshaled)
{
	bool unmarshaled_verbose_temp_0 = false;
	unmarshaled_verbose_temp_0 = static_cast<bool>(marshaled.___verbose_0);
	unmarshaled.set_verbose_0(unmarshaled_verbose_temp_0);
	int32_t unmarshaled_compareAgainstType_temp_1 = 0;
	unmarshaled_compareAgainstType_temp_1 = marshaled.___compareAgainstType_1;
	unmarshaled.set_compareAgainstType_1(unmarshaled_compareAgainstType_temp_1);
	int32_t unmarshaled_compareLogLevel_temp_2 = 0;
	unmarshaled_compareLogLevel_temp_2 = marshaled.___compareLogLevel_2;
	unmarshaled.set_compareLogLevel_2(unmarshaled_compareLogLevel_temp_2);
	float unmarshaled_compareEpsilon_temp_3 = 0.0f;
	unmarshaled_compareEpsilon_temp_3 = marshaled.___compareEpsilon_3;
	unmarshaled.set_compareEpsilon_3(unmarshaled_compareEpsilon_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshal_com_cleanup(WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5_marshaled_com& marshaled)
{
}
// System.Void Unity.Barracuda.WorkerFactory_WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory_Type,System.Boolean,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342 (WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method)
{
	{
		// this.verbose = verbose;
		bool L_0 = ___verbose1;
		__this->set_verbose_0(L_0);
		// this.compareAgainstType = compareAgainstType;
		int32_t L_1 = ___compareAgainstType0;
		__this->set_compareAgainstType_1(L_1);
		// this.compareLogLevel = compareLogLevel;
		int32_t L_2 = ___compareLogLevel2;
		__this->set_compareLogLevel_2(L_2);
		// this.compareEpsilon = compareEpsilon;
		float L_3 = ___compareEpsilon3;
		__this->set_compareEpsilon_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342_AdjustorThunk (RuntimeObject * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 * _thisAdjusted = reinterpret_cast<WorkerConfiguration_tC946F6C93D2B6DD7E6732893C858E429B9116EE5 *>(__this + _offset);
	WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342(_thisAdjusted, ___compareAgainstType0, ___verbose1, ___compareLogLevel2, ___compareEpsilon3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
