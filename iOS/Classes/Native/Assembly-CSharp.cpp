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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// BallControls
struct BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370;
// CameraControls
struct CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B;
// EnemySpawner
struct EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC;
// RespawnScript
struct RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle>
struct Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D;
// System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent,System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>>
struct Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t88DF1A02CCDD1766DB310B8D72B1F2145D775432;
// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer>
struct List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352;
// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>
struct List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.RenderTargetIdentifier>
struct List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Rendering.PostProcessing.Dithering
struct Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0;
// UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
struct FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D;
// UnityEngine.Rendering.PostProcessing.Fog
struct Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77;
// UnityEngine.Rendering.PostProcessing.LogHistogram
struct LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
struct PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39;
// UnityEngine.Rendering.PostProcessing.PostProcessLayer
struct PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2;
// UnityEngine.Rendering.PostProcessing.PostProcessProfile
struct PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E;
// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB;
// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B;
// UnityEngine.Rendering.PostProcessing.PostProcessVolume
struct PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4;
// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
struct SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD;
// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949;
// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.SphereCollider
struct SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tBD9F86FDD78822664E168574EA18AF8EA9D316B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B020927D3C6EB407223A1BAA3D6CE3597A3F88D;
IL2CPP_EXTERN_C String_t* _stringLiteral3684C9D3C05E7BEE19E2728C6A5B2BBCCF0CD9C7;
IL2CPP_EXTERN_C String_t* _stringLiteral706C3C2934D8793634DA390857ADEBA6FA2026EC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB064B23223DFF9B805313CDAFC355ACC64F1642;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BE68CF595ACA0C10C3BFAB2729EC7A5CDB9AEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCA27CA564E53AC6345B35F58AC2E5519E7773AFC;
IL2CPP_EXTERN_C String_t* _stringLiteralD1EEFA6BF5000E70B4EBB5910105C71568F7DAF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD8ADCE94EA1D9896F10CC5C8380D6E5EEE5CF13A;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2_m4487C726B4BDD3795129BE6E09B8C3AF3A17AA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D_mFCF9C0C2FE7C02FCE6ED3344FA7E785BD5BDCC01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BallControls_OnCollisionEnter_mDC5EE7A7D2E383632358C5E74D116F488DD322E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BallControls_OnCollisionExit_mDEA16E9C177B3D33AB8211DE1F931552498928D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BallControls_Start_m9E53326D01B54B2CA9D7CA694A3DE4EA4AD8AC5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraControls_FixedUpdate_m03F17021DFBE6C204C4FDE79AC7EBC32E99603E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_OnCollisionEnter_m61DD4FA3173ED0140F1DCD785F06E2D9EC7CD2BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_Start_mC0F2354C1D2ED84F19D7BF22C89A2C198EBED26E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_Update_m846CE9A8B10E8EBB82FF444060B85133DDEFD0D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner__ctor_m637C6372D629C685D64F22E5E15FD64F9F715F24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RespawnScript_Respawn_mB8554EFFA53C47ED9C3AAA28798B65BEEA1DBAF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RespawnScript_Start_mCB0C6FFC531EF763A3A26062D9629ABCDA8F516B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RespawnScript__ctor_mB15E724A83376B424E621C732A000DD91F3F3BBA_MetadataUsageId;
struct ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 ;

struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


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

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Collision
struct  Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Impulse_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_RelativeVelocity_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Rigidbody_2)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Collider_3)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
};

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing
struct  Antialiasing_t4B83F9C9FA7E42D5B3EB30CE9B5B4F870C3780FA 
{
public:
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Antialiasing_t4B83F9C9FA7E42D5B3EB30CE9B5B4F870C3780FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SphereCollider
struct  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// BallControls
struct  BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody BallControls::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_4;
	// System.Single BallControls::forceMultiplier
	float ___forceMultiplier_5;
	// UnityEngine.AudioSource BallControls::audio
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audio_6;
	// UnityEngine.GameObject BallControls::deathParticles
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___deathParticles_7;
	// UnityEngine.AudioClip BallControls::death
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___death_8;
	// UnityEngine.GameObject BallControls::respawn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___respawn_9;
	// UnityEngine.AudioSource BallControls::dingSoundEffect
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___dingSoundEffect_10;
	// UnityEngine.UI.Text BallControls::scoreOne
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreOne_11;
	// UnityEngine.UI.Text BallControls::scoreTwo
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreTwo_12;
	// EnemySpawner BallControls::enemySpawner
	EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * ___enemySpawner_13;
	// UnityEngine.GameObject BallControls::ptp
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ptp_14;
	// System.Single BallControls::posY
	float ___posY_15;
	// System.Boolean BallControls::left
	bool ___left_16;
	// System.Boolean BallControls::right
	bool ___right_17;
	// UnityEngine.GameObject BallControls::leftBtn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___leftBtn_18;
	// UnityEngine.GameObject BallControls::rightBtn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rightBtn_19;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___rb_4)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_forceMultiplier_5() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___forceMultiplier_5)); }
	inline float get_forceMultiplier_5() const { return ___forceMultiplier_5; }
	inline float* get_address_of_forceMultiplier_5() { return &___forceMultiplier_5; }
	inline void set_forceMultiplier_5(float value)
	{
		___forceMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_audio_6() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___audio_6)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audio_6() const { return ___audio_6; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audio_6() { return &___audio_6; }
	inline void set_audio_6(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audio_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_6), (void*)value);
	}

	inline static int32_t get_offset_of_deathParticles_7() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___deathParticles_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_deathParticles_7() const { return ___deathParticles_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_deathParticles_7() { return &___deathParticles_7; }
	inline void set_deathParticles_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___deathParticles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathParticles_7), (void*)value);
	}

	inline static int32_t get_offset_of_death_8() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___death_8)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_death_8() const { return ___death_8; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_death_8() { return &___death_8; }
	inline void set_death_8(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___death_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___death_8), (void*)value);
	}

	inline static int32_t get_offset_of_respawn_9() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___respawn_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_respawn_9() const { return ___respawn_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_respawn_9() { return &___respawn_9; }
	inline void set_respawn_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___respawn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___respawn_9), (void*)value);
	}

	inline static int32_t get_offset_of_dingSoundEffect_10() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___dingSoundEffect_10)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_dingSoundEffect_10() const { return ___dingSoundEffect_10; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_dingSoundEffect_10() { return &___dingSoundEffect_10; }
	inline void set_dingSoundEffect_10(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___dingSoundEffect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dingSoundEffect_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreOne_11() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___scoreOne_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreOne_11() const { return ___scoreOne_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreOne_11() { return &___scoreOne_11; }
	inline void set_scoreOne_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreOne_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreOne_11), (void*)value);
	}

	inline static int32_t get_offset_of_scoreTwo_12() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___scoreTwo_12)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreTwo_12() const { return ___scoreTwo_12; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreTwo_12() { return &___scoreTwo_12; }
	inline void set_scoreTwo_12(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreTwo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTwo_12), (void*)value);
	}

	inline static int32_t get_offset_of_enemySpawner_13() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___enemySpawner_13)); }
	inline EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * get_enemySpawner_13() const { return ___enemySpawner_13; }
	inline EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC ** get_address_of_enemySpawner_13() { return &___enemySpawner_13; }
	inline void set_enemySpawner_13(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * value)
	{
		___enemySpawner_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemySpawner_13), (void*)value);
	}

	inline static int32_t get_offset_of_ptp_14() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___ptp_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ptp_14() const { return ___ptp_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ptp_14() { return &___ptp_14; }
	inline void set_ptp_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ptp_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ptp_14), (void*)value);
	}

	inline static int32_t get_offset_of_posY_15() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___posY_15)); }
	inline float get_posY_15() const { return ___posY_15; }
	inline float* get_address_of_posY_15() { return &___posY_15; }
	inline void set_posY_15(float value)
	{
		___posY_15 = value;
	}

	inline static int32_t get_offset_of_left_16() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___left_16)); }
	inline bool get_left_16() const { return ___left_16; }
	inline bool* get_address_of_left_16() { return &___left_16; }
	inline void set_left_16(bool value)
	{
		___left_16 = value;
	}

	inline static int32_t get_offset_of_right_17() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___right_17)); }
	inline bool get_right_17() const { return ___right_17; }
	inline bool* get_address_of_right_17() { return &___right_17; }
	inline void set_right_17(bool value)
	{
		___right_17 = value;
	}

	inline static int32_t get_offset_of_leftBtn_18() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___leftBtn_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_leftBtn_18() const { return ___leftBtn_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_leftBtn_18() { return &___leftBtn_18; }
	inline void set_leftBtn_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___leftBtn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftBtn_18), (void*)value);
	}

	inline static int32_t get_offset_of_rightBtn_19() { return static_cast<int32_t>(offsetof(BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370, ___rightBtn_19)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_rightBtn_19() const { return ___rightBtn_19; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_rightBtn_19() { return &___rightBtn_19; }
	inline void set_rightBtn_19(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___rightBtn_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightBtn_19), (void*)value);
	}
};


// CameraControls
struct  CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraControls::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_4;
	// System.Single CameraControls::speed
	float ___speed_5;
	// UnityEngine.Vector3 CameraControls::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_6;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B, ___target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_4() const { return ___target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B, ___offset_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_6() const { return ___offset_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_6 = value;
	}
};


// EnemySpawner
struct  EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] EnemySpawner::levels
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___levels_4;
	// System.Int32 EnemySpawner::level
	int32_t ___level_5;
	// System.Int32 EnemySpawner::actualLevel
	int32_t ___actualLevel_6;
	// UnityEngine.Vector3 EnemySpawner::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_7;
	// UnityEngine.UI.Text EnemySpawner::score
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___score_8;
	// UnityEngine.UI.Text EnemySpawner::highScoreTxt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___highScoreTxt_9;
	// UnityEngine.UI.Text EnemySpawner::goal
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___goal_10;
	// System.Int32 EnemySpawner::highScore
	int32_t ___highScore_11;
	// UnityEngine.MeshFilter[] EnemySpawner::meshes
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ___meshes_12;
	// UnityEngine.Material EnemySpawner::main
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___main_13;
	// UnityEngine.Color[] EnemySpawner::colors
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___colors_14;

public:
	inline static int32_t get_offset_of_levels_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___levels_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_levels_4() const { return ___levels_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_levels_4() { return &___levels_4; }
	inline void set_levels_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___levels_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_4), (void*)value);
	}

	inline static int32_t get_offset_of_level_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___level_5)); }
	inline int32_t get_level_5() const { return ___level_5; }
	inline int32_t* get_address_of_level_5() { return &___level_5; }
	inline void set_level_5(int32_t value)
	{
		___level_5 = value;
	}

	inline static int32_t get_offset_of_actualLevel_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___actualLevel_6)); }
	inline int32_t get_actualLevel_6() const { return ___actualLevel_6; }
	inline int32_t* get_address_of_actualLevel_6() { return &___actualLevel_6; }
	inline void set_actualLevel_6(int32_t value)
	{
		___actualLevel_6 = value;
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___pos_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_7() const { return ___pos_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___score_8)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_score_8() const { return ___score_8; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___score_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_8), (void*)value);
	}

	inline static int32_t get_offset_of_highScoreTxt_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___highScoreTxt_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_highScoreTxt_9() const { return ___highScoreTxt_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_highScoreTxt_9() { return &___highScoreTxt_9; }
	inline void set_highScoreTxt_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___highScoreTxt_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScoreTxt_9), (void*)value);
	}

	inline static int32_t get_offset_of_goal_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___goal_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_goal_10() const { return ___goal_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_goal_10() { return &___goal_10; }
	inline void set_goal_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___goal_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goal_10), (void*)value);
	}

	inline static int32_t get_offset_of_highScore_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___highScore_11)); }
	inline int32_t get_highScore_11() const { return ___highScore_11; }
	inline int32_t* get_address_of_highScore_11() { return &___highScore_11; }
	inline void set_highScore_11(int32_t value)
	{
		___highScore_11 = value;
	}

	inline static int32_t get_offset_of_meshes_12() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___meshes_12)); }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* get_meshes_12() const { return ___meshes_12; }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820** get_address_of_meshes_12() { return &___meshes_12; }
	inline void set_meshes_12(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* value)
	{
		___meshes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_12), (void*)value);
	}

	inline static int32_t get_offset_of_main_13() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___main_13)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_main_13() const { return ___main_13; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_main_13() { return &___main_13; }
	inline void set_main_13(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___main_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___main_13), (void*)value);
	}

	inline static int32_t get_offset_of_colors_14() { return static_cast<int32_t>(offsetof(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC, ___colors_14)); }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* get_colors_14() const { return ___colors_14; }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399** get_address_of_colors_14() { return &___colors_14; }
	inline void set_colors_14(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* value)
	{
		___colors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_14), (void*)value);
	}
};


// RespawnScript
struct  RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// EnemySpawner RespawnScript::enemySpawner
	EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * ___enemySpawner_4;
	// System.String RespawnScript::adNumber
	String_t* ___adNumber_5;

public:
	inline static int32_t get_offset_of_enemySpawner_4() { return static_cast<int32_t>(offsetof(RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE, ___enemySpawner_4)); }
	inline EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * get_enemySpawner_4() const { return ___enemySpawner_4; }
	inline EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC ** get_address_of_enemySpawner_4() { return &___enemySpawner_4; }
	inline void set_enemySpawner_4(EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * value)
	{
		___enemySpawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemySpawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_adNumber_5() { return static_cast<int32_t>(offsetof(RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE, ___adNumber_5)); }
	inline String_t* get_adNumber_5() const { return ___adNumber_5; }
	inline String_t** get_address_of_adNumber_5() { return &___adNumber_5; }
	inline void set_adNumber_5(String_t* value)
	{
		___adNumber_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adNumber_5), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Rendering.PostProcessing.PostProcessLayer
struct  PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform UnityEngine.Rendering.PostProcessing.PostProcessLayer::volumeTrigger
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___volumeTrigger_4;
	// UnityEngine.LayerMask UnityEngine.Rendering.PostProcessing.PostProcessLayer::volumeLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___volumeLayer_5;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::stopNaNPropagation
	bool ___stopNaNPropagation_6;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::finalBlitToCameraTarget
	bool ___finalBlitToCameraTarget_7;
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer_Antialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::antialiasingMode
	int32_t ___antialiasingMode_8;
	// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::temporalAntialiasing
	TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * ___temporalAntialiasing_9;
	// UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::subpixelMorphologicalAntialiasing
	SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * ___subpixelMorphologicalAntialiasing_10;
	// UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessLayer::fastApproximateAntialiasing
	FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * ___fastApproximateAntialiasing_11;
	// UnityEngine.Rendering.PostProcessing.Fog UnityEngine.Rendering.PostProcessing.PostProcessLayer::fog
	Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * ___fog_12;
	// UnityEngine.Rendering.PostProcessing.Dithering UnityEngine.Rendering.PostProcessing.PostProcessLayer::dithering
	Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * ___dithering_13;
	// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer UnityEngine.Rendering.PostProcessing.PostProcessLayer::debugLayer
	PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * ___debugLayer_14;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Resources
	PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * ___m_Resources_15;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_OldResources
	PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * ___m_OldResources_16;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ShowToolkit
	bool ___m_ShowToolkit_17;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ShowCustomSorter
	bool ___m_ShowCustomSorter_18;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::breakBeforeColorGrading
	bool ___breakBeforeColorGrading_19;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_BeforeTransparentBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_BeforeTransparentBundles_20;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_BeforeStackBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_BeforeStackBundles_21;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_AfterStackBundles
	List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * ___m_AfterStackBundles_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent,System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer_SerializedBundleRef>> UnityEngine.Rendering.PostProcessing.PostProcessLayer::<sortedBundles>k__BackingField
	Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * ___U3CsortedBundlesU3Ek__BackingField_23;
	// UnityEngine.DepthTextureMode UnityEngine.Rendering.PostProcessing.PostProcessLayer::<cameraDepthFlags>k__BackingField
	int32_t ___U3CcameraDepthFlagsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::<haveBundlesBeenInited>k__BackingField
	bool ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.PostProcessing.PostProcessBundle> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Bundles
	Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * ___m_Bundles_26;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_PropertySheetFactory
	PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * ___m_PropertySheetFactory_27;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferBeforeReflections
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferBeforeReflections_28;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferBeforeLighting
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferBeforeLighting_29;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBufferOpaque
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBufferOpaque_30;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LegacyCmdBuffer
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_LegacyCmdBuffer_31;
	// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_32;
	// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_CurrentContext
	PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * ___m_CurrentContext_33;
	// UnityEngine.Rendering.PostProcessing.LogHistogram UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_LogHistogram
	LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * ___m_LogHistogram_34;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_SettingsUpdateNeeded
	bool ___m_SettingsUpdateNeeded_35;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_IsRenderingInSceneView
	bool ___m_IsRenderingInSceneView_36;
	// UnityEngine.Rendering.PostProcessing.TargetPool UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_TargetPool
	TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * ___m_TargetPool_37;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_NaNKilled
	bool ___m_NaNKilled_38;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_ActiveEffects
	List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * ___m_ActiveEffects_39;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.RenderTargetIdentifier> UnityEngine.Rendering.PostProcessing.PostProcessLayer::m_Targets
	List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * ___m_Targets_40;

public:
	inline static int32_t get_offset_of_volumeTrigger_4() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___volumeTrigger_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_volumeTrigger_4() const { return ___volumeTrigger_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_volumeTrigger_4() { return &___volumeTrigger_4; }
	inline void set_volumeTrigger_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___volumeTrigger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeTrigger_4), (void*)value);
	}

	inline static int32_t get_offset_of_volumeLayer_5() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___volumeLayer_5)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_volumeLayer_5() const { return ___volumeLayer_5; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_volumeLayer_5() { return &___volumeLayer_5; }
	inline void set_volumeLayer_5(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___volumeLayer_5 = value;
	}

	inline static int32_t get_offset_of_stopNaNPropagation_6() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___stopNaNPropagation_6)); }
	inline bool get_stopNaNPropagation_6() const { return ___stopNaNPropagation_6; }
	inline bool* get_address_of_stopNaNPropagation_6() { return &___stopNaNPropagation_6; }
	inline void set_stopNaNPropagation_6(bool value)
	{
		___stopNaNPropagation_6 = value;
	}

	inline static int32_t get_offset_of_finalBlitToCameraTarget_7() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___finalBlitToCameraTarget_7)); }
	inline bool get_finalBlitToCameraTarget_7() const { return ___finalBlitToCameraTarget_7; }
	inline bool* get_address_of_finalBlitToCameraTarget_7() { return &___finalBlitToCameraTarget_7; }
	inline void set_finalBlitToCameraTarget_7(bool value)
	{
		___finalBlitToCameraTarget_7 = value;
	}

	inline static int32_t get_offset_of_antialiasingMode_8() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___antialiasingMode_8)); }
	inline int32_t get_antialiasingMode_8() const { return ___antialiasingMode_8; }
	inline int32_t* get_address_of_antialiasingMode_8() { return &___antialiasingMode_8; }
	inline void set_antialiasingMode_8(int32_t value)
	{
		___antialiasingMode_8 = value;
	}

	inline static int32_t get_offset_of_temporalAntialiasing_9() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___temporalAntialiasing_9)); }
	inline TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * get_temporalAntialiasing_9() const { return ___temporalAntialiasing_9; }
	inline TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 ** get_address_of_temporalAntialiasing_9() { return &___temporalAntialiasing_9; }
	inline void set_temporalAntialiasing_9(TemporalAntialiasing_t708477A918872723B0F89A467FFAFC7EA27B97D1 * value)
	{
		___temporalAntialiasing_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporalAntialiasing_9), (void*)value);
	}

	inline static int32_t get_offset_of_subpixelMorphologicalAntialiasing_10() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___subpixelMorphologicalAntialiasing_10)); }
	inline SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * get_subpixelMorphologicalAntialiasing_10() const { return ___subpixelMorphologicalAntialiasing_10; }
	inline SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD ** get_address_of_subpixelMorphologicalAntialiasing_10() { return &___subpixelMorphologicalAntialiasing_10; }
	inline void set_subpixelMorphologicalAntialiasing_10(SubpixelMorphologicalAntialiasing_tDE9497AEBB401059AB2F21890704B15C374B79DD * value)
	{
		___subpixelMorphologicalAntialiasing_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subpixelMorphologicalAntialiasing_10), (void*)value);
	}

	inline static int32_t get_offset_of_fastApproximateAntialiasing_11() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___fastApproximateAntialiasing_11)); }
	inline FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * get_fastApproximateAntialiasing_11() const { return ___fastApproximateAntialiasing_11; }
	inline FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D ** get_address_of_fastApproximateAntialiasing_11() { return &___fastApproximateAntialiasing_11; }
	inline void set_fastApproximateAntialiasing_11(FastApproximateAntialiasing_t8677D2B4EDDE97C4D6C747227D40395AD1DA134D * value)
	{
		___fastApproximateAntialiasing_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fastApproximateAntialiasing_11), (void*)value);
	}

	inline static int32_t get_offset_of_fog_12() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___fog_12)); }
	inline Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * get_fog_12() const { return ___fog_12; }
	inline Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 ** get_address_of_fog_12() { return &___fog_12; }
	inline void set_fog_12(Fog_tCE0AAFBFFCC3EBE688BBFC6F0472694597D97E77 * value)
	{
		___fog_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fog_12), (void*)value);
	}

	inline static int32_t get_offset_of_dithering_13() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___dithering_13)); }
	inline Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * get_dithering_13() const { return ___dithering_13; }
	inline Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 ** get_address_of_dithering_13() { return &___dithering_13; }
	inline void set_dithering_13(Dithering_t89B6809A4234E4E26A1DAAF702F743E3EEAE7FE0 * value)
	{
		___dithering_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dithering_13), (void*)value);
	}

	inline static int32_t get_offset_of_debugLayer_14() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___debugLayer_14)); }
	inline PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * get_debugLayer_14() const { return ___debugLayer_14; }
	inline PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 ** get_address_of_debugLayer_14() { return &___debugLayer_14; }
	inline void set_debugLayer_14(PostProcessDebugLayer_t4E9A4AB3CC038EC6A976F756D455A89AD156AC39 * value)
	{
		___debugLayer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugLayer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_15() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Resources_15)); }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * get_m_Resources_15() const { return ___m_Resources_15; }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B ** get_address_of_m_Resources_15() { return &___m_Resources_15; }
	inline void set_m_Resources_15(PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * value)
	{
		___m_Resources_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_OldResources_16() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_OldResources_16)); }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * get_m_OldResources_16() const { return ___m_OldResources_16; }
	inline PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B ** get_address_of_m_OldResources_16() { return &___m_OldResources_16; }
	inline void set_m_OldResources_16(PostProcessResources_t70D45255B03138A85C22CE4619CF88EB1F0C2D6B * value)
	{
		___m_OldResources_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OldResources_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShowToolkit_17() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ShowToolkit_17)); }
	inline bool get_m_ShowToolkit_17() const { return ___m_ShowToolkit_17; }
	inline bool* get_address_of_m_ShowToolkit_17() { return &___m_ShowToolkit_17; }
	inline void set_m_ShowToolkit_17(bool value)
	{
		___m_ShowToolkit_17 = value;
	}

	inline static int32_t get_offset_of_m_ShowCustomSorter_18() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ShowCustomSorter_18)); }
	inline bool get_m_ShowCustomSorter_18() const { return ___m_ShowCustomSorter_18; }
	inline bool* get_address_of_m_ShowCustomSorter_18() { return &___m_ShowCustomSorter_18; }
	inline void set_m_ShowCustomSorter_18(bool value)
	{
		___m_ShowCustomSorter_18 = value;
	}

	inline static int32_t get_offset_of_breakBeforeColorGrading_19() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___breakBeforeColorGrading_19)); }
	inline bool get_breakBeforeColorGrading_19() const { return ___breakBeforeColorGrading_19; }
	inline bool* get_address_of_breakBeforeColorGrading_19() { return &___breakBeforeColorGrading_19; }
	inline void set_breakBeforeColorGrading_19(bool value)
	{
		___breakBeforeColorGrading_19 = value;
	}

	inline static int32_t get_offset_of_m_BeforeTransparentBundles_20() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_BeforeTransparentBundles_20)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_BeforeTransparentBundles_20() const { return ___m_BeforeTransparentBundles_20; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_BeforeTransparentBundles_20() { return &___m_BeforeTransparentBundles_20; }
	inline void set_m_BeforeTransparentBundles_20(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_BeforeTransparentBundles_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BeforeTransparentBundles_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BeforeStackBundles_21() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_BeforeStackBundles_21)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_BeforeStackBundles_21() const { return ___m_BeforeStackBundles_21; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_BeforeStackBundles_21() { return &___m_BeforeStackBundles_21; }
	inline void set_m_BeforeStackBundles_21(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_BeforeStackBundles_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BeforeStackBundles_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_AfterStackBundles_22() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_AfterStackBundles_22)); }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * get_m_AfterStackBundles_22() const { return ___m_AfterStackBundles_22; }
	inline List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 ** get_address_of_m_AfterStackBundles_22() { return &___m_AfterStackBundles_22; }
	inline void set_m_AfterStackBundles_22(List_1_t7A5731CFC95EE1B5B5A1EA661D6A2A4BAF3C9EA5 * value)
	{
		___m_AfterStackBundles_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AfterStackBundles_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsortedBundlesU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3CsortedBundlesU3Ek__BackingField_23)); }
	inline Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * get_U3CsortedBundlesU3Ek__BackingField_23() const { return ___U3CsortedBundlesU3Ek__BackingField_23; }
	inline Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C ** get_address_of_U3CsortedBundlesU3Ek__BackingField_23() { return &___U3CsortedBundlesU3Ek__BackingField_23; }
	inline void set_U3CsortedBundlesU3Ek__BackingField_23(Dictionary_2_t648B191BEC4BD17688E4694A658D024E4164DC8C * value)
	{
		___U3CsortedBundlesU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsortedBundlesU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraDepthFlagsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3CcameraDepthFlagsU3Ek__BackingField_24)); }
	inline int32_t get_U3CcameraDepthFlagsU3Ek__BackingField_24() const { return ___U3CcameraDepthFlagsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CcameraDepthFlagsU3Ek__BackingField_24() { return &___U3CcameraDepthFlagsU3Ek__BackingField_24; }
	inline void set_U3CcameraDepthFlagsU3Ek__BackingField_24(int32_t value)
	{
		___U3CcameraDepthFlagsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25)); }
	inline bool get_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() const { return ___U3ChaveBundlesBeenInitedU3Ek__BackingField_25; }
	inline bool* get_address_of_U3ChaveBundlesBeenInitedU3Ek__BackingField_25() { return &___U3ChaveBundlesBeenInitedU3Ek__BackingField_25; }
	inline void set_U3ChaveBundlesBeenInitedU3Ek__BackingField_25(bool value)
	{
		___U3ChaveBundlesBeenInitedU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_m_Bundles_26() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Bundles_26)); }
	inline Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * get_m_Bundles_26() const { return ___m_Bundles_26; }
	inline Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D ** get_address_of_m_Bundles_26() { return &___m_Bundles_26; }
	inline void set_m_Bundles_26(Dictionary_2_t3ADD7BF15FFC7EA50A3F24514038319FEEAF612D * value)
	{
		___m_Bundles_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bundles_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertySheetFactory_27() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_PropertySheetFactory_27)); }
	inline PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * get_m_PropertySheetFactory_27() const { return ___m_PropertySheetFactory_27; }
	inline PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 ** get_address_of_m_PropertySheetFactory_27() { return &___m_PropertySheetFactory_27; }
	inline void set_m_PropertySheetFactory_27(PropertySheetFactory_t3E86AEE66A7E970A0861A8B698F21F4135BA0EE4 * value)
	{
		___m_PropertySheetFactory_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertySheetFactory_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferBeforeReflections_28() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferBeforeReflections_28)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferBeforeReflections_28() const { return ___m_LegacyCmdBufferBeforeReflections_28; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferBeforeReflections_28() { return &___m_LegacyCmdBufferBeforeReflections_28; }
	inline void set_m_LegacyCmdBufferBeforeReflections_28(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferBeforeReflections_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferBeforeReflections_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferBeforeLighting_29() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferBeforeLighting_29)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferBeforeLighting_29() const { return ___m_LegacyCmdBufferBeforeLighting_29; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferBeforeLighting_29() { return &___m_LegacyCmdBufferBeforeLighting_29; }
	inline void set_m_LegacyCmdBufferBeforeLighting_29(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferBeforeLighting_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferBeforeLighting_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBufferOpaque_30() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBufferOpaque_30)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBufferOpaque_30() const { return ___m_LegacyCmdBufferOpaque_30; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBufferOpaque_30() { return &___m_LegacyCmdBufferOpaque_30; }
	inline void set_m_LegacyCmdBufferOpaque_30(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBufferOpaque_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBufferOpaque_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyCmdBuffer_31() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LegacyCmdBuffer_31)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_LegacyCmdBuffer_31() const { return ___m_LegacyCmdBuffer_31; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_LegacyCmdBuffer_31() { return &___m_LegacyCmdBuffer_31; }
	inline void set_m_LegacyCmdBuffer_31(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_LegacyCmdBuffer_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyCmdBuffer_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_32() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Camera_32)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_32() const { return ___m_Camera_32; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_32() { return &___m_Camera_32; }
	inline void set_m_Camera_32(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentContext_33() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_CurrentContext_33)); }
	inline PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * get_m_CurrentContext_33() const { return ___m_CurrentContext_33; }
	inline PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB ** get_address_of_m_CurrentContext_33() { return &___m_CurrentContext_33; }
	inline void set_m_CurrentContext_33(PostProcessRenderContext_tF3C9D7123D8B250A5E5FE6743B2319890F0168BB * value)
	{
		___m_CurrentContext_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentContext_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogHistogram_34() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_LogHistogram_34)); }
	inline LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * get_m_LogHistogram_34() const { return ___m_LogHistogram_34; }
	inline LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 ** get_address_of_m_LogHistogram_34() { return &___m_LogHistogram_34; }
	inline void set_m_LogHistogram_34(LogHistogram_t25F6613321C3909DA2D9A9BB3AC78AC84447DF79 * value)
	{
		___m_LogHistogram_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogHistogram_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_SettingsUpdateNeeded_35() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_SettingsUpdateNeeded_35)); }
	inline bool get_m_SettingsUpdateNeeded_35() const { return ___m_SettingsUpdateNeeded_35; }
	inline bool* get_address_of_m_SettingsUpdateNeeded_35() { return &___m_SettingsUpdateNeeded_35; }
	inline void set_m_SettingsUpdateNeeded_35(bool value)
	{
		___m_SettingsUpdateNeeded_35 = value;
	}

	inline static int32_t get_offset_of_m_IsRenderingInSceneView_36() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_IsRenderingInSceneView_36)); }
	inline bool get_m_IsRenderingInSceneView_36() const { return ___m_IsRenderingInSceneView_36; }
	inline bool* get_address_of_m_IsRenderingInSceneView_36() { return &___m_IsRenderingInSceneView_36; }
	inline void set_m_IsRenderingInSceneView_36(bool value)
	{
		___m_IsRenderingInSceneView_36 = value;
	}

	inline static int32_t get_offset_of_m_TargetPool_37() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_TargetPool_37)); }
	inline TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * get_m_TargetPool_37() const { return ___m_TargetPool_37; }
	inline TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 ** get_address_of_m_TargetPool_37() { return &___m_TargetPool_37; }
	inline void set_m_TargetPool_37(TargetPool_t974506C6CF46650F99CDC2EC4E34EC6B5E119949 * value)
	{
		___m_TargetPool_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetPool_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_NaNKilled_38() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_NaNKilled_38)); }
	inline bool get_m_NaNKilled_38() const { return ___m_NaNKilled_38; }
	inline bool* get_address_of_m_NaNKilled_38() { return &___m_NaNKilled_38; }
	inline void set_m_NaNKilled_38(bool value)
	{
		___m_NaNKilled_38 = value;
	}

	inline static int32_t get_offset_of_m_ActiveEffects_39() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_ActiveEffects_39)); }
	inline List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * get_m_ActiveEffects_39() const { return ___m_ActiveEffects_39; }
	inline List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 ** get_address_of_m_ActiveEffects_39() { return &___m_ActiveEffects_39; }
	inline void set_m_ActiveEffects_39(List_1_t022BE85BD6F8103F8A7F8B7F3255ACE3D7E31352 * value)
	{
		___m_ActiveEffects_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveEffects_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Targets_40() { return static_cast<int32_t>(offsetof(PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2, ___m_Targets_40)); }
	inline List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * get_m_Targets_40() const { return ___m_Targets_40; }
	inline List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 ** get_address_of_m_Targets_40() { return &___m_Targets_40; }
	inline void set_m_Targets_40(List_1_t1E97ED90DF19DF61851FF18897CC04F01185E918 * value)
	{
		___m_Targets_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Targets_40), (void*)value);
	}
};


// UnityEngine.Rendering.PostProcessing.PostProcessVolume
struct  PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rendering.PostProcessing.PostProcessProfile UnityEngine.Rendering.PostProcessing.PostProcessVolume::sharedProfile
	PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * ___sharedProfile_4;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessVolume::isGlobal
	bool ___isGlobal_5;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessVolume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessVolume::weight
	float ___weight_7;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessVolume::priority
	float ___priority_8;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessVolume::m_PreviousLayer
	int32_t ___m_PreviousLayer_9;
	// System.Single UnityEngine.Rendering.PostProcessing.PostProcessVolume::m_PreviousPriority
	float ___m_PreviousPriority_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.PostProcessing.PostProcessVolume::m_TempColliders
	List_1_t88DF1A02CCDD1766DB310B8D72B1F2145D775432 * ___m_TempColliders_11;
	// UnityEngine.Rendering.PostProcessing.PostProcessProfile UnityEngine.Rendering.PostProcessing.PostProcessVolume::m_InternalProfile
	PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * ___m_InternalProfile_12;

public:
	inline static int32_t get_offset_of_sharedProfile_4() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___sharedProfile_4)); }
	inline PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * get_sharedProfile_4() const { return ___sharedProfile_4; }
	inline PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E ** get_address_of_sharedProfile_4() { return &___sharedProfile_4; }
	inline void set_sharedProfile_4(PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * value)
	{
		___sharedProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedProfile_4), (void*)value);
	}

	inline static int32_t get_offset_of_isGlobal_5() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___isGlobal_5)); }
	inline bool get_isGlobal_5() const { return ___isGlobal_5; }
	inline bool* get_address_of_isGlobal_5() { return &___isGlobal_5; }
	inline void set_isGlobal_5(bool value)
	{
		___isGlobal_5 = value;
	}

	inline static int32_t get_offset_of_blendDistance_6() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___blendDistance_6)); }
	inline float get_blendDistance_6() const { return ___blendDistance_6; }
	inline float* get_address_of_blendDistance_6() { return &___blendDistance_6; }
	inline void set_blendDistance_6(float value)
	{
		___blendDistance_6 = value;
	}

	inline static int32_t get_offset_of_weight_7() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___weight_7)); }
	inline float get_weight_7() const { return ___weight_7; }
	inline float* get_address_of_weight_7() { return &___weight_7; }
	inline void set_weight_7(float value)
	{
		___weight_7 = value;
	}

	inline static int32_t get_offset_of_priority_8() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___priority_8)); }
	inline float get_priority_8() const { return ___priority_8; }
	inline float* get_address_of_priority_8() { return &___priority_8; }
	inline void set_priority_8(float value)
	{
		___priority_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLayer_9() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___m_PreviousLayer_9)); }
	inline int32_t get_m_PreviousLayer_9() const { return ___m_PreviousLayer_9; }
	inline int32_t* get_address_of_m_PreviousLayer_9() { return &___m_PreviousLayer_9; }
	inline void set_m_PreviousLayer_9(int32_t value)
	{
		___m_PreviousLayer_9 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPriority_10() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___m_PreviousPriority_10)); }
	inline float get_m_PreviousPriority_10() const { return ___m_PreviousPriority_10; }
	inline float* get_address_of_m_PreviousPriority_10() { return &___m_PreviousPriority_10; }
	inline void set_m_PreviousPriority_10(float value)
	{
		___m_PreviousPriority_10 = value;
	}

	inline static int32_t get_offset_of_m_TempColliders_11() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___m_TempColliders_11)); }
	inline List_1_t88DF1A02CCDD1766DB310B8D72B1F2145D775432 * get_m_TempColliders_11() const { return ___m_TempColliders_11; }
	inline List_1_t88DF1A02CCDD1766DB310B8D72B1F2145D775432 ** get_address_of_m_TempColliders_11() { return &___m_TempColliders_11; }
	inline void set_m_TempColliders_11(List_1_t88DF1A02CCDD1766DB310B8D72B1F2145D775432 * value)
	{
		___m_TempColliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempColliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalProfile_12() { return static_cast<int32_t>(offsetof(PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D, ___m_InternalProfile_12)); }
	inline PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * get_m_InternalProfile_12() const { return ___m_InternalProfile_12; }
	inline PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E ** get_address_of_m_InternalProfile_12() { return &___m_InternalProfile_12; }
	inline void set_m_InternalProfile_12(PostProcessProfile_tEDCC9540DA0B4BBB006AF5858E8A96D0E528DC5E * value)
	{
		___m_InternalProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalProfile_12), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * m_Items[1];

public:
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void BallControls::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49 (Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mF2738B4AB464ABFB85D16BEB121808F6C73D669B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD (String_t* ___key0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699 (SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mE8B1FB8BFD4BF50A73DBAC60CB9C358D6F50F1D2 (String_t* ___gameId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::GetQualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_GetQualityLevel_mAD9FFDEBD51D12D914FDDDE4560E276A4D434A3B (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rendering.PostProcessing.PostProcessLayer>()
inline PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 * GameObject_GetComponent_TisPostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2_m4487C726B4BDD3795129BE6E09B8C3AF3A17AA3E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rendering.PostProcessing.PostProcessVolume>()
inline PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D * GameObject_GetComponent_TisPostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D_mFCF9C0C2FE7C02FCE6ED3344FA7E785BD5BDCC01 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Advertisement::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m4A8172618A18C262CD0DA547B663681080676E1E (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
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
// System.Void BallControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Start_m9E53326D01B54B2CA9D7CA694A3DE4EA4AD8AC5D (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallControls_Start_m9E53326D01B54B2CA9D7CA694A3DE4EA4AD8AC5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		__this->set_rb_4(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E_RuntimeMethod_var);
		__this->set_audio_6(L_5);
		return;
	}
}
// System.Void BallControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Update_mE0B15A5E118E01B08B4085860EC2FA59973CFA04 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}

IL_0011:
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((1.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_leftBtn_18();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_rightBtn_19();
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_ptp_14();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void BallControls::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_FixedUpdate_m60F2AACA1C299939332CB8EB5AE6A1CE459B8F82 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rb_4();
		float L_1 = __this->get_forceMultiplier_5();
		NullCheck(L_0);
		Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0(L_0, (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		float L_2 = __this->get_forceMultiplier_5();
		if ((!(((float)L_2) > ((float)(4.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		__this->set_forceMultiplier_5((4.0f));
		goto IL_004d;
	}

IL_0035:
	{
		float L_3 = __this->get_forceMultiplier_5();
		if ((!(((float)L_3) < ((float)(1.5f)))))
		{
			goto IL_004d;
		}
	}
	{
		__this->set_forceMultiplier_5((1.5f));
	}

IL_004d:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		if ((((float)L_6) < ((float)(-10.0f))))
		{
			goto IL_007b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		if ((!(((float)L_9) > ((float)(10.0f)))))
		{
			goto IL_0081;
		}
	}

IL_007b:
	{
		BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14(__this, /*hidden argument*/NULL);
	}

IL_0081:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		float L_13 = __this->get_posY_15();
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_subtract((float)L_13, (float)(100.0f)))))))
		{
			goto IL_00a5;
		}
	}
	{
		BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14(__this, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_14 = __this->get_rb_4();
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_z_4();
		if ((!(((float)L_16) > ((float)(25.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_17 = __this->get_rb_4();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_18 = __this->get_rb_4();
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_21 = __this->get_rb_4();
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_24), L_20, L_23, (25.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_17, L_24, /*hidden argument*/NULL);
		goto IL_014d;
	}

IL_00f3:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_25 = __this->get_rb_4();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		if ((!(((float)L_27) < ((float)(6.0f)))))
		{
			goto IL_014d;
		}
	}
	{
		EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * L_28 = __this->get_enemySpawner_13();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_actualLevel_6();
		if ((((int32_t)L_29) <= ((int32_t)1)))
		{
			goto IL_014d;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_30 = __this->get_rb_4();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_31 = __this->get_rb_4();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_34 = __this->get_rb_4();
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_37), L_33, L_36, (6.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_30, L_37, /*hidden argument*/NULL);
	}

IL_014d:
	{
		bool L_38 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0179;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_39 = __this->get_rb_4();
		float L_40 = __this->get_forceMultiplier_5();
		NullCheck(L_39);
		Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0(L_39, ((float)il2cpp_codegen_multiply((float)L_40, (float)(1.5f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_01a4;
	}

IL_0179:
	{
		bool L_41 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_01a4;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_42 = __this->get_rb_4();
		float L_43 = __this->get_forceMultiplier_5();
		NullCheck(L_42);
		Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0(L_42, ((float)il2cpp_codegen_multiply((float)((-L_43)), (float)(1.5f))), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_01a4:
	{
		bool L_44 = __this->get_right_17();
		if (!L_44)
		{
			goto IL_01c8;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_45 = __this->get_rb_4();
		float L_46 = __this->get_forceMultiplier_5();
		NullCheck(L_45);
		Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0(L_45, L_46, (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}

IL_01c8:
	{
		bool L_47 = __this->get_left_16();
		if (!L_47)
		{
			goto IL_01ec;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_48 = __this->get_rb_4();
		float L_49 = __this->get_forceMultiplier_5();
		NullCheck(L_48);
		Rigidbody_AddForce_m8FED8F9F25D39B7BAB50DA4A6C9465AACDA855E0(L_48, ((-L_49)), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_01ec:
	{
		return;
	}
}
// System.Void BallControls::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_OnCollisionEnter_mDC5EE7A7D2E383632358C5E74D116F488DD322E4 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallControls_OnCollisionEnter_mDC5EE7A7D2E383632358C5E74D116F488DD322E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral3684C9D3C05E7BEE19E2728C6A5B2BBCCF0CD9C7, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		float L_4 = __this->get_forceMultiplier_5();
		__this->set_forceMultiplier_5(((float)il2cpp_codegen_add((float)L_4, (float)(0.25f))));
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_audio_6();
		NullCheck(L_5);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteral2B020927D3C6EB407223A1BAA3D6CE3597A3F88D, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_10 = __this->get_audio_6();
		NullCheck(L_10);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_11 = ___collision0;
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_12, /*hidden argument*/NULL);
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral706C3C2934D8793634DA390857ADEBA6FA2026EC, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14(__this, /*hidden argument*/NULL);
	}

IL_0073:
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_16, /*hidden argument*/NULL);
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteralCA27CA564E53AC6345B35F58AC2E5519E7773AFC, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a7;
		}
	}
	{
		float L_19 = __this->get_forceMultiplier_5();
		__this->set_forceMultiplier_5(((float)il2cpp_codegen_add((float)L_19, (float)(5.0f))));
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_20 = __this->get_dingSoundEffect_10();
		NullCheck(L_20);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_20, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_21 = ___collision0;
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_22, /*hidden argument*/NULL);
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteralD8ADCE94EA1D9896F10CC5C8380D6E5EEE5CF13A, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_25 = __this->get_dingSoundEffect_10();
		NullCheck(L_25);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_25, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		return;
	}
}
// System.Void BallControls::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_OnCollisionExit_mDEA16E9C177B3D33AB8211DE1F931552498928D9 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallControls_OnCollisionExit_mDEA16E9C177B3D33AB8211DE1F931552498928D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralCA27CA564E53AC6345B35F58AC2E5519E7773AFC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = __this->get_forceMultiplier_5();
		__this->set_forceMultiplier_5(((float)il2cpp_codegen_subtract((float)L_4, (float)(5.0f))));
	}

IL_0029:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		__this->set_posY_15(L_7);
		return;
	}
}
// System.Void BallControls::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallControls_Die_mEBBEF7FB76ED377DF7C87B82C4023B9EC2D3AB14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_ptp_14();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_scoreOne_11();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		int32_t L_3 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_2, /*hidden argument*/NULL);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_scoreTwo_12();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		int32_t L_6 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_6)))
		{
			goto IL_0050;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get_scoreOne_11();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = __this->get_scoreTwo_12();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		goto IL_0070;
	}

IL_0050:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = __this->get_scoreOne_11();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_13 = __this->get_scoreTwo_12();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
	}

IL_0070:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_deathParticles_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_22, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_23 = __this->get_audio_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_24 = __this->get_death_8();
		NullCheck(L_23);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_23, L_24, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_25 = __this->get_audio_6();
		NullCheck(L_25);
		AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06(L_25, (0.8f), /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_26 = __this->get_audio_6();
		NullCheck(L_26);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_28, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_respawn_9();
		NullCheck(L_29);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_29, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallControls::Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Right_m943F89803E807FA0ECB04E13B40402CCE4AC12A6 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		__this->set_right_17((bool)1);
		__this->set_left_16((bool)0);
		return;
	}
}
// System.Void BallControls::ReleaseRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_ReleaseRight_mD6AA9EA40DD25474031B0C24CCE49A2682E727E3 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		__this->set_right_17((bool)0);
		return;
	}
}
// System.Void BallControls::ReleaseLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_ReleaseLeft_m1F14DCF9962E0693E5264D484404BB301E68C24D (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		__this->set_left_16((bool)0);
		return;
	}
}
// System.Void BallControls::Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls_Left_mA3D02E09146A621259C82D4984C648FFFC7DD381 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		__this->set_left_16((bool)1);
		__this->set_right_17((bool)0);
		return;
	}
}
// System.Void BallControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallControls__ctor_m0BA6ED18B5A9EF0CCFCA00B9F37606363A265012 (BallControls_t90A3E0C58C34981CD519BE80DAE6B3154B15C370 * __this, const RuntimeMethod* method)
{
	{
		__this->set_forceMultiplier_5((1.5f));
		__this->set_posY_15((100.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void CameraControls::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls_FixedUpdate_m03F17021DFBE6C204C4FDE79AC7EBC32E99603E9 (CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraControls_FixedUpdate_m03F17021DFBE6C204C4FDE79AC7EBC32E99603E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0071;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_target_4();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_target_4();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_offset_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		float L_13 = __this->get_speed_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		NullCheck(L_15);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_15, L_16, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_target_4();
		NullCheck(L_17);
		Transform_LookAt_mF2738B4AB464ABFB85D16BEB121808F6C73D669B(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void CameraControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls__ctor_mEC43ABDF2E5F34EC368694609475018BDEA824D6 (CameraControls_tB8D28E1C8A49AB96B033D951353E76409EB2473B * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_5((0.1f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_mC0F2354C1D2ED84F19D7BF22C89A2C198EBED26E (EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Start_mC0F2354C1D2ED84F19D7BF22C89A2C198EBED26E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteralC2BE68CF595ACA0C10C3BFAB2729EC7A5CDB9AEB, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteralC2BE68CF595ACA0C10C3BFAB2729EC7A5CDB9AEB, /*hidden argument*/NULL);
		__this->set_highScore_11(L_1);
		goto IL_0036;
	}

IL_001e:
	{
		__this->set_highScore_11(0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_highScoreTxt_9();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_highScoreTxt_9();
		int32_t* L_5 = __this->get_address_of_highScore_11();
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_pos_7(L_7);
		int32_t L_8 = __this->get_highScore_11();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)150))))
		{
			goto IL_00b6;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_10 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_9, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_11 = __this->get_meshes_12();
		NullCheck(L_11);
		int32_t L_12 = 5;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_14 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_10, L_14, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_15, L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_18 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_17, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		NullCheck(L_18);
		SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699(L_18, (1.0f), /*hidden argument*/NULL);
		return;
	}

IL_00b6:
	{
		int32_t L_19 = __this->get_highScore_11();
		if ((((int32_t)L_19) < ((int32_t)((int32_t)100))))
		{
			goto IL_0112;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_21 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_20, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_22 = __this->get_meshes_12();
		NullCheck(L_22);
		int32_t L_23 = 4;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_25 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_21, L_25, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_26, L_27, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_29 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_28, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		NullCheck(L_29);
		SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699(L_29, (1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0112:
	{
		int32_t L_30 = __this->get_highScore_11();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)50))))
		{
			goto IL_016e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_32 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_31, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_33 = __this->get_meshes_12();
		NullCheck(L_33);
		int32_t L_34 = 3;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_36 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_32, L_36, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_38), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_37, L_38, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_40 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_39, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		NullCheck(L_40);
		SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699(L_40, (1.0f), /*hidden argument*/NULL);
		return;
	}

IL_016e:
	{
		int32_t L_41 = __this->get_highScore_11();
		if ((((int32_t)L_41) < ((int32_t)((int32_t)20))))
		{
			goto IL_01ca;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_43 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_42, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_44 = __this->get_meshes_12();
		NullCheck(L_44);
		int32_t L_45 = 2;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_47 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_46, /*hidden argument*/NULL);
		NullCheck(L_43);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_43, L_47, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_49), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_48, L_49, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_51 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_50, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		NullCheck(L_51);
		SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699(L_51, (0.6f), /*hidden argument*/NULL);
		return;
	}

IL_01ca:
	{
		int32_t L_52 = __this->get_highScore_11();
		if ((((int32_t)L_52) < ((int32_t)((int32_t)10))))
		{
			goto IL_0226;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_53 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_54 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_53, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_55 = __this->get_meshes_12();
		NullCheck(L_55);
		int32_t L_56 = 1;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_58 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_57, /*hidden argument*/NULL);
		NullCheck(L_54);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_54, L_58, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_60), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_59, L_60, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_62 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_61, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		NullCheck(L_62);
		SphereCollider_set_radius_m3161573A2D89F495F4B79E16C52B905C0F9AD699(L_62, (1.0f), /*hidden argument*/NULL);
		return;
	}

IL_0226:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_64 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_63, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_65 = __this->get_meshes_12();
		NullCheck(L_65);
		int32_t L_66 = 0;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_68 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_64, L_68, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_m846CE9A8B10E8EBB82FF444060B85133DDEFD0D0 (EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Update_m846CE9A8B10E8EBB82FF444060B85133DDEFD0D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		__this->set_actualLevel_6(((int32_t)((int32_t)(((int32_t)((int32_t)L_2)))/(int32_t)((int32_t)17))));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_score_8();
		int32_t* L_4 = __this->get_address_of_actualLevel_6();
		String_t* L_5 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		int32_t L_6 = __this->get_actualLevel_6();
		int32_t L_7 = __this->get_highScore_11();
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_8 = __this->get_actualLevel_6();
		__this->set_highScore_11(L_8);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = __this->get_highScoreTxt_9();
		int32_t* L_10 = __this->get_address_of_highScore_11();
		String_t* L_11 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		int32_t L_12 = __this->get_highScore_11();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteralC2BE68CF595ACA0C10C3BFAB2729EC7A5CDB9AEB, L_12, /*hidden argument*/NULL);
	}

IL_0070:
	{
		return;
	}
}
// System.Void EnemySpawner::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_OnCollisionEnter_m61DD4FA3173ED0140F1DCD785F06E2D9EC7CD2BE (EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * __this, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_OnCollisionEnter_m61DD4FA3173ED0140F1DCD785F06E2D9EC7CD2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral2B020927D3C6EB407223A1BAA3D6CE3597A3F88D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0146;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteralBB064B23223DFF9B805313CDAFC355ACC64F1642, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_005f;
	}

IL_0029:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_3;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_subtract((float)L_15, (float)(10.0f)))))))
		{
			goto IL_005b;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
	}

IL_005b:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_18 = V_2;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_20 = __this->get_level_5();
		if ((((int32_t)L_20) >= ((int32_t)3)))
		{
			goto IL_0072;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0074;
	}

IL_0072:
	{
		V_0 = (bool)0;
	}

IL_0074:
	{
		V_4 = 0;
		goto IL_013e;
	}

IL_007c:
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) <= ((int32_t)3)))
		{
			goto IL_0087;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_0138;
		}
	}

IL_0087:
	{
		int32_t L_23 = __this->get_level_5();
		__this->set_level_5(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		V_5 = 0;
		goto IL_00ec;
	}

IL_009a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_pos_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), (0.0f), (-10.0f), (25.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		__this->set_pos_7(L_26);
		int32_t L_27 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(1, 6, /*hidden argument*/NULL);
		V_6 = L_27;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_28 = __this->get_levels_4();
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_31, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = __this->get_pos_7();
		NullCheck(L_33);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00ec:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = __this->get_level_5();
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_009a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_pos_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_39), (0.0f), (-5.0f), (18.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_39, /*hidden argument*/NULL);
		__this->set_pos_7(L_40);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_41 = __this->get_levels_4();
		NullCheck(L_41);
		int32_t L_42 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_43, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_44, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = __this->get_pos_7();
		NullCheck(L_45);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_45, L_46, /*hidden argument*/NULL);
	}

IL_0138:
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_013e:
	{
		int32_t L_48 = V_4;
		if ((((int32_t)L_48) < ((int32_t)3)))
		{
			goto IL_007c;
		}
	}

IL_0146:
	{
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m637C6372D629C685D64F22E5E15FD64F9F715F24 (EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner__ctor_m637C6372D629C685D64F22E5E15FD64F9F715F24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = (GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520*)SZArrayNew(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_levels_4(L_0);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_1 = (MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820*)(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820*)SZArrayNew(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_meshes_12(L_1);
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_2 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_colors_14(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void RespawnScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnScript_Start_mCB0C6FFC531EF763A3A26062D9629ABCDA8F516B (RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RespawnScript_Start_mCB0C6FFC531EF763A3A26062D9629ABCDA8F516B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_adNumber_5();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tBD9F86FDD78822664E168574EA18AF8EA9D316B7_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mE8B1FB8BFD4BF50A73DBAC60CB9C358D6F50F1D2(L_0, /*hidden argument*/NULL);
		int32_t L_1 = QualitySettings_GetQualityLevel_mAD9FFDEBD51D12D914FDDDE4560E276A4D434A3B(/*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2 * L_3 = GameObject_GetComponent_TisPostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2_m4487C726B4BDD3795129BE6E09B8C3AF3A17AA3E(L_2, /*hidden argument*/GameObject_GetComponent_TisPostProcessLayer_t23DFD96D31A91809B519CBD47DA4F63BC73D85B2_m4487C726B4BDD3795129BE6E09B8C3AF3A17AA3E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		PostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D * L_5 = GameObject_GetComponent_TisPostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D_mFCF9C0C2FE7C02FCE6ED3344FA7E785BD5BDCC01(L_4, /*hidden argument*/GameObject_GetComponent_TisPostProcessVolume_tA4BF247DA34512CB303F8DEEAFBD60A378FE303D_mFCF9C0C2FE7C02FCE6ED3344FA7E785BD5BDCC01_RuntimeMethod_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void RespawnScript::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnScript_Respawn_mB8554EFFA53C47ED9C3AAA28798B65BEEA1DBAF0 (RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RespawnScript_Respawn_mB8554EFFA53C47ED9C3AAA28798B65BEEA1DBAF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnemySpawner_t58890CF5BD2C95EE460CC0496EAAA3EEA83359FC * L_0 = __this->get_enemySpawner_4();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_actualLevel_6();
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)10))))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = __this->get_adNumber_5();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tBD9F86FDD78822664E168574EA18AF8EA9D316B7_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mE8B1FB8BFD4BF50A73DBAC60CB9C358D6F50F1D2(L_2, /*hidden argument*/NULL);
		Advertisement_Show_m4A8172618A18C262CD0DA547B663681080676E1E(/*hidden argument*/NULL);
	}

IL_001f:
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RespawnScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnScript__ctor_mB15E724A83376B424E621C732A000DD91F3F3BBA (RespawnScript_tF84E45FBEAAB415A2E9D9D4DCDCC45C3DA858FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RespawnScript__ctor_mB15E724A83376B424E621C732A000DD91F3F3BBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_adNumber_5(_stringLiteralD1EEFA6BF5000E70B4EBB5910105C71568F7DAF6);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
