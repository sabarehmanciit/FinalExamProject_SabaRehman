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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_DigitValidator
struct TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847;
// TMPro.TMP_PhoneNumberValidator
struct TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextEventHandler
struct TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90;
// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8;
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent
struct SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// UIController
struct UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE;
// UIController/ButtonClick
struct ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930;
// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7;
// camera
struct camera_t1D6599C99653739822B84023581F1D4A9008FB39;
// cameraControl
struct cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638;
// cameraControll
struct cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66;
// changescript
struct changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE;
// changescript1
struct changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632;
// changngtext1
struct changngtext1_t13FE706E863ABD4571350E9370EC8930AF17E40E;
// controltext
struct controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81;
// controltext1
struct controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266;
// countDown1
struct countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7;
// findObjectChild1
struct findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890;
// fixRotation1
struct fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C;
// loadScence
struct loadScence_tBA3AD184CD9821954E4030C66E8D004E8DF737AA;
// open_link
struct open_link_t58AE08A048B6B80BDB4BC217EE6B72FE2772C2C1;
// playerMiniGame
struct playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6;
// quit_game
struct quit_game_t73FB614F948D058F88914619782454922C28A4B6;
// sceneManager
struct sceneManager_t34EFCA27B0A4788A5D0CA50C160B3433E4F4204D;
// sceneback
struct sceneback_tCC5481AFFE1450E3D4D4C6B31EF4D570FF3885BF;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral252A25667DC7C65FE0E9BF62D474BBAB9BAB4068;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral29F92603B8CAD28E28EDA7E5FFC00B71AE4BF195;
IL2CPP_EXTERN_C String_t* _stringLiteral34461BFCC4043BD38BD8EF71B7B35A6660EB640F;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3ADCFE37C3701D7F736553A4C722E7133E909E;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBD928B7120B207B2B5D4278BA530C9B3513C91;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral5448AF756E5F56C9A1D5527D68903BF5720270D4;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD382E627F72BA0087DAF657CB591F5BC1549A2;
IL2CPP_EXTERN_C String_t* _stringLiteral75593744E3F137A0C620299F6F16A30F686FA876;
IL2CPP_EXTERN_C String_t* _stringLiteral81A7BE9332CA33EE164B1809A8379C09D9610C83;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCC029829FD8C00B8F815595E358E76BCA84EB7;
IL2CPP_EXTERN_C String_t* _stringLiteralA4AA25F821A4715D0E6C6EFB6CC0635D2E9BB129;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC14D398EB6F6FD7B63BE48CE4551B4E74A4A32AD;
IL2CPP_EXTERN_C String_t* _stringLiteralD8B99F68B208B5453B391CB0C6C3D6A9824F3C3A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFB96549631C835EB239CD614CC6B5CB7D295121A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4C7C46CC80C502CC1AD61D2F9DAF34F09226AF06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWarpTextU3Ed__8_MoveNext_m24ED53830B643858F6068C6908E7C0E044C671A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4C7C46CC80C502CC1AD61D2F9DAF34F09226AF06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIController_SetTimer_mCD4E6900AE1D81F76D09936BAA7E91E34D95FE7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WarpTextExample_Awake_m9643904751E2DF0A7DF536847AEA1A2B0774DD20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WarpTextExample_WarpText_mAAAB1687869E0121C858C65BDB2D294D55CFB67A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WarpTextExample__ctor_mC3EAA1AE81FB3DA4B25F20E557EC6627A06DCB31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cameraControl_LateUpdate_m00E81B7B268FEBBAE5A558C5270A99F0C749FA59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cameraControl_Start_mCEB5B292DADD725041FCAEEEADB81852E31F9AFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cameraControll_LateUpdate_mFB65BBB7C5AA88FE8516D21429DA02BF95566836_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cameraControll_Start_m4D932981AB40473F2C18B55DDB37E159C54E867D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t camera_LateUpdate_mAA2A9AE23412061599039FF4B3FB262CEA570E0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t camera_Start_m22865970959C4F2865ECD1828AEB4EC189FEC283_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t changngtext1_Update_mF3612A78F64002B4C6B5975ADC6C9DCDB3605A43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t countDown1_onGUI_mF616E2F7C6376AF62FBE853514827CED997B147F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t findObjectChild1_Update_m66845060697C1F22965965E2766E91DF8B6B7B0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t findObjectChild1__cctor_m1918D53049B4DB44025C5D688B2E15C0CB13AAA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t findObjectChild1_changeString_m54CE0DB75312CA40BA0AAC09C7032A75D4B0613D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t findObjectChild1_palindromeString_m8E97A8F5BE552A15BD91CC2AFE3FD2FA9DD3B1D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t findObjectChild1_textmeshcomp_m03D64E7419F473827DAFA5390E6A7F66308FF4B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t open_link_openURL_mF0FBF24CDD8BEDD58ED2C5591A81C872460EF9BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playerMiniGame_FixedUpdate_m785DAEDE7B9B9DA1082993DB2C33804828BE3A19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playerMiniGame_OnTriggerEnter_m033867474337EFBCB5935515CE687525B3E1C129_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playerMiniGame_Start_m707BCA89285740F03207BE87DFD23246F14D8921_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t quit_game_Quit_mE48FFB0DE5B076CE28E82A130882BD4E42529454_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t sceneManager_BackToMenu_m29790ED56B250F992305B4125381BBA77952BAF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t sceneback_Return_m2E56B8F6712F9AE738D966575B2A68A07CC3682C_MetadataUsageId;
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E ;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C;
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D;
struct TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9;
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

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


// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// TMPro.Examples.WarpTextExample_<WarpText>d__8
struct  U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.WarpTextExample_<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample_<WarpText>d__8::<>4__this
	WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.WarpTextExample_<WarpText>d__8::<old_CurveScale>5__2
	float ___U3Cold_CurveScaleU3E5__2_3;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample_<WarpText>d__8::<old_curve>5__3
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___U3Cold_curveU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E, ___U3CU3E4__this_2)); }
	inline WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E, ___U3Cold_CurveScaleU3E5__2_3)); }
	inline float get_U3Cold_CurveScaleU3E5__2_3() const { return ___U3Cold_CurveScaleU3E5__2_3; }
	inline float* get_address_of_U3Cold_CurveScaleU3E5__2_3() { return &___U3Cold_CurveScaleU3E5__2_3; }
	inline void set_U3Cold_CurveScaleU3E5__2_3(float value)
	{
		___U3Cold_CurveScaleU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E, ___U3Cold_curveU3E5__3_4)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_U3Cold_curveU3E5__3_4() const { return ___U3Cold_curveU3E5__3_4; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_U3Cold_curveU3E5__3_4() { return &___U3Cold_curveU3E5__3_4; }
	inline void set_U3Cold_curveU3E5__3_4(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___U3Cold_curveU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cold_curveU3E5__3_4), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_LinkInfo
struct  TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 
{
public:
	// TMPro.TMP_Text TMPro.TMP_LinkInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	// System.Int32 TMPro.TMP_LinkInfo::hashCode
	int32_t ___hashCode_1;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdFirstCharacterIndex
	int32_t ___linkIdFirstCharacterIndex_2;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdLength
	int32_t ___linkIdLength_3;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextfirstCharacterIndex
	int32_t ___linkTextfirstCharacterIndex_4;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextLength
	int32_t ___linkTextLength_5;
	// System.Char[] TMPro.TMP_LinkInfo::linkID
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___linkID_6;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___textComponent_0)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_1() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___hashCode_1)); }
	inline int32_t get_hashCode_1() const { return ___hashCode_1; }
	inline int32_t* get_address_of_hashCode_1() { return &___hashCode_1; }
	inline void set_hashCode_1(int32_t value)
	{
		___hashCode_1 = value;
	}

	inline static int32_t get_offset_of_linkIdFirstCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkIdFirstCharacterIndex_2)); }
	inline int32_t get_linkIdFirstCharacterIndex_2() const { return ___linkIdFirstCharacterIndex_2; }
	inline int32_t* get_address_of_linkIdFirstCharacterIndex_2() { return &___linkIdFirstCharacterIndex_2; }
	inline void set_linkIdFirstCharacterIndex_2(int32_t value)
	{
		___linkIdFirstCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_linkIdLength_3() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkIdLength_3)); }
	inline int32_t get_linkIdLength_3() const { return ___linkIdLength_3; }
	inline int32_t* get_address_of_linkIdLength_3() { return &___linkIdLength_3; }
	inline void set_linkIdLength_3(int32_t value)
	{
		___linkIdLength_3 = value;
	}

	inline static int32_t get_offset_of_linkTextfirstCharacterIndex_4() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkTextfirstCharacterIndex_4)); }
	inline int32_t get_linkTextfirstCharacterIndex_4() const { return ___linkTextfirstCharacterIndex_4; }
	inline int32_t* get_address_of_linkTextfirstCharacterIndex_4() { return &___linkTextfirstCharacterIndex_4; }
	inline void set_linkTextfirstCharacterIndex_4(int32_t value)
	{
		___linkTextfirstCharacterIndex_4 = value;
	}

	inline static int32_t get_offset_of_linkTextLength_5() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkTextLength_5)); }
	inline int32_t get_linkTextLength_5() const { return ___linkTextLength_5; }
	inline int32_t* get_address_of_linkTextLength_5() { return &___linkTextLength_5; }
	inline void set_linkTextLength_5(int32_t value)
	{
		___linkTextLength_5 = value;
	}

	inline static int32_t get_offset_of_linkID_6() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468, ___linkID_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_linkID_6() const { return ___linkID_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_linkID_6() { return &___linkID_6; }
	inline void set_linkID_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___linkID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkID_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshaled_pinvoke
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
// Native definition for COM marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshaled_com
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};

// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
};


// TMPro.TMP_WordInfo
struct  TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 
{
public:
	// TMPro.TMP_Text TMPro.TMP_WordInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	// System.Int32 TMPro.TMP_WordInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_1;
	// System.Int32 TMPro.TMP_WordInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_2;
	// System.Int32 TMPro.TMP_WordInfo::characterCount
	int32_t ___characterCount_3;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___textComponent_0)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_firstCharacterIndex_1() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___firstCharacterIndex_1)); }
	inline int32_t get_firstCharacterIndex_1() const { return ___firstCharacterIndex_1; }
	inline int32_t* get_address_of_firstCharacterIndex_1() { return &___firstCharacterIndex_1; }
	inline void set_firstCharacterIndex_1(int32_t value)
	{
		___firstCharacterIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___lastCharacterIndex_2)); }
	inline int32_t get_lastCharacterIndex_2() const { return ___lastCharacterIndex_2; }
	inline int32_t* get_address_of_lastCharacterIndex_2() { return &___lastCharacterIndex_2; }
	inline void set_lastCharacterIndex_2(int32_t value)
	{
		___lastCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshaled_pinvoke
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
// Native definition for COM marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshaled_com
{
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
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


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct  UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextEventHandler_CharacterSelectionEvent
struct  CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};


// TMPro.TMP_TextEventHandler_LineSelectionEvent
struct  LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};


// TMPro.TMP_TextEventHandler_LinkSelectionEvent
struct  LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8  : public UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8
{
public:

public:
};


// TMPro.TMP_TextEventHandler_SpriteSelectionEvent
struct  SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};


// TMPro.TMP_TextEventHandler_WordSelectionEvent
struct  WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};


// TMPro.TMP_TextInfo
struct  TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___textComponent_2)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tFB7F7AD2CD9ADBE07099C1A06170B51AA8D9D847* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_Vertex
struct  TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv_1() const { return ___uv_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv2_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___uv4_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0, ___color_4)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_4() const { return ___color_4; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_4 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider_Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Text.RegularExpressions.Regex
struct  Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___factory_1)); }
	inline RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t0703F390E2102623B0189DEC095DB182698E404B * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___internalMatchTimeout_5)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___caps_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_8), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capnames_9)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_9), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capslist_10)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_10), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___runnerref_12)); }
	inline ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t39E202CDB13A1E6EBA4CE0C7548B192CEB5C64DB * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_12), (void*)value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___replref_13)); }
	inline SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t225BA5C249F9F1D6C959F151695BDF65EF2C92A5 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_13), (void*)value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___code_14)); }
	inline RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * get_code_14() const { return ___code_14; }
	inline RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t12846533CAD1E4221CEDF5A4D15D4D649EA688FA * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_14), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t44CA4EB2162DC04F96F29C8A68A05D05166137F7 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_24;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_25;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_26;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_27;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_28;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_29;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_34;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_35;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___textElement_4)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___fontAsset_5)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___material_8)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_8() const { return ___material_8; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_BL_15)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_TL_16)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_TR_17)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___vertex_BR_18)); }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0 * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___topLeft_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___bottomLeft_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___topRight_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___bottomRight_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_ascender_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___ascender_24)); }
	inline float get_ascender_24() const { return ___ascender_24; }
	inline float* get_address_of_ascender_24() { return &___ascender_24; }
	inline void set_ascender_24(float value)
	{
		___ascender_24 = value;
	}

	inline static int32_t get_offset_of_baseLine_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___baseLine_25)); }
	inline float get_baseLine_25() const { return ___baseLine_25; }
	inline float* get_address_of_baseLine_25() { return &___baseLine_25; }
	inline void set_baseLine_25(float value)
	{
		___baseLine_25 = value;
	}

	inline static int32_t get_offset_of_descender_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___descender_26)); }
	inline float get_descender_26() const { return ___descender_26; }
	inline float* get_address_of_descender_26() { return &___descender_26; }
	inline void set_descender_26(float value)
	{
		___descender_26 = value;
	}

	inline static int32_t get_offset_of_xAdvance_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___xAdvance_27)); }
	inline float get_xAdvance_27() const { return ___xAdvance_27; }
	inline float* get_address_of_xAdvance_27() { return &___xAdvance_27; }
	inline void set_xAdvance_27(float value)
	{
		___xAdvance_27 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___aspectRatio_28)); }
	inline float get_aspectRatio_28() const { return ___aspectRatio_28; }
	inline float* get_address_of_aspectRatio_28() { return &___aspectRatio_28; }
	inline void set_aspectRatio_28(float value)
	{
		___aspectRatio_28 = value;
	}

	inline static int32_t get_offset_of_scale_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___scale_29)); }
	inline float get_scale_29() const { return ___scale_29; }
	inline float* get_address_of_scale_29() { return &___scale_29; }
	inline void set_scale_29(float value)
	{
		___scale_29 = value;
	}

	inline static int32_t get_offset_of_color_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___color_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_30() const { return ___color_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_30() { return &___color_30; }
	inline void set_color_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_30 = value;
	}

	inline static int32_t get_offset_of_underlineColor_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___underlineColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_31() const { return ___underlineColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_31() { return &___underlineColor_31; }
	inline void set_underlineColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_31 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___strikethroughColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_32() const { return ___strikethroughColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_32() { return &___strikethroughColor_32; }
	inline void set_strikethroughColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_32 = value;
	}

	inline static int32_t get_offset_of_highlightColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___highlightColor_33)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_33() const { return ___highlightColor_33; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_33() { return &___highlightColor_33; }
	inline void set_highlightColor_33(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_33 = value;
	}

	inline static int32_t get_offset_of_style_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___style_34)); }
	inline int32_t get_style_34() const { return ___style_34; }
	inline int32_t* get_address_of_style_34() { return &___style_34; }
	inline void set_style_34(int32_t value)
	{
		___style_34 = value;
	}

	inline static int32_t get_offset_of_isVisible_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1, ___isVisible_35)); }
	inline bool get_isVisible_35() const { return ___isVisible_35; }
	inline bool* get_address_of_isVisible_35() { return &___isVisible_35; }
	inline void set_isVisible_35(bool value)
	{
		___isVisible_35 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	int32_t ___style_34;
	int32_t ___isVisible_35;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___textElement_4;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_5;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BL_15;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TL_16;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_TR_17;
	TMP_Vertex_t4F9D3FA0EB3F5F4E94EC06582B857C3C23AC2EA0  ___vertex_BR_18;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topLeft_19;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomLeft_20;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___topRight_21;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_32;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_33;
	int32_t ___style_34;
	int32_t ___isVisible_35;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_MeshInfo
struct  TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___triangles_12;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___mesh_4)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___vertices_6)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___normals_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___tangents_8)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___uvs0_9)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___uvs2_10)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___colors32_11)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E, ___triangles_12)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}
};

struct TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshaled_pinvoke
{
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___vertices_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normals_7;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___tangents_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___uvs0_9;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___uvs2_10;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshaled_com
{
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___vertices_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normals_7;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * ___tangents_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___uvs0_9;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___uvs2_10;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
};

// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// TMPro.TMP_InputValidator
struct  TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_34))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___sizeStack_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___indentStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_40))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___styleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_42))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___baselineStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___actionStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_44))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};

// UIController_ButtonClick
struct  ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF  : public MulticastDelegate_t
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


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// TMPro.TMP_DigitValidator
struct  TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5  : public TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD
{
public:

public:
};


// TMPro.TMP_PhoneNumberValidator
struct  TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2  : public TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// TMPro.Examples.WarpTextExample
struct  WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;

public:
	inline static int32_t get_offset_of_m_TextComponent_4() { return static_cast<int32_t>(offsetof(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2, ___m_TextComponent_4)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_4() const { return ___m_TextComponent_4; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_4() { return &___m_TextComponent_4; }
	inline void set_m_TextComponent_4(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_VertexCurve_5() { return static_cast<int32_t>(offsetof(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2, ___VertexCurve_5)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_VertexCurve_5() const { return ___VertexCurve_5; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_VertexCurve_5() { return &___VertexCurve_5; }
	inline void set_VertexCurve_5(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___VertexCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_AngleMultiplier_6() { return static_cast<int32_t>(offsetof(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2, ___AngleMultiplier_6)); }
	inline float get_AngleMultiplier_6() const { return ___AngleMultiplier_6; }
	inline float* get_address_of_AngleMultiplier_6() { return &___AngleMultiplier_6; }
	inline void set_AngleMultiplier_6(float value)
	{
		___AngleMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_7() { return static_cast<int32_t>(offsetof(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2, ___SpeedMultiplier_7)); }
	inline float get_SpeedMultiplier_7() const { return ___SpeedMultiplier_7; }
	inline float* get_address_of_SpeedMultiplier_7() { return &___SpeedMultiplier_7; }
	inline void set_SpeedMultiplier_7(float value)
	{
		___SpeedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_CurveScale_8() { return static_cast<int32_t>(offsetof(WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2, ___CurveScale_8)); }
	inline float get_CurveScale_8() const { return ___CurveScale_8; }
	inline float* get_address_of_CurveScale_8() { return &___CurveScale_8; }
	inline void set_CurveScale_8(float value)
	{
		___CurveScale_8 = value;
	}
};


// TMPro.TMP_TextEventHandler
struct  TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TMP_TextEventHandler_CharacterSelectionEvent TMPro.TMP_TextEventHandler::m_OnCharacterSelection
	CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * ___m_OnCharacterSelection_4;
	// TMPro.TMP_TextEventHandler_SpriteSelectionEvent TMPro.TMP_TextEventHandler::m_OnSpriteSelection
	SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * ___m_OnSpriteSelection_5;
	// TMPro.TMP_TextEventHandler_WordSelectionEvent TMPro.TMP_TextEventHandler::m_OnWordSelection
	WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * ___m_OnWordSelection_6;
	// TMPro.TMP_TextEventHandler_LineSelectionEvent TMPro.TMP_TextEventHandler::m_OnLineSelection
	LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * ___m_OnLineSelection_7;
	// TMPro.TMP_TextEventHandler_LinkSelectionEvent TMPro.TMP_TextEventHandler::m_OnLinkSelection
	LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * ___m_OnLinkSelection_8;
	// TMPro.TMP_Text TMPro.TMP_TextEventHandler::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_9;
	// UnityEngine.Camera TMPro.TMP_TextEventHandler::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_10;
	// UnityEngine.Canvas TMPro.TMP_TextEventHandler::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Int32 TMPro.TMP_TextEventHandler::m_selectedLink
	int32_t ___m_selectedLink_12;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastCharIndex
	int32_t ___m_lastCharIndex_13;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastWordIndex
	int32_t ___m_lastWordIndex_14;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastLineIndex
	int32_t ___m_lastLineIndex_15;

public:
	inline static int32_t get_offset_of_m_OnCharacterSelection_4() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnCharacterSelection_4)); }
	inline CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * get_m_OnCharacterSelection_4() const { return ___m_OnCharacterSelection_4; }
	inline CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 ** get_address_of_m_OnCharacterSelection_4() { return &___m_OnCharacterSelection_4; }
	inline void set_m_OnCharacterSelection_4(CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * value)
	{
		___m_OnCharacterSelection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCharacterSelection_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSpriteSelection_5() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnSpriteSelection_5)); }
	inline SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * get_m_OnSpriteSelection_5() const { return ___m_OnSpriteSelection_5; }
	inline SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 ** get_address_of_m_OnSpriteSelection_5() { return &___m_OnSpriteSelection_5; }
	inline void set_m_OnSpriteSelection_5(SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * value)
	{
		___m_OnSpriteSelection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSpriteSelection_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnWordSelection_6() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnWordSelection_6)); }
	inline WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * get_m_OnWordSelection_6() const { return ___m_OnWordSelection_6; }
	inline WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 ** get_address_of_m_OnWordSelection_6() { return &___m_OnWordSelection_6; }
	inline void set_m_OnWordSelection_6(WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * value)
	{
		___m_OnWordSelection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnWordSelection_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLineSelection_7() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnLineSelection_7)); }
	inline LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * get_m_OnLineSelection_7() const { return ___m_OnLineSelection_7; }
	inline LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F ** get_address_of_m_OnLineSelection_7() { return &___m_OnLineSelection_7; }
	inline void set_m_OnLineSelection_7(LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * value)
	{
		___m_OnLineSelection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLineSelection_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLinkSelection_8() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_OnLinkSelection_8)); }
	inline LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * get_m_OnLinkSelection_8() const { return ___m_OnLinkSelection_8; }
	inline LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 ** get_address_of_m_OnLinkSelection_8() { return &___m_OnLinkSelection_8; }
	inline void set_m_OnLinkSelection_8(LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * value)
	{
		___m_OnLinkSelection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLinkSelection_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_9() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_TextComponent_9)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_9() const { return ___m_TextComponent_9; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_9() { return &___m_TextComponent_9; }
	inline void set_m_TextComponent_9(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_10() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_Camera_10)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_10() const { return ___m_Camera_10; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_10() { return &___m_Camera_10; }
	inline void set_m_Camera_10(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedLink_12() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_selectedLink_12)); }
	inline int32_t get_m_selectedLink_12() const { return ___m_selectedLink_12; }
	inline int32_t* get_address_of_m_selectedLink_12() { return &___m_selectedLink_12; }
	inline void set_m_selectedLink_12(int32_t value)
	{
		___m_selectedLink_12 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_13() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastCharIndex_13)); }
	inline int32_t get_m_lastCharIndex_13() const { return ___m_lastCharIndex_13; }
	inline int32_t* get_address_of_m_lastCharIndex_13() { return &___m_lastCharIndex_13; }
	inline void set_m_lastCharIndex_13(int32_t value)
	{
		___m_lastCharIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_14() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastWordIndex_14)); }
	inline int32_t get_m_lastWordIndex_14() const { return ___m_lastWordIndex_14; }
	inline int32_t* get_address_of_m_lastWordIndex_14() { return &___m_lastWordIndex_14; }
	inline void set_m_lastWordIndex_14(int32_t value)
	{
		___m_lastWordIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_lastLineIndex_15() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54, ___m_lastLineIndex_15)); }
	inline int32_t get_m_lastLineIndex_15() const { return ___m_lastLineIndex_15; }
	inline int32_t* get_address_of_m_lastLineIndex_15() { return &___m_lastLineIndex_15; }
	inline void set_m_lastLineIndex_15(int32_t value)
	{
		___m_lastLineIndex_15 = value;
	}
};


// UIController
struct  UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Slider UIController::playerNectarBar
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___playerNectarBar_4;
	// UnityEngine.UI.Slider UIController::opponentNectarBar
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___opponentNectarBar_5;
	// TMPro.TextMeshProUGUI UIController::timerText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___timerText_6;
	// TMPro.TextMeshProUGUI UIController::bannerText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___bannerText_7;
	// UnityEngine.UI.Button UIController::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_8;
	// TMPro.TextMeshProUGUI UIController::buttonText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___buttonText_9;
	// UIController_ButtonClick UIController::OnButtonClicked
	ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * ___OnButtonClicked_10;

public:
	inline static int32_t get_offset_of_playerNectarBar_4() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___playerNectarBar_4)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_playerNectarBar_4() const { return ___playerNectarBar_4; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_playerNectarBar_4() { return &___playerNectarBar_4; }
	inline void set_playerNectarBar_4(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___playerNectarBar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerNectarBar_4), (void*)value);
	}

	inline static int32_t get_offset_of_opponentNectarBar_5() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___opponentNectarBar_5)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_opponentNectarBar_5() const { return ___opponentNectarBar_5; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_opponentNectarBar_5() { return &___opponentNectarBar_5; }
	inline void set_opponentNectarBar_5(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___opponentNectarBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___opponentNectarBar_5), (void*)value);
	}

	inline static int32_t get_offset_of_timerText_6() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___timerText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_timerText_6() const { return ___timerText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_timerText_6() { return &___timerText_6; }
	inline void set_timerText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___timerText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_6), (void*)value);
	}

	inline static int32_t get_offset_of_bannerText_7() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___bannerText_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_bannerText_7() const { return ___bannerText_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_bannerText_7() { return &___bannerText_7; }
	inline void set_bannerText_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___bannerText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerText_7), (void*)value);
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___button_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_8() const { return ___button_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_8), (void*)value);
	}

	inline static int32_t get_offset_of_buttonText_9() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___buttonText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_buttonText_9() const { return ___buttonText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_buttonText_9() { return &___buttonText_9; }
	inline void set_buttonText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___buttonText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonText_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnButtonClicked_10() { return static_cast<int32_t>(offsetof(UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE, ___OnButtonClicked_10)); }
	inline ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * get_OnButtonClicked_10() const { return ___OnButtonClicked_10; }
	inline ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF ** get_address_of_OnButtonClicked_10() { return &___OnButtonClicked_10; }
	inline void set_OnButtonClicked_10(ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * value)
	{
		___OnButtonClicked_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnButtonClicked_10), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_TargetCameraState_4)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};


// camera
struct  camera_t1D6599C99653739822B84023581F1D4A9008FB39  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject camera::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_4;
	// UnityEngine.Vector3 camera::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(camera_t1D6599C99653739822B84023581F1D4A9008FB39, ___player_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_4() const { return ___player_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(camera_t1D6599C99653739822B84023581F1D4A9008FB39, ___offset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_5() const { return ___offset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_5 = value;
	}
};


// cameraControl
struct  cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject cameraControl::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_4;
	// UnityEngine.Vector3 cameraControl::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638, ___player_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_4() const { return ___player_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638, ___offset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_5() const { return ___offset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_5 = value;
	}
};


// cameraControll
struct  cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject cameraControll::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_4;
	// UnityEngine.Vector3 cameraControll::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66, ___player_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_4() const { return ___player_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66, ___offset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_5() const { return ___offset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_5 = value;
	}
};


// changescript
struct  changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text changescript::nametext
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___nametext_4;
	// UnityEngine.GameObject changescript::sphare
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sphare_5;

public:
	inline static int32_t get_offset_of_nametext_4() { return static_cast<int32_t>(offsetof(changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE, ___nametext_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_nametext_4() const { return ___nametext_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_nametext_4() { return &___nametext_4; }
	inline void set_nametext_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___nametext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nametext_4), (void*)value);
	}

	inline static int32_t get_offset_of_sphare_5() { return static_cast<int32_t>(offsetof(changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE, ___sphare_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sphare_5() const { return ___sphare_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sphare_5() { return &___sphare_5; }
	inline void set_sphare_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sphare_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sphare_5), (void*)value);
	}
};


// changescript1
struct  changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text changescript1::nametext
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___nametext_4;
	// UnityEngine.GameObject changescript1::sphare
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sphare_5;

public:
	inline static int32_t get_offset_of_nametext_4() { return static_cast<int32_t>(offsetof(changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632, ___nametext_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_nametext_4() const { return ___nametext_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_nametext_4() { return &___nametext_4; }
	inline void set_nametext_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___nametext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nametext_4), (void*)value);
	}

	inline static int32_t get_offset_of_sphare_5() { return static_cast<int32_t>(offsetof(changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632, ___sphare_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sphare_5() const { return ___sphare_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sphare_5() { return &___sphare_5; }
	inline void set_sphare_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sphare_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sphare_5), (void*)value);
	}
};


// changngtext1
struct  changngtext1_t13FE706E863ABD4571350E9370EC8930AF17E40E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// controltext
struct  controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text controltext::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81, ___text_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_4() const { return ___text_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// controltext1
struct  controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text controltext1::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266, ___text_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_4() const { return ___text_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// countDown1
struct  countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single countDown1::timerRemaining
	float ___timerRemaining_4;

public:
	inline static int32_t get_offset_of_timerRemaining_4() { return static_cast<int32_t>(offsetof(countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7, ___timerRemaining_4)); }
	inline float get_timerRemaining_4() const { return ___timerRemaining_4; }
	inline float* get_address_of_timerRemaining_4() { return &___timerRemaining_4; }
	inline void set_timerRemaining_4(float value)
	{
		___timerRemaining_4 = value;
	}
};


// findObjectChild1
struct  findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject findObjectChild1::childobject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___childobject_5;
	// System.Single findObjectChild1::speed
	float ___speed_6;
	// System.String findObjectChild1::textstring
	String_t* ___textstring_7;

public:
	inline static int32_t get_offset_of_childobject_5() { return static_cast<int32_t>(offsetof(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890, ___childobject_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_childobject_5() const { return ___childobject_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_childobject_5() { return &___childobject_5; }
	inline void set_childobject_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___childobject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childobject_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_textstring_7() { return static_cast<int32_t>(offsetof(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890, ___textstring_7)); }
	inline String_t* get_textstring_7() const { return ___textstring_7; }
	inline String_t** get_address_of_textstring_7() { return &___textstring_7; }
	inline void set_textstring_7(String_t* value)
	{
		___textstring_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textstring_7), (void*)value);
	}
};

struct findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_StaticFields
{
public:
	// System.Random findObjectChild1::random
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___random_4;

public:
	inline static int32_t get_offset_of_random_4() { return static_cast<int32_t>(offsetof(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_StaticFields, ___random_4)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_random_4() const { return ___random_4; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_random_4() { return &___random_4; }
	inline void set_random_4(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___random_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_4), (void*)value);
	}
};


// fixRotation1
struct  fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Quaternion fixRotation1::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_4;

public:
	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C, ___rotation_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_4 = value;
	}
};


// loadScence
struct  loadScence_tBA3AD184CD9821954E4030C66E8D004E8DF737AA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// open_link
struct  open_link_t58AE08A048B6B80BDB4BC217EE6B72FE2772C2C1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// playerMiniGame
struct  playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody playerMiniGame::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_4;
	// System.Single playerMiniGame::speed
	float ___speed_5;
	// UnityEngine.UI.Text playerMiniGame::countText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___countText_6;
	// UnityEngine.UI.Text playerMiniGame::winText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___winText_7;
	// System.Int32 playerMiniGame::count
	int32_t ___count_8;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6, ___rb_4)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_countText_6() { return static_cast<int32_t>(offsetof(playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6, ___countText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_countText_6() const { return ___countText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_countText_6() { return &___countText_6; }
	inline void set_countText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___countText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countText_6), (void*)value);
	}

	inline static int32_t get_offset_of_winText_7() { return static_cast<int32_t>(offsetof(playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6, ___winText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_winText_7() const { return ___winText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_winText_7() { return &___winText_7; }
	inline void set_winText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___winText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winText_7), (void*)value);
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6, ___count_8)); }
	inline int32_t get_count_8() const { return ___count_8; }
	inline int32_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(int32_t value)
	{
		___count_8 = value;
	}
};


// quit_game
struct  quit_game_t73FB614F948D058F88914619782454922C28A4B6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// sceneManager
struct  sceneManager_t34EFCA27B0A4788A5D0CA50C160B3433E4F4204D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// sceneback
struct  sceneback_tCC5481AFFE1450E3D4D4C6B31EF4D570FF3885BF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
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


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_19;

public:
	inline static int32_t get_offset_of_m_OnClick_19() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_19)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_19() const { return ___m_OnClick_19; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_19() { return &___m_OnClick_19; }
	inline void set_m_OnClick_19(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_19), (void*)value);
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


// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_19;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_20;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_22;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_23;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_24;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_25;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_26;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_27;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_28;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_29;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_30;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_31;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_32;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_33;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_34;

public:
	inline static int32_t get_offset_of_m_FillRect_19() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_19)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_19() const { return ___m_FillRect_19; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_19() { return &___m_FillRect_19; }
	inline void set_m_FillRect_19(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_22)); }
	inline float get_m_MinValue_22() const { return ___m_MinValue_22; }
	inline float* get_address_of_m_MinValue_22() { return &___m_MinValue_22; }
	inline void set_m_MinValue_22(float value)
	{
		___m_MinValue_22 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_23)); }
	inline float get_m_MaxValue_23() const { return ___m_MaxValue_23; }
	inline float* get_address_of_m_MaxValue_23() { return &___m_MaxValue_23; }
	inline void set_m_MaxValue_23(float value)
	{
		___m_MaxValue_23 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_24)); }
	inline bool get_m_WholeNumbers_24() const { return ___m_WholeNumbers_24; }
	inline bool* get_address_of_m_WholeNumbers_24() { return &___m_WholeNumbers_24; }
	inline void set_m_WholeNumbers_24(bool value)
	{
		___m_WholeNumbers_24 = value;
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_25)); }
	inline float get_m_Value_25() const { return ___m_Value_25; }
	inline float* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(float value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_26)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_26() const { return ___m_OnValueChanged_26; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_26() { return &___m_OnValueChanged_26; }
	inline void set_m_OnValueChanged_26(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_27)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_27() const { return ___m_FillImage_27; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_27() { return &___m_FillImage_27; }
	inline void set_m_FillImage_27(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_28)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_28() const { return ___m_FillTransform_28; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_28() { return &___m_FillTransform_28; }
	inline void set_m_FillTransform_28(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_29)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_29() const { return ___m_FillContainerRect_29; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_29() { return &___m_FillContainerRect_29; }
	inline void set_m_FillContainerRect_29(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_30)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_30() const { return ___m_HandleTransform_30; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_30() { return &___m_HandleTransform_30; }
	inline void set_m_HandleTransform_30(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_31)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_31() const { return ___m_HandleContainerRect_31; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_31() { return &___m_HandleContainerRect_31; }
	inline void set_m_HandleContainerRect_31(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_32)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_32() const { return ___m_Offset_32; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_32() { return &___m_Offset_32; }
	inline void set_m_Offset_32(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_32 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_33)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_33() const { return ___m_Tracker_33; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_33() { return &___m_Tracker_33; }
	inline void set_m_Tracker_33(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_33 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_34)); }
	inline bool get_m_DelayedUpdateVisuals_34() const { return ___m_DelayedUpdateVisuals_34; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_34() { return &___m_DelayedUpdateVisuals_34; }
	inline void set_m_DelayedUpdateVisuals_34(bool value)
	{
		___m_DelayedUpdateVisuals_34 = value;
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_34;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_35;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_36;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_37;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_38;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_39;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_40;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_41;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_42;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_44;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_45;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_47;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_49;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_54;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_66;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_67;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_68;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_70;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_sizeStack_71;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_72;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_73;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_74;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_75;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_76;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_77;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_78;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_79;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_80;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_81;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_82;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_83;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_84;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_85;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_86;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_87;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_88;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_89;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_90;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_91;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_92;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_93;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_94;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_95;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_96;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_97;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_98;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_99;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_100;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_101;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_102;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_103;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_104;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_105;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_106;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_107;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_108;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_109;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_110;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_111;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_112;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_113;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_114;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_115;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_116;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_117;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_118;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_119;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_120;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_121;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_122;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_123;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_124;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_125;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_126;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_127;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_128;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_129;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_130;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_131;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_132;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_133;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_134;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_135;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_136;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_137;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_138;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_139;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_140;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_141;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_142;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_143;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_144;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_145;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_146;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_147;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_148;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_149;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_150;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_151;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_152;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_153;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_154;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_155;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_156;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_157;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_158;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_159;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_160;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_161;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_162;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_163;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_164;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_165;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_166;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_167;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_168;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_169;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_170;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_171;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_172;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_173;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_174;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_175;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_176;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_177;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_178;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_179;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_indentStack_180;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_181;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_182;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_183;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_184;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_185;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_186;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_187;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_188;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_191;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_192;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_193;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_194;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_195;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_196;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_197;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_198;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_199;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_200;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_201;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_202;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_203;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_204;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_205;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_206;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_207;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_208;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_209;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_210;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_211;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_212;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_213;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_214;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_215;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_216;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_styleStack_217;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_actionStack_218;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_219;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_220;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_baselineOffsetStack_221;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_222;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_223;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_224;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_225;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_226;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_227;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_228;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_229;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_230;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_231;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_232;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_233;

public:
	inline static int32_t get_offset_of_m_text_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_34)); }
	inline String_t* get_m_text_34() const { return ___m_text_34; }
	inline String_t** get_address_of_m_text_34() { return &___m_text_34; }
	inline void set_m_text_34(String_t* value)
	{
		___m_text_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_35)); }
	inline bool get_m_isRightToLeft_35() const { return ___m_isRightToLeft_35; }
	inline bool* get_address_of_m_isRightToLeft_35() { return &___m_isRightToLeft_35; }
	inline void set_m_isRightToLeft_35(bool value)
	{
		___m_isRightToLeft_35 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_36)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_36() const { return ___m_fontAsset_36; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_36() { return &___m_fontAsset_36; }
	inline void set_m_fontAsset_36(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_37)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_37() const { return ___m_currentFontAsset_37; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_37() { return &___m_currentFontAsset_37; }
	inline void set_m_currentFontAsset_37(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_38)); }
	inline bool get_m_isSDFShader_38() const { return ___m_isSDFShader_38; }
	inline bool* get_address_of_m_isSDFShader_38() { return &___m_isSDFShader_38; }
	inline void set_m_isSDFShader_38(bool value)
	{
		___m_isSDFShader_38 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_39() const { return ___m_sharedMaterial_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_39() { return &___m_sharedMaterial_39; }
	inline void set_m_sharedMaterial_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_40() const { return ___m_currentMaterial_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_40() { return &___m_currentMaterial_40; }
	inline void set_m_currentMaterial_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_41)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_41() const { return ___m_materialReferences_41; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_41() { return &___m_materialReferences_41; }
	inline void set_m_materialReferences_41(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_42)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_42() const { return ___m_materialReferenceIndexLookup_42; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_42() { return &___m_materialReferenceIndexLookup_42; }
	inline void set_m_materialReferenceIndexLookup_42(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_43)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_43() const { return ___m_materialReferenceStack_43; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_43() { return &___m_materialReferenceStack_43; }
	inline void set_m_materialReferenceStack_43(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_43))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_44)); }
	inline int32_t get_m_currentMaterialIndex_44() const { return ___m_currentMaterialIndex_44; }
	inline int32_t* get_address_of_m_currentMaterialIndex_44() { return &___m_currentMaterialIndex_44; }
	inline void set_m_currentMaterialIndex_44(int32_t value)
	{
		___m_currentMaterialIndex_44 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_45)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_45() const { return ___m_fontSharedMaterials_45; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_45() { return &___m_fontSharedMaterials_45; }
	inline void set_m_fontSharedMaterials_45(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_46)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_46() const { return ___m_fontMaterial_46; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_46() { return &___m_fontMaterial_46; }
	inline void set_m_fontMaterial_46(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_47() const { return ___m_fontMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_47() { return &___m_fontMaterials_47; }
	inline void set_m_fontMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_48)); }
	inline bool get_m_isMaterialDirty_48() const { return ___m_isMaterialDirty_48; }
	inline bool* get_address_of_m_isMaterialDirty_48() { return &___m_isMaterialDirty_48; }
	inline void set_m_isMaterialDirty_48(bool value)
	{
		___m_isMaterialDirty_48 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_49() const { return ___m_fontColor32_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_49() { return &___m_fontColor32_49; }
	inline void set_m_fontColor32_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_50)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_50() const { return ___m_fontColor_50; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_50() { return &___m_fontColor_50; }
	inline void set_m_fontColor_50(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_50 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_52() const { return ___m_underlineColor_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_52() { return &___m_underlineColor_52; }
	inline void set_m_underlineColor_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_52 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_53() const { return ___m_strikethroughColor_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_53() { return &___m_strikethroughColor_53; }
	inline void set_m_strikethroughColor_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_53 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_54() const { return ___m_highlightColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_54() { return &___m_highlightColor_54; }
	inline void set_m_highlightColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_54 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_55)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_55() const { return ___m_highlightPadding_55; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_55() { return &___m_highlightPadding_55; }
	inline void set_m_highlightPadding_55(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_64)); }
	inline bool get_m_overrideHtmlColors_64() const { return ___m_overrideHtmlColors_64; }
	inline bool* get_address_of_m_overrideHtmlColors_64() { return &___m_overrideHtmlColors_64; }
	inline void set_m_overrideHtmlColors_64(bool value)
	{
		___m_overrideHtmlColors_64 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_65)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_65() const { return ___m_faceColor_65; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_65() { return &___m_faceColor_65; }
	inline void set_m_faceColor_65(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_65 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_66)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_66() const { return ___m_outlineColor_66; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_66() { return &___m_outlineColor_66; }
	inline void set_m_outlineColor_66(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_66 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_67)); }
	inline float get_m_outlineWidth_67() const { return ___m_outlineWidth_67; }
	inline float* get_address_of_m_outlineWidth_67() { return &___m_outlineWidth_67; }
	inline void set_m_outlineWidth_67(float value)
	{
		___m_outlineWidth_67 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_68)); }
	inline float get_m_fontSize_68() const { return ___m_fontSize_68; }
	inline float* get_address_of_m_fontSize_68() { return &___m_fontSize_68; }
	inline void set_m_fontSize_68(float value)
	{
		___m_fontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_69)); }
	inline float get_m_currentFontSize_69() const { return ___m_currentFontSize_69; }
	inline float* get_address_of_m_currentFontSize_69() { return &___m_currentFontSize_69; }
	inline void set_m_currentFontSize_69(float value)
	{
		___m_currentFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_70)); }
	inline float get_m_fontSizeBase_70() const { return ___m_fontSizeBase_70; }
	inline float* get_address_of_m_fontSizeBase_70() { return &___m_fontSizeBase_70; }
	inline void set_m_fontSizeBase_70(float value)
	{
		___m_fontSizeBase_70 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_71)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_sizeStack_71() const { return ___m_sizeStack_71; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_sizeStack_71() { return &___m_sizeStack_71; }
	inline void set_m_sizeStack_71(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_sizeStack_71 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_71))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_72)); }
	inline int32_t get_m_fontWeight_72() const { return ___m_fontWeight_72; }
	inline int32_t* get_address_of_m_fontWeight_72() { return &___m_fontWeight_72; }
	inline void set_m_fontWeight_72(int32_t value)
	{
		___m_fontWeight_72 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_73)); }
	inline int32_t get_m_FontWeightInternal_73() const { return ___m_FontWeightInternal_73; }
	inline int32_t* get_address_of_m_FontWeightInternal_73() { return &___m_FontWeightInternal_73; }
	inline void set_m_FontWeightInternal_73(int32_t value)
	{
		___m_FontWeightInternal_73 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_74)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_74() const { return ___m_FontWeightStack_74; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_74() { return &___m_FontWeightStack_74; }
	inline void set_m_FontWeightStack_74(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_74))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_75)); }
	inline bool get_m_enableAutoSizing_75() const { return ___m_enableAutoSizing_75; }
	inline bool* get_address_of_m_enableAutoSizing_75() { return &___m_enableAutoSizing_75; }
	inline void set_m_enableAutoSizing_75(bool value)
	{
		___m_enableAutoSizing_75 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_76)); }
	inline float get_m_maxFontSize_76() const { return ___m_maxFontSize_76; }
	inline float* get_address_of_m_maxFontSize_76() { return &___m_maxFontSize_76; }
	inline void set_m_maxFontSize_76(float value)
	{
		___m_maxFontSize_76 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_77)); }
	inline float get_m_minFontSize_77() const { return ___m_minFontSize_77; }
	inline float* get_address_of_m_minFontSize_77() { return &___m_minFontSize_77; }
	inline void set_m_minFontSize_77(float value)
	{
		___m_minFontSize_77 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_78)); }
	inline float get_m_fontSizeMin_78() const { return ___m_fontSizeMin_78; }
	inline float* get_address_of_m_fontSizeMin_78() { return &___m_fontSizeMin_78; }
	inline void set_m_fontSizeMin_78(float value)
	{
		___m_fontSizeMin_78 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_79)); }
	inline float get_m_fontSizeMax_79() const { return ___m_fontSizeMax_79; }
	inline float* get_address_of_m_fontSizeMax_79() { return &___m_fontSizeMax_79; }
	inline void set_m_fontSizeMax_79(float value)
	{
		___m_fontSizeMax_79 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_80)); }
	inline int32_t get_m_fontStyle_80() const { return ___m_fontStyle_80; }
	inline int32_t* get_address_of_m_fontStyle_80() { return &___m_fontStyle_80; }
	inline void set_m_fontStyle_80(int32_t value)
	{
		___m_fontStyle_80 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_81)); }
	inline int32_t get_m_FontStyleInternal_81() const { return ___m_FontStyleInternal_81; }
	inline int32_t* get_address_of_m_FontStyleInternal_81() { return &___m_FontStyleInternal_81; }
	inline void set_m_FontStyleInternal_81(int32_t value)
	{
		___m_FontStyleInternal_81 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_82)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_82() const { return ___m_fontStyleStack_82; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_82() { return &___m_fontStyleStack_82; }
	inline void set_m_fontStyleStack_82(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_82 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_83)); }
	inline bool get_m_isUsingBold_83() const { return ___m_isUsingBold_83; }
	inline bool* get_address_of_m_isUsingBold_83() { return &___m_isUsingBold_83; }
	inline void set_m_isUsingBold_83(bool value)
	{
		___m_isUsingBold_83 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_84)); }
	inline int32_t get_m_textAlignment_84() const { return ___m_textAlignment_84; }
	inline int32_t* get_address_of_m_textAlignment_84() { return &___m_textAlignment_84; }
	inline void set_m_textAlignment_84(int32_t value)
	{
		___m_textAlignment_84 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_85)); }
	inline int32_t get_m_lineJustification_85() const { return ___m_lineJustification_85; }
	inline int32_t* get_address_of_m_lineJustification_85() { return &___m_lineJustification_85; }
	inline void set_m_lineJustification_85(int32_t value)
	{
		___m_lineJustification_85 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_86)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_86() const { return ___m_lineJustificationStack_86; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_86() { return &___m_lineJustificationStack_86; }
	inline void set_m_lineJustificationStack_86(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_86 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_86))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_87)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_87() const { return ___m_textContainerLocalCorners_87; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_87() { return &___m_textContainerLocalCorners_87; }
	inline void set_m_textContainerLocalCorners_87(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_87), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_88)); }
	inline float get_m_characterSpacing_88() const { return ___m_characterSpacing_88; }
	inline float* get_address_of_m_characterSpacing_88() { return &___m_characterSpacing_88; }
	inline void set_m_characterSpacing_88(float value)
	{
		___m_characterSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_89)); }
	inline float get_m_cSpacing_89() const { return ___m_cSpacing_89; }
	inline float* get_address_of_m_cSpacing_89() { return &___m_cSpacing_89; }
	inline void set_m_cSpacing_89(float value)
	{
		___m_cSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_90)); }
	inline float get_m_monoSpacing_90() const { return ___m_monoSpacing_90; }
	inline float* get_address_of_m_monoSpacing_90() { return &___m_monoSpacing_90; }
	inline void set_m_monoSpacing_90(float value)
	{
		___m_monoSpacing_90 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_91)); }
	inline float get_m_wordSpacing_91() const { return ___m_wordSpacing_91; }
	inline float* get_address_of_m_wordSpacing_91() { return &___m_wordSpacing_91; }
	inline void set_m_wordSpacing_91(float value)
	{
		___m_wordSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_92)); }
	inline float get_m_lineSpacing_92() const { return ___m_lineSpacing_92; }
	inline float* get_address_of_m_lineSpacing_92() { return &___m_lineSpacing_92; }
	inline void set_m_lineSpacing_92(float value)
	{
		___m_lineSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_93)); }
	inline float get_m_lineSpacingDelta_93() const { return ___m_lineSpacingDelta_93; }
	inline float* get_address_of_m_lineSpacingDelta_93() { return &___m_lineSpacingDelta_93; }
	inline void set_m_lineSpacingDelta_93(float value)
	{
		___m_lineSpacingDelta_93 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_94)); }
	inline float get_m_lineHeight_94() const { return ___m_lineHeight_94; }
	inline float* get_address_of_m_lineHeight_94() { return &___m_lineHeight_94; }
	inline void set_m_lineHeight_94(float value)
	{
		___m_lineHeight_94 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_95)); }
	inline float get_m_lineSpacingMax_95() const { return ___m_lineSpacingMax_95; }
	inline float* get_address_of_m_lineSpacingMax_95() { return &___m_lineSpacingMax_95; }
	inline void set_m_lineSpacingMax_95(float value)
	{
		___m_lineSpacingMax_95 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_96)); }
	inline float get_m_paragraphSpacing_96() const { return ___m_paragraphSpacing_96; }
	inline float* get_address_of_m_paragraphSpacing_96() { return &___m_paragraphSpacing_96; }
	inline void set_m_paragraphSpacing_96(float value)
	{
		___m_paragraphSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_97)); }
	inline float get_m_charWidthMaxAdj_97() const { return ___m_charWidthMaxAdj_97; }
	inline float* get_address_of_m_charWidthMaxAdj_97() { return &___m_charWidthMaxAdj_97; }
	inline void set_m_charWidthMaxAdj_97(float value)
	{
		___m_charWidthMaxAdj_97 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_98)); }
	inline float get_m_charWidthAdjDelta_98() const { return ___m_charWidthAdjDelta_98; }
	inline float* get_address_of_m_charWidthAdjDelta_98() { return &___m_charWidthAdjDelta_98; }
	inline void set_m_charWidthAdjDelta_98(float value)
	{
		___m_charWidthAdjDelta_98 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_99)); }
	inline bool get_m_enableWordWrapping_99() const { return ___m_enableWordWrapping_99; }
	inline bool* get_address_of_m_enableWordWrapping_99() { return &___m_enableWordWrapping_99; }
	inline void set_m_enableWordWrapping_99(bool value)
	{
		___m_enableWordWrapping_99 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_100)); }
	inline bool get_m_isCharacterWrappingEnabled_100() const { return ___m_isCharacterWrappingEnabled_100; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_100() { return &___m_isCharacterWrappingEnabled_100; }
	inline void set_m_isCharacterWrappingEnabled_100(bool value)
	{
		___m_isCharacterWrappingEnabled_100 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_101)); }
	inline bool get_m_isNonBreakingSpace_101() const { return ___m_isNonBreakingSpace_101; }
	inline bool* get_address_of_m_isNonBreakingSpace_101() { return &___m_isNonBreakingSpace_101; }
	inline void set_m_isNonBreakingSpace_101(bool value)
	{
		___m_isNonBreakingSpace_101 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_102)); }
	inline bool get_m_isIgnoringAlignment_102() const { return ___m_isIgnoringAlignment_102; }
	inline bool* get_address_of_m_isIgnoringAlignment_102() { return &___m_isIgnoringAlignment_102; }
	inline void set_m_isIgnoringAlignment_102(bool value)
	{
		___m_isIgnoringAlignment_102 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_103)); }
	inline float get_m_wordWrappingRatios_103() const { return ___m_wordWrappingRatios_103; }
	inline float* get_address_of_m_wordWrappingRatios_103() { return &___m_wordWrappingRatios_103; }
	inline void set_m_wordWrappingRatios_103(float value)
	{
		___m_wordWrappingRatios_103 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_104)); }
	inline int32_t get_m_overflowMode_104() const { return ___m_overflowMode_104; }
	inline int32_t* get_address_of_m_overflowMode_104() { return &___m_overflowMode_104; }
	inline void set_m_overflowMode_104(int32_t value)
	{
		___m_overflowMode_104 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_105)); }
	inline int32_t get_m_firstOverflowCharacterIndex_105() const { return ___m_firstOverflowCharacterIndex_105; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_105() { return &___m_firstOverflowCharacterIndex_105; }
	inline void set_m_firstOverflowCharacterIndex_105(int32_t value)
	{
		___m_firstOverflowCharacterIndex_105 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_106)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_106() const { return ___m_linkedTextComponent_106; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_106() { return &___m_linkedTextComponent_106; }
	inline void set_m_linkedTextComponent_106(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_107)); }
	inline bool get_m_isLinkedTextComponent_107() const { return ___m_isLinkedTextComponent_107; }
	inline bool* get_address_of_m_isLinkedTextComponent_107() { return &___m_isLinkedTextComponent_107; }
	inline void set_m_isLinkedTextComponent_107(bool value)
	{
		___m_isLinkedTextComponent_107 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_108)); }
	inline bool get_m_isTextTruncated_108() const { return ___m_isTextTruncated_108; }
	inline bool* get_address_of_m_isTextTruncated_108() { return &___m_isTextTruncated_108; }
	inline void set_m_isTextTruncated_108(bool value)
	{
		___m_isTextTruncated_108 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_109)); }
	inline bool get_m_enableKerning_109() const { return ___m_enableKerning_109; }
	inline bool* get_address_of_m_enableKerning_109() { return &___m_enableKerning_109; }
	inline void set_m_enableKerning_109(bool value)
	{
		___m_enableKerning_109 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_110)); }
	inline bool get_m_enableExtraPadding_110() const { return ___m_enableExtraPadding_110; }
	inline bool* get_address_of_m_enableExtraPadding_110() { return &___m_enableExtraPadding_110; }
	inline void set_m_enableExtraPadding_110(bool value)
	{
		___m_enableExtraPadding_110 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_111)); }
	inline bool get_checkPaddingRequired_111() const { return ___checkPaddingRequired_111; }
	inline bool* get_address_of_checkPaddingRequired_111() { return &___checkPaddingRequired_111; }
	inline void set_checkPaddingRequired_111(bool value)
	{
		___checkPaddingRequired_111 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_112)); }
	inline bool get_m_isRichText_112() const { return ___m_isRichText_112; }
	inline bool* get_address_of_m_isRichText_112() { return &___m_isRichText_112; }
	inline void set_m_isRichText_112(bool value)
	{
		___m_isRichText_112 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_113)); }
	inline bool get_m_parseCtrlCharacters_113() const { return ___m_parseCtrlCharacters_113; }
	inline bool* get_address_of_m_parseCtrlCharacters_113() { return &___m_parseCtrlCharacters_113; }
	inline void set_m_parseCtrlCharacters_113(bool value)
	{
		___m_parseCtrlCharacters_113 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_114)); }
	inline bool get_m_isOverlay_114() const { return ___m_isOverlay_114; }
	inline bool* get_address_of_m_isOverlay_114() { return &___m_isOverlay_114; }
	inline void set_m_isOverlay_114(bool value)
	{
		___m_isOverlay_114 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_115)); }
	inline bool get_m_isOrthographic_115() const { return ___m_isOrthographic_115; }
	inline bool* get_address_of_m_isOrthographic_115() { return &___m_isOrthographic_115; }
	inline void set_m_isOrthographic_115(bool value)
	{
		___m_isOrthographic_115 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_116)); }
	inline bool get_m_isCullingEnabled_116() const { return ___m_isCullingEnabled_116; }
	inline bool* get_address_of_m_isCullingEnabled_116() { return &___m_isCullingEnabled_116; }
	inline void set_m_isCullingEnabled_116(bool value)
	{
		___m_isCullingEnabled_116 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_117)); }
	inline bool get_m_ignoreRectMaskCulling_117() const { return ___m_ignoreRectMaskCulling_117; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_117() { return &___m_ignoreRectMaskCulling_117; }
	inline void set_m_ignoreRectMaskCulling_117(bool value)
	{
		___m_ignoreRectMaskCulling_117 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_118)); }
	inline bool get_m_ignoreCulling_118() const { return ___m_ignoreCulling_118; }
	inline bool* get_address_of_m_ignoreCulling_118() { return &___m_ignoreCulling_118; }
	inline void set_m_ignoreCulling_118(bool value)
	{
		___m_ignoreCulling_118 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_119)); }
	inline int32_t get_m_horizontalMapping_119() const { return ___m_horizontalMapping_119; }
	inline int32_t* get_address_of_m_horizontalMapping_119() { return &___m_horizontalMapping_119; }
	inline void set_m_horizontalMapping_119(int32_t value)
	{
		___m_horizontalMapping_119 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_120)); }
	inline int32_t get_m_verticalMapping_120() const { return ___m_verticalMapping_120; }
	inline int32_t* get_address_of_m_verticalMapping_120() { return &___m_verticalMapping_120; }
	inline void set_m_verticalMapping_120(int32_t value)
	{
		___m_verticalMapping_120 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_121)); }
	inline float get_m_uvLineOffset_121() const { return ___m_uvLineOffset_121; }
	inline float* get_address_of_m_uvLineOffset_121() { return &___m_uvLineOffset_121; }
	inline void set_m_uvLineOffset_121(float value)
	{
		___m_uvLineOffset_121 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_122)); }
	inline int32_t get_m_renderMode_122() const { return ___m_renderMode_122; }
	inline int32_t* get_address_of_m_renderMode_122() { return &___m_renderMode_122; }
	inline void set_m_renderMode_122(int32_t value)
	{
		___m_renderMode_122 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_123)); }
	inline int32_t get_m_geometrySortingOrder_123() const { return ___m_geometrySortingOrder_123; }
	inline int32_t* get_address_of_m_geometrySortingOrder_123() { return &___m_geometrySortingOrder_123; }
	inline void set_m_geometrySortingOrder_123(int32_t value)
	{
		___m_geometrySortingOrder_123 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_124)); }
	inline bool get_m_VertexBufferAutoSizeReduction_124() const { return ___m_VertexBufferAutoSizeReduction_124; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_124() { return &___m_VertexBufferAutoSizeReduction_124; }
	inline void set_m_VertexBufferAutoSizeReduction_124(bool value)
	{
		___m_VertexBufferAutoSizeReduction_124 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_125)); }
	inline int32_t get_m_firstVisibleCharacter_125() const { return ___m_firstVisibleCharacter_125; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_125() { return &___m_firstVisibleCharacter_125; }
	inline void set_m_firstVisibleCharacter_125(int32_t value)
	{
		___m_firstVisibleCharacter_125 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_126)); }
	inline int32_t get_m_maxVisibleCharacters_126() const { return ___m_maxVisibleCharacters_126; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_126() { return &___m_maxVisibleCharacters_126; }
	inline void set_m_maxVisibleCharacters_126(int32_t value)
	{
		___m_maxVisibleCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_127)); }
	inline int32_t get_m_maxVisibleWords_127() const { return ___m_maxVisibleWords_127; }
	inline int32_t* get_address_of_m_maxVisibleWords_127() { return &___m_maxVisibleWords_127; }
	inline void set_m_maxVisibleWords_127(int32_t value)
	{
		___m_maxVisibleWords_127 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_128)); }
	inline int32_t get_m_maxVisibleLines_128() const { return ___m_maxVisibleLines_128; }
	inline int32_t* get_address_of_m_maxVisibleLines_128() { return &___m_maxVisibleLines_128; }
	inline void set_m_maxVisibleLines_128(int32_t value)
	{
		___m_maxVisibleLines_128 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_129)); }
	inline bool get_m_useMaxVisibleDescender_129() const { return ___m_useMaxVisibleDescender_129; }
	inline bool* get_address_of_m_useMaxVisibleDescender_129() { return &___m_useMaxVisibleDescender_129; }
	inline void set_m_useMaxVisibleDescender_129(bool value)
	{
		___m_useMaxVisibleDescender_129 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_130)); }
	inline int32_t get_m_pageToDisplay_130() const { return ___m_pageToDisplay_130; }
	inline int32_t* get_address_of_m_pageToDisplay_130() { return &___m_pageToDisplay_130; }
	inline void set_m_pageToDisplay_130(int32_t value)
	{
		___m_pageToDisplay_130 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_131)); }
	inline bool get_m_isNewPage_131() const { return ___m_isNewPage_131; }
	inline bool* get_address_of_m_isNewPage_131() { return &___m_isNewPage_131; }
	inline void set_m_isNewPage_131(bool value)
	{
		___m_isNewPage_131 = value;
	}

	inline static int32_t get_offset_of_m_margin_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_132)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_132() const { return ___m_margin_132; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_132() { return &___m_margin_132; }
	inline void set_m_margin_132(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_132 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_133)); }
	inline float get_m_marginLeft_133() const { return ___m_marginLeft_133; }
	inline float* get_address_of_m_marginLeft_133() { return &___m_marginLeft_133; }
	inline void set_m_marginLeft_133(float value)
	{
		___m_marginLeft_133 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_134)); }
	inline float get_m_marginRight_134() const { return ___m_marginRight_134; }
	inline float* get_address_of_m_marginRight_134() { return &___m_marginRight_134; }
	inline void set_m_marginRight_134(float value)
	{
		___m_marginRight_134 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_135)); }
	inline float get_m_marginWidth_135() const { return ___m_marginWidth_135; }
	inline float* get_address_of_m_marginWidth_135() { return &___m_marginWidth_135; }
	inline void set_m_marginWidth_135(float value)
	{
		___m_marginWidth_135 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_136)); }
	inline float get_m_marginHeight_136() const { return ___m_marginHeight_136; }
	inline float* get_address_of_m_marginHeight_136() { return &___m_marginHeight_136; }
	inline void set_m_marginHeight_136(float value)
	{
		___m_marginHeight_136 = value;
	}

	inline static int32_t get_offset_of_m_width_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_137)); }
	inline float get_m_width_137() const { return ___m_width_137; }
	inline float* get_address_of_m_width_137() { return &___m_width_137; }
	inline void set_m_width_137(float value)
	{
		___m_width_137 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_138)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_138() const { return ___m_textInfo_138; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_138() { return &___m_textInfo_138; }
	inline void set_m_textInfo_138(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_138), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_139)); }
	inline bool get_m_havePropertiesChanged_139() const { return ___m_havePropertiesChanged_139; }
	inline bool* get_address_of_m_havePropertiesChanged_139() { return &___m_havePropertiesChanged_139; }
	inline void set_m_havePropertiesChanged_139(bool value)
	{
		___m_havePropertiesChanged_139 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_140)); }
	inline bool get_m_isUsingLegacyAnimationComponent_140() const { return ___m_isUsingLegacyAnimationComponent_140; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_140() { return &___m_isUsingLegacyAnimationComponent_140; }
	inline void set_m_isUsingLegacyAnimationComponent_140(bool value)
	{
		___m_isUsingLegacyAnimationComponent_140 = value;
	}

	inline static int32_t get_offset_of_m_transform_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_141)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_141() const { return ___m_transform_141; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_141() { return &___m_transform_141; }
	inline void set_m_transform_141(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_141), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_142)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_142() const { return ___m_rectTransform_142; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_142() { return &___m_rectTransform_142; }
	inline void set_m_rectTransform_142(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_143)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_143() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return &___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_143(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_143 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_144)); }
	inline bool get_m_autoSizeTextContainer_144() const { return ___m_autoSizeTextContainer_144; }
	inline bool* get_address_of_m_autoSizeTextContainer_144() { return &___m_autoSizeTextContainer_144; }
	inline void set_m_autoSizeTextContainer_144(bool value)
	{
		___m_autoSizeTextContainer_144 = value;
	}

	inline static int32_t get_offset_of_m_mesh_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_145)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_145() const { return ___m_mesh_145; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_145() { return &___m_mesh_145; }
	inline void set_m_mesh_145(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_145), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_146)); }
	inline bool get_m_isVolumetricText_146() const { return ___m_isVolumetricText_146; }
	inline bool* get_address_of_m_isVolumetricText_146() { return &___m_isVolumetricText_146; }
	inline void set_m_isVolumetricText_146(bool value)
	{
		___m_isVolumetricText_146 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_147)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_147() const { return ___m_spriteAnimator_147; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_147() { return &___m_spriteAnimator_147; }
	inline void set_m_spriteAnimator_147(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_147), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_148)); }
	inline float get_m_flexibleHeight_148() const { return ___m_flexibleHeight_148; }
	inline float* get_address_of_m_flexibleHeight_148() { return &___m_flexibleHeight_148; }
	inline void set_m_flexibleHeight_148(float value)
	{
		___m_flexibleHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_149)); }
	inline float get_m_flexibleWidth_149() const { return ___m_flexibleWidth_149; }
	inline float* get_address_of_m_flexibleWidth_149() { return &___m_flexibleWidth_149; }
	inline void set_m_flexibleWidth_149(float value)
	{
		___m_flexibleWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_150)); }
	inline float get_m_minWidth_150() const { return ___m_minWidth_150; }
	inline float* get_address_of_m_minWidth_150() { return &___m_minWidth_150; }
	inline void set_m_minWidth_150(float value)
	{
		___m_minWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_151)); }
	inline float get_m_minHeight_151() const { return ___m_minHeight_151; }
	inline float* get_address_of_m_minHeight_151() { return &___m_minHeight_151; }
	inline void set_m_minHeight_151(float value)
	{
		___m_minHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_152)); }
	inline float get_m_maxWidth_152() const { return ___m_maxWidth_152; }
	inline float* get_address_of_m_maxWidth_152() { return &___m_maxWidth_152; }
	inline void set_m_maxWidth_152(float value)
	{
		___m_maxWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_153)); }
	inline float get_m_maxHeight_153() const { return ___m_maxHeight_153; }
	inline float* get_address_of_m_maxHeight_153() { return &___m_maxHeight_153; }
	inline void set_m_maxHeight_153(float value)
	{
		___m_maxHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_154)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_154() const { return ___m_LayoutElement_154; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_154() { return &___m_LayoutElement_154; }
	inline void set_m_LayoutElement_154(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_155)); }
	inline float get_m_preferredWidth_155() const { return ___m_preferredWidth_155; }
	inline float* get_address_of_m_preferredWidth_155() { return &___m_preferredWidth_155; }
	inline void set_m_preferredWidth_155(float value)
	{
		___m_preferredWidth_155 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_156)); }
	inline float get_m_renderedWidth_156() const { return ___m_renderedWidth_156; }
	inline float* get_address_of_m_renderedWidth_156() { return &___m_renderedWidth_156; }
	inline void set_m_renderedWidth_156(float value)
	{
		___m_renderedWidth_156 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_157)); }
	inline bool get_m_isPreferredWidthDirty_157() const { return ___m_isPreferredWidthDirty_157; }
	inline bool* get_address_of_m_isPreferredWidthDirty_157() { return &___m_isPreferredWidthDirty_157; }
	inline void set_m_isPreferredWidthDirty_157(bool value)
	{
		___m_isPreferredWidthDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_158)); }
	inline float get_m_preferredHeight_158() const { return ___m_preferredHeight_158; }
	inline float* get_address_of_m_preferredHeight_158() { return &___m_preferredHeight_158; }
	inline void set_m_preferredHeight_158(float value)
	{
		___m_preferredHeight_158 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_159)); }
	inline float get_m_renderedHeight_159() const { return ___m_renderedHeight_159; }
	inline float* get_address_of_m_renderedHeight_159() { return &___m_renderedHeight_159; }
	inline void set_m_renderedHeight_159(float value)
	{
		___m_renderedHeight_159 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_160)); }
	inline bool get_m_isPreferredHeightDirty_160() const { return ___m_isPreferredHeightDirty_160; }
	inline bool* get_address_of_m_isPreferredHeightDirty_160() { return &___m_isPreferredHeightDirty_160; }
	inline void set_m_isPreferredHeightDirty_160(bool value)
	{
		___m_isPreferredHeightDirty_160 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_161)); }
	inline bool get_m_isCalculatingPreferredValues_161() const { return ___m_isCalculatingPreferredValues_161; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_161() { return &___m_isCalculatingPreferredValues_161; }
	inline void set_m_isCalculatingPreferredValues_161(bool value)
	{
		___m_isCalculatingPreferredValues_161 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_162)); }
	inline int32_t get_m_recursiveCount_162() const { return ___m_recursiveCount_162; }
	inline int32_t* get_address_of_m_recursiveCount_162() { return &___m_recursiveCount_162; }
	inline void set_m_recursiveCount_162(int32_t value)
	{
		___m_recursiveCount_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_163)); }
	inline int32_t get_m_layoutPriority_163() const { return ___m_layoutPriority_163; }
	inline int32_t* get_address_of_m_layoutPriority_163() { return &___m_layoutPriority_163; }
	inline void set_m_layoutPriority_163(int32_t value)
	{
		___m_layoutPriority_163 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_164)); }
	inline bool get_m_isCalculateSizeRequired_164() const { return ___m_isCalculateSizeRequired_164; }
	inline bool* get_address_of_m_isCalculateSizeRequired_164() { return &___m_isCalculateSizeRequired_164; }
	inline void set_m_isCalculateSizeRequired_164(bool value)
	{
		___m_isCalculateSizeRequired_164 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_165)); }
	inline bool get_m_isLayoutDirty_165() const { return ___m_isLayoutDirty_165; }
	inline bool* get_address_of_m_isLayoutDirty_165() { return &___m_isLayoutDirty_165; }
	inline void set_m_isLayoutDirty_165(bool value)
	{
		___m_isLayoutDirty_165 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_166)); }
	inline bool get_m_verticesAlreadyDirty_166() const { return ___m_verticesAlreadyDirty_166; }
	inline bool* get_address_of_m_verticesAlreadyDirty_166() { return &___m_verticesAlreadyDirty_166; }
	inline void set_m_verticesAlreadyDirty_166(bool value)
	{
		___m_verticesAlreadyDirty_166 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_167)); }
	inline bool get_m_layoutAlreadyDirty_167() const { return ___m_layoutAlreadyDirty_167; }
	inline bool* get_address_of_m_layoutAlreadyDirty_167() { return &___m_layoutAlreadyDirty_167; }
	inline void set_m_layoutAlreadyDirty_167(bool value)
	{
		___m_layoutAlreadyDirty_167 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_168)); }
	inline bool get_m_isAwake_168() const { return ___m_isAwake_168; }
	inline bool* get_address_of_m_isAwake_168() { return &___m_isAwake_168; }
	inline void set_m_isAwake_168(bool value)
	{
		___m_isAwake_168 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_169)); }
	inline bool get_m_isWaitingOnResourceLoad_169() const { return ___m_isWaitingOnResourceLoad_169; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_169() { return &___m_isWaitingOnResourceLoad_169; }
	inline void set_m_isWaitingOnResourceLoad_169(bool value)
	{
		___m_isWaitingOnResourceLoad_169 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_170)); }
	inline bool get_m_isInputParsingRequired_170() const { return ___m_isInputParsingRequired_170; }
	inline bool* get_address_of_m_isInputParsingRequired_170() { return &___m_isInputParsingRequired_170; }
	inline void set_m_isInputParsingRequired_170(bool value)
	{
		___m_isInputParsingRequired_170 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_171)); }
	inline int32_t get_m_inputSource_171() const { return ___m_inputSource_171; }
	inline int32_t* get_address_of_m_inputSource_171() { return &___m_inputSource_171; }
	inline void set_m_inputSource_171(int32_t value)
	{
		___m_inputSource_171 = value;
	}

	inline static int32_t get_offset_of_old_text_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_172)); }
	inline String_t* get_old_text_172() const { return ___old_text_172; }
	inline String_t** get_address_of_old_text_172() { return &___old_text_172; }
	inline void set_old_text_172(String_t* value)
	{
		___old_text_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___old_text_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontScale_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_173)); }
	inline float get_m_fontScale_173() const { return ___m_fontScale_173; }
	inline float* get_address_of_m_fontScale_173() { return &___m_fontScale_173; }
	inline void set_m_fontScale_173(float value)
	{
		___m_fontScale_173 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_174)); }
	inline float get_m_fontScaleMultiplier_174() const { return ___m_fontScaleMultiplier_174; }
	inline float* get_address_of_m_fontScaleMultiplier_174() { return &___m_fontScaleMultiplier_174; }
	inline void set_m_fontScaleMultiplier_174(float value)
	{
		___m_fontScaleMultiplier_174 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_175)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_175() const { return ___m_htmlTag_175; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_175() { return &___m_htmlTag_175; }
	inline void set_m_htmlTag_175(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_175 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_175), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_176)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_176() const { return ___m_xmlAttribute_176; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_176() { return &___m_xmlAttribute_176; }
	inline void set_m_xmlAttribute_176(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_176 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_176), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_177)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_177() const { return ___m_attributeParameterValues_177; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_177() { return &___m_attributeParameterValues_177; }
	inline void set_m_attributeParameterValues_177(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_177 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_177), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_178)); }
	inline float get_tag_LineIndent_178() const { return ___tag_LineIndent_178; }
	inline float* get_address_of_tag_LineIndent_178() { return &___tag_LineIndent_178; }
	inline void set_tag_LineIndent_178(float value)
	{
		___tag_LineIndent_178 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_179)); }
	inline float get_tag_Indent_179() const { return ___tag_Indent_179; }
	inline float* get_address_of_tag_Indent_179() { return &___tag_Indent_179; }
	inline void set_tag_Indent_179(float value)
	{
		___tag_Indent_179 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_180)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_indentStack_180() const { return ___m_indentStack_180; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_indentStack_180() { return &___m_indentStack_180; }
	inline void set_m_indentStack_180(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_indentStack_180 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_180))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_181)); }
	inline bool get_tag_NoParsing_181() const { return ___tag_NoParsing_181; }
	inline bool* get_address_of_tag_NoParsing_181() { return &___tag_NoParsing_181; }
	inline void set_tag_NoParsing_181(bool value)
	{
		___tag_NoParsing_181 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_182)); }
	inline bool get_m_isParsingText_182() const { return ___m_isParsingText_182; }
	inline bool* get_address_of_m_isParsingText_182() { return &___m_isParsingText_182; }
	inline void set_m_isParsingText_182(bool value)
	{
		___m_isParsingText_182 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_183)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_183() const { return ___m_FXMatrix_183; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_183() { return &___m_FXMatrix_183; }
	inline void set_m_FXMatrix_183(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_183 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_184)); }
	inline bool get_m_isFXMatrixSet_184() const { return ___m_isFXMatrixSet_184; }
	inline bool* get_address_of_m_isFXMatrixSet_184() { return &___m_isFXMatrixSet_184; }
	inline void set_m_isFXMatrixSet_184(bool value)
	{
		___m_isFXMatrixSet_184 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_185)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_185() const { return ___m_TextParsingBuffer_185; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_185() { return &___m_TextParsingBuffer_185; }
	inline void set_m_TextParsingBuffer_185(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_185 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_185), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_186)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_186() const { return ___m_internalCharacterInfo_186; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_186() { return &___m_internalCharacterInfo_186; }
	inline void set_m_internalCharacterInfo_186(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_187() const { return ___m_input_CharArray_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_187() { return &___m_input_CharArray_187; }
	inline void set_m_input_CharArray_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_188)); }
	inline int32_t get_m_charArray_Length_188() const { return ___m_charArray_Length_188; }
	inline int32_t* get_address_of_m_charArray_Length_188() { return &___m_charArray_Length_188; }
	inline void set_m_charArray_Length_188(int32_t value)
	{
		___m_charArray_Length_188 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_189)); }
	inline int32_t get_m_totalCharacterCount_189() const { return ___m_totalCharacterCount_189; }
	inline int32_t* get_address_of_m_totalCharacterCount_189() { return &___m_totalCharacterCount_189; }
	inline void set_m_totalCharacterCount_189(int32_t value)
	{
		___m_totalCharacterCount_189 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_190)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_190() const { return ___m_SavedWordWrapState_190; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_190() { return &___m_SavedWordWrapState_190; }
	inline void set_m_SavedWordWrapState_190(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_190 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_191)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_191() const { return ___m_SavedLineState_191; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_191() { return &___m_SavedLineState_191; }
	inline void set_m_SavedLineState_191(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_192)); }
	inline int32_t get_m_characterCount_192() const { return ___m_characterCount_192; }
	inline int32_t* get_address_of_m_characterCount_192() { return &___m_characterCount_192; }
	inline void set_m_characterCount_192(int32_t value)
	{
		___m_characterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_193)); }
	inline int32_t get_m_firstCharacterOfLine_193() const { return ___m_firstCharacterOfLine_193; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_193() { return &___m_firstCharacterOfLine_193; }
	inline void set_m_firstCharacterOfLine_193(int32_t value)
	{
		___m_firstCharacterOfLine_193 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_194)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_194() const { return ___m_firstVisibleCharacterOfLine_194; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_194() { return &___m_firstVisibleCharacterOfLine_194; }
	inline void set_m_firstVisibleCharacterOfLine_194(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_194 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_195)); }
	inline int32_t get_m_lastCharacterOfLine_195() const { return ___m_lastCharacterOfLine_195; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_195() { return &___m_lastCharacterOfLine_195; }
	inline void set_m_lastCharacterOfLine_195(int32_t value)
	{
		___m_lastCharacterOfLine_195 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_196)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_196() const { return ___m_lastVisibleCharacterOfLine_196; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_196() { return &___m_lastVisibleCharacterOfLine_196; }
	inline void set_m_lastVisibleCharacterOfLine_196(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_196 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_197)); }
	inline int32_t get_m_lineNumber_197() const { return ___m_lineNumber_197; }
	inline int32_t* get_address_of_m_lineNumber_197() { return &___m_lineNumber_197; }
	inline void set_m_lineNumber_197(int32_t value)
	{
		___m_lineNumber_197 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_198)); }
	inline int32_t get_m_lineVisibleCharacterCount_198() const { return ___m_lineVisibleCharacterCount_198; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_198() { return &___m_lineVisibleCharacterCount_198; }
	inline void set_m_lineVisibleCharacterCount_198(int32_t value)
	{
		___m_lineVisibleCharacterCount_198 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_199)); }
	inline int32_t get_m_pageNumber_199() const { return ___m_pageNumber_199; }
	inline int32_t* get_address_of_m_pageNumber_199() { return &___m_pageNumber_199; }
	inline void set_m_pageNumber_199(int32_t value)
	{
		___m_pageNumber_199 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_200)); }
	inline float get_m_maxAscender_200() const { return ___m_maxAscender_200; }
	inline float* get_address_of_m_maxAscender_200() { return &___m_maxAscender_200; }
	inline void set_m_maxAscender_200(float value)
	{
		___m_maxAscender_200 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_201)); }
	inline float get_m_maxCapHeight_201() const { return ___m_maxCapHeight_201; }
	inline float* get_address_of_m_maxCapHeight_201() { return &___m_maxCapHeight_201; }
	inline void set_m_maxCapHeight_201(float value)
	{
		___m_maxCapHeight_201 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_202)); }
	inline float get_m_maxDescender_202() const { return ___m_maxDescender_202; }
	inline float* get_address_of_m_maxDescender_202() { return &___m_maxDescender_202; }
	inline void set_m_maxDescender_202(float value)
	{
		___m_maxDescender_202 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_203)); }
	inline float get_m_maxLineAscender_203() const { return ___m_maxLineAscender_203; }
	inline float* get_address_of_m_maxLineAscender_203() { return &___m_maxLineAscender_203; }
	inline void set_m_maxLineAscender_203(float value)
	{
		___m_maxLineAscender_203 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_204)); }
	inline float get_m_maxLineDescender_204() const { return ___m_maxLineDescender_204; }
	inline float* get_address_of_m_maxLineDescender_204() { return &___m_maxLineDescender_204; }
	inline void set_m_maxLineDescender_204(float value)
	{
		___m_maxLineDescender_204 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_205)); }
	inline float get_m_startOfLineAscender_205() const { return ___m_startOfLineAscender_205; }
	inline float* get_address_of_m_startOfLineAscender_205() { return &___m_startOfLineAscender_205; }
	inline void set_m_startOfLineAscender_205(float value)
	{
		___m_startOfLineAscender_205 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_206)); }
	inline float get_m_lineOffset_206() const { return ___m_lineOffset_206; }
	inline float* get_address_of_m_lineOffset_206() { return &___m_lineOffset_206; }
	inline void set_m_lineOffset_206(float value)
	{
		___m_lineOffset_206 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_207)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_207() const { return ___m_meshExtents_207; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_207() { return &___m_meshExtents_207; }
	inline void set_m_meshExtents_207(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_207 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_208)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_208() const { return ___m_htmlColor_208; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_208() { return &___m_htmlColor_208; }
	inline void set_m_htmlColor_208(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_208 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_209)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_209() const { return ___m_colorStack_209; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_209() { return &___m_colorStack_209; }
	inline void set_m_colorStack_209(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_209))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_210)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_210() const { return ___m_underlineColorStack_210; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_210() { return &___m_underlineColorStack_210; }
	inline void set_m_underlineColorStack_210(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_210 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_210))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_211)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_211() const { return ___m_strikethroughColorStack_211; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_211() { return &___m_strikethroughColorStack_211; }
	inline void set_m_strikethroughColorStack_211(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_211 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_211))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_highlightColorStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_212)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_212() const { return ___m_highlightColorStack_212; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_212() { return &___m_highlightColorStack_212; }
	inline void set_m_highlightColorStack_212(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_212 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_highlightColorStack_212))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_213)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_213() const { return ___m_colorGradientPreset_213; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_213() { return &___m_colorGradientPreset_213; }
	inline void set_m_colorGradientPreset_213(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_213 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_213), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_214)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_214() const { return ___m_colorGradientStack_214; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_214() { return &___m_colorGradientStack_214; }
	inline void set_m_colorGradientStack_214(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_214 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_tabSpacing_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_215)); }
	inline float get_m_tabSpacing_215() const { return ___m_tabSpacing_215; }
	inline float* get_address_of_m_tabSpacing_215() { return &___m_tabSpacing_215; }
	inline void set_m_tabSpacing_215(float value)
	{
		___m_tabSpacing_215 = value;
	}

	inline static int32_t get_offset_of_m_spacing_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_216)); }
	inline float get_m_spacing_216() const { return ___m_spacing_216; }
	inline float* get_address_of_m_spacing_216() { return &___m_spacing_216; }
	inline void set_m_spacing_216(float value)
	{
		___m_spacing_216 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_217)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_styleStack_217() const { return ___m_styleStack_217; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_styleStack_217() { return &___m_styleStack_217; }
	inline void set_m_styleStack_217(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_styleStack_217 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_styleStack_217))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_actionStack_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_218)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_actionStack_218() const { return ___m_actionStack_218; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_actionStack_218() { return &___m_actionStack_218; }
	inline void set_m_actionStack_218(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_actionStack_218 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_218))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_219)); }
	inline float get_m_padding_219() const { return ___m_padding_219; }
	inline float* get_address_of_m_padding_219() { return &___m_padding_219; }
	inline void set_m_padding_219(float value)
	{
		___m_padding_219 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_220)); }
	inline float get_m_baselineOffset_220() const { return ___m_baselineOffset_220; }
	inline float* get_address_of_m_baselineOffset_220() { return &___m_baselineOffset_220; }
	inline void set_m_baselineOffset_220(float value)
	{
		___m_baselineOffset_220 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_221)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_baselineOffsetStack_221() const { return ___m_baselineOffsetStack_221; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_baselineOffsetStack_221() { return &___m_baselineOffsetStack_221; }
	inline void set_m_baselineOffsetStack_221(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_baselineOffsetStack_221 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_221))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_222)); }
	inline float get_m_xAdvance_222() const { return ___m_xAdvance_222; }
	inline float* get_address_of_m_xAdvance_222() { return &___m_xAdvance_222; }
	inline void set_m_xAdvance_222(float value)
	{
		___m_xAdvance_222 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_223)); }
	inline int32_t get_m_textElementType_223() const { return ___m_textElementType_223; }
	inline int32_t* get_address_of_m_textElementType_223() { return &___m_textElementType_223; }
	inline void set_m_textElementType_223(int32_t value)
	{
		___m_textElementType_223 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_224)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_224() const { return ___m_cached_TextElement_224; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_224() { return &___m_cached_TextElement_224; }
	inline void set_m_cached_TextElement_224(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_224 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_224), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_225)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_225() const { return ___m_cached_Underline_Character_225; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_225() { return &___m_cached_Underline_Character_225; }
	inline void set_m_cached_Underline_Character_225(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_225 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_225), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_226)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_226() const { return ___m_cached_Ellipsis_Character_226; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_226() { return &___m_cached_Ellipsis_Character_226; }
	inline void set_m_cached_Ellipsis_Character_226(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_226 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_226), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_227)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_227() const { return ___m_defaultSpriteAsset_227; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_227() { return &___m_defaultSpriteAsset_227; }
	inline void set_m_defaultSpriteAsset_227(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_227 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_227), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_228)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_228() const { return ___m_currentSpriteAsset_228; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_228() { return &___m_currentSpriteAsset_228; }
	inline void set_m_currentSpriteAsset_228(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_228 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_228), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_229)); }
	inline int32_t get_m_spriteCount_229() const { return ___m_spriteCount_229; }
	inline int32_t* get_address_of_m_spriteCount_229() { return &___m_spriteCount_229; }
	inline void set_m_spriteCount_229(int32_t value)
	{
		___m_spriteCount_229 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_230)); }
	inline int32_t get_m_spriteIndex_230() const { return ___m_spriteIndex_230; }
	inline int32_t* get_address_of_m_spriteIndex_230() { return &___m_spriteIndex_230; }
	inline void set_m_spriteIndex_230(int32_t value)
	{
		___m_spriteIndex_230 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_231)); }
	inline int32_t get_m_spriteAnimationID_231() const { return ___m_spriteAnimationID_231; }
	inline int32_t* get_address_of_m_spriteAnimationID_231() { return &___m_spriteAnimationID_231; }
	inline void set_m_spriteAnimationID_231(int32_t value)
	{
		___m_spriteAnimationID_231 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_232)); }
	inline bool get_m_ignoreActiveState_232() const { return ___m_ignoreActiveState_232; }
	inline bool* get_address_of_m_ignoreActiveState_232() { return &___m_ignoreActiveState_232; }
	inline void set_m_ignoreActiveState_232(bool value)
	{
		___m_ignoreActiveState_232 = value;
	}

	inline static int32_t get_offset_of_k_Power_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_233)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_233() const { return ___k_Power_233; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_233() { return &___k_Power_233; }
	inline void set_k_Power_233(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_233), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_51;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_234;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_235;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_236;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_237;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_238;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_239;

public:
	inline static int32_t get_offset_of_s_colorWhite_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_51() const { return ___s_colorWhite_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_51() { return &___s_colorWhite_51; }
	inline void set_s_colorWhite_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_51 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_234)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_234() const { return ___k_LargePositiveVector2_234; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_234() { return &___k_LargePositiveVector2_234; }
	inline void set_k_LargePositiveVector2_234(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_235)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_235() const { return ___k_LargeNegativeVector2_235; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_235() { return &___k_LargeNegativeVector2_235; }
	inline void set_k_LargeNegativeVector2_235(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_235 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_236)); }
	inline float get_k_LargePositiveFloat_236() const { return ___k_LargePositiveFloat_236; }
	inline float* get_address_of_k_LargePositiveFloat_236() { return &___k_LargePositiveFloat_236; }
	inline void set_k_LargePositiveFloat_236(float value)
	{
		___k_LargePositiveFloat_236 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_237)); }
	inline float get_k_LargeNegativeFloat_237() const { return ___k_LargeNegativeFloat_237; }
	inline float* get_address_of_k_LargeNegativeFloat_237() { return &___k_LargeNegativeFloat_237; }
	inline void set_k_LargeNegativeFloat_237(float value)
	{
		___k_LargeNegativeFloat_237 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_238)); }
	inline int32_t get_k_LargePositiveInt_238() const { return ___k_LargePositiveInt_238; }
	inline int32_t* get_address_of_k_LargePositiveInt_238() { return &___k_LargePositiveInt_238; }
	inline void set_k_LargePositiveInt_238(int32_t value)
	{
		___k_LargePositiveInt_238 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_239)); }
	inline int32_t get_k_LargeNegativeInt_239() const { return ___k_LargeNegativeInt_239; }
	inline int32_t* get_address_of_k_LargeNegativeInt_239() { return &___k_LargeNegativeInt_239; }
	inline void set_k_LargeNegativeInt_239(int32_t value)
	{
		___k_LargeNegativeInt_239 = value;
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


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_240;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_241;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_242;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_243;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_244;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_245;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_246;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_247;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_248;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_249;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_250;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_251;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_252;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_253;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_254;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_255;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_256;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_257;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_240)); }
	inline bool get_m_hasFontAssetChanged_240() const { return ___m_hasFontAssetChanged_240; }
	inline bool* get_address_of_m_hasFontAssetChanged_240() { return &___m_hasFontAssetChanged_240; }
	inline void set_m_hasFontAssetChanged_240(bool value)
	{
		___m_hasFontAssetChanged_240 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_241)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_241() const { return ___m_subTextObjects_241; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_241() { return &___m_subTextObjects_241; }
	inline void set_m_subTextObjects_241(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_241 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_241), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_242)); }
	inline float get_m_previousLossyScaleY_242() const { return ___m_previousLossyScaleY_242; }
	inline float* get_address_of_m_previousLossyScaleY_242() { return &___m_previousLossyScaleY_242; }
	inline void set_m_previousLossyScaleY_242(float value)
	{
		___m_previousLossyScaleY_242 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_243)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_243() const { return ___m_RectTransformCorners_243; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_243() { return &___m_RectTransformCorners_243; }
	inline void set_m_RectTransformCorners_243(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_243 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_243), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_244)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_244() const { return ___m_canvasRenderer_244; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_244() { return &___m_canvasRenderer_244; }
	inline void set_m_canvasRenderer_244(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_244 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_244), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_245)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_245() const { return ___m_canvas_245; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_245() { return &___m_canvas_245; }
	inline void set_m_canvas_245(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_246)); }
	inline bool get_m_isFirstAllocation_246() const { return ___m_isFirstAllocation_246; }
	inline bool* get_address_of_m_isFirstAllocation_246() { return &___m_isFirstAllocation_246; }
	inline void set_m_isFirstAllocation_246(bool value)
	{
		___m_isFirstAllocation_246 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_247)); }
	inline int32_t get_m_max_characters_247() const { return ___m_max_characters_247; }
	inline int32_t* get_address_of_m_max_characters_247() { return &___m_max_characters_247; }
	inline void set_m_max_characters_247(int32_t value)
	{
		___m_max_characters_247 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isMaskingEnabled_248)); }
	inline bool get_m_isMaskingEnabled_248() const { return ___m_isMaskingEnabled_248; }
	inline bool* get_address_of_m_isMaskingEnabled_248() { return &___m_isMaskingEnabled_248; }
	inline void set_m_isMaskingEnabled_248(bool value)
	{
		___m_isMaskingEnabled_248 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_249)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_249() const { return ___m_baseMaterial_249; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_249() { return &___m_baseMaterial_249; }
	inline void set_m_baseMaterial_249(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_250)); }
	inline bool get_m_isScrollRegionSet_250() const { return ___m_isScrollRegionSet_250; }
	inline bool* get_address_of_m_isScrollRegionSet_250() { return &___m_isScrollRegionSet_250; }
	inline void set_m_isScrollRegionSet_250(bool value)
	{
		___m_isScrollRegionSet_250 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_stencilID_251)); }
	inline int32_t get_m_stencilID_251() const { return ___m_stencilID_251; }
	inline int32_t* get_address_of_m_stencilID_251() { return &___m_stencilID_251; }
	inline void set_m_stencilID_251(int32_t value)
	{
		___m_stencilID_251 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_252)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_252() const { return ___m_maskOffset_252; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_252() { return &___m_maskOffset_252; }
	inline void set_m_maskOffset_252(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_252 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_253)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_253() const { return ___m_EnvMapMatrix_253; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_253() { return &___m_EnvMapMatrix_253; }
	inline void set_m_EnvMapMatrix_253(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_253 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_254() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_254)); }
	inline bool get_m_isRegisteredForEvents_254() const { return ___m_isRegisteredForEvents_254; }
	inline bool* get_address_of_m_isRegisteredForEvents_254() { return &___m_isRegisteredForEvents_254; }
	inline void set_m_isRegisteredForEvents_254(bool value)
	{
		___m_isRegisteredForEvents_254 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_255() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_recursiveCountA_255)); }
	inline int32_t get_m_recursiveCountA_255() const { return ___m_recursiveCountA_255; }
	inline int32_t* get_address_of_m_recursiveCountA_255() { return &___m_recursiveCountA_255; }
	inline void set_m_recursiveCountA_255(int32_t value)
	{
		___m_recursiveCountA_255 = value;
	}

	inline static int32_t get_offset_of_loopCountA_256() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___loopCountA_256)); }
	inline int32_t get_loopCountA_256() const { return ___loopCountA_256; }
	inline int32_t* get_address_of_loopCountA_256() { return &___loopCountA_256; }
	inline void set_loopCountA_256(int32_t value)
	{
		___loopCountA_256 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_257() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_257)); }
	inline bool get_m_isRebuildingLayout_257() const { return ___m_isRebuildingLayout_257; }
	inline bool* get_address_of_m_isRebuildingLayout_257() { return &___m_isRebuildingLayout_257; }
	inline void set_m_isRebuildingLayout_257(bool value)
	{
		___m_isRebuildingLayout_257 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  m_Items[1];

public:
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E  m_Items[1];

public:
	inline TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  m_Items[1];

public:
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  m_Items[1];

public:
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  m_Items[1];

public:
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkID_6), (void*)NULL);
		#endif
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textComponent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___linkID_6), (void*)NULL);
		#endif
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_mBC64895B74DFE62BA4F723C7A369F7BFDE438AC6_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, Il2CppChar ___arg00, int32_t ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_mF7B9410683321DBE61FC4F641DA39C99A7FA75FF_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, RuntimeObject * ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, int32_t ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mAAAB1687869E0121C858C65BDB2D294D55CFB67A (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___value0, const RuntimeMethod* method);
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m63F411BEA2E513D84AAA701A1EDF0D0322FDE9C4 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* ___keys0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mFE146DFCE1E335655A079DCE6E8F046BD63A6489 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mF11FF01671DFC6E54D29111561B8C7104DCEB413 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mF3E582A3C6D9DD5451E9373922E2F105464A46D3 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038 (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m82201A5AA12D07730AEC216421E5AC4FB2796481_inline (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  TMP_Text_get_bounds_m7E7F2C8D0DD7CC68CE034CF5423F996D69CBEFE7 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_min_m2D48F74D29BF904D1AF19C562932E34ACAE2467C (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_max_mC3BE43C2A865BAC138D117684BC01E289892549B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m6AD8F21FFCC7723C6F507CCF2E4E2EFFC4871584 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D (TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mBC64895B74DFE62BA4F723C7A369F7BFDE438AC6_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.RectTransform TMPro.TMP_Text::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * TMP_Text_get_rectTransform_m7D5ABF7B98E93576BDA8F7E1A2A7415284D4F05E (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Boolean TMPro.TMP_TextUtilities::IsIntersectingRectTransform(UnityEngine.RectTransform,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_TextUtilities_IsIntersectingRectTransform_m673D86304DB8BA8F23DB5668BB9B9B4BC103E4F1 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rectTransform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingCharacter(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingCharacter_mE3DF825E1B004FB99F0795C9175F4BEE95C4A152 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, bool ___visibleOnly3, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnSpriteSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingWord(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingWord_m3D600FFD979C6F4CA0E68E476274DC52792A6E27 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String TMPro.TMP_WordInfo::GetWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_WordInfo_GetWord_m45402062300ED4455F6C6F5E96E42C4904E18133 (TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___word0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingLine(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingLine_m382D73F58E10E0252FE311C164264E8564F9AE73 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnLineSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___line0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 TMPro.TMP_TextUtilities::FindIntersectingLink(TMPro.TMP_Text,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_TextUtilities_FindIntersectingLink_mC8275AA5E208929B1DB6170DEA09CA8D82F47020 (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___text0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera2, const RuntimeMethod* method);
// System.String TMPro.TMP_LinkInfo::GetLinkID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_LinkInfo_GetLinkID_m97C3C9028EF1FA90BF6315BFDF42AAD3A7463B53 (TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * __this, const RuntimeMethod* method);
// System.String TMPro.TMP_LinkInfo::GetLinkText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_LinkInfo_GetLinkText_m7C78982CD398EBC8AF2303E0A665A76C26FE0352 (TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___linkID0, String_t* ___linkText1, int32_t ___linkIndex2, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725 (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, Il2CppChar ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A *, Il2CppChar, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_gshared)(__this, ___arg00, ___arg11, method);
}
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent TMPro.TMP_TextEventHandler::get_onSpriteSelection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::Invoke(!0,!1,!2)
inline void UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, String_t* ___arg00, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, String_t*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_3_Invoke_mF7B9410683321DBE61FC4F641DA39C99A7FA75FF_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// TMPro.TMP_TextEventHandler/LineSelectionEvent TMPro.TMP_TextEventHandler::get_onLineSelection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::Invoke(!0,!1,!2)
inline void UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64 (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 * __this, String_t* ___arg00, String_t* ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 *, String_t*, String_t*, int32_t, const RuntimeMethod*))UnityEvent_3_Invoke_m491E2207B7E6F885A7C0B12846108363E8D9BCC4_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void TMPro.TMP_TextEventHandler/CharacterSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85 (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/SpriteSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052 (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/WordSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/LineSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2 (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextEventHandler/LinkSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445 (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A *, const RuntimeMethod*))UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713 (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, const RuntimeMethod*))UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 *, const RuntimeMethod*))UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared)(__this, method);
}
// System.Void UIController/ButtonClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClick_Invoke_m725FD8ABF49AA1313007E2BDDA2D66859BC9D62F (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m038CD9CF36C48D04C92AFCF15AB001789AD699D4 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_inertiaTensorRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_inertiaTensorRotation_m310EB017C472948584A3DE27B41264EC7E606BE5 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * __this, String_t* ___pattern0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m2888DA5BDF68B1BC23E983469157783F390D7BC8 (String_t* ___url0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void playerMiniGame::SetCountText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___force0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* ___sceneName0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.WarpTextExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Awake_m9643904751E2DF0A7DF536847AEA1A2B0774DD20 (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WarpTextExample_Awake_m9643904751E2DF0A7DF536847AEA1A2B0774DD20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_1 = GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE(L_0, /*hidden argument*/GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE_RuntimeMethod_var);
		__this->set_m_TextComponent_4(L_1);
		// }
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Start_mDF931C271901519BF21FD356F706FA8CDE236406 (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(WarpText());
		RuntimeObject* L_0 = WarpTextExample_WarpText_mAAAB1687869E0121C858C65BDB2D294D55CFB67A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038 (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimationCurve newCurve = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_0, /*hidden argument*/NULL);
		// newCurve.keys = curve.keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = L_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = ___curve0;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_2, /*hidden argument*/NULL);
		AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096(L_1, L_3, /*hidden argument*/NULL);
		// return newCurve;
		return L_1;
	}
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mAAAB1687869E0121C858C65BDB2D294D55CFB67A (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WarpTextExample_WarpText_mAAAB1687869E0121C858C65BDB2D294D55CFB67A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * L_0 = (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E *)il2cpp_codegen_object_new(U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E_il2cpp_TypeInfo_var);
		U3CWarpTextU3Ed__8__ctor_m63F411BEA2E513D84AAA701A1EDF0D0322FDE9C4(L_0, 0, /*hidden argument*/NULL);
		U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.WarpTextExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample__ctor_mC3EAA1AE81FB3DA4B25F20E557EC6627A06DCB31 (WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WarpTextExample__ctor_mC3EAA1AE81FB3DA4B25F20E557EC6627A06DCB31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve VertexCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.25f, 2.0f), new Keyframe(0.5f, 0), new Keyframe(0.75f, 2.0f), new Keyframe(1, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_0 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_1 = L_0;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_4), (0.25f), (2.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_6), (0.5f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_7 = L_5;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_8), (0.75f), (2.0f), /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_8);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_9 = L_7;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_m0EA9CF8E65F32EE7603302E2CC670C56DC177C13((&L_10), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_10);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_11, L_9, /*hidden argument*/NULL);
		__this->set_VertexCurve_5(L_11);
		// public float AngleMultiplier = 1.0f;
		__this->set_AngleMultiplier_6((1.0f));
		// public float SpeedMultiplier = 1.0f;
		__this->set_SpeedMultiplier_7((1.0f));
		// public float CurveScale = 1.0f;
		__this->set_CurveScale_8((1.0f));
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
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m63F411BEA2E513D84AAA701A1EDF0D0322FDE9C4 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m3D9631AF92186316351AFF095E5176423B84E25F (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample_<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_m24ED53830B643858F6068C6908E7C0E044C671A4 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWarpTextU3Ed__8_MoveNext_m24ED53830B643858F6068C6908E7C0E044C671A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * V_1 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0471;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_3 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = L_3->get_VertexCurve_5();
		AnimationCurve_set_preWrapMode_mFE146DFCE1E335655A079DCE6E8F046BD63A6489(L_4, 1, /*hidden argument*/NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_5 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = L_5->get_VertexCurve_5();
		AnimationCurve_set_postWrapMode_mF11FF01671DFC6E54D29111561B8C7104DCEB413(L_6, 1, /*hidden argument*/NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_7 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_8 = L_7->get_m_TextComponent_4();
		TMP_Text_set_havePropertiesChanged_mF3E582A3C6D9DD5451E9373922E2F105464A46D3(L_8, (bool)1, /*hidden argument*/NULL);
		// CurveScale *= 10;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_9 = V_1;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_10 = V_1;
		float L_11 = L_10->get_CurveScale_8();
		L_9->set_CurveScale_8(((float)il2cpp_codegen_multiply((float)L_11, (float)(10.0f))));
		// float old_CurveScale = CurveScale;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_12 = V_1;
		float L_13 = L_12->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_13);
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_14 = V_1;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_15 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = L_15->get_VertexCurve_5();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_17 = WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_17);
	}

IL_007d:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_18 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_19 = L_18->get_m_TextComponent_4();
		bool L_20 = TMP_Text_get_havePropertiesChanged_m82201A5AA12D07730AEC216421E5AC4FB2796481_inline(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		float L_21 = __this->get_U3Cold_CurveScaleU3E5__2_3();
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_22 = V_1;
		float L_23 = L_22->get_CurveScale_8();
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00df;
		}
	}
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_24 = __this->get_U3Cold_curveU3E5__3_4();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_25 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_24, /*hidden argument*/NULL);
		float L_26 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_27 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_28 = L_27->get_VertexCurve_5();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_29 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_28, /*hidden argument*/NULL);
		float L_30 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		if ((!(((float)L_26) == ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_007d;
	}

IL_00df:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_31 = V_1;
		float L_32 = L_31->get_CurveScale_8();
		__this->set_U3Cold_CurveScaleU3E5__2_3(L_32);
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_33 = V_1;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_34 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_35 = L_34->get_VertexCurve_5();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_36 = WarpTextExample_CopyAnimationCurve_m2C738EA265E2B35868110EE1D8FCBD4F1D61C038(L_33, L_35, /*hidden argument*/NULL);
		__this->set_U3Cold_curveU3E5__3_4(L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_37 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_38 = L_37->get_m_TextComponent_4();
		VirtActionInvoker0::Invoke(99 /* System.Void TMPro.TMP_Text::ForceMeshUpdate() */, L_38);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_39 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_40 = L_39->get_m_TextComponent_4();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_41 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_42 = V_4;
		int32_t L_43 = L_42->get_characterCount_3();
		V_5 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = V_5;
		if (!L_44)
		{
			goto IL_007d;
		}
	}
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_45 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_46 = L_45->get_m_TextComponent_4();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_47 = TMP_Text_get_bounds_m7E7F2C8D0DD7CC68CE034CF5423F996D69CBEFE7(L_46, /*hidden argument*/NULL);
		V_8 = L_47;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Bounds_get_min_m2D48F74D29BF904D1AF19C562932E34ACAE2467C((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_8), /*hidden argument*/NULL);
		float L_49 = L_48.get_x_2();
		V_6 = L_49;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_50 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_51 = L_50->get_m_TextComponent_4();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_52 = TMP_Text_get_bounds_m7E7F2C8D0DD7CC68CE034CF5423F996D69CBEFE7(L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Bounds_get_max_mC3BE43C2A865BAC138D117684BC01E289892549B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_8), /*hidden argument*/NULL);
		float L_54 = L_53.get_x_2();
		V_7 = L_54;
		// for (int i = 0; i < characterCount; i++)
		V_9 = 0;
		goto IL_0444;
	}

IL_0163:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_55 = V_4;
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_56 = L_55->get_characterInfo_11();
		int32_t L_57 = V_9;
		bool L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->get_isVisible_35();
		if (!L_58)
		{
			goto IL_043e;
		}
	}
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_59 = V_4;
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_60 = L_59->get_characterInfo_11();
		int32_t L_61 = V_9;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->get_vertexIndex_14();
		V_10 = L_62;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_63 = V_4;
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_64 = L_63->get_characterInfo_11();
		int32_t L_65 = V_9;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->get_materialReferenceIndex_9();
		V_11 = L_66;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_67 = V_4;
		TMP_MeshInfoU5BU5D_t7F7564862ADABD75DAD9B09FF274591F807FFDE9* L_68 = L_67->get_meshInfo_16();
		int32_t L_69 = V_11;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->get_vertices_6();
		V_2 = L_70;
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_71 = V_2;
		int32_t L_72 = V_10;
		float L_73 = ((L_71)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_72)))->get_x_2();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_74 = V_2;
		int32_t L_75 = V_10;
		float L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2)))))->get_x_2();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_77 = V_4;
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_78 = L_77->get_characterInfo_11();
		int32_t L_79 = V_9;
		float L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->get_baseLine_25();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_81), ((float)((float)((float)il2cpp_codegen_add((float)L_73, (float)L_76))/(float)(2.0f))), L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_81, /*hidden argument*/NULL);
		V_12 = L_82;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_83 = V_2;
		int32_t L_84 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_85 = ((L_83)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_84)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_85);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_87, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_86, L_88, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_85 = L_89;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_90 = V_2;
		int32_t L_91 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_92 = ((L_90)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_92);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_94, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_93, L_95, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_92 = L_96;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_97 = V_2;
		int32_t L_98 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_99 = ((L_97)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)2)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_99);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_101 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_102 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_101, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_100, L_102, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_99 = L_103;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_104 = V_2;
		int32_t L_105 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_106 = ((L_104)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)3)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_106);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_108, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_107, L_109, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_106 = L_110;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = V_12;
		float L_112 = L_111.get_x_2();
		float L_113 = V_6;
		float L_114 = V_7;
		float L_115 = V_6;
		V_13 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_112, (float)L_113))/(float)((float)il2cpp_codegen_subtract((float)L_114, (float)L_115))));
		// float x1 = x0 + 0.0001f;
		float L_116 = V_13;
		V_14 = ((float)il2cpp_codegen_add((float)L_116, (float)(0.0001f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_117 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_118 = L_117->get_VertexCurve_5();
		float L_119 = V_13;
		float L_120 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_118, L_119, /*hidden argument*/NULL);
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_121 = V_1;
		float L_122 = L_121->get_CurveScale_8();
		V_15 = ((float)il2cpp_codegen_multiply((float)L_120, (float)L_122));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_123 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_124 = L_123->get_VertexCurve_5();
		float L_125 = V_14;
		float L_126 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_124, L_125, /*hidden argument*/NULL);
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_127 = V_1;
		float L_128 = L_127->get_CurveScale_8();
		V_16 = ((float)il2cpp_codegen_multiply((float)L_126, (float)L_128));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_129), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_130 = V_14;
		float L_131 = V_7;
		float L_132 = V_6;
		float L_133 = V_6;
		float L_134 = V_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m6AD8F21FFCC7723C6F507CCF2E4E2EFFC4871584((&L_135), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_130, (float)((float)il2cpp_codegen_subtract((float)L_131, (float)L_132)))), (float)L_133)), L_134, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_136 = V_12;
		float L_137 = L_136.get_x_2();
		float L_138 = V_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m6AD8F21FFCC7723C6F507CCF2E4E2EFFC4871584((&L_139), L_137, L_138, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_140 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_135, L_139, /*hidden argument*/NULL);
		V_17 = L_140;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_141 = L_129;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_17), /*hidden argument*/NULL);
		float L_143 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_144 = acosf(L_143);
		V_18 = ((float)il2cpp_codegen_multiply((float)L_144, (float)(57.29578f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = V_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_146 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_141, L_145, /*hidden argument*/NULL);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		float L_147 = L_146.get_z_4();
		if ((((float)L_147) > ((float)(0.0f))))
		{
			goto IL_0337;
		}
	}
	{
		float L_148 = V_18;
		G_B14_0 = ((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_148));
		goto IL_0339;
	}

IL_0337:
	{
		float L_149 = V_18;
		G_B14_0 = L_149;
	}

IL_0339:
	{
		V_19 = G_B14_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_150 = V_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_151), (0.0f), L_150, (0.0f), /*hidden argument*/NULL);
		float L_152 = V_19;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_153 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_152, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_154 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_155 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_151, L_153, L_154, /*hidden argument*/NULL);
		V_3 = L_155;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_156 = V_2;
		int32_t L_157 = V_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_158 = V_2;
		int32_t L_159 = V_10;
		int32_t L_160 = L_159;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_161 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_162 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_161, /*hidden argument*/NULL);
		(L_156)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_162);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_163 = V_2;
		int32_t L_164 = V_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_165 = V_2;
		int32_t L_166 = V_10;
		int32_t L_167 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_168 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_168, /*hidden argument*/NULL);
		(L_163)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1))), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_169);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_170 = V_2;
		int32_t L_171 = V_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_172 = V_2;
		int32_t L_173 = V_10;
		int32_t L_174 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)2));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_175 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_176 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_175, /*hidden argument*/NULL);
		(L_170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)2))), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_176);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_177 = V_2;
		int32_t L_178 = V_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_179 = V_2;
		int32_t L_180 = V_10;
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)3));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_182 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_3), L_182, /*hidden argument*/NULL);
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)3))), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_183);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_184 = V_2;
		int32_t L_185 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_186 = ((L_184)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_185)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_187 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_186);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_187, L_188, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_186 = L_189;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_190 = V_2;
		int32_t L_191 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_192 = ((L_190)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)1)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_193 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_192);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_195 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_193, L_194, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_192 = L_195;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_196 = V_2;
		int32_t L_197 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_198 = ((L_196)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)2)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_199 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_198);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_200 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_201 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_199, L_200, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_198 = L_201;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_202 = V_2;
		int32_t L_203 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_204 = ((L_202)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)3)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_204);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_207 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_205, L_206, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_204 = L_207;
	}

IL_043e:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_208 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
	}

IL_0444:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_209 = V_9;
		int32_t L_210 = V_5;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0163;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_t918FAC4E8BDAF99FAE70218E452EB4EF81A1C9F2 * L_211 = V_1;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_212 = L_211->get_m_TextComponent_4();
		VirtActionInvoker0::Invoke(103 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_212);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_213 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_213, (0.025f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_213);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0471:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_007d;
	}
}
// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m07B1ABC445F7EADD1DB5F513857F1607C97AAC12 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4C7C46CC80C502CC1AD61D2F9DAF34F09226AF06 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4C7C46CC80C502CC1AD61D2F9DAF34F09226AF06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m4C7C46CC80C502CC1AD61D2F9DAF34F09226AF06_RuntimeMethod_var);
	}
}
// System.Object TMPro.Examples.WarpTextExample_<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m86693688EEF5E754D44B448E82D87FAB40D6C8B8 (U3CWarpTextU3Ed__8_tEC7B100730D2F4BADC96A028864D57BFF1326D7E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Char TMPro.TMP_DigitValidator::Validate(System.String&,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TMP_DigitValidator_Validate_mD139A23C440A026E47FA8E3AD01AD6FEF7713C3D (TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5 * __this, String_t** ___text0, int32_t* ___pos1, Il2CppChar ___ch2, const RuntimeMethod* method)
{
	{
		// if (ch >= '0' && ch <= '9')
		Il2CppChar L_0 = ___ch2;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar L_1 = ___ch2;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0012;
		}
	}
	{
		// pos += 1;
		int32_t* L_2 = ___pos1;
		int32_t* L_3 = ___pos1;
		int32_t L_4 = *((int32_t*)L_3);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// return ch;
		Il2CppChar L_5 = ___ch2;
		return L_5;
	}

IL_0012:
	{
		// return (char)0;
		return 0;
	}
}
// System.Void TMPro.TMP_DigitValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_DigitValidator__ctor_mF6477F5EB75EC15CD6B81ACD85271F854BABC5D6 (TMP_DigitValidator_tD53B3EF123D04F923055895ED56555317D239AB5 * __this, const RuntimeMethod* method)
{
	{
		TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D(__this, /*hidden argument*/NULL);
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
// System.Char TMPro.TMP_PhoneNumberValidator::Validate(System.String&,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F (TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2 * __this, String_t** ___text0, int32_t* ___pos1, Il2CppChar ___ch2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_PhoneNumberValidator_Validate_mCA5EA200223A9F224F2F4DBD306DAE038C71A35F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("Trying to validate...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral75593744E3F137A0C620299F6F16A30F686FA876, /*hidden argument*/NULL);
		// if (ch < '0' && ch > '9') return (char)0;
		Il2CppChar L_0 = ___ch2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)48))))
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar L_1 = ___ch2;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0016;
		}
	}
	{
		// if (ch < '0' && ch > '9') return (char)0;
		return 0;
	}

IL_0016:
	{
		// int length = text.Length;
		String_t** L_2 = ___text0;
		String_t* L_3 = *((String_t**)L_2);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int i = 0; i < length + 1; i++)
		V_1 = 0;
		goto IL_0205;
	}

IL_0025:
	{
		// switch (i)
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0068;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_00a3;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e0;
			}
			case 5:
			{
				goto IL_0101;
			}
			case 6:
			{
				goto IL_0122;
			}
			case 7:
			{
				goto IL_013e;
			}
			case 8:
			{
				goto IL_015a;
			}
			case 9:
			{
				goto IL_017c;
			}
			case 10:
			{
				goto IL_019b;
			}
			case 11:
			{
				goto IL_01b5;
			}
			case 12:
			{
				goto IL_01cf;
			}
			case 13:
			{
				goto IL_01e9;
			}
		}
	}
	{
		goto IL_0201;
	}

IL_0068:
	{
		// if (i == length)
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_007f;
		}
	}
	{
		// text = "(" + ch;
		String_t** L_8 = ___text0;
		String_t* L_9 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40, L_9, /*hidden argument*/NULL);
		*((RuntimeObject **)L_8) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)L_10);
	}

IL_007f:
	{
		// pos = 2;
		int32_t* L_11 = ___pos1;
		*((int32_t*)L_11) = (int32_t)2;
		// break;
		goto IL_0201;
	}

IL_0087:
	{
		// if (i == length)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_009b;
		}
	}
	{
		// text += ch;
		String_t** L_14 = ___text0;
		String_t** L_15 = ___text0;
		String_t* L_16 = *((String_t**)L_15);
		String_t* L_17 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_16, L_17, /*hidden argument*/NULL);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_18);
	}

IL_009b:
	{
		// pos = 2;
		int32_t* L_19 = ___pos1;
		*((int32_t*)L_19) = (int32_t)2;
		// break;
		goto IL_0201;
	}

IL_00a3:
	{
		// if (i == length)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00b7;
		}
	}
	{
		// text += ch;
		String_t** L_22 = ___text0;
		String_t** L_23 = ___text0;
		String_t* L_24 = *((String_t**)L_23);
		String_t* L_25 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_26 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_24, L_25, /*hidden argument*/NULL);
		*((RuntimeObject **)L_22) = (RuntimeObject *)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)L_26);
	}

IL_00b7:
	{
		// pos = 3;
		int32_t* L_27 = ___pos1;
		*((int32_t*)L_27) = (int32_t)3;
		// break;
		goto IL_0201;
	}

IL_00bf:
	{
		// if (i == length)
		int32_t L_28 = V_1;
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_00d8;
		}
	}
	{
		// text += ch + ") ";
		String_t** L_30 = ___text0;
		String_t** L_31 = ___text0;
		String_t* L_32 = *((String_t**)L_31);
		String_t* L_33 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_34 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_32, L_33, _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6, /*hidden argument*/NULL);
		*((RuntimeObject **)L_30) = (RuntimeObject *)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_30, (void*)(RuntimeObject *)L_34);
	}

IL_00d8:
	{
		// pos = 6;
		int32_t* L_35 = ___pos1;
		*((int32_t*)L_35) = (int32_t)6;
		// break;
		goto IL_0201;
	}

IL_00e0:
	{
		// if (i == length)
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f9;
		}
	}
	{
		// text += ") " + ch;
		String_t** L_38 = ___text0;
		String_t** L_39 = ___text0;
		String_t* L_40 = *((String_t**)L_39);
		String_t* L_41 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_42 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_40, _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6, L_41, /*hidden argument*/NULL);
		*((RuntimeObject **)L_38) = (RuntimeObject *)L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_38, (void*)(RuntimeObject *)L_42);
	}

IL_00f9:
	{
		// pos = 7;
		int32_t* L_43 = ___pos1;
		*((int32_t*)L_43) = (int32_t)7;
		// break;
		goto IL_0201;
	}

IL_0101:
	{
		// if (i == length)
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_011a;
		}
	}
	{
		// text += " " + ch;
		String_t** L_46 = ___text0;
		String_t** L_47 = ___text0;
		String_t* L_48 = *((String_t**)L_47);
		String_t* L_49 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_50 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_48, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_49, /*hidden argument*/NULL);
		*((RuntimeObject **)L_46) = (RuntimeObject *)L_50;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_46, (void*)(RuntimeObject *)L_50);
	}

IL_011a:
	{
		// pos = 7;
		int32_t* L_51 = ___pos1;
		*((int32_t*)L_51) = (int32_t)7;
		// break;
		goto IL_0201;
	}

IL_0122:
	{
		// if (i == length)
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_0136;
		}
	}
	{
		// text += ch;
		String_t** L_54 = ___text0;
		String_t** L_55 = ___text0;
		String_t* L_56 = *((String_t**)L_55);
		String_t* L_57 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_58 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_56, L_57, /*hidden argument*/NULL);
		*((RuntimeObject **)L_54) = (RuntimeObject *)L_58;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_54, (void*)(RuntimeObject *)L_58);
	}

IL_0136:
	{
		// pos = 7;
		int32_t* L_59 = ___pos1;
		*((int32_t*)L_59) = (int32_t)7;
		// break;
		goto IL_0201;
	}

IL_013e:
	{
		// if (i == length)
		int32_t L_60 = V_1;
		int32_t L_61 = V_0;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_61))))
		{
			goto IL_0152;
		}
	}
	{
		// text += ch;
		String_t** L_62 = ___text0;
		String_t** L_63 = ___text0;
		String_t* L_64 = *((String_t**)L_63);
		String_t* L_65 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_66 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_64, L_65, /*hidden argument*/NULL);
		*((RuntimeObject **)L_62) = (RuntimeObject *)L_66;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_62, (void*)(RuntimeObject *)L_66);
	}

IL_0152:
	{
		// pos = 8;
		int32_t* L_67 = ___pos1;
		*((int32_t*)L_67) = (int32_t)8;
		// break;
		goto IL_0201;
	}

IL_015a:
	{
		// if (i == length)
		int32_t L_68 = V_1;
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_68) == ((uint32_t)L_69))))
		{
			goto IL_0173;
		}
	}
	{
		// text += ch + "-";
		String_t** L_70 = ___text0;
		String_t** L_71 = ___text0;
		String_t* L_72 = *((String_t**)L_71);
		String_t* L_73 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_74 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_72, L_73, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9, /*hidden argument*/NULL);
		*((RuntimeObject **)L_70) = (RuntimeObject *)L_74;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_70, (void*)(RuntimeObject *)L_74);
	}

IL_0173:
	{
		// pos = 10;
		int32_t* L_75 = ___pos1;
		*((int32_t*)L_75) = (int32_t)((int32_t)10);
		// break;
		goto IL_0201;
	}

IL_017c:
	{
		// if (i == length)
		int32_t L_76 = V_1;
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0195;
		}
	}
	{
		// text += "-" + ch;
		String_t** L_78 = ___text0;
		String_t** L_79 = ___text0;
		String_t* L_80 = *((String_t**)L_79);
		String_t* L_81 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_82 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_80, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9, L_81, /*hidden argument*/NULL);
		*((RuntimeObject **)L_78) = (RuntimeObject *)L_82;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_78, (void*)(RuntimeObject *)L_82);
	}

IL_0195:
	{
		// pos = 11;
		int32_t* L_83 = ___pos1;
		*((int32_t*)L_83) = (int32_t)((int32_t)11);
		// break;
		goto IL_0201;
	}

IL_019b:
	{
		// if (i == length)
		int32_t L_84 = V_1;
		int32_t L_85 = V_0;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_01af;
		}
	}
	{
		// text += ch;
		String_t** L_86 = ___text0;
		String_t** L_87 = ___text0;
		String_t* L_88 = *((String_t**)L_87);
		String_t* L_89 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_90 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_88, L_89, /*hidden argument*/NULL);
		*((RuntimeObject **)L_86) = (RuntimeObject *)L_90;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_86, (void*)(RuntimeObject *)L_90);
	}

IL_01af:
	{
		// pos = 11;
		int32_t* L_91 = ___pos1;
		*((int32_t*)L_91) = (int32_t)((int32_t)11);
		// break;
		goto IL_0201;
	}

IL_01b5:
	{
		// if (i == length)
		int32_t L_92 = V_1;
		int32_t L_93 = V_0;
		if ((!(((uint32_t)L_92) == ((uint32_t)L_93))))
		{
			goto IL_01c9;
		}
	}
	{
		// text += ch;
		String_t** L_94 = ___text0;
		String_t** L_95 = ___text0;
		String_t* L_96 = *((String_t**)L_95);
		String_t* L_97 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_98 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_96, L_97, /*hidden argument*/NULL);
		*((RuntimeObject **)L_94) = (RuntimeObject *)L_98;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_94, (void*)(RuntimeObject *)L_98);
	}

IL_01c9:
	{
		// pos = 12;
		int32_t* L_99 = ___pos1;
		*((int32_t*)L_99) = (int32_t)((int32_t)12);
		// break;
		goto IL_0201;
	}

IL_01cf:
	{
		// if (i == length)
		int32_t L_100 = V_1;
		int32_t L_101 = V_0;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_101))))
		{
			goto IL_01e3;
		}
	}
	{
		// text += ch;
		String_t** L_102 = ___text0;
		String_t** L_103 = ___text0;
		String_t* L_104 = *((String_t**)L_103);
		String_t* L_105 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_106 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_104, L_105, /*hidden argument*/NULL);
		*((RuntimeObject **)L_102) = (RuntimeObject *)L_106;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_102, (void*)(RuntimeObject *)L_106);
	}

IL_01e3:
	{
		// pos = 13;
		int32_t* L_107 = ___pos1;
		*((int32_t*)L_107) = (int32_t)((int32_t)13);
		// break;
		goto IL_0201;
	}

IL_01e9:
	{
		// if (i == length)
		int32_t L_108 = V_1;
		int32_t L_109 = V_0;
		if ((!(((uint32_t)L_108) == ((uint32_t)L_109))))
		{
			goto IL_01fd;
		}
	}
	{
		// text += ch;
		String_t** L_110 = ___text0;
		String_t** L_111 = ___text0;
		String_t* L_112 = *((String_t**)L_111);
		String_t* L_113 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___ch2), /*hidden argument*/NULL);
		String_t* L_114 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_112, L_113, /*hidden argument*/NULL);
		*((RuntimeObject **)L_110) = (RuntimeObject *)L_114;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_110, (void*)(RuntimeObject *)L_114);
	}

IL_01fd:
	{
		// pos = 14;
		int32_t* L_115 = ___pos1;
		*((int32_t*)L_115) = (int32_t)((int32_t)14);
	}

IL_0201:
	{
		// for (int i = 0; i < length + 1; i++)
		int32_t L_116 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_0205:
	{
		// for (int i = 0; i < length + 1; i++)
		int32_t L_117 = V_1;
		int32_t L_118 = V_0;
		if ((((int32_t)L_117) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1)))))
		{
			goto IL_0025;
		}
	}
	{
		// return ch;
		Il2CppChar L_119 = ___ch2;
		return L_119;
	}
}
// System.Void TMPro.TMP_PhoneNumberValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_PhoneNumberValidator__ctor_mBB38130850945A40631821275F07C19720E0C55E (TMP_PhoneNumberValidator_t7EB41CFDB7C6AA586BF5AF04151FC2228F565BD2 * __this, const RuntimeMethod* method)
{
	{
		TMP_InputValidator__ctor_m86416C378A2B37E7F1D40C4DF3E49CF41F39E13D(__this, /*hidden argument*/NULL);
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
// TMPro.TMP_TextEventHandler_CharacterSelectionEvent TMPro.TMP_TextEventHandler::get_onCharacterSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnCharacterSelection; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = __this->get_m_OnCharacterSelection_4();
		return L_0;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onCharacterSelection(TMPro.TMP_TextEventHandler_CharacterSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onCharacterSelection_m237C99FE66E4E16518DAE68FF9CBF1A52E816AD2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnCharacterSelection = value; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = ___value0;
		__this->set_m_OnCharacterSelection_4(L_0);
		// set { m_OnCharacterSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_SpriteSelectionEvent TMPro.TMP_TextEventHandler::get_onSpriteSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnSpriteSelection; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = __this->get_m_OnSpriteSelection_5();
		return L_0;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onSpriteSelection(TMPro.TMP_TextEventHandler_SpriteSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onSpriteSelection_mAAE4B440E34EE5736D43D6A8A7D3A7CEE0503D69 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnSpriteSelection = value; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = ___value0;
		__this->set_m_OnSpriteSelection_5(L_0);
		// set { m_OnSpriteSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_WordSelectionEvent TMPro.TMP_TextEventHandler::get_onWordSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnWordSelection; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = __this->get_m_OnWordSelection_6();
		return L_0;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onWordSelection(TMPro.TMP_TextEventHandler_WordSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onWordSelection_m6062C0AF2FDD8752DC4A75663EE8E5C128504698 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnWordSelection = value; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = ___value0;
		__this->set_m_OnWordSelection_6(L_0);
		// set { m_OnWordSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_LineSelectionEvent TMPro.TMP_TextEventHandler::get_onLineSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnLineSelection; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = __this->get_m_OnLineSelection_7();
		return L_0;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onLineSelection(TMPro.TMP_TextEventHandler_LineSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onLineSelection_m1A8E37D2069EF684EF930D4F1ABE764AE17D9A62 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnLineSelection = value; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = ___value0;
		__this->set_m_OnLineSelection_7(L_0);
		// set { m_OnLineSelection = value; }
		return;
	}
}
// TMPro.TMP_TextEventHandler_LinkSelectionEvent TMPro.TMP_TextEventHandler::get_onLinkSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnLinkSelection; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = __this->get_m_OnLinkSelection_8();
		return L_0;
	}
}
// System.Void TMPro.TMP_TextEventHandler::set_onLinkSelection(TMPro.TMP_TextEventHandler_LinkSelectionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_set_onLinkSelection_m1376CC9B70177B0C25ACEDF91D5B94BC4B8CF71D (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OnLinkSelection = value; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = ___value0;
		__this->set_m_OnLinkSelection_8(L_0);
		// set { m_OnLinkSelection = value; }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_Awake_m9A353CC9705A9E824A60C3D2D026A7FD96B41D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_1 = GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE(L_0, /*hidden argument*/GameObject_GetComponent_TisTMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_mAE16231F6DB7467B8D9449A2E3E9AC5A821EC4AE_RuntimeMethod_var);
		__this->set_m_TextComponent_9(L_1);
		// if (m_TextComponent.GetType() == typeof(TextMeshProUGUI))
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_2 = __this->get_m_TextComponent_9();
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		bool L_6 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// m_Canvas = gameObject.GetComponentInParent<Canvas>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_8 = GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0(L_7, /*hidden argument*/GameObject_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m3F4A66E37DA71D5AF43D8A63F8C2D698003572F0_RuntimeMethod_var);
		__this->set_m_Canvas_11(L_8);
		// if (m_Canvas != null)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = __this->get_m_Canvas_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		// if (m_Canvas.renderMode == RenderMode.ScreenSpaceOverlay)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_11 = __this->get_m_Canvas_11();
		int32_t L_12 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0061;
		}
	}
	{
		// m_Camera = null;
		__this->set_m_Camera_10((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL);
		return;
	}

IL_0061:
	{
		// m_Camera = m_Canvas.worldCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_13 = __this->get_m_Canvas_11();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_13, /*hidden argument*/NULL);
		__this->set_m_Camera_10(L_14);
		// }
		return;
	}

IL_0073:
	{
		// m_Camera = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_15 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		__this->set_m_Camera_10(L_15);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_LateUpdate_m2F3241223A91F9C50E11B27F67BA2B6D19328B72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  V_6;
	memset((&V_6), 0, sizeof(V_6));
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (TMP_TextUtilities.IsIntersectingRectTransform(m_TextComponent.rectTransform, Input.mousePosition, m_Camera))
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_0 = __this->get_m_TextComponent_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = TMP_Text_get_rectTransform_m7D5ABF7B98E93576BDA8F7E1A2A7415284D4F05E(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		bool L_4 = TMP_TextUtilities_IsIntersectingRectTransform_m673D86304DB8BA8F23DB5668BB9B9B4BC103E4F1(L_1, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0239;
		}
	}
	{
		// int charIndex = TMP_TextUtilities.FindIntersectingCharacter(m_TextComponent, Input.mousePosition, m_Camera, true);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_5 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_8 = TMP_TextUtilities_FindIntersectingCharacter_mE3DF825E1B004FB99F0795C9175F4BEE95C4A152(L_5, L_6, L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (charIndex != -1 && charIndex != m_lastCharIndex)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_m_lastCharIndex_13();
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_00b8;
		}
	}
	{
		// m_lastCharIndex = charIndex;
		int32_t L_12 = V_0;
		__this->set_m_lastCharIndex_13(L_12);
		// TMP_TextElementType elementType = m_TextComponent.textInfo.characterInfo[charIndex].elementType;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_13 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_14 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_13, /*hidden argument*/NULL);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_15 = L_14->get_characterInfo_11();
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->get_elementType_3();
		V_4 = L_17;
		// if (elementType == TMP_TextElementType.Character)
		int32_t L_18 = V_4;
		if (L_18)
		{
			goto IL_0091;
		}
	}
	{
		// SendOnCharacterSelection(m_TextComponent.textInfo.characterInfo[charIndex].character, charIndex);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_19 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_20 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_19, /*hidden argument*/NULL);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_21 = L_20->get_characterInfo_11();
		int32_t L_22 = V_0;
		Il2CppChar L_23 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->get_character_0();
		int32_t L_24 = V_0;
		TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2(__this, L_23, L_24, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_0091:
	{
		// else if (elementType == TMP_TextElementType.Sprite)
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00b8;
		}
	}
	{
		// SendOnSpriteSelection(m_TextComponent.textInfo.characterInfo[charIndex].character, charIndex);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_26 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_27 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_26, /*hidden argument*/NULL);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_28 = L_27->get_characterInfo_11();
		int32_t L_29 = V_0;
		Il2CppChar L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->get_character_0();
		int32_t L_31 = V_0;
		TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6(__this, L_30, L_31, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// int wordIndex = TMP_TextUtilities.FindIntersectingWord(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_32 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_35 = TMP_TextUtilities_FindIntersectingWord_m3D600FFD979C6F4CA0E68E476274DC52792A6E27(L_32, L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// if (wordIndex != -1 && wordIndex != m_lastWordIndex)
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)(-1))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = __this->get_m_lastWordIndex_14();
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_0116;
		}
	}
	{
		// m_lastWordIndex = wordIndex;
		int32_t L_39 = V_1;
		__this->set_m_lastWordIndex_14(L_39);
		// TMP_WordInfo wInfo = m_TextComponent.textInfo.wordInfo[wordIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_40 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_41 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_40, /*hidden argument*/NULL);
		TMP_WordInfoU5BU5D_t2C9C805935A8C8FFD43BF92C96AC70737AA52F09* L_42 = L_41->get_wordInfo_12();
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_5 = L_45;
		// SendOnWordSelection(wInfo.GetWord(), wInfo.firstCharacterIndex, wInfo.characterCount);
		String_t* L_46 = TMP_WordInfo_GetWord_m45402062300ED4455F6C6F5E96E42C4904E18133((TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90 *)(&V_5), /*hidden argument*/NULL);
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_47 = V_5;
		int32_t L_48 = L_47.get_firstCharacterIndex_1();
		TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90  L_49 = V_5;
		int32_t L_50 = L_49.get_characterCount_3();
		TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E(__this, L_46, L_48, L_50, /*hidden argument*/NULL);
	}

IL_0116:
	{
		// int lineIndex = TMP_TextUtilities.FindIntersectingLine(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_51 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_53 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_54 = TMP_TextUtilities_FindIntersectingLine_m382D73F58E10E0252FE311C164264E8564F9AE73(L_51, L_52, L_53, /*hidden argument*/NULL);
		V_2 = L_54;
		// if (lineIndex != -1 && lineIndex != m_lastLineIndex)
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_m_lastLineIndex_15();
		if ((((int32_t)L_56) == ((int32_t)L_57)))
		{
			goto IL_01e1;
		}
	}
	{
		// m_lastLineIndex = lineIndex;
		int32_t L_58 = V_2;
		__this->set_m_lastLineIndex_15(L_58);
		// TMP_LineInfo lineInfo = m_TextComponent.textInfo.lineInfo[lineIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_59 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_60 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_59, /*hidden argument*/NULL);
		TMP_LineInfoU5BU5D_t3D5D11E746B537C3951927E490B7A1BAB9C23A5C* L_61 = L_60->get_lineInfo_14();
		int32_t L_62 = V_2;
		int32_t L_63 = L_62;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_64 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		V_6 = L_64;
		// char[] buffer = new char[lineInfo.characterCount];
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_65 = V_6;
		int32_t L_66 = L_65.get_characterCount_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_67 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_7 = L_67;
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		V_9 = 0;
		goto IL_01a1;
	}

IL_0172:
	{
		// buffer[i] = m_TextComponent.textInfo.characterInfo[i + lineInfo.firstCharacterIndex].character;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_68 = V_7;
		int32_t L_69 = V_9;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_70 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_71 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_70, /*hidden argument*/NULL);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_72 = L_71->get_characterInfo_11();
		int32_t L_73 = V_9;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_74 = V_6;
		int32_t L_75 = L_74.get_firstCharacterIndex_5();
		Il2CppChar L_76 = ((L_72)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_75)))))->get_character_0();
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69), (Il2CppChar)L_76);
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_01a1:
	{
		// for (int i = 0; i < lineInfo.characterCount && i < m_TextComponent.textInfo.characterInfo.Length; i++)
		int32_t L_78 = V_9;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_79 = V_6;
		int32_t L_80 = L_79.get_characterCount_1();
		if ((((int32_t)L_78) >= ((int32_t)L_80)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_81 = V_9;
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_82 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_83 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_82, /*hidden argument*/NULL);
		TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* L_84 = L_83->get_characterInfo_11();
		if ((((int32_t)L_81) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))))
		{
			goto IL_0172;
		}
	}

IL_01c2:
	{
		// string lineText = new string(buffer);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_85 = V_7;
		String_t* L_86 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_85, /*hidden argument*/NULL);
		V_8 = L_86;
		// SendOnLineSelection(lineText, lineInfo.firstCharacterIndex, lineInfo.characterCount);
		String_t* L_87 = V_8;
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_88 = V_6;
		int32_t L_89 = L_88.get_firstCharacterIndex_5();
		TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  L_90 = V_6;
		int32_t L_91 = L_90.get_characterCount_1();
		TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1(__this, L_87, L_89, L_91, /*hidden argument*/NULL);
	}

IL_01e1:
	{
		// int linkIndex = TMP_TextUtilities.FindIntersectingLink(m_TextComponent, Input.mousePosition, m_Camera);
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_92 = __this->get_m_TextComponent_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_94 = __this->get_m_Camera_10();
		IL2CPP_RUNTIME_CLASS_INIT(TMP_TextUtilities_t0C64120E363A3DA0CB859D321248294080076A45_il2cpp_TypeInfo_var);
		int32_t L_95 = TMP_TextUtilities_FindIntersectingLink_mC8275AA5E208929B1DB6170DEA09CA8D82F47020(L_92, L_93, L_94, /*hidden argument*/NULL);
		V_3 = L_95;
		// if (linkIndex != -1 && linkIndex != m_selectedLink)
		int32_t L_96 = V_3;
		if ((((int32_t)L_96) == ((int32_t)(-1))))
		{
			goto IL_0239;
		}
	}
	{
		int32_t L_97 = V_3;
		int32_t L_98 = __this->get_m_selectedLink_12();
		if ((((int32_t)L_97) == ((int32_t)L_98)))
		{
			goto IL_0239;
		}
	}
	{
		// m_selectedLink = linkIndex;
		int32_t L_99 = V_3;
		__this->set_m_selectedLink_12(L_99);
		// TMP_LinkInfo linkInfo = m_TextComponent.textInfo.linkInfo[linkIndex];
		TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * L_100 = __this->get_m_TextComponent_9();
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_101 = TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline(L_100, /*hidden argument*/NULL);
		TMP_LinkInfoU5BU5D_t5965804162EB43CD70F792B74DA179B32224BB0D* L_102 = L_101->get_linkInfo_13();
		int32_t L_103 = V_3;
		int32_t L_104 = L_103;
		TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468  L_105 = (L_102)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		V_10 = L_105;
		// SendOnLinkSelection(linkInfo.GetLinkID(), linkInfo.GetLinkText(), linkIndex);
		String_t* L_106 = TMP_LinkInfo_GetLinkID_m97C3C9028EF1FA90BF6315BFDF42AAD3A7463B53((TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 *)(&V_10), /*hidden argument*/NULL);
		String_t* L_107 = TMP_LinkInfo_GetLinkText_m7C78982CD398EBC8AF2303E0A665A76C26FE0352((TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468 *)(&V_10), /*hidden argument*/NULL);
		int32_t L_108 = V_3;
		TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0(__this, L_106, L_107, L_108, /*hidden argument*/NULL);
	}

IL_0239:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_OnPointerEnter_m1827A9D3F08839023DE71352202FE5F744E150EF (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_OnPointerExit_m788B93D2C3B54BCF09475675B274BCB047D449FB (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnCharacterSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnCharacterSelection_mBC44C107A6FB8C43F7C6629D4A15CA85471A28B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onCharacterSelection != null)
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// onCharacterSelection.Invoke(character, characterIndex);
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_1 = TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF_inline(__this, /*hidden argument*/NULL);
		Il2CppChar L_2 = ___character0;
		int32_t L_3 = ___characterIndex1;
		UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725(L_1, L_2, L_3, /*hidden argument*/UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnSpriteSelection(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, Il2CppChar ___character0, int32_t ___characterIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnSpriteSelection_mEF24BCE06B0CE4450B6AE9561EC4B5052DAF00F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onSpriteSelection != null)
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// onSpriteSelection.Invoke(character, characterIndex);
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_1 = TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4_inline(__this, /*hidden argument*/NULL);
		Il2CppChar L_2 = ___character0;
		int32_t L_3 = ___characterIndex1;
		UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725(L_1, L_2, L_3, /*hidden argument*/UnityEvent_2_Invoke_m0AD2FBFAB78497BA355C8631731B5E002580F725_RuntimeMethod_var);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnWordSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___word0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnWordSelection_m7C4D266070EE2ADC66BCCFD50EB74FEB4923B77E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onWordSelection != null)
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// onWordSelection.Invoke(word, charIndex, length);
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_1 = TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___word0;
		int32_t L_3 = ___charIndex1;
		int32_t L_4 = ___length2;
		UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD(L_1, L_2, L_3, L_4, /*hidden argument*/UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnLineSelection(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___line0, int32_t ___charIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnLineSelection_mAAF4AF44929D0C9FD73C89E5266028908074AEB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onLineSelection != null)
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// onLineSelection.Invoke(line, charIndex, length);
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_1 = TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___line0;
		int32_t L_3 = ___charIndex1;
		int32_t L_4 = ___length2;
		UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD(L_1, L_2, L_3, L_4, /*hidden argument*/UnityEvent_3_Invoke_m907D837057531F0AF1AC6E6501DFD9D3549A44AD_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::SendOnLinkSelection(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0 (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, String_t* ___linkID0, String_t* ___linkText1, int32_t ___linkIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler_SendOnLinkSelection_m082D12F7D044456D8514E4D31944C6900F8262C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onLinkSelection != null)
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// onLinkSelection.Invoke(linkID, linkText, linkIndex);
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_1 = TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___linkID0;
		String_t* L_3 = ___linkText1;
		int32_t L_4 = ___linkIndex2;
		UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64(L_1, L_2, L_3, L_4, /*hidden argument*/UnityEvent_3_Invoke_m1353B454D2DBB8CD54B5380146A4BEE4A0888F64_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void TMPro.TMP_TextEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TMP_TextEventHandler__ctor_mEA56AE9489B50CF5E5FC682AA18D1CE9AF8E1F8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CharacterSelectionEvent m_OnCharacterSelection = new CharacterSelectionEvent();
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 *)il2cpp_codegen_object_new(CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90_il2cpp_TypeInfo_var);
		CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85(L_0, /*hidden argument*/NULL);
		__this->set_m_OnCharacterSelection_4(L_0);
		// private SpriteSelectionEvent m_OnSpriteSelection = new SpriteSelectionEvent();
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_1 = (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 *)il2cpp_codegen_object_new(SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32_il2cpp_TypeInfo_var);
		SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052(L_1, /*hidden argument*/NULL);
		__this->set_m_OnSpriteSelection_5(L_1);
		// private WordSelectionEvent m_OnWordSelection = new WordSelectionEvent();
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_2 = (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 *)il2cpp_codegen_object_new(WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554_il2cpp_TypeInfo_var);
		WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA(L_2, /*hidden argument*/NULL);
		__this->set_m_OnWordSelection_6(L_2);
		// private LineSelectionEvent m_OnLineSelection = new LineSelectionEvent();
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_3 = (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F *)il2cpp_codegen_object_new(LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_il2cpp_TypeInfo_var);
		LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2(L_3, /*hidden argument*/NULL);
		__this->set_m_OnLineSelection_7(L_3);
		// private LinkSelectionEvent m_OnLinkSelection = new LinkSelectionEvent();
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_4 = (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 *)il2cpp_codegen_object_new(LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8_il2cpp_TypeInfo_var);
		LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A(L_4, /*hidden argument*/NULL);
		__this->set_m_OnLinkSelection_8(L_4);
		// private int m_selectedLink = -1;
		__this->set_m_selectedLink_12((-1));
		// private int m_lastCharIndex = -1;
		__this->set_m_lastCharIndex_13((-1));
		// private int m_lastWordIndex = -1;
		__this->set_m_lastWordIndex_14((-1));
		// private int m_lastLineIndex = -1;
		__this->set_m_lastLineIndex_15((-1));
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
// System.Void TMPro.TMP_TextEventHandler_CharacterSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85 (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_LineSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2 (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_LinkSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E(__this, /*hidden argument*/UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_SpriteSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052 (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
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
// System.Void TMPro.TMP_TextEventHandler_WordSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
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
// System.Void UIController::ButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ButtonClicked_m974A66CCE168FB66E3C4198FC8DD468242A6227C (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, const RuntimeMethod* method)
{
	{
		// if (OnButtonClicked != null) OnButtonClicked();
		ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * L_0 = __this->get_OnButtonClicked_10();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnButtonClicked != null) OnButtonClicked();
		ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * L_1 = __this->get_OnButtonClicked_10();
		ButtonClick_Invoke_m725FD8ABF49AA1313007E2BDDA2D66859BC9D62F(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UIController::ShowButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ShowButton_m7416B509025C3C14EC297D8FB198BAE6D3ACAB61 (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// buttonText.text = text;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_buttonText_9();
		String_t* L_1 = ___text0;
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_1, /*hidden argument*/NULL);
		// button.gameObject.SetActive(true);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = __this->get_button_8();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::HideButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_HideButton_mF02394E063E661BC2AB4D723AC456322DECDA910 (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, const RuntimeMethod* method)
{
	{
		// button.gameObject.SetActive(false);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_button_8();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ShowBanner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ShowBanner_m7E60ECFEDCC5EB79743D593CBF35A5123C36A2B8 (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// bannerText.text = text;
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_bannerText_7();
		String_t* L_1 = ___text0;
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_1, /*hidden argument*/NULL);
		// bannerText.gameObject.SetActive(true);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_bannerText_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_HideBanner_mC52F597C94821DCA080BFB3A726A851F4B9B0E8E (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, const RuntimeMethod* method)
{
	{
		// bannerText.gameObject.SetActive(false);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_bannerText_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::SetTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTimer_mCD4E6900AE1D81F76D09936BAA7E91E34D95FE7F (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, float ___timeRemaining0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIController_SetTimer_mCD4E6900AE1D81F76D09936BAA7E91E34D95FE7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeRemaining > 0f)
		float L_0 = ___timeRemaining0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// timerText.text = timeRemaining.ToString("00");
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_timerText_6();
		String_t* L_2 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&___timeRemaining0), _stringLiteralFB96549631C835EB239CD614CC6B5CB7D295121A, /*hidden argument*/NULL);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		// timerText.text = "";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_timerText_6();
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::SetPlayerNectar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetPlayerNectar_m0A3A1779374A227A2B0BF5A1FD5A1FCB1F01C9E0 (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, float ___nectarAmount0, const RuntimeMethod* method)
{
	{
		// playerNectarBar.value = nectarAmount;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_playerNectarBar_4();
		float L_1 = ___nectarAmount0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::SetOpponentNectar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetOpponentNectar_mE58D7B59AB7DCFB2C031B45BF7C53D14BEE79E9E (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, float ___nectarAmount0, const RuntimeMethod* method)
{
	{
		// opponentNectarBar.value = nectarAmount;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_opponentNectarBar_5();
		float L_1 = ___nectarAmount0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m2957FB6041970C1305D4DED3E11D4D800E932486 (UIController_t06FB25185FB9B776EF16705D93C83EE95CE1D1EE * __this, const RuntimeMethod* method)
{
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UIController_ButtonClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClick__ctor_m6847AE700AE1D9F0CB152E668969E78492674BF6 (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UIController_ButtonClick::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClick_Invoke_m725FD8ABF49AA1313007E2BDDA2D66859BC9D62F (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UIController_ButtonClick::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonClick_BeginInvoke_m464F53AAFCB0FE965DC4A2709E842481F4A1FC3C (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UIController_ButtonClick::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClick_EndInvoke_m3910A33E20FA227564EB6AF6FD3F0BA0A0E8EF8D (ButtonClick_tC6A2EB28BF975AB627CB7ABB74526887DBCC10EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mE3D6E47455F101F2DEEBC2A58D09A97CF38E80B8 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47 (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		return L_24;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_mBCD24408A4A2C4053F2F98DB808BD6DE88CA998F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * G_B10_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (Input.GetMouseButton(1))
		bool L_4 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		bool L_7 = __this->get_invertY_10();
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_005f;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0060:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_mouseSensitivityCurve_8();
		float L_9 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		float L_10 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_12 = L_11;
		float L_13 = L_12->get_yaw_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_3;
		float L_15 = L_14.get_x_0();
		float L_16 = V_4;
		L_12->set_yaw_0(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_17 = __this->get_m_TargetCameraState_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_18 = L_17;
		float L_19 = L_18->get_pitch_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22 = V_4;
		L_18->set_pitch_1(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
	}

IL_00b1:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SimpleCameraController_GetInputTranslationDirection_m73C99DB69CEB467834BBA00A62415D1CEEF0CB47(__this, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_26 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_27, (10.0f), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_00da:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_29 = __this->get_boost_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Input_get_mouseScrollDelta_m66F785090C429CE7DCDEF09C92CDBDD08FCDE98D(/*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(0.2f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// m_TargetCameraState.Translate(translation);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_36 = __this->get_m_TargetCameraState_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_0;
		CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247(L_36, L_37, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_38 = logf((0.00999999f));
		float L_39 = __this->get_positionLerpTime_7();
		float L_40 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_41 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_41));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999f));
		float L_43 = __this->get_rotationLerpTime_9();
		float L_44 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_46 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_47 = __this->get_m_TargetCameraState_4();
		float L_48 = V_1;
		float L_49 = V_2;
		CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_50 = __this->get_m_InterpolatingCameraState_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E (SimpleCameraController_t362F9BE95366F2B6BF1D5369EA29E331DDFDCC42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_m8DE12FC1A6C31D2D60ED78F0B574CE3F864F546E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_0 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 *)il2cpp_codegen_object_new(CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7_il2cpp_TypeInfo_var);
		CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.2f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_3 = L_2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = L_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m10FFFE5FE1213C3AE88359375398F213B24F18D5((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_6);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mE9462D171C06A2A746B9DA1B0A6B0F4FC7DB94CF(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.01f));
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
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m6467352ED87301E5F4A76456060A765CAB96AF3E (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_m76BCC104A48EA7F125D5A50D874A2DEEA7967247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___translation0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_m883AAF2D3C7F5045B64CAF655FB84EF0FC98F282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_1 = ___target0;
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_6 = ___target0;
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_11 = ___target0;
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_16 = ___target0;
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_21 = ___target0;
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * L_26 = ___target0;
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE3349362276789C1617C01276F7DE533BBA22623 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m4A83DF36C7D280050EA1B101E61B7E345C31A322 (CameraState_t67204999380EA316F8E1B6C902D4330646DE6AE7 * __this, const RuntimeMethod* method)
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
// System.Void camera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_Start_m22865970959C4F2865ECD1828AEB4EC189FEC283 (camera_t1D6599C99653739822B84023581F1D4A9008FB39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (camera_Start_m22865970959C4F2865ECD1828AEB4EC189FEC283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offset = transform.position - player.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		// }
		return;
	}
}
// System.Void camera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_LateUpdate_mAA2A9AE23412061599039FF4B3FB262CEA570E0A (camera_t1D6599C99653739822B84023581F1D4A9008FB39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (camera_LateUpdate_mAA2A9AE23412061599039FF4B3FB262CEA570E0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = player.transform.position + offset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera__ctor_mA8AD71605FCC052C1D33B8EBF59F10148A8AF334 (camera_t1D6599C99653739822B84023581F1D4A9008FB39 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void cameraControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControl_Start_mCEB5B292DADD725041FCAEEEADB81852E31F9AFA (cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraControl_Start_mCEB5B292DADD725041FCAEEEADB81852E31F9AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offset = transform.position - player.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		// }
		return;
	}
}
// System.Void cameraControl::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControl_LateUpdate_m00E81B7B268FEBBAE5A558C5270A99F0C749FA59 (cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraControl_LateUpdate_m00E81B7B268FEBBAE5A558C5270A99F0C749FA59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = player.transform.position + offset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControl__ctor_mC156BD4E40225F236EDACB9C35D377FCB9210EDD (cameraControl_t606D55925E89DE61F6D2C99E995AC0A87004B638 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void cameraControll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControll_Start_m4D932981AB40473F2C18B55DDB37E159C54E867D (cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraControll_Start_m4D932981AB40473F2C18B55DDB37E159C54E867D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offset = transform.position - player.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		// }
		return;
	}
}
// System.Void cameraControll::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControll_LateUpdate_mFB65BBB7C5AA88FE8516D21429DA02BF95566836 (cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraControll_LateUpdate_mFB65BBB7C5AA88FE8516D21429DA02BF95566836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = player.transform.position + offset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_offset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cameraControll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraControll__ctor_mA836650D7FDE6BEAD2DBA9EF34FBB4DD576F2476 (cameraControll_tF0D271B850A1AFFC8087FF9C8AC48F8ADD416A66 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void changescript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript_Start_mC0539CCD86ADBAF4A3FF4F9F23C74B513F052283 (changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void changescript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript_Update_m7DAB662491EB1CBF989AFC657075D7ED9F8C6D8C (changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 namePos = Camera.main.WorldToScreenPoint(this.transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// nametext.transform.position = namePos;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_nametext_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void changescript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript__ctor_mDBA4C5CD8EF66559EBDE7577AF329EC632B88391 (changescript_t3615A90F82D788CBA3118C351031D69F943E8BCE * __this, const RuntimeMethod* method)
{
	{
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
// System.Void changescript1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript1_Start_m0D05FC8E840C5303FBC0279AD547E0D795C06A01 (changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void changescript1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript1_Update_mEA09E2C4630D9A494C8125BD44180ADC3426DC13 (changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 namePos = Camera.main.WorldToScreenPoint(this.transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// nametext.transform.position = namePos;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_nametext_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void changescript1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changescript1__ctor_mE4A0851BF11E302EAA8D1FD7D7681155B1734B3D (changescript1_t4DB688E212B71BBB6AF1AF08FB7065B5BD1B4632 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void changngtext1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changngtext1_Update_mF3612A78F64002B4C6B5975ADC6C9DCDB3605A43 (changngtext1_t13FE706E863ABD4571350E9370EC8930AF17E40E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (changngtext1_Update_mF3612A78F64002B4C6B5975ADC6C9DCDB3605A43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Rotate(new Vector3(0, 0, 0) * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void changngtext1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changngtext1__ctor_m0DA670DD58862A4C500B48C668B68E6DB9C05C95 (changngtext1_t13FE706E863ABD4571350E9370EC8930AF17E40E * __this, const RuntimeMethod* method)
{
	{
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
// System.Void controltext::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext_Start_m62E3E2871860E6D0581B2B6A5B7942CC16E6D44E (controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void controltext::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext_Update_m4253DE0F81B860544C5867FF456F6E4EB4B9DC6E (controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < 6; i += 1)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// Vector3 namePos = Camera.main.WorldToScreenPoint(this.transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// text.transform.position = namePos;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_text_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_1;
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < 6; i += 1)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < 6; i += 1)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void controltext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext__ctor_mE5E18D1A4981D50CE80678C5271E16F886632582 (controltext_t5DBCC79DA8EFFB075F841EF11DEFF05508422B81 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void controltext1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext1_Start_mF46142BF031B3916D0132D056C5B1B2BA20F2207 (controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void controltext1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext1_Update_m0A8F0FF19613C7982CC0EA4A8A90D6F06BA31A6F (controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < 6; i += 1)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// Vector3 namePos = Camera.main.WorldToScreenPoint(this.transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// text.transform.position = namePos;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_text_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_1;
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < 6; i += 1)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < 6; i += 1)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void controltext1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controltext1__ctor_m4A2F41C2207A7EB8C669846A5079F0942E49F9F6 (controltext1_t067C81C3E31589D0A79CC662A997E8F66C652266 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void countDown1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void countDown1_Start_mCA4F5122871520D11764F3C253E87A64946BDAA7 (countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void countDown1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void countDown1_Update_m8670A4D41C543CBD374BB4E46656FEE07B76F917 (countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7 * __this, const RuntimeMethod* method)
{
	{
		// timerRemaining -= Time.deltaTime;//******************
		float L_0 = __this->get_timerRemaining_4();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timerRemaining_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void countDown1::onGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void countDown1_onGUI_mF616E2F7C6376AF62FBE853514827CED997B147F (countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (countDown1_onGUI_mF616E2F7C6376AF62FBE853514827CED997B147F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timerRemaining > 0) {
		float L_0 = __this->get_timerRemaining_4();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// GUI.Label (new Rect (0,35,100,100), "Time Remaining: " +(int) timerRemaining);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_1), (0.0f), (35.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		float L_2 = __this->get_timerRemaining_4();
		int32_t L_3 = (((int32_t)((int32_t)L_2)));
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral6CD382E627F72BA0087DAF657CB591F5BC1549A2, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE(L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0042:
	{
		// GUI.Label(new Rect(100,100,100,100), "Time up " );
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_6), (100.0f), (100.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE(L_6, _stringLiteral34461BFCC4043BD38BD8EF71B7B35A6660EB640F, /*hidden argument*/NULL);
		// }//******************
		return;
	}
}
// System.Void countDown1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void countDown1__ctor_m2417E3D0A0C17E27796B618BB79BDFACA3D6AE36 (countDown1_t70E10DDA7EF4527F7F9C762A176A36433D3026E7 * __this, const RuntimeMethod* method)
{
	{
		// float timerRemaining =10f;//******************
		__this->set_timerRemaining_4((10.0f));
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
// System.Void findObjectChild1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void findObjectChild1_Start_m98E5A7C5D236242C96A9043B113BAF52D6354401 (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void findObjectChild1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void findObjectChild1_Update_m66845060697C1F22965965E2766E91DF8B6B7B0F (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (findObjectChild1_Update_m66845060697C1F22965965E2766E91DF8B6B7B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Rotate(new Vector3(15, 30, 45) * speed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = __this->get_speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_0, L_5, /*hidden argument*/NULL);
		// Rigidbody rb = childobject.GetComponent<Rigidbody>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_childobject_5();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_7 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		// rb.centerOfMass = Vector3.zero;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_8 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Rigidbody_set_centerOfMass_m038CD9CF36C48D04C92AFCF15AB001789AD699D4(L_8, L_9, /*hidden argument*/NULL);
		// rb.inertiaTensorRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Rigidbody_set_inertiaTensorRotation_m310EB017C472948584A3DE27B41264EC7E606BE5(L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void findObjectChild1::textmeshcomp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void findObjectChild1_textmeshcomp_m03D64E7419F473827DAFA5390E6A7F66308FF4B6 (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, String_t* ___ttx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (findObjectChild1_textmeshcomp_m03D64E7419F473827DAFA5390E6A7F66308FF4B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// childobject.GetComponent<TextMesh>().text = ttx;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_childobject_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_1 = GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8(L_0, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m6548CB329DD537D824051D169084C7FB1CD251D8_RuntimeMethod_var);
		String_t* L_2 = ___ttx0;
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String findObjectChild1::changeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* findObjectChild1_changeString_m54CE0DB75312CA40BA0AAC09C7032A75D4B0613D (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (findObjectChild1_changeString_m54CE0DB75312CA40BA0AAC09C7032A75D4B0613D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	{
		// string characters = "xn8";
		V_0 = _stringLiteral29F92603B8CAD28E28EDA7E5FFC00B71AE4BF195;
		// string code = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int temp = 0;
		V_2 = 0;
		// int rand = random.Next(9, 15);
		IL2CPP_RUNTIME_CLASS_INIT(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = ((findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_StaticFields*)il2cpp_codegen_static_fields_for(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var))->get_random_4();
		int32_t L_1 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, ((int32_t)9), ((int32_t)15));
		V_3 = L_1;
		// for (int i = 1; i < rand; i++)
		V_4 = 1;
		goto IL_0051;
	}

IL_0022:
	{
		// temp = random.Next(0, characters.Length);
		IL2CPP_RUNTIME_CLASS_INIT(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ((findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_StaticFields*)il2cpp_codegen_static_fields_for(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var))->get_random_4();
		String_t* L_3 = V_0;
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, L_4);
		V_2 = L_5;
		// code = code + characters[temp];
		String_t* L_6 = V_1;
		String_t* L_7 = V_0;
		int32_t L_8 = V_2;
		Il2CppChar L_9 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		String_t* L_10 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_5), /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_6, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// for (int i = 1; i < rand; i++)
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0051:
	{
		// for (int i = 1; i < rand; i++)
		int32_t L_13 = V_4;
		int32_t L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0022;
		}
	}
	{
		// newcode = code;
		String_t* L_15 = V_1;
		// return newcode;
		return L_15;
	}
}
// System.String findObjectChild1::palindromeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* findObjectChild1_palindromeString_m8E97A8F5BE552A15BD91CC2AFE3FD2FA9DD3B1D7 (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (findObjectChild1_palindromeString_m8E97A8F5BE552A15BD91CC2AFE3FD2FA9DD3B1D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	{
		// Regex r = new Regex(@"\A(?:(.)(?=.*?((?(2)\1\2|\1))\z))*?.?\2\z");
		Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * L_0 = (Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF *)il2cpp_codegen_object_new(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var);
		Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C(L_0, _stringLiteral81A7BE9332CA33EE164B1809A8379C09D9610C83, /*hidden argument*/NULL);
		V_1 = L_0;
		// string characters = "xn8";
		V_2 = _stringLiteral29F92603B8CAD28E28EDA7E5FFC00B71AE4BF195;
	}

IL_0011:
	{
		// string code = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int temp = 0;
		V_4 = 0;
		// int randm = Random.Range(9, 15);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)9), ((int32_t)15), /*hidden argument*/NULL);
		V_5 = L_1;
		// for (int i = 1; i < randm; i++)
		V_6 = 1;
		goto IL_0056;
	}

IL_002a:
	{
		// temp = Random.Range(0, characters.Length);
		String_t* L_2 = V_2;
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		// code = code + characters[temp];
		String_t* L_5 = V_3;
		String_t* L_6 = V_2;
		int32_t L_7 = V_4;
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, L_7, /*hidden argument*/NULL);
		V_7 = L_8;
		String_t* L_9 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_7), /*hidden argument*/NULL);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_5, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// for (int i = 1; i < randm; i++)
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0056:
	{
		// for (int i = 1; i < randm; i++)
		int32_t L_12 = V_6;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		// if (r.IsMatch(code))
		Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * L_14 = V_1;
		String_t* L_15 = V_3;
		bool L_16 = Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0011;
		}
	}
	{
		// newcode = code;
		String_t* L_17 = V_3;
		V_0 = L_17;
		// return newcode;
		String_t* L_18 = V_0;
		return L_18;
	}
}
// System.Void findObjectChild1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void findObjectChild1__ctor_mB198AD50995FD863D5C94E2BB5D1E26C845FCD78 (findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3f;
		__this->set_speed_6((3.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void findObjectChild1::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void findObjectChild1__cctor_m1918D53049B4DB44025C5D688B2E15C0CB13AAA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (findObjectChild1__cctor_m1918D53049B4DB44025C5D688B2E15C0CB13AAA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static System.Random random = new System.Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_0, /*hidden argument*/NULL);
		((findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_StaticFields*)il2cpp_codegen_static_fields_for(findObjectChild1_t45F1CCB726A373775F67E063E3BFE25286474890_il2cpp_TypeInfo_var))->set_random_4(L_0);
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
// System.Void fixRotation1::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fixRotation1_Awake_m5CE473E5F593A913286047891820D7B06A24B766 (fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C * __this, const RuntimeMethod* method)
{
	{
		// rotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		__this->set_rotation_4(L_1);
		// }
		return;
	}
}
// System.Void fixRotation1::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fixRotation1_LateUpdate_m8D4C9C91D3391A7AAF373E22F3620169F4A61238 (fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C * __this, const RuntimeMethod* method)
{
	{
		// transform.rotation = rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_rotation_4();
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fixRotation1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fixRotation1__ctor_mEFE9FCE890FDF6CDBD718C27FF5592DA57496706 (fixRotation1_tEF015BDBAEC05F8FC7465965CDB86C5BEA78EE8C * __this, const RuntimeMethod* method)
{
	{
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
// System.Void loadScence::sceneLoader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadScence_sceneLoader_m4F25E91A2D0C738511595CD3FAE04557E1EA4024 (loadScence_tBA3AD184CD9821954E4030C66E8D004E8DF737AA * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	{
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_0 = ___sceneIndex0;
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loadScence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadScence__ctor_m89833DC95DDE0DE3C2345815B56A9FEB189E8753 (loadScence_tBA3AD184CD9821954E4030C66E8D004E8DF737AA * __this, const RuntimeMethod* method)
{
	{
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
// System.Void open_link::openURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void open_link_openURL_mF0FBF24CDD8BEDD58ED2C5591A81C872460EF9BA (open_link_t58AE08A048B6B80BDB4BC217EE6B72FE2772C2C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (open_link_openURL_mF0FBF24CDD8BEDD58ED2C5591A81C872460EF9BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("http://www.niazilab.com");
		Application_OpenURL_m2888DA5BDF68B1BC23E983469157783F390D7BC8(_stringLiteral5448AF756E5F56C9A1D5527D68903BF5720270D4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void open_link::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void open_link__ctor_m90935B9F48B6E05F62A28B46C851D44C70890F98 (open_link_t58AE08A048B6B80BDB4BC217EE6B72FE2772C2C1 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void playerMiniGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame_Start_m707BCA89285740F03207BE87DFD23246F14D8921 (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerMiniGame_Start_m707BCA89285740F03207BE87DFD23246F14D8921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody> ();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// count = 0;
		__this->set_count_8(0);
		// SetCountText ();
		playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF(__this, /*hidden argument*/NULL);
		// winText.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_winText_7();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void playerMiniGame::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame_FixedUpdate_m785DAEDE7B9B9DA1082993DB2C33804828BE3A19 (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerMiniGame_FixedUpdate_m785DAEDE7B9B9DA1082993DB2C33804828BE3A19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float moveHorizontal = Input.GetAxis ("Horizontal");
		float L_0 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		V_0 = L_0;
		// float moveVertical = Input.GetAxis ("Vertical");
		float L_1 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 movement= new Vector3(moveHorizontal, 0.0f, moveVertical);
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		// rb.AddForce(movement * speed);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_4 = __this->get_rb_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_2;
		float L_6 = __this->get_speed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void playerMiniGame::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame_OnTriggerEnter_m033867474337EFBCB5935515CE687525B3E1C129 (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerMiniGame_OnTriggerEnter_m033867474337EFBCB5935515CE687525B3E1C129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag ("Pick Up"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_1, _stringLiteral4EBD928B7120B207B2B5D4278BA530C9B3513C91, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// other.gameObject.SetActive (false);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		// count = count + 1;
		int32_t L_5 = __this->get_count_8();
		__this->set_count_8(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// SetCountText ();
		playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (other.gameObject.CompareTag ("PICK"))
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_6 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		bool L_8 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_7, _stringLiteralA4AA25F821A4715D0E6C6EFB6CC0635D2E9BB129, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// other.gameObject.SetActive (false);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_9 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		// count = count + 2;
		int32_t L_11 = __this->get_count_8();
		__this->set_count_8(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2)));
		// SetCountText ();
		playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF(__this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void playerMiniGame::SetCountText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerMiniGame_SetCountText_m76B932CBCAB1FB890BAD0AF2F713E949768865AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countText.text = "Count: " + count.ToString ();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_countText_6();
		int32_t* L_1 = __this->get_address_of_count_8();
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC14D398EB6F6FD7B63BE48CE4551B4E74A4A32AD, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if (count >= 12)
		int32_t L_4 = __this->get_count_8();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)12))))
		{
			goto IL_003f;
		}
	}
	{
		// winText.text = "Winner";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = __this->get_winText_7();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4E3ADCFE37C3701D7F736553A4C722E7133E909E);
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void playerMiniGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerMiniGame__ctor_m0813E150B71339841A350FD9EE2F34EF181D5D56 (playerMiniGame_t8DCC30AB3ABF71BE24469489C92B53A4739A16B6 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void quit_game::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quit_game_Quit_mE48FFB0DE5B076CE28E82A130882BD4E42529454 (quit_game_t73FB614F948D058F88914619782454922C28A4B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (quit_game_Quit_mE48FFB0DE5B076CE28E82A130882BD4E42529454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("www.google.com");
		Application_OpenURL_m2888DA5BDF68B1BC23E983469157783F390D7BC8(_stringLiteralD8B99F68B208B5453B391CB0C6C3D6A9824F3C3A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void quit_game::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quit_game__ctor_mD0F56686577A90DBBDA3A19F6614F58804D256B5 (quit_game_t73FB614F948D058F88914619782454922C28A4B6 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void sceneManager::BackToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneManager_BackToMenu_m29790ED56B250F992305B4125381BBA77952BAF4 (sceneManager_t34EFCA27B0A4788A5D0CA50C160B3433E4F4204D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (sceneManager_BackToMenu_m29790ED56B250F992305B4125381BBA77952BAF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("menu");
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral252A25667DC7C65FE0E9BF62D474BBAB9BAB4068, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void sceneManager::loadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneManager_loadScene_m45FA86CA871794297E435A9FC51D69E4B8F62588 (sceneManager_t34EFCA27B0A4788A5D0CA50C160B3433E4F4204D * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// SceneManager.LoadScene(str);
		String_t* L_0 = ___str0;
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void sceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneManager__ctor_m2022996672CD109CDE11CFD16ED02F0DEB9F5BF8 (sceneManager_t34EFCA27B0A4788A5D0CA50C160B3433E4F4204D * __this, const RuntimeMethod* method)
{
	{
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
// System.Void sceneback::Return()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneback_Return_m2E56B8F6712F9AE738D966575B2A68A07CC3682C (sceneback_tCC5481AFFE1450E3D4D4C6B31EF4D570FF3885BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (sceneback_Return_m2E56B8F6712F9AE738D966575B2A68A07CC3682C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Palindrome_menu");
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral8DCC029829FD8C00B8F815595E358E76BCA84EB7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void sceneback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneback__ctor_m5DF9ADAB39549F29788F44C0CEC57DEE2D546311 (sceneback_tCC5481AFFE1450E3D4D4C6B31EF4D570FF3885BF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m82201A5AA12D07730AEC216421E5AC4FB2796481_inline (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_havePropertiesChanged; }
		bool L_0 = __this->get_m_havePropertiesChanged_139();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * TMP_Text_get_textInfo_m773CC543D209B2EDEE8C8DF086F0A19803A40D78_inline (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * L_0 = __this->get_m_textInfo_138();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * TMP_TextEventHandler_get_onCharacterSelection_mF70DBE3FF43B3D6E64053D37A2FADF802533E1FF_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnCharacterSelection; }
		CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * L_0 = __this->get_m_OnCharacterSelection_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * TMP_TextEventHandler_get_onSpriteSelection_m395603314F8CD073897DCAB5513270C6ADD94BF4_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnSpriteSelection; }
		SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * L_0 = __this->get_m_OnSpriteSelection_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * TMP_TextEventHandler_get_onWordSelection_m415F4479934B1739658356B47DF4C2E90496AE2E_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnWordSelection; }
		WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * L_0 = __this->get_m_OnWordSelection_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * TMP_TextEventHandler_get_onLineSelection_m8E724700CC5DF1197B103F87156576A52F62AB2B_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnLineSelection; }
		LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * L_0 = __this->get_m_OnLineSelection_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * TMP_TextEventHandler_get_onLinkSelection_m221527467F0606DD3561E0FB0D7678AA8329AD5D_inline (TMP_TextEventHandler_t6046295E0F06C5138916541DBE6B476E6FE66B54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnLinkSelection; }
		LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * L_0 = __this->get_m_OnLinkSelection_8();
		return L_0;
	}
}
