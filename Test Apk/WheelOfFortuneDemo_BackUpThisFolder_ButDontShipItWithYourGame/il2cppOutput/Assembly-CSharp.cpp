#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<GSL.RewardWheelManager/GameState>
struct Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150;
// GSL.BaseSingleton`1<System.Object>
struct BaseSingleton_1_t24A5C13E513B726D5DC2EEE8DC0270B40822DAAA;
// GSL.BaseSingleton`1<GSL.RewardWheelManager>
struct BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO>
struct List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB;
// System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot>
struct List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629;
// System.Collections.Generic.List`1<FortuneWheel.PathBar.RewardPathValue>
struct List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794;
// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardWheelSlot>
struct List_1_tFE913C4185B41F19222729AD035D3456710F5B99;
// System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot>
struct List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// FortuneWheel.Slots.RewardDataSO[]
struct RewardDataSOU5BU5D_t38DEC4053D04CFFFF030D4CE3A65529BC561FA2A;
// FortuneWheel.Inventory.RewardPanelSlot[]
struct RewardPanelSlotU5BU5D_tB92BDCCABB1BFC5C85B08121DAC8395323B69230;
// FortuneWheel.PathBar.RewardPathValue[]
struct RewardPathValueU5BU5D_t6ED844417498FF8E681050AB88AFB4151B1681A6;
// FortuneWheel.Slots.RewardWheelSlot[]
struct RewardWheelSlotU5BU5D_t361BE6862A2A16D38BA3F52FE1869E91EDD4432D;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// FortuneWheel.Inventory.Slot[]
struct SlotU5BU5D_t4A0A64A82996F4152DDA34BA7A4DACA6602F3E9D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Cysharp.Threading.Tasks.UniTask[]
struct UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// GSL.PoolManager/Pool[]
struct PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// FortuneWheel.EventSystemInput.AbstractBaseInput
struct AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// FortuneWheel.EventSystemInput.AllRewardsCollectButton
struct AllRewardsCollectButton_tD8722C0082649EC8B704B647BE50D6D85F4DA107;
// FortuneWheel.ApplicationInitializer
struct ApplicationInitializer_tE7AD91359F2F19898894AAF76E88A57BDEA5E258;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// FortuneWheel.EventSystemInput.ButtonUI
struct ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// FlyingWormConsole3.ConsoleProRemoteServer
struct ConsoleProRemoteServer_t69608DADA2C32249CC57374339466552DBC0AB3D;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// FortuneWheel.Inventory.FortuneWheelInventoryManager
struct FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F;
// FortuneWheel.Wheel.FortuneWheelManager
struct FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// DG.Tweening.IDOTweenInit
struct IDOTweenInit_t72D9BFD78C21132CBCD4EEF9B6C99CD17EBE635C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// FortuneWheel.EventSystemInput.InputOutSide
struct InputOutSide_t0304A9BD5F3ED32FD035579ED19CB5F3C13F7CC8;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// FortuneWheel.EventSystemInput.NonDrawingGraphic
struct NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// GSL.PoolManager
struct PoolManager_t75813C096258A16A9DF9941C28BC3E8189DD2534;
// FortuneWheel.EventSystemInput.PremiumCurrencyContinueButton
struct PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C;
// FortuneWheel.EventSystemInput.QuitButton
struct QuitButton_tAB8E253FCDB8DEB137FC9CEB82925131917F8721;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// FortuneWheel.EventSystemInput.ReturnButton
struct ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D;
// FortuneWheel.Slots.RewardDataSO
struct RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5;
// FortuneWheel.Inventory.RewardPanelSlot
struct RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370;
// FortuneWheel.PathBar.RewardPathValue
struct RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09;
// GSL.RewardWheelManager
struct RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58;
// FortuneWheel.Slots.RewardWheelSlot
struct RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8;
// FortuneWheel.EventSystemInput.RewardsPanelCollectButton
struct RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// FortuneWheel.Inventory.Slot
struct Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A;
// FortuneWheel.EventSystemInput.SpinButton
struct SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// FortuneWheel.EventSystemInput.TryAgainButton
struct TryAgainButton_t4AAADD0F567CAB966965F4B6692CB08108DD3D06;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FortuneWheel.Inventory.WheelRewardInventorySettingsSO
struct WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral438D41E6DC04D5F8A2F1A67DE47CA5CB359EEEE6;
IL2CPP_EXTERN_C String_t* _stringLiteral46B7A8F18B41BAA39A8E6FC5F8AA3DE5D3E7BDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral638F3947208DD492A456013530B0CB7C60197C32;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F5AFDAF0B2BB393ABFAC93B400CACAE70A217D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseSingleton_1__ctor_mB303137C304A27E0E0E6B6EB515EB6626DE8BD50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m13DFDA065F385A6DF173FCCD986801FBB4435AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m91824258EFBC5BD123ED03776670D11B0F9BFC9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C55111E9922535EAE0AC887B97317848AC426D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFD5EA68A00F9EA6B5753B7375CDB7B6DE1E0502C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3B398EEDB6DC6CAD163BFCAD1D3FDC03FC7E7B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7_m8B695895E79C8CC9FFE743A794BF0136EF7A7A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mB798E34D32AD9BA63A5F46F10C047AE591A246BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m62B276169801531BCD58B05E4A8F1DC6603969E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLink_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m2C06EA47FF3364B272F3BA8B489692DB5A7F4362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLink_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m0E2FC537C115691B42B8B8DF55A6CC57740A1EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CMoveNewPositionWithNewValuesU3Eb__0_m23C64FDA294637C00D96EF4C0017371A4AC1432D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2;
struct PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO>
struct List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardDataSOU5BU5D_t38DEC4053D04CFFFF030D4CE3A65529BC561FA2A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardDataSOU5BU5D_t38DEC4053D04CFFFF030D4CE3A65529BC561FA2A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot>
struct List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardPanelSlotU5BU5D_tB92BDCCABB1BFC5C85B08121DAC8395323B69230* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardPanelSlotU5BU5D_tB92BDCCABB1BFC5C85B08121DAC8395323B69230* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FortuneWheel.PathBar.RewardPathValue>
struct List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardPathValueU5BU5D_t6ED844417498FF8E681050AB88AFB4151B1681A6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardPathValueU5BU5D_t6ED844417498FF8E681050AB88AFB4151B1681A6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardWheelSlot>
struct List_1_tFE913C4185B41F19222729AD035D3456710F5B99  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardWheelSlotU5BU5D_t361BE6862A2A16D38BA3F52FE1869E91EDD4432D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFE913C4185B41F19222729AD035D3456710F5B99_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardWheelSlotU5BU5D_t361BE6862A2A16D38BA3F52FE1869E91EDD4432D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot>
struct List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SlotU5BU5D_t4A0A64A82996F4152DDA34BA7A4DACA6602F3E9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SlotU5BU5D_t4A0A64A82996F4152DDA34BA7A4DACA6602F3E9D* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// FortuneWheel.Inventory.Slot
struct Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A  : public RuntimeObject
{
	// FortuneWheel.Slots.RewardDataSO FortuneWheel.Inventory.Slot::_reward
	RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ____reward_0;
	// System.Int32 FortuneWheel.Inventory.Slot::_rewardAmount
	int32_t ____rewardAmount_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51  : public RuntimeObject
{
	// FortuneWheel.PathBar.RewardPathValue FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0::<>4__this
	RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* ___U3CU3E4__this_0;
	// System.Int32 FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0::_pathValue
	int32_t ____pathValue_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<FortuneWheel.Inventory.Slot>
struct Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<DG.Tweening.LogBehaviour>
struct Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
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
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter
struct TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 
{
	// DG.Tweening.Tween Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter::tween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter
struct TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_marshaled_pinvoke
{
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter
struct TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_marshaled_com
{
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_0;
};

// GSL.PoolManager/Pool
struct Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD 
{
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> GSL.PoolManager/Pool::pooledObjects
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___pooledObjects_0;
	// UnityEngine.GameObject GSL.PoolManager/Pool::objectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectPrefab_1;
	// System.Int32 GSL.PoolManager/Pool::poolSize
	int32_t ___poolSize_2;
};
// Native definition for P/Invoke marshalling of GSL.PoolManager/Pool
struct Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_pinvoke
{
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___pooledObjects_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectPrefab_1;
	int32_t ___poolSize_2;
};
// Native definition for COM marshalling of GSL.PoolManager/Pool
struct Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_com
{
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___pooledObjects_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectPrefab_1;
	int32_t ___poolSize_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_64;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_65;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
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
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40
struct U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302 
{
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// FortuneWheel.Wheel.FortuneWheelManager FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<>4__this
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* ___U3CU3E4__this_2;
	// System.Threading.CancellationToken FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<ct>5__2
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CctU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
	// Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::<>u__2
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 ___U3CU3Eu__2_5;
};

// FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35
struct U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645 
{
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// FortuneWheel.Wheel.FortuneWheelManager FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::<>4__this
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::<>u__1
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 ___U3CU3Eu__1_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_4;
};

// FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39
struct U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1 
{
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// FortuneWheel.Wheel.FortuneWheelManager FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::<>4__this
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* ___U3CU3E4__this_2;
	// System.Single FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::endValue
	float ___endValue_3;
	// System.Single FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::duration
	float ___duration_4;
	// Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::<>u__1
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 ___U3CU3Eu__1_5;
	// Cysharp.Threading.Tasks.UniTask/Awaiter FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_6;
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GSL.RewardWheelManager/GameState>
struct Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// FortuneWheel.Slots.RewardDataSO
struct RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// FortuneWheel.Slots.RewardType FortuneWheel.Slots.RewardDataSO::rewardType
	int32_t ___rewardType_4;
	// System.Int32 FortuneWheel.Slots.RewardDataSO::amount
	int32_t ___amount_5;
	// UnityEngine.Sprite FortuneWheel.Slots.RewardDataSO::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_6;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// FortuneWheel.Inventory.WheelRewardInventorySettingsSO
struct WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot> FortuneWheel.Inventory.WheelRewardInventorySettingsSO::inventorySlots
	List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* ___inventorySlots_4;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// GSL.BaseSingleton`1<GSL.RewardWheelManager>
struct BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1_StaticFields
{
	// T GSL.BaseSingleton`1::_instance
	RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58* ____instance_4;
	// System.Boolean GSL.BaseSingleton`1::_isDestroyed
	bool ____isDestroyed_5;
};

// FortuneWheel.EventSystemInput.AbstractBaseInput
struct AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FortuneWheel.ApplicationInitializer
struct ApplicationInitializer_tE7AD91359F2F19898894AAF76E88A57BDEA5E258  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FlyingWormConsole3.ConsoleProRemoteServer
struct ConsoleProRemoteServer_t69608DADA2C32249CC57374339466552DBC0AB3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FlyingWormConsole3.ConsoleProRemoteServer::useNATPunch
	bool ___useNATPunch_4;
	// System.Int32 FlyingWormConsole3.ConsoleProRemoteServer::port
	int32_t ___port_5;
};

// FortuneWheel.Inventory.FortuneWheelInventoryManager
struct FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FortuneWheel.Inventory.WheelRewardInventorySettingsSO FortuneWheel.Inventory.FortuneWheelInventoryManager::wheelRewardInventory
	WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* ___wheelRewardInventory_4;
	// System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot> FortuneWheel.Inventory.FortuneWheelInventoryManager::rewardPanelSlotsList
	List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* ___rewardPanelSlotsList_5;
};

// FortuneWheel.Wheel.FortuneWheelManager
struct FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO> FortuneWheel.Wheel.FortuneWheelManager::rewardDataList
	List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* ___rewardDataList_4;
	// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardWheelSlot> FortuneWheel.Wheel.FortuneWheelManager::rewardWheelSlotList
	List_1_tFE913C4185B41F19222729AD035D3456710F5B99* ___rewardWheelSlotList_5;
	// System.Collections.Generic.List`1<FortuneWheel.PathBar.RewardPathValue> FortuneWheel.Wheel.FortuneWheelManager::rewardPathValueList
	List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794* ___rewardPathValueList_6;
	// System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO> FortuneWheel.Wheel.FortuneWheelManager::superRewardDataList
	List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* ___superRewardDataList_7;
	// FortuneWheel.Inventory.FortuneWheelInventoryManager FortuneWheel.Wheel.FortuneWheelManager::fortuneWheelInventoryManager
	FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* ___fortuneWheelInventoryManager_8;
	// FortuneWheel.Inventory.WheelRewardInventorySettingsSO FortuneWheel.Wheel.FortuneWheelManager::playerInventory
	WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* ___playerInventory_9;
	// System.Single FortuneWheel.Wheel.FortuneWheelManager::_spinDuration
	float ____spinDuration_10;
	// UnityEngine.Transform FortuneWheel.Wheel.FortuneWheelManager::_wheelTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____wheelTransform_11;
	// UnityEngine.UI.Image FortuneWheel.Wheel.FortuneWheelManager::_wheelImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____wheelImage_12;
	// UnityEngine.UI.Image FortuneWheel.Wheel.FortuneWheelManager::_indicatorImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____indicatorImage_13;
	// UnityEngine.CanvasGroup FortuneWheel.Wheel.FortuneWheelManager::_wheelCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____wheelCanvasGroup_14;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_wheelSilverSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____wheelSilverSprite_15;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_wheelBronzeSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____wheelBronzeSprite_16;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_wheelGoldSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____wheelGoldSprite_17;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_indicatorSilverSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____indicatorSilverSprite_18;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_indicatorGoldSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____indicatorGoldSprite_19;
	// UnityEngine.Sprite FortuneWheel.Wheel.FortuneWheelManager::_indicatorBronzeSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____indicatorBronzeSprite_20;
	// UnityEngine.Transform FortuneWheel.Wheel.FortuneWheelManager::_startRewardsPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____startRewardsPosition_21;
	// UnityEngine.UI.Image FortuneWheel.Wheel.FortuneWheelManager::_rewardsMoveRewardsPanelImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____rewardsMoveRewardsPanelImage_22;
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::_bombChanceRate
	int32_t ____bombChanceRate_23;
	// UnityEngine.GameObject FortuneWheel.Wheel.FortuneWheelManager::_quitPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____quitPanel_24;
	// UnityEngine.GameObject FortuneWheel.Wheel.FortuneWheelManager::_bombLosePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bombLosePanel_25;
	// UnityEngine.GameObject FortuneWheel.Wheel.FortuneWheelManager::_allRewardsCollectedPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____allRewardsCollectedPanel_26;
	// TMPro.TextMeshProUGUI FortuneWheel.Wheel.FortuneWheelManager::_allRewardsCollectedPanelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____allRewardsCollectedPanelText_27;
	// UnityEngine.Transform FortuneWheel.Wheel.FortuneWheelManager::_inventoryPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____inventoryPosition_28;
	// FortuneWheel.EventSystemInput.PremiumCurrencyContinueButton FortuneWheel.Wheel.FortuneWheelManager::_premiumCurrencyContinueButton
	PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C* ____premiumCurrencyContinueButton_29;
	// FortuneWheel.EventSystemInput.ReturnButton FortuneWheel.Wheel.FortuneWheelManager::_returnButton
	ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D* ____returnButton_30;
	// FortuneWheel.EventSystemInput.RewardsPanelCollectButton FortuneWheel.Wheel.FortuneWheelManager::_rewardsPanelCollectButton
	RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F* ____rewardsPanelCollectButton_31;
	// FortuneWheel.EventSystemInput.SpinButton FortuneWheel.Wheel.FortuneWheelManager::_spinButton
	SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47* ____spinButton_32;
	// System.Boolean FortuneWheel.Wheel.FortuneWheelManager::_isSpinning
	bool ____isSpinning_33;
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::_angle
	int32_t ____angle_34;
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::_initialIndex
	int32_t ____initialIndex_35;
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::_pathValue
	int32_t ____pathValue_36;
	// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::_randomNumber
	int32_t ____randomNumber_37;
};

// GSL.PoolManager
struct PoolManager_t75813C096258A16A9DF9941C28BC3E8189DD2534  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GSL.PoolManager/Pool[] GSL.PoolManager::pools
	PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* ___pools_4;
	// UnityEngine.Transform GSL.PoolManager::objParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objParent_5;
};

// FortuneWheel.Inventory.RewardPanelSlot
struct RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image FortuneWheel.Inventory.RewardPanelSlot::rewardImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rewardImage_4;
	// TMPro.TextMeshProUGUI FortuneWheel.Inventory.RewardPanelSlot::rewardAmountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___rewardAmountText_5;
};

// FortuneWheel.PathBar.RewardPathValue
struct RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite FortuneWheel.PathBar.RewardPathValue::_greenBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____greenBackground_4;
	// UnityEngine.Sprite FortuneWheel.PathBar.RewardPathValue::_blueBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____blueBackground_5;
	// UnityEngine.UI.Image FortuneWheel.PathBar.RewardPathValue::_image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____image_6;
	// TMPro.TextMeshProUGUI FortuneWheel.PathBar.RewardPathValue::_levelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____levelText_7;
	// UnityEngine.UI.Image FortuneWheel.PathBar.RewardPathValue::_currentPathValueImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____currentPathValueImage_8;
	// TMPro.TextMeshProUGUI FortuneWheel.PathBar.RewardPathValue::_currentPathValueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____currentPathValueText_9;
	// UnityEngine.RectTransform FortuneWheel.PathBar.RewardPathValue::_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rectTransform_10;
	// UnityEngine.RectTransform FortuneWheel.PathBar.RewardPathValue::_endPoint
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____endPoint_11;
	// UnityEngine.RectTransform FortuneWheel.PathBar.RewardPathValue::_startPoint
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____startPoint_12;
	// UnityEngine.RectTransform FortuneWheel.PathBar.RewardPathValue::_midPoint
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____midPoint_13;
};

// FortuneWheel.Slots.RewardWheelSlot
struct RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FortuneWheel.Slots.RewardDataSO FortuneWheel.Slots.RewardWheelSlot::reward
	RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ___reward_4;
	// UnityEngine.UI.Image FortuneWheel.Slots.RewardWheelSlot::rewardImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rewardImage_5;
	// System.Int32 FortuneWheel.Slots.RewardWheelSlot::amount
	int32_t ___amount_6;
	// TMPro.TextMeshProUGUI FortuneWheel.Slots.RewardWheelSlot::amountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___amountText_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FortuneWheel.EventSystemInput.ButtonUI
struct ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166  : public AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1
{
	// UnityEngine.UI.Image FortuneWheel.EventSystemInput.ButtonUI::imageComponent
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageComponent_4;
	// UnityEngine.Color FortuneWheel.EventSystemInput.ButtonUI::normalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalColor_5;
	// UnityEngine.Color FortuneWheel.EventSystemInput.ButtonUI::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_6;
	// FortuneWheel.Wheel.FortuneWheelManager FortuneWheel.EventSystemInput.ButtonUI::fortuneWheelManager
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* ___fortuneWheelManager_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// FortuneWheel.EventSystemInput.InputOutSide
struct InputOutSide_t0304A9BD5F3ED32FD035579ED19CB5F3C13F7CC8  : public AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1
{
};

// GSL.RewardWheelManager
struct RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58  : public BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1
{
	// GSL.RewardWheelManager/GameState GSL.RewardWheelManager::State
	int32_t ___State_6;
};

struct RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields
{
	// System.Action`1<GSL.RewardWheelManager/GameState> GSL.RewardWheelManager::OnGameStateChanged
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* ___OnGameStateChanged_7;
};

// FortuneWheel.EventSystemInput.AllRewardsCollectButton
struct AllRewardsCollectButton_tD8722C0082649EC8B704B647BE50D6D85F4DA107  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// FortuneWheel.EventSystemInput.NonDrawingGraphic
struct NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
};

// FortuneWheel.EventSystemInput.PremiumCurrencyContinueButton
struct PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// FortuneWheel.EventSystemInput.QuitButton
struct QuitButton_tAB8E253FCDB8DEB137FC9CEB82925131917F8721  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// FortuneWheel.EventSystemInput.ReturnButton
struct ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// FortuneWheel.EventSystemInput.RewardsPanelCollectButton
struct RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// FortuneWheel.EventSystemInput.SpinButton
struct SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// FortuneWheel.EventSystemInput.TryAgainButton
struct TryAgainButton_t4AAADD0F567CAB966965F4B6692CB08108DD3D06  : public ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GSL.PoolManager/Pool[]
struct PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E  : public RuntimeArray
{
	ALIGN_FIELD (8) Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD m_Items[1];

	inline Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___pooledObjects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___objectPrefab_1), (void*)NULL);
		#endif
	}
	inline Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___pooledObjects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___objectPrefab_1), (void*)NULL);
		#endif
	}
};
// Cysharp.Threading.Tasks.UniTask[]
struct UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2  : public RuntimeArray
{
	ALIGN_FIELD (8) UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 m_Items[1];

	inline UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source_0), (void*)NULL);
	}
	inline UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source_0), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void GSL.BaseSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSingleton_1__ctor_m7A6B7E705D79C20565C123465907DF1D9C6E0618_gshared (BaseSingleton_1_t24A5C13E513B726D5DC2EEE8DC0270B40822DAAA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLink<System.Object>(T,UnityEngine.GameObject,DG.Tweening.LinkBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLink_TisRuntimeObject_m0AA56B24020C584EC19980FF2AAED36663D1C64B_gshared (RuntimeObject* ___t0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, int32_t ___behaviour2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82_gshared (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86_gshared (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m52FE7F2F66A98AA95BD19DF6FB6B25FC95FEEA63_gshared (RuntimeObject* ___t0, int32_t ___ease1, float ___overshoot2, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(T)
inline void Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GSL.RewardWheelManager/GameState>::Invoke(T)
inline void Action_1_Invoke_mAAF6834401EEBBD77E33FA4052BF577431932E53_inline (Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void GSL.BaseSingleton`1<GSL.RewardWheelManager>::.ctor()
inline void BaseSingleton_1__ctor_mB303137C304A27E0E0E6B6EB515EB6626DE8BD50 (BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseSingleton_1_t80E3C710A6EC9BBF800EDD73E8400F8EA47493C1*, const RuntimeMethod*))BaseSingleton_1__ctor_m7A6B7E705D79C20565C123465907DF1D9C6E0618_gshared)(__this, method);
}
// DG.Tweening.IDOTweenInit DG.Tweening.DOTween::Init(System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<DG.Tweening.LogBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTween_Init_m4466425A659EA8EE076AC9C30BBFE6483AF4B134 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___recycleAllByDefault0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___useSafeMode1, Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD ___logBehaviour2, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTween::SetTweensCapacity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTween_SetTweensCapacity_m5BB4353C50A9527EA33141616FBF79E9BF946849 (int32_t ___tweenersCapacity0, int32_t ___sequencesCapacity1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.EventSystemInput.ButtonUI::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183 (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::AllRewardsCollectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_AllRewardsCollectButton_m63F300059FE30BB009CB1A77E14C5E363B9FAFB3 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.EventSystemInput.ButtonUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::PremiumCurrencyContinueButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_PremiumCurrencyContinueButton_mE25C8A38D2DE8D9FDA8D0813F99F8385A7F995D5 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_QuitButton_m40FA1CB8F7DABAB741FD4FBA33A4324B76CF655C (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::ReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_ReturnButton_mB90800451F6AD1BAEAC46AFCA1885915DEB00F1E (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::RewardsPanelCollectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_RewardsPanelCollectButton_m8C6220A22E92809F70C18AD764EC5BECBBACFB29 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SpinButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SpinButton_m01452FB2D440EDAA85F650A98CB3B235F108A2B4 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::TryAgainButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_TryAgainButton_mFCA48C571933C1694C0C9629E8BC82B0C564AC44 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<FortuneWheel.Wheel.FortuneWheelManager>()
inline FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* Object_FindObjectOfType_TisFortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7_m8B695895E79C8CC9FFE743A794BF0136EF7A7A01 (const RuntimeMethod* method)
{
	return ((  FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void FortuneWheel.EventSystemInput.AbstractBaseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractBaseInput__ctor_m55AE03AE14BAB14E73DAA307524C594E6F71A432 (AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.PathBar.RewardPathValue::SetNewPositionValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_SetNewPositionValues_m811D377DEA5457FE9DB4279EA22C2DCF0BA21D76 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.PathBar.RewardPathValue::MoveNewPositionWithNewValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_MoveNewPositionWithNewValues_mA07684E06E894FBE8419B8568E7E12A686136DA2 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mAEE6E88A59C44CA434AA477744121EEF3D97B610 (U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPosX(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUI_DOAnchorPosX_m5EAB19C120C814E88467D196708BDE184F8E6E11 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLink<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,UnityEngine.GameObject,DG.Tweening.LinkBehaviour)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_SetLink_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m2C06EA47FF3364B272F3BA8B489692DB5A7F4362 (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___t0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, int32_t ___behaviour2, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLink_TisRuntimeObject_m0AA56B24020C584EC19980FF2AAED36663D1C64B_gshared)(___t0, ___gameObject1, ___behaviour2, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mB798E34D32AD9BA63A5F46F10C047AE591A246BA (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared)(___t0, ___action1, method);
}
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::ClearRewardsInventorySlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_ClearRewardsInventorySlots_m0BA5F8E44699FE4600C8BF1E80FF5AE0DF805E2C (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::UpdateRewardPanelInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_UpdateRewardPanelInventory_mD8052838B14ACAD9214E910DBE991210E21D1E32 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid FortuneWheel.Wheel.FortuneWheelManager::ChangeSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 FortuneWheelManager_ChangeSlots_m1048E12DD849E8CD2173B3419430B29370344ECB (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m26315786B8D1E568884CD2A1B44990ED7848DA06_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82_gshared)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO>::get_Count()
inline int32_t List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_inline (List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<FortuneWheel.Slots.RewardWheelSlot>::get_Item(System.Int32)
inline RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3 (List_1_tFE913C4185B41F19222729AD035D3456710F5B99* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* (*) (List_1_tFE913C4185B41F19222729AD035D3456710F5B99*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<FortuneWheel.Slots.RewardDataSO>::get_Item(System.Int32)
inline RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395 (List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* (*) (List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SetRewardAndIncreasePerPathValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SetRewardAndIncreasePerPathValue_m1B0D7590DEF55D51834B78A2F7991449A32AD2A6 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FortuneWheel.Slots.RewardWheelSlot>::get_Count()
inline int32_t List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_inline (List_1_tFE913C4185B41F19222729AD035D3456710F5B99* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE913C4185B41F19222729AD035D3456710F5B99*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void FortuneWheel.Slots.RewardWheelSlot::SetItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelSlot_SetItem_m80C343B0EE328609A1B06AD2E3968FB3F9E481F7 (RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid FortuneWheel.Wheel.FortuneWheelManager::SpinTheWheel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 FortuneWheelManager_SpinTheWheel_mCEB11DFEDAA9CFADF4DD320ED3AE4CFBEA8C5893 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, float ___endValue0, float ___duration1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot>::GetEnumerator()
inline Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A (*) (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FortuneWheel.Inventory.Slot>::Dispose()
inline void Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FortuneWheel.Inventory.Slot>::get_Current()
inline Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_inline (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A* __this, const RuntimeMethod* method)
{
	return ((  Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* (*) (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<FortuneWheel.Inventory.Slot>::MoveNext()
inline bool Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::OpenEndPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_OpenEndPanel_m043AFC21CD46A8CE122ED98342907A93CD7A9FC9 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SetRewardsForWheelSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SetRewardsForWheelSlots_m27E597EBE8F88886B9D6A2DFD53D485943E5D429 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter Cysharp.Threading.Tasks.DOTweenAsyncExtensions::GetAwaiter(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360 (TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2*, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611 (TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::Delay(System.TimeSpan,System.Boolean,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_Delay_mCB53E129996BE63CF8630CE0567831CBACAE9910 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___delayTimeSpan0, bool ___ignoreTimeScale1, int32_t ___delayTiming2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSlotsU3Ed__35_MoveNext_m167743A24B8E4C67D99EF6148AC429B5CA503DA8 (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSlotsU3Ed__35_SetStateMachine_m3A4B793A3EDEDD56DE152F60C285FF62F890DD93 (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>>(T,DG.Tweening.Ease,System.Single)
inline TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m62B276169801531BCD58B05E4A8F1DC6603969E7 (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___t0, int32_t ___ease1, float ___overshoot2, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* (*) (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, int32_t, float, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m52FE7F2F66A98AA95BD19DF6FB6B25FC95FEEA63_gshared)(___t0, ___ease1, ___overshoot2, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2*, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::AfterSpinCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_AfterSpinCheck_m94535B208E8E33A3F82EFF5508DD94437DDE512B (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T System.Collections.Generic.List`1<FortuneWheel.PathBar.RewardPathValue>::get_Item(System.Int32)
inline RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* List_1_get_Item_m3B398EEDB6DC6CAD163BFCAD1D3FDC03FC7E7B72 (List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* (*) (List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void FortuneWheel.PathBar.RewardPathValue::SetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_SetPosition_m52B4F2F415802E07DEC614FF450EA3CE5B7873A4 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FortuneWheel.PathBar.RewardPathValue>::get_Count()
inline int32_t List_1_get_Count_mFD5EA68A00F9EA6B5753B7375CDB7B6DE1E0502C_inline (List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinTheWheelU3Ed__39_MoveNext_m18781DDAF0788837C9C63A8E59EB1336D52C0828 (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinTheWheelU3Ed__39_SetStateMachine_m5E8A2E6923AB8865F5C47DB27857685376BDA070 (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::CalculateIndicatorShowsSlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheelManager_CalculateIndicatorShowsSlotIndex_m1F423ECAEC434822AAEFD4F9E196DBBCE78936C1 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager::OpenBombLosePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_OpenBombLosePanel_mBB67F7BE01DFC5C14269B6CFAC5C40ACE8E60F53 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) ;
// System.Boolean FortuneWheel.Inventory.WheelRewardInventorySettingsSO::AddRewardToInventory(FortuneWheel.Slots.RewardDataSO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelRewardInventorySettingsSO_AddRewardToInventory_m59FF6C481D11F34B0DE71DEB192490A783DA1710 (WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* __this, RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ____reward0, const RuntimeMethod* method) ;
// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m7A7FB271F8237E1950CCB298D6AF0E0D9E6A7051 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.DOTweenAsyncExtensions::WithCancellation(DG.Tweening.Tween,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 DOTweenAsyncExtensions_WithCancellation_mE7173C7EAC5E39B303560F14F8A4782FBBADB727 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::WhenAll(Cysharp.Threading.Tasks.UniTask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_WhenAll_m56FADC89DF4F36D94A0AEA9A19C29A62E01314C6 (UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* ___tasks0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter,FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2*, U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_m06FA7654709E511E24159284799E4B4591CC2AEC (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterSpinCheckU3Ed__40_MoveNext_m247B5616931683236052007D24CDB5CAFB184888 (U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterSpinCheckU3Ed__40_SetStateMachine_mA4CA3E108E057150957C9128D392752B271902D2 (U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot>::get_Item(System.Int32)
inline Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* (*) (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::ActiveInventorySlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_ActiveInventorySlot_m3FA92A866C6489E807CDA740A69BE907FC961412 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::DisableInventorySlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_DisableInventorySlot_m0F6B00A9245CCCFAD623F4553A2B518DDF2B81F4 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot>::get_Count()
inline int32_t List_1_get_Count_m3C55111E9922535EAE0AC887B97317848AC426D4_inline (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot>::get_Item(System.Int32)
inline RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2 (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* (*) (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetLink<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,UnityEngine.GameObject,DG.Tweening.LinkBehaviour)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetLink_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m0E2FC537C115691B42B8B8DF55A6CC57740A1EEF (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, int32_t ___behaviour2, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLink_TisRuntimeObject_m0AA56B24020C584EC19980FF2AAED36663D1C64B_gshared)(___t0, ___gameObject1, ___behaviour2, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FortuneWheel.Inventory.RewardPanelSlot>::.ctor()
inline void List_1__ctor_m91824258EFBC5BD123ED03776670D11B0F9BFC9A (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void FortuneWheel.Inventory.Slot::AddRewardToSlot(FortuneWheel.Slots.RewardDataSO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_AddRewardToSlot_mEFB6E17F7E03F9B515BC7FA773AC5B0769A3196E (Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* __this, RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ____item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FortuneWheel.Inventory.Slot>::.ctor()
inline void List_1__ctor_m13DFDA065F385A6DF173FCCD986801FBB4435AE4 (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD (int32_t ___timing0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m78FB8EB74959FB133CEA8EF57AE3A9A34643DA69 (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.DOTweenAsyncExtensions/TweenAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenAwaiter_UnsafeOnCompleted_m3E6700193A0E11955A400474411222B05E6FC2DB (TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GSL.PoolManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_Awake_m0A879C7179DCC5E97A0BC34885C5EC19D299DAAE (PoolManager_t75813C096258A16A9DF9941C28BC3E8189DD2534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// for (int j = 0; j < pools.Length; j++)
		V_0 = 0;
		goto IL_0075;
	}

IL_0004:
	{
		// pools[j].pooledObjects = new Queue<GameObject>();
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_0 = __this->___pools_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_2 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_2, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___pooledObjects_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___pooledObjects_0), (void*)L_2);
		// for (int i = 0; i < pools[j].poolSize; i++)
		V_1 = 0;
		goto IL_005d;
	}

IL_001e:
	{
		// GameObject obj = Instantiate(pools[j].objectPrefab, objParent);
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_3 = __this->___pools_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___objectPrefab_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___objParent_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_7;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// pools[j].pooledObjects.Enqueue(obj);
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_9 = __this->___pools_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___pooledObjects_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_11);
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_11, L_12, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// for (int i = 0; i < pools[j].poolSize; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < pools[j].poolSize; i++)
		int32_t L_14 = V_1;
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_15 = __this->___pools_4;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___poolSize_2;
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_001e;
		}
	}
	{
		// for (int j = 0; j < pools.Length; j++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0075:
	{
		// for (int j = 0; j < pools.Length; j++)
		int32_t L_19 = V_0;
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_20 = __this->___pools_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject GSL.PoolManager::GetPooledObject(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PoolManager_GetPooledObject_m3990E7DA8B82C4F4E7317AC4B0D3603562B2FE19 (PoolManager_t75813C096258A16A9DF9941C28BC3E8189DD2534* __this, int32_t ___objectType0, float ___xPos1, float ___yPos2, float ___zPos3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (objectType >= pools.Length)
		int32_t L_0 = ___objectType0;
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_1 = __this->___pools_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_000d:
	{
		// GameObject obj = pools[objectType].pooledObjects.Dequeue();
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_2 = __this->___pools_4;
		int32_t L_3 = ___objectType0;
		NullCheck(L_2);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___pooledObjects_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24(L_4, Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		V_0 = L_5;
		// obj.transform.position = new Vector3(xPos, yPos, zPos);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		float L_8 = ___xPos1;
		float L_9 = ___yPos2;
		float L_10 = ___zPos3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// pools[objectType].pooledObjects.Enqueue(obj);
		PoolU5BU5D_tC5C05659527C2902D7DEAB138EC1E90DDA4EFF0E* L_13 = __this->___pools_4;
		int32_t L_14 = ___objectType0;
		NullCheck(L_13);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___pooledObjects_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_15);
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_15, L_16, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// obj.GetComponent<ParticleSystem>().Play();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18;
		L_18 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_17, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		NullCheck(L_18);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_18, NULL);
		// return obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		return L_19;
	}
}
// System.Void GSL.PoolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager__ctor_mB178403A62BC2B6DC0CB8B703202748AF76C3192 (PoolManager_t75813C096258A16A9DF9941C28BC3E8189DD2534* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: GSL.PoolManager/Pool
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_pinvoke(const Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD& unmarshaled, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pooledObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pooledObjects' of type 'Pool'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pooledObjects_0Exception, NULL);
}
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_pinvoke_back(const Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_pinvoke& marshaled, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD& unmarshaled)
{
	Exception_t* ___pooledObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pooledObjects' of type 'Pool'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pooledObjects_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: GSL.PoolManager/Pool
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_pinvoke_cleanup(Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GSL.PoolManager/Pool
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_com(const Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD& unmarshaled, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_com& marshaled)
{
	Exception_t* ___pooledObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pooledObjects' of type 'Pool'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pooledObjects_0Exception, NULL);
}
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_com_back(const Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_com& marshaled, Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD& unmarshaled)
{
	Exception_t* ___pooledObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pooledObjects' of type 'Pool'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pooledObjects_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: GSL.PoolManager/Pool
IL2CPP_EXTERN_C void Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshal_com_cleanup(Pool_t77EDD702EF22BD997A3A088FC7D2636DA4C717DD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GSL.RewardWheelManager::add_OnGameStateChanged(System.Action`1<GSL.RewardWheelManager/GameState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelManager_add_OnGameStateChanged_m31A12688448E783C896456BD74AF49A09373C32E (Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_0 = NULL;
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_1 = NULL;
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_2 = NULL;
	{
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_0 = ((RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields*)il2cpp_codegen_static_fields_for(RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var))->___OnGameStateChanged_7;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_2 = V_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)Castclass((RuntimeObject*)L_4, Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150_il2cpp_TypeInfo_var));
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_5 = V_2;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_6 = V_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*>((&((RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields*)il2cpp_codegen_static_fields_for(RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var))->___OnGameStateChanged_7), L_5, L_6);
		V_0 = L_7;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_8 = V_0;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)L_8) == ((RuntimeObject*)(Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GSL.RewardWheelManager::remove_OnGameStateChanged(System.Action`1<GSL.RewardWheelManager/GameState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelManager_remove_OnGameStateChanged_mEF4536E8CF514628D60C03841ECA6A3F2B58E70A (Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_0 = NULL;
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_1 = NULL;
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* V_2 = NULL;
	{
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_0 = ((RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields*)il2cpp_codegen_static_fields_for(RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var))->___OnGameStateChanged_7;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_2 = V_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)Castclass((RuntimeObject*)L_4, Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150_il2cpp_TypeInfo_var));
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_5 = V_2;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_6 = V_1;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*>((&((RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields*)il2cpp_codegen_static_fields_for(RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var))->___OnGameStateChanged_7), L_5, L_6);
		V_0 = L_7;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_8 = V_0;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)L_8) == ((RuntimeObject*)(Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GSL.RewardWheelManager::UpdateGameState(GSL.RewardWheelManager/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelManager_UpdateGameState_mDE8B6454E5F198015FDF272C322EB76161CE6692 (RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* G_B3_0 = NULL;
	Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* G_B2_0 = NULL;
	{
		// State = newState;
		int32_t L_0 = ___newState0;
		__this->___State_6 = L_0;
		int32_t L_1 = ___newState0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0019;
			}
			case 2:
			{
				goto IL_0019;
			}
		}
	}

IL_0019:
	{
		// OnGameStateChanged?.Invoke(newState);
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_2 = ((RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_StaticFields*)il2cpp_codegen_static_fields_for(RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58_il2cpp_TypeInfo_var))->___OnGameStateChanged_7;
		Action_1_tD1B04F4749344DD8490C725F9581AE2F3DA9A150* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		int32_t L_4 = ___newState0;
		NullCheck(G_B3_0);
		Action_1_Invoke_mAAF6834401EEBBD77E33FA4052BF577431932E53_inline(G_B3_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void GSL.RewardWheelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelManager__ctor_mFE8A31CD139DF7EA974E80A4B81E06C63AED1878 (RewardWheelManager_t2469C6564315242442FB9CDE02DE12B40F22BB58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSingleton_1__ctor_mB303137C304A27E0E0E6B6EB515EB6626DE8BD50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseSingleton_1__ctor_mB303137C304A27E0E0E6B6EB515EB6626DE8BD50(__this, BaseSingleton_1__ctor_mB303137C304A27E0E0E6B6EB515EB6626DE8BD50_RuntimeMethod_var);
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
// System.Void FortuneWheel.ApplicationInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationInitializer_Awake_m01B82CE57C027F970D11BFAB3EF9581B887E8F82 (ApplicationInitializer_tE7AD91359F2F19898894AAF76E88A57BDEA5E258* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DOTween.Init();
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD));
		Nullable_1_t93085375A199522C60696471B1FB8B4B7FCB89FD L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = DOTween_Init_m4466425A659EA8EE076AC9C30BBFE6483AF4B134(L_0, L_1, L_2, NULL);
		// DOTween.SetTweensCapacity(500, 50);
		DOTween_SetTweensCapacity_m5BB4353C50A9527EA33141616FBF79E9BF946849(((int32_t)500), ((int32_t)50), NULL);
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)30), NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.ApplicationInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationInitializer__ctor_mA7AFE2FBDF4E6B8E08500DCCD1811722CAB69A92 (ApplicationInitializer_tE7AD91359F2F19898894AAF76E88A57BDEA5E258* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.AbstractBaseInput::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractBaseInput_OnPointerDown_mADBBB95B6A71AABFBBDFF8E178E34FB4071B1382 (AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.AbstractBaseInput::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractBaseInput_OnPointerUp_m0A96B057253DFB45DA530F7B89CB1D317FEFC043 (AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.AbstractBaseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractBaseInput__ctor_m55AE03AE14BAB14E73DAA307524C594E6F71A432 (AbstractBaseInput_tCEF7654F282E1ADF172699D68D8B4BED7673A4B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.AllRewardsCollectButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllRewardsCollectButton_ClickDown_m101A517B1ADB63A0CFDF13355AA051CF17FB2779 (AllRewardsCollectButton_tD8722C0082649EC8B704B647BE50D6D85F4DA107* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.AllRewardsCollectButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_AllRewardsCollectButton_m63F300059FE30BB009CB1A77E14C5E363B9FAFB3(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.AllRewardsCollectButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllRewardsCollectButton__ctor_m486E83E892C9CE488FB260FF15BE8CCD944BF3B6 (AllRewardsCollectButton_tD8722C0082649EC8B704B647BE50D6D85F4DA107* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.PremiumCurrencyContinueButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PremiumCurrencyContinueButton_ClickDown_mD8FD4575FA6ED9C9BD44CFAD26326B6AF28C8988 (PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.PremiumCurrencyContinueButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_PremiumCurrencyContinueButton_mE25C8A38D2DE8D9FDA8D0813F99F8385A7F995D5(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.PremiumCurrencyContinueButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PremiumCurrencyContinueButton__ctor_mED21D8F06692F338AF3526BE3E2CC9C42B3E0A18 (PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.QuitButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButton_ClickDown_m2D7478CFFD5350EF0BE04918416468BCC584B828 (QuitButton_tAB8E253FCDB8DEB137FC9CEB82925131917F8721* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.QuitButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_QuitButton_m40FA1CB8F7DABAB741FD4FBA33A4324B76CF655C(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.QuitButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButton__ctor_mB7675C1687F55008AFA206DDA0ABA9FF73421E7A (QuitButton_tAB8E253FCDB8DEB137FC9CEB82925131917F8721* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.ReturnButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnButton_ClickDown_m93F156570DDB064386CCE37B8749D9E7BFA40E39 (ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.ReturnButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_ReturnButton_mB90800451F6AD1BAEAC46AFCA1885915DEB00F1E(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.ReturnButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnButton__ctor_m15814A0F4E12D95FF659B2D999236EAE39822410 (ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.RewardsPanelCollectButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardsPanelCollectButton_ClickDown_m81F9BAA8FDE09F9FDCD09C27DC90250680CFD6FF (RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.RewardsPanelCollectButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_RewardsPanelCollectButton_m8C6220A22E92809F70C18AD764EC5BECBBACFB29(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.RewardsPanelCollectButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardsPanelCollectButton__ctor_mF7D990E0DDC6A5D05CF6B0FB9E68EA2615065F1A (RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.SpinButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinButton_ClickDown_m49B777CA542674DC3421F5C82268B965281DDA6E (SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.SpinButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_SpinButton_m01452FB2D440EDAA85F650A98CB3B235F108A2B4(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.SpinButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinButton__ctor_m530C0AF1D4C56A2F6644BE50BCA35DFF50CE43E4 (SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.TryAgainButton::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryAgainButton_ClickDown_mF8AF22859A8300822DFFE868B9BADB0186557F61 (TryAgainButton_t4AAADD0F567CAB966965F4B6692CB08108DD3D06* __this, const RuntimeMethod* method) 
{
	{
		// base.ClickDown();
		ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183(__this, NULL);
		// fortuneWheelManager.TryAgainButton();
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0 = ((ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166*)__this)->___fortuneWheelManager_7;
		NullCheck(L_0);
		FortuneWheelManager_TryAgainButton_mFCA48C571933C1694C0C9629E8BC82B0C564AC44(L_0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.TryAgainButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryAgainButton__ctor_m2030F4A3645A28BC68AD70A3949A4A24599F6269 (TryAgainButton_t4AAADD0F567CAB966965F4B6692CB08108DD3D06* __this, const RuntimeMethod* method) 
{
	{
		ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.ButtonUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_Awake_mDA17A85768BDB0F54D356B10047596E38DBEC3FB (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7_m8B695895E79C8CC9FFE743A794BF0136EF7A7A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fortuneWheelManager = FindObjectOfType<FortuneWheelManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_0;
		L_0 = Object_FindObjectOfType_TisFortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7_m8B695895E79C8CC9FFE743A794BF0136EF7A7A01(Object_FindObjectOfType_TisFortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7_m8B695895E79C8CC9FFE743A794BF0136EF7A7A01_RuntimeMethod_var);
		__this->___fortuneWheelManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fortuneWheelManager_7), (void*)L_0);
		// imageComponent = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imageComponent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageComponent_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.ButtonUI::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_OnPointerDown_m053A7471826C79FD0D5769F85719E7A0538B5D71 (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// ClickDown();
		VirtualActionInvoker0::Invoke(8 /* System.Void FortuneWheel.EventSystemInput.ButtonUI::ClickDown() */, __this);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.ButtonUI::ClickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_ClickDown_mFAC3B508AFC0F282E21B155302F4B5B072A92183 (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) 
{
	{
		// imageComponent.raycastTarget = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imageComponent_4;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_0, (bool)0);
		// imageComponent.color = disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imageComponent_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___disabledColor_6;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.ButtonUI::GetInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_GetInteractable_m77E42DF56777911401CCD71D56C5EC246ECCEBA4 (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) 
{
	{
		// imageComponent.color = normalColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imageComponent_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___normalColor_5;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// imageComponent.raycastTarget = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imageComponent_4;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_2, (bool)1);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.ButtonUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI__ctor_m5D3F060096EB0CC5B21BCACDE34A165E6021A3FD (ButtonUI_t725696A01FFD64A8FB58B334D08D58CB30263166* __this, const RuntimeMethod* method) 
{
	{
		// private Color normalColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___normalColor_5 = L_0;
		// private Color disabledColor = new Color(0.7843137f, 0.7843137f, 0.7843137f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.784313679f), (0.784313679f), (0.784313679f), (0.5f), /*hidden argument*/NULL);
		__this->___disabledColor_6 = L_1;
		AbstractBaseInput__ctor_m55AE03AE14BAB14E73DAA307524C594E6F71A432(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.InputOutSide::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutSide_OnPointerDown_m62310906951FB62DC9695D3ED1406623F0FFC60A (InputOutSide_t0304A9BD5F3ED32FD035579ED19CB5F3C13F7CC8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F5AFDAF0B2BB393ABFAC93B400CACAE70A217D);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("Finger Down" + eventData.position);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF8F5AFDAF0B2BB393ABFAC93B400CACAE70A217D, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.InputOutSide::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutSide_OnPointerUp_mAEC3ABD7B56682A27C19CCE18987E757A86C3553 (InputOutSide_t0304A9BD5F3ED32FD035579ED19CB5F3C13F7CC8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46B7A8F18B41BAA39A8E6FC5F8AA3DE5D3E7BDDA);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("Finger Up" + eventData.position);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral46B7A8F18B41BAA39A8E6FC5F8AA3DE5D3E7BDDA, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.InputOutSide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutSide__ctor_m1D4D8CA8F76BA863FFC8AF298953F82F8C3AC96C (InputOutSide_t0304A9BD5F3ED32FD035579ED19CB5F3C13F7CC8* __this, const RuntimeMethod* method) 
{
	{
		AbstractBaseInput__ctor_m55AE03AE14BAB14E73DAA307524C594E6F71A432(__this, NULL);
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
// System.Void FortuneWheel.EventSystemInput.NonDrawingGraphic::SetMaterialDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetMaterialDirty_mD1EF8DE19F302CAEECB3726B30F1E84518238451 (NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetMaterialDirty() { return; }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.NonDrawingGraphic::SetVerticesDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_SetVerticesDirty_m2C165496EFD8AECE1EF0F426DFA1A30F1FB4FA22 (NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80* __this, const RuntimeMethod* method) 
{
	{
		// public override void SetVerticesDirty() { return; }
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.NonDrawingGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic_OnPopulateMesh_m30AFA47D26E20214AD896FAAB5C8D9D5E2CADA90 (NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// return;
		return;
	}
}
// System.Void FortuneWheel.EventSystemInput.NonDrawingGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDrawingGraphic__ctor_m7A93BE9B5EEABCEA2FB502FC8E1CFF4ECCE60203 (NonDrawingGraphic_t91A4EA6B9E37B0FDF51501815267A2B081218C80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D(__this, NULL);
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
// System.Void FortuneWheel.Slots.RewardWheelSlot::SetItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelSlot_SetItem_m80C343B0EE328609A1B06AD2E3968FB3F9E481F7 (RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// amount = reward.amount;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_0 = __this->___reward_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___amount_5;
		__this->___amount_6 = L_1;
		// if (amount > 0)
		int32_t L_2 = __this->___amount_6;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// amountText.SetText("X" + reward.amount.ToString());
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___amountText_7;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_4 = __this->___reward_4;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___amount_5);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_6, NULL);
		NullCheck(L_3);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_3, L_7, (bool)1, NULL);
	}

IL_0040:
	{
		// if (reward.rewardType == RewardType.Bomb)
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_8 = __this->___reward_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___rewardType_4;
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// amountText.SetText("");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___amountText_7;
		NullCheck(L_10);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)1, NULL);
	}

IL_005e:
	{
		// rewardImage.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___rewardImage_5;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_12 = __this->___reward_4;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = L_12->___sprite_6;
		NullCheck(L_11);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Slots.RewardWheelSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardWheelSlot__ctor_m0729AE3C288546D2EBCFA95A6BC9A53E0948EE4D (RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.Slots.RewardDataSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardDataSO__ctor_mBFEA3759B6C104DA9BB2A325832617B5E61DD669 (RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void FortuneWheel.PathBar.RewardPathValue::SetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_SetPosition_m52B4F2F415802E07DEC614FF450EA3CE5B7873A4 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) 
{
	{
		// SetNewPositionValues(_pathValue);
		int32_t L_0 = ____pathValue0;
		RewardPathValue_SetNewPositionValues_m811D377DEA5457FE9DB4279EA22C2DCF0BA21D76(__this, L_0, NULL);
		// MoveNewPositionWithNewValues(_pathValue);
		int32_t L_1 = ____pathValue0;
		RewardPathValue_MoveNewPositionWithNewValues_mA07684E06E894FBE8419B8568E7E12A686136DA2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.PathBar.RewardPathValue::SetNewPositionValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_SetNewPositionValues_m811D377DEA5457FE9DB4279EA22C2DCF0BA21D76 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (_rectTransform.transform.position.x <= _endPoint.transform.position.x)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____rectTransform_10;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____endPoint_11;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		if ((!(((float)L_3) <= ((float)L_7))))
		{
			goto IL_0083;
		}
	}
	{
		// _rectTransform.anchoredPosition = _startPoint.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->____rectTransform_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->____startPoint_12;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		NullCheck(L_8);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_8, L_10, NULL);
		// _levelText.SetText((3 + _pathValue).ToString());
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->____levelText_7;
		int32_t L_12 = ____pathValue0;
		V_0 = ((int32_t)il2cpp_codegen_add(3, L_12));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_11);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_11, L_13, (bool)1, NULL);
		// if ((3 + _pathValue) % 5 == 0)
		int32_t L_14 = ____pathValue0;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(3, L_14))%5)))
		{
			goto IL_0072;
		}
	}
	{
		// _image.sprite = _greenBackground;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->____image_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->____greenBackground_4;
		NullCheck(L_15);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_15, L_16, NULL);
		return;
	}

IL_0072:
	{
		// _image.sprite = _blueBackground;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->____image_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->____blueBackground_5;
		NullCheck(L_17);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_18, NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.PathBar.RewardPathValue::MoveNewPositionWithNewValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue_MoveNewPositionWithNewValues_mA07684E06E894FBE8419B8568E7E12A686136DA2 (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, int32_t ____pathValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mB798E34D32AD9BA63A5F46F10C047AE591A246BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLink_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m2C06EA47FF3364B272F3BA8B489692DB5A7F4362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CMoveNewPositionWithNewValuesU3Eb__0_m23C64FDA294637C00D96EF4C0017371A4AC1432D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* L_0 = (U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mAEE6E88A59C44CA434AA477744121EEF3D97B610(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* L_2 = V_0;
		int32_t L_3 = ____pathValue0;
		NullCheck(L_2);
		L_2->____pathValue_1 = L_3;
		// _rectTransform.DOAnchorPosX(_rectTransform.anchoredPosition.x - 125, .5f).SetLink(_rectTransform.gameObject, LinkBehaviour.KillOnDestroy).OnComplete(() =>
		// {
		//     if (_rectTransform.transform.position.x >= _midPoint.transform.position.x - 72.5f && _rectTransform.transform.position.x <= _midPoint.transform.position.x + 72.5f)
		//     {
		//         _currentPathValueImage.sprite = _image.sprite;
		//         _currentPathValueText.SetText(_pathValue.ToString());
		//     }
		// });
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____rectTransform_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->____rectTransform_10;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_5, NULL);
		float L_7 = L_6.___x_0;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_8;
		L_8 = DOTweenModuleUI_DOAnchorPosX_m5EAB19C120C814E88467D196708BDE184F8E6E11(L_4, ((float)il2cpp_codegen_subtract(L_7, (125.0f))), (0.5f), (bool)0, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->____rectTransform_10;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_11;
		L_11 = TweenSettingsExtensions_SetLink_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m2C06EA47FF3364B272F3BA8B489692DB5A7F4362(L_8, L_10, 6, TweenSettingsExtensions_SetLink_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m2C06EA47FF3364B272F3BA8B489692DB5A7F4362_RuntimeMethod_var);
		U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* L_12 = V_0;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_13 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CMoveNewPositionWithNewValuesU3Eb__0_m23C64FDA294637C00D96EF4C0017371A4AC1432D_RuntimeMethod_var), NULL);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_14;
		L_14 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mB798E34D32AD9BA63A5F46F10C047AE591A246BA(L_11, L_13, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mB798E34D32AD9BA63A5F46F10C047AE591A246BA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FortuneWheel.PathBar.RewardPathValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPathValue__ctor_m6AAE64573D31F654A832AD1DC2028FC2A918195C (RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mAEE6E88A59C44CA434AA477744121EEF3D97B610 (U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FortuneWheel.PathBar.RewardPathValue/<>c__DisplayClass12_0::<MoveNewPositionWithNewValues>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CMoveNewPositionWithNewValuesU3Eb__0_m23C64FDA294637C00D96EF4C0017371A4AC1432D (U3CU3Ec__DisplayClass12_0_tE7150D9CF3E7794136CE6FD10B9831F6E7979B51* __this, const RuntimeMethod* method) 
{
	{
		// if (_rectTransform.transform.position.x >= _midPoint.transform.position.x - 72.5f && _rectTransform.transform.position.x <= _midPoint.transform.position.x + 72.5f)
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0->____rectTransform_10;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5->____midPoint_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_4) >= ((float)((float)il2cpp_codegen_subtract(L_9, (72.5f)))))))
		{
			goto IL_00b4;
		}
	}
	{
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_10 = __this->___U3CU3E4__this_0;
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_10->____rectTransform_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_15 = __this->___U3CU3E4__this_0;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = L_15->____midPoint_13;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___x_2;
		if ((!(((float)L_14) <= ((float)((float)il2cpp_codegen_add(L_19, (72.5f)))))))
		{
			goto IL_00b4;
		}
	}
	{
		// _currentPathValueImage.sprite = _image.sprite;
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_20 = __this->___U3CU3E4__this_0;
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = L_20->____currentPathValueImage_8;
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_22 = __this->___U3CU3E4__this_0;
		NullCheck(L_22);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = L_22->____image_6;
		NullCheck(L_23);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24;
		L_24 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_23, NULL);
		NullCheck(L_21);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_21, L_24, NULL);
		// _currentPathValueText.SetText(_pathValue.ToString());
		RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_25 = __this->___U3CU3E4__this_0;
		NullCheck(L_25);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = L_25->____currentPathValueText_9;
		int32_t* L_27 = (&__this->____pathValue_1);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		NullCheck(L_26);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_26, L_28, (bool)1, NULL);
	}

IL_00b4:
	{
		// });
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
// System.Void FortuneWheel.Wheel.FortuneWheelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_Start_mD0198A82857E02FDBE8EF409D541B27EF76CCFB7 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ClearRewardsInventorySlots();
		FortuneWheelManager_ClearRewardsInventorySlots_m0BA5F8E44699FE4600C8BF1E80FF5AE0DF805E2C(__this, NULL);
		// fortuneWheelInventoryManager.UpdateRewardPanelInventory();
		FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* L_0 = __this->___fortuneWheelInventoryManager_8;
		NullCheck(L_0);
		FortuneWheelInventoryManager_UpdateRewardPanelInventory_mD8052838B14ACAD9214E910DBE991210E21D1E32(L_0, NULL);
		// ChangeSlots().Forget();
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_1;
		L_1 = FortuneWheelManager_ChangeSlots_m1048E12DD849E8CD2173B3419430B29370344ECB(__this, NULL);
		V_0 = L_1;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// _isSpinning = false;
		__this->____isSpinning_33 = (bool)0;
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid FortuneWheel.Wheel.FortuneWheelManager::ChangeSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 FortuneWheelManager_ChangeSlots_m1048E12DD849E8CD2173B3419430B29370344ECB (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m26315786B8D1E568884CD2A1B44990ED7848DA06_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82(L_1, (&V_0), AsyncUniTaskVoidMethodBuilder_Start_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_m4C6805E081F5AC356C1FCDE311D113BF2236DB82_RuntimeMethod_var);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_3;
		L_3 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SetRewardsForWheelSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SetRewardsForWheelSlots_m27E597EBE8F88886B9D6A2DFD53D485943E5D429 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (_pathValue % 5 == 0 || _pathValue == 1)
		int32_t L_0 = __this->____pathValue_36;
		if (!((int32_t)(L_0%5)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->____pathValue_36;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}

IL_0013:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0017:
	{
		// int j = Random.Range(1, rewardDataList.Count);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_2 = __this->___rewardDataList_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_inline(L_2, List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, L_3, NULL);
		V_1 = L_4;
		// rewardWheelSlotList[i].reward = rewardDataList[j];
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_5 = __this->___rewardWheelSlotList_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_7;
		L_7 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_5, L_6, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_8 = __this->___rewardDataList_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_10;
		L_10 = List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395(L_8, L_9, List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___reward_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___reward_4), (void*)L_10);
		// SetRewardAndIncreasePerPathValue(i);
		int32_t L_11 = V_0;
		FortuneWheelManager_SetRewardAndIncreasePerPathValue_m1B0D7590DEF55D51834B78A2F7991449A32AD2A6(__this, L_11, NULL);
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_13 = V_0;
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_14 = __this->___rewardWheelSlotList_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_inline(L_14, List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0060:
	{
		// else if (_pathValue % 30 == 0)
		int32_t L_16 = __this->____pathValue_36;
		if (((int32_t)(L_16%((int32_t)30))))
		{
			goto IL_00b8;
		}
	}
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		V_2 = 0;
		goto IL_00a9;
	}

IL_006f:
	{
		// int j = Random.Range(0, superRewardDataList.Count);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_17 = __this->___superRewardDataList_7;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_inline(L_17, List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_RuntimeMethod_var);
		int32_t L_19;
		L_19 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_18, NULL);
		V_3 = L_19;
		// rewardWheelSlotList[i].reward = superRewardDataList[j];
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_20 = __this->___rewardWheelSlotList_5;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_22;
		L_22 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_20, L_21, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_23 = __this->___superRewardDataList_7;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_25;
		L_25 = List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395(L_23, L_24, List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var);
		NullCheck(L_22);
		L_22->___reward_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___reward_4), (void*)L_25);
		// SetRewardAndIncreasePerPathValue(i);
		int32_t L_26 = V_2;
		FortuneWheelManager_SetRewardAndIncreasePerPathValue_m1B0D7590DEF55D51834B78A2F7991449A32AD2A6(__this, L_26, NULL);
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a9:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_28 = V_2;
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_29 = __this->___rewardWheelSlotList_5;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_inline(L_29, List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_006f;
		}
	}
	{
		return;
	}

IL_00b8:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		V_4 = 0;
		goto IL_0133;
	}

IL_00bd:
	{
		// if (i == 0)
		int32_t L_31 = V_4;
		if (L_31)
		{
			goto IL_00f3;
		}
	}
	{
		// rewardWheelSlotList[i].reward = rewardDataList[0];//Bomb index
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_32 = __this->___rewardWheelSlotList_5;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_34;
		L_34 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_32, L_33, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_35 = __this->___rewardDataList_4;
		NullCheck(L_35);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_36;
		L_36 = List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395(L_35, 0, List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var);
		NullCheck(L_34);
		L_34->___reward_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___reward_4), (void*)L_36);
		// rewardWheelSlotList[i].SetItem();
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_37 = __this->___rewardWheelSlotList_5;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_39;
		L_39 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_37, L_38, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		NullCheck(L_39);
		RewardWheelSlot_SetItem_m80C343B0EE328609A1B06AD2E3968FB3F9E481F7(L_39, NULL);
		goto IL_012d;
	}

IL_00f3:
	{
		// int j = Random.Range(1, rewardDataList.Count);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_40 = __this->___rewardDataList_4;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_inline(L_40, List_1_get_Count_m1F6FD396864F871765FA74C9EEC017006897FC81_RuntimeMethod_var);
		int32_t L_42;
		L_42 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, L_41, NULL);
		V_5 = L_42;
		// rewardWheelSlotList[i].reward = rewardDataList[j];
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_43 = __this->___rewardWheelSlotList_5;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_45;
		L_45 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_43, L_44, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		List_1_t958FD4DF98E1FC8A65A335B767E8CAFD848BC3AB* L_46 = __this->___rewardDataList_4;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_48;
		L_48 = List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395(L_46, L_47, List_1_get_Item_mDD2318E17B2EB925CB706304DE6A79D541E66395_RuntimeMethod_var);
		NullCheck(L_45);
		L_45->___reward_4 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___reward_4), (void*)L_48);
		// SetRewardAndIncreasePerPathValue(i);
		int32_t L_49 = V_4;
		FortuneWheelManager_SetRewardAndIncreasePerPathValue_m1B0D7590DEF55D51834B78A2F7991449A32AD2A6(__this, L_49, NULL);
	}

IL_012d:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0133:
	{
		// for (int i = 0; i < rewardWheelSlotList.Count; i++)
		int32_t L_51 = V_4;
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_52 = __this->___rewardWheelSlotList_5;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_inline(L_52, List_1_get_Count_m357C365075445D77368960DFAE8A19F404ACC9E6_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_00bd;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SetRewardAndIncreasePerPathValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SetRewardAndIncreasePerPathValue_m1B0D7590DEF55D51834B78A2F7991449A32AD2A6 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardWheelSlotList[i].reward.amount += Mathf.RoundToInt(_pathValue / 10);
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_0 = __this->___rewardWheelSlotList_5;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_2;
		L_2 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_0, L_1, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		NullCheck(L_2);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_3 = L_2->___reward_4;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___amount_5;
		int32_t L_6 = __this->____pathValue_36;
		int32_t L_7;
		L_7 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((int32_t)(L_6/((int32_t)10)))), NULL);
		NullCheck(L_4);
		L_4->___amount_5 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		// rewardWheelSlotList[i].SetItem();
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_8 = __this->___rewardWheelSlotList_5;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_10;
		L_10 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_8, L_9, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		NullCheck(L_10);
		RewardWheelSlot_SetItem_m80C343B0EE328609A1B06AD2E3968FB3F9E481F7(L_10, NULL);
		// rewardWheelSlotList[i].reward.amount -= Mathf.RoundToInt(_pathValue / 10);
		List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_11 = __this->___rewardWheelSlotList_5;
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_13;
		L_13 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_11, L_12, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		NullCheck(L_13);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_14 = L_13->___reward_4;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___amount_5;
		int32_t L_17 = __this->____pathValue_36;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)((int32_t)(L_17/((int32_t)10)))), NULL);
		NullCheck(L_15);
		L_15->___amount_5 = ((int32_t)il2cpp_codegen_subtract(L_16, L_18));
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::SpinButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_SpinButton_m01452FB2D440EDAA85F650A98CB3B235F108A2B4 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!_isSpinning)
		bool L_0 = __this->____isSpinning_33;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// SpinTheWheel(_angle, _spinDuration).Forget();
		int32_t L_1 = __this->____angle_34;
		float L_2 = __this->____spinDuration_10;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_3;
		L_3 = FortuneWheelManager_SpinTheWheel_mCEB11DFEDAA9CFADF4DD320ED3AE4CFBEA8C5893(__this, ((float)L_1), L_2, NULL);
		V_0 = L_3;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid FortuneWheel.Wheel.FortuneWheelManager::SpinTheWheel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 FortuneWheelManager_SpinTheWheel_mCEB11DFEDAA9CFADF4DD320ED3AE4CFBEA8C5893 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, float ___endValue0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m26315786B8D1E568884CD2A1B44990ED7848DA06_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		float L_1 = ___endValue0;
		(&V_0)->___endValue_3 = L_1;
		float L_2 = ___duration1;
		(&V_0)->___duration_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86(L_3, (&V_0), AsyncUniTaskVoidMethodBuilder_Start_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7F05142DA305EE861383EFDECB5607A0ED34AB86_RuntimeMethod_var);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_5;
		L_5 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_4, NULL);
		return L_5;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::AfterSpinCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_AfterSpinCheck_m94535B208E8E33A3F82EFF5508DD94437DDE512B (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD548277217C4E905898AA7261839219AA043647A_RuntimeMethod_var);
		return;
	}
}
// System.Int32 FortuneWheel.Wheel.FortuneWheelManager::CalculateIndicatorShowsSlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheelManager_CalculateIndicatorShowsSlotIndex_m1F423ECAEC434822AAEFD4F9E196DBBCE78936C1 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int mainAngle = (int)(_angle) % 360;
		int32_t L_0 = __this->____angle_34;
		// int splitValue = (int)mainAngle / 45;
		V_0 = ((int32_t)(((int32_t)(L_0%((int32_t)360)))/((int32_t)45)));
		// int currentIndex = ((_initialIndex - splitValue) + 8) % 8;
		int32_t L_1 = __this->____initialIndex_35;
		int32_t L_2 = V_0;
		// return currentIndex;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), 8))%8));
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::ClearRewardsInventorySlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_ClearRewardsInventorySlots_m0BA5F8E44699FE4600C8BF1E80FF5AE0DF805E2C (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var slot in playerInventory.inventorySlots)
		WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* L_0 = __this->___playerInventory_9;
		NullCheck(L_0);
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_1 = L_0->___inventorySlots_4;
		NullCheck(L_1);
		Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A L_2;
		L_2 = List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E(L_1, List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A((&V_0), Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0013_1:
			{
				// foreach (var slot in playerInventory.inventorySlots)
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_3;
				L_3 = Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_inline((&V_0), Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_RuntimeMethod_var);
				// slot._reward = null;
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_4 = L_3;
				NullCheck(L_4);
				L_4->____reward_0 = (RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_4->____reward_0), (void*)(RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5*)NULL);
				// slot._rewardAmount = 0;
				NullCheck(L_4);
				L_4->____rewardAmount_1 = 0;
			}

IL_0027_1:
			{
				// foreach (var slot in playerInventory.inventorySlots)
				bool L_5;
				L_5 = Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD((&V_0), Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::OpenBombLosePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_OpenBombLosePanel_mBB67F7BE01DFC5C14269B6CFAC5C40ACE8E60F53 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	{
		// _bombLosePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____bombLosePanel_25;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::OpenEndPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_OpenEndPanel_m043AFC21CD46A8CE122ED98342907A93CD7A9FC9 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message != "")
		String_t* L_0 = ___message0;
		bool L_1;
		L_1 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _allRewardsCollectedPanelText.SetText(message);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->____allRewardsCollectedPanelText_27;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_2, L_3, (bool)1, NULL);
	}

IL_001a:
	{
		// _allRewardsCollectedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____allRewardsCollectedPanel_26;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::AllRewardsCollectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_AllRewardsCollectButton_m63F300059FE30BB009CB1A77E14C5E363B9FAFB3 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OpenEndPanel("");
		FortuneWheelManager_OpenEndPanel_m043AFC21CD46A8CE122ED98342907A93CD7A9FC9(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// _quitPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____quitPanel_24;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::PremiumCurrencyContinueButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_PremiumCurrencyContinueButton_mE25C8A38D2DE8D9FDA8D0813F99F8385A7F995D5 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	{
		// _bombLosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____bombLosePanel_25;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _premiumCurrencyContinueButton.GetInteractable();
		PremiumCurrencyContinueButton_tB48E912D183D344BE019AA9521F5B7C4AA60F87C* L_1 = __this->____premiumCurrencyContinueButton_29;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(9 /* System.Void FortuneWheel.EventSystemInput.ButtonUI::GetInteractable() */, L_1);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_QuitButton_m40FA1CB8F7DABAB741FD4FBA33A4324B76CF655C (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral438D41E6DC04D5F8A2F1A67DE47CA5CB359EEEE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OpenEndPanel("All Rewards were lost");
		FortuneWheelManager_OpenEndPanel_m043AFC21CD46A8CE122ED98342907A93CD7A9FC9(__this, _stringLiteral438D41E6DC04D5F8A2F1A67DE47CA5CB359EEEE6, NULL);
		// _bombLosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____bombLosePanel_25;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::ReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_ReturnButton_mB90800451F6AD1BAEAC46AFCA1885915DEB00F1E (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	{
		// _quitPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____quitPanel_24;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _rewardsPanelCollectButton.GetInteractable();
		RewardsPanelCollectButton_t01FF8FD8AF669F56CB10A13757EB4EDFB7AF516F* L_1 = __this->____rewardsPanelCollectButton_31;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(9 /* System.Void FortuneWheel.EventSystemInput.ButtonUI::GetInteractable() */, L_1);
		// _returnButton.GetInteractable();
		ReturnButton_t43924CD0852FC7CC9FD7C9C92636E5B064A3BF5D* L_2 = __this->____returnButton_30;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(9 /* System.Void FortuneWheel.EventSystemInput.ButtonUI::GetInteractable() */, L_2);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::RewardsPanelCollectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_RewardsPanelCollectButton_m8C6220A22E92809F70C18AD764EC5BECBBACFB29 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	{
		// _quitPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____quitPanel_24;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::TryAgainButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager_TryAgainButton_mFCA48C571933C1694C0C9629E8BC82B0C564AC44 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelManager__ctor_m950FF380F29CF012D21CA2BE4BB4BAEB5EE668C2 (FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* __this, const RuntimeMethod* method) 
{
	{
		// private int _pathValue = 1;
		__this->____pathValue_36 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSlotsU3Ed__35_MoveNext_m167743A24B8E4C67D99EF6148AC429B5CA503DA8 (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* V_1 = NULL;
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00c6_1;
				}
				case 1:
				{
					goto IL_0152_1;
				}
				case 2:
				{
					goto IL_01ce_1;
				}
				case 3:
				{
					goto IL_025a_1;
				}
				case 4:
				{
					goto IL_02d5_1;
				}
				case 5:
				{
					goto IL_0361_1;
				}
				case 6:
				{
					goto IL_03d6_1;
				}
			}
		}
		{
			// _randomNumber = Random.Range(0, 101);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_3 = V_1;
			int32_t L_4;
			L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)101), NULL);
			NullCheck(L_3);
			L_3->____randomNumber_37 = L_4;
			// if (_randomNumber < _bombChanceRate)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = L_5->____randomNumber_37;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->____bombChanceRate_23;
			if ((((int32_t)L_6) >= ((int32_t)L_8)))
			{
				goto IL_0059_1;
			}
		}
		{
			// _angle = -1 * 45 * 32;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_9 = V_1;
			NullCheck(L_9);
			L_9->____angle_34 = ((int32_t)-1440);
			goto IL_006b_1;
		}

IL_0059_1:
		{
			// _angle = -1 * 45 * Random.Range(33, 40);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_10 = V_1;
			int32_t L_11;
			L_11 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)33), ((int32_t)40), NULL);
			NullCheck(L_10);
			L_10->____angle_34 = ((int32_t)il2cpp_codegen_multiply(((int32_t)-45), L_11));
		}

IL_006b_1:
		{
			// SetRewardsForWheelSlots();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_12 = V_1;
			NullCheck(L_12);
			FortuneWheelManager_SetRewardsForWheelSlots_m27E597EBE8F88886B9D6A2DFD53D485943E5D429(L_12, NULL);
			// if (_pathValue % 30 == 0)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = L_13->____pathValue_36;
			if (((int32_t)(L_14%((int32_t)30))))
			{
				goto IL_017a_1;
			}
		}
		{
			// await _wheelCanvasGroup.DOFade(0, 0.5f);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_15 = V_1;
			NullCheck(L_15);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_16 = L_15->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_17;
			L_17 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_16, (0.0f), (0.5f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_18;
			L_18 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_17, NULL);
			V_2 = L_18;
			bool L_19;
			L_19 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_19)
			{
				goto IL_00e2_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_21 = V_2;
			__this->___U3CU3Eu__1_3 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_22, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_00c6_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_23 = __this->___U3CU3Eu__1_3;
			V_2 = L_23;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_24 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_24, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00e2_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			// _wheelImage.sprite = _wheelGoldSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_26 = V_1;
			NullCheck(L_26);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = L_26->____wheelImage_12;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_28 = V_1;
			NullCheck(L_28);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = L_28->____wheelGoldSprite_17;
			NullCheck(L_27);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_27, L_29, NULL);
			// _indicatorImage.sprite = _indicatorGoldSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_30 = V_1;
			NullCheck(L_30);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = L_30->____indicatorImage_13;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_32 = V_1;
			NullCheck(L_32);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = L_32->____indicatorGoldSprite_19;
			NullCheck(L_31);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_33, NULL);
			// await _wheelCanvasGroup.DOFade(1, 1);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_34 = V_1;
			NullCheck(L_34);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_35 = L_34->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_36;
			L_36 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_35, (1.0f), (1.0f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_37;
			L_37 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_36, NULL);
			V_2 = L_37;
			bool L_38;
			L_38 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_38)
			{
				goto IL_016e_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_40 = V_2;
			__this->___U3CU3Eu__1_3 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_41 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_41, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_0152_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_42 = __this->___U3CU3Eu__1_3;
			V_2 = L_42;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_43 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_43, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_016e_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			goto IL_0384_1;
		}

IL_017a_1:
		{
			// else if (_pathValue % 5 == 0)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_45 = V_1;
			NullCheck(L_45);
			int32_t L_46 = L_45->____pathValue_36;
			if (((int32_t)(L_46%5)))
			{
				goto IL_0282_1;
			}
		}
		{
			// await _wheelCanvasGroup.DOFade(0, 0.5f);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_47 = V_1;
			NullCheck(L_47);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_48 = L_47->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_49;
			L_49 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_48, (0.0f), (0.5f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_50;
			L_50 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_49, NULL);
			V_2 = L_50;
			bool L_51;
			L_51 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_51)
			{
				goto IL_01ea_1;
			}
		}
		{
			int32_t L_52 = 2;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_53 = V_2;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_54 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_54, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_01ce_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_55 = __this->___U3CU3Eu__1_3;
			V_2 = L_55;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_56 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_01ea_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			// _wheelImage.sprite = _wheelSilverSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_58 = V_1;
			NullCheck(L_58);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_59 = L_58->____wheelImage_12;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_60 = V_1;
			NullCheck(L_60);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_61 = L_60->____wheelSilverSprite_15;
			NullCheck(L_59);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_59, L_61, NULL);
			// _indicatorImage.sprite = _indicatorSilverSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_62 = V_1;
			NullCheck(L_62);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = L_62->____indicatorImage_13;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_64 = V_1;
			NullCheck(L_64);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_65 = L_64->____indicatorSilverSprite_18;
			NullCheck(L_63);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_63, L_65, NULL);
			// await _wheelCanvasGroup.DOFade(1, 1);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_66 = V_1;
			NullCheck(L_66);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_67 = L_66->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_68;
			L_68 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_67, (1.0f), (1.0f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_69;
			L_69 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_68, NULL);
			V_2 = L_69;
			bool L_70;
			L_70 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_70)
			{
				goto IL_0276_1;
			}
		}
		{
			int32_t L_71 = 3;
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_72 = V_2;
			__this->___U3CU3Eu__1_3 = L_72;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_73 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_73, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_025a_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_74 = __this->___U3CU3Eu__1_3;
			V_2 = L_74;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_75 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_75, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_76 = (-1);
			V_0 = L_76;
			__this->___U3CU3E1__state_0 = L_76;
		}

IL_0276_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			goto IL_0384_1;
		}

IL_0282_1:
		{
			// else if (_pathValue > 1)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_77 = V_1;
			NullCheck(L_77);
			int32_t L_78 = L_77->____pathValue_36;
			if ((((int32_t)L_78) <= ((int32_t)1)))
			{
				goto IL_0384_1;
			}
		}
		{
			// await _wheelCanvasGroup.DOFade(0, 0.5f);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_79 = V_1;
			NullCheck(L_79);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_80 = L_79->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_81;
			L_81 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_80, (0.0f), (0.5f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_82;
			L_82 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_81, NULL);
			V_2 = L_82;
			bool L_83;
			L_83 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_83)
			{
				goto IL_02f1_1;
			}
		}
		{
			int32_t L_84 = 4;
			V_0 = L_84;
			__this->___U3CU3E1__state_0 = L_84;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_85 = V_2;
			__this->___U3CU3Eu__1_3 = L_85;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_86 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_86, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_02d5_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_87 = __this->___U3CU3Eu__1_3;
			V_2 = L_87;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_88 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_88, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_89 = (-1);
			V_0 = L_89;
			__this->___U3CU3E1__state_0 = L_89;
		}

IL_02f1_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			// _wheelImage.sprite = _wheelBronzeSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_90 = V_1;
			NullCheck(L_90);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = L_90->____wheelImage_12;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_92 = V_1;
			NullCheck(L_92);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_93 = L_92->____wheelBronzeSprite_16;
			NullCheck(L_91);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_91, L_93, NULL);
			// _indicatorImage.sprite = _indicatorBronzeSprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_94 = V_1;
			NullCheck(L_94);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_95 = L_94->____indicatorImage_13;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_96 = V_1;
			NullCheck(L_96);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_97 = L_96->____indicatorBronzeSprite_20;
			NullCheck(L_95);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_95, L_97, NULL);
			// await _wheelCanvasGroup.DOFade(1, 1);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_98 = V_1;
			NullCheck(L_98);
			CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_99 = L_98->____wheelCanvasGroup_14;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_100;
			L_100 = DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D(L_99, (1.0f), (1.0f), NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_101;
			L_101 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_100, NULL);
			V_2 = L_101;
			bool L_102;
			L_102 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_102)
			{
				goto IL_037d_1;
			}
		}
		{
			int32_t L_103 = 5;
			V_0 = L_103;
			__this->___U3CU3E1__state_0 = L_103;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_104 = V_2;
			__this->___U3CU3Eu__1_3 = L_104;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_105 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_inline(L_105, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_RuntimeMethod_var);
			goto IL_0432;
		}

IL_0361_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_106 = __this->___U3CU3Eu__1_3;
			V_2 = L_106;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_107 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_107, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_108 = (-1);
			V_0 = L_108;
			__this->___U3CU3E1__state_0 = L_108;
		}

IL_037d_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
		}

IL_0384_1:
		{
			// await UniTask.Delay(TimeSpan.FromSeconds(0.5f), ignoreTimeScale: false);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_109;
			L_109 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((0.5), NULL);
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_110 = V_4;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_111;
			L_111 = UniTask_Delay_mCB53E129996BE63CF8630CE0567831CBACAE9910(L_109, (bool)0, 8, L_110, NULL);
			V_5 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_112;
			L_112 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_5), NULL);
			V_3 = L_112;
			bool L_113;
			L_113 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_113)
			{
				goto IL_03f2_1;
			}
		}
		{
			int32_t L_114 = 6;
			V_0 = L_114;
			__this->___U3CU3E1__state_0 = L_114;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_115 = V_3;
			__this->___U3CU3Eu__2_4 = L_115;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_116 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_inline(L_116, (&V_3), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_RuntimeMethod_var);
			goto IL_0432;
		}

IL_03d6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_117 = __this->___U3CU3Eu__2_4;
			V_3 = L_117;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_118 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_118, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_119 = (-1);
			V_0 = L_119;
			__this->___U3CU3E1__state_0 = L_119;
		}

IL_03f2_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// _spinButton.GetInteractable();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_120 = V_1;
			NullCheck(L_120);
			SpinButton_t1272241393F2ECAB5789B8143557B95B3BC5EB47* L_121 = L_120->____spinButton_32;
			NullCheck(L_121);
			VirtualActionInvoker0::Invoke(9 /* System.Void FortuneWheel.EventSystemInput.ButtonUI::GetInteractable() */, L_121);
			goto IL_041f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0406;
		}
		throw e;
	}

CATCH_0406:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_122 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_123 = V_6;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_122, L_123, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0432;
	}// end catch (depth: 1)

IL_041f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_124 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_124, NULL);
	}

IL_0432:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeSlotsU3Ed__35_MoveNext_m167743A24B8E4C67D99EF6148AC429B5CA503DA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*>(__this + _offset);
	U3CChangeSlotsU3Ed__35_MoveNext_m167743A24B8E4C67D99EF6148AC429B5CA503DA8(_thisAdjusted, method);
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<ChangeSlots>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSlotsU3Ed__35_SetStateMachine_m3A4B793A3EDEDD56DE152F60C285FF62F890DD93 (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeSlotsU3Ed__35_SetStateMachine_m3A4B793A3EDEDD56DE152F60C285FF62F890DD93_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*>(__this + _offset);
	U3CChangeSlotsU3Ed__35_SetStateMachine_m3A4B793A3EDEDD56DE152F60C285FF62F890DD93(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinTheWheelU3Ed__39_MoveNext_m18781DDAF0788837C9C63A8E59EB1336D52C0828 (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFD5EA68A00F9EA6B5753B7375CDB7B6DE1E0502C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3B398EEDB6DC6CAD163BFCAD1D3FDC03FC7E7B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m62B276169801531BCD58B05E4A8F1DC6603969E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* V_1 = NULL;
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0084_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0122_1;
			}
		}
		{
			// _isSpinning = true;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_4 = V_1;
			NullCheck(L_4);
			L_4->____isSpinning_33 = (bool)1;
			// await _wheelTransform.DORotate(new Vector3(0, 0, endValue), duration, RotateMode.FastBeyond360).SetEase(Ease.OutBack, .5f);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_5 = V_1;
			NullCheck(L_5);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->____wheelTransform_11;
			float L_7 = __this->___endValue_3;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
			memset((&L_8), 0, sizeof(L_8));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
			float L_9 = __this->___duration_4;
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_10;
			L_10 = ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03(L_6, L_8, L_9, 1, NULL);
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_11;
			L_11 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m62B276169801531BCD58B05E4A8F1DC6603969E7(L_10, ((int32_t)27), (0.5f), TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m62B276169801531BCD58B05E4A8F1DC6603969E7_RuntimeMethod_var);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_12;
			L_12 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_11, NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_2), NULL);
			if (L_13)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_15 = V_2;
			__this->___U3CU3Eu__1_5 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___tween_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_inline(L_16, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_RuntimeMethod_var);
			goto IL_01e1;
		}

IL_0084_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_17 = __this->___U3CU3Eu__1_5;
			V_2 = L_17;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_18 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_18, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00a0_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_2), NULL);
			// _wheelTransform.eulerAngles = new Vector3(0.0f, 0.0f, endValue);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_20 = V_1;
			NullCheck(L_20);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->____wheelTransform_11;
			float L_22 = __this->___endValue_3;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			memset((&L_23), 0, sizeof(L_23));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), (0.0f), L_22, /*hidden argument*/NULL);
			NullCheck(L_21);
			Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_21, L_23, NULL);
			// AfterSpinCheck();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_24 = V_1;
			NullCheck(L_24);
			FortuneWheelManager_AfterSpinCheck_m94535B208E8E33A3F82EFF5508DD94437DDE512B(L_24, NULL);
			// await UniTask.Delay(TimeSpan.FromSeconds(1), ignoreTimeScale: false);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_25;
			L_25 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((1.0), NULL);
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_26 = V_4;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = UniTask_Delay_mCB53E129996BE63CF8630CE0567831CBACAE9910(L_25, (bool)0, 8, L_26, NULL);
			V_5 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_5), NULL);
			V_3 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_29)
			{
				goto IL_013e_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_3;
			__this->___U3CU3Eu__2_6 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_6))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_inline(L_32, (&V_3), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_RuntimeMethod_var);
			goto IL_01e1;
		}

IL_0122_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__2_6;
			V_3 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_013e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// if (_bombChanceRate < 45)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_36 = V_1;
			NullCheck(L_36);
			int32_t L_37 = L_36->____bombChanceRate_23;
			if ((((int32_t)L_37) >= ((int32_t)((int32_t)45))))
			{
				goto IL_015d_1;
			}
		}
		{
			// _bombChanceRate += 2;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_38 = V_1;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_39 = V_1;
			NullCheck(L_39);
			int32_t L_40 = L_39->____bombChanceRate_23;
			NullCheck(L_38);
			L_38->____bombChanceRate_23 = ((int32_t)il2cpp_codegen_add(L_40, 2));
		}

IL_015d_1:
		{
			// _pathValue++;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_41 = V_1;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_42 = V_1;
			NullCheck(L_42);
			int32_t L_43 = L_42->____pathValue_36;
			NullCheck(L_41);
			L_41->____pathValue_36 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			// for (int i = 0; i < rewardPathValueList.Count; i++)
			V_6 = 0;
			goto IL_018e_1;
		}

IL_0170_1:
		{
			// rewardPathValueList[i].SetPosition(_pathValue);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_44 = V_1;
			NullCheck(L_44);
			List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794* L_45 = L_44->___rewardPathValueList_6;
			int32_t L_46 = V_6;
			NullCheck(L_45);
			RewardPathValue_t09381C8A72715775A97832F02497135CC08F7B09* L_47;
			L_47 = List_1_get_Item_m3B398EEDB6DC6CAD163BFCAD1D3FDC03FC7E7B72(L_45, L_46, List_1_get_Item_m3B398EEDB6DC6CAD163BFCAD1D3FDC03FC7E7B72_RuntimeMethod_var);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_48 = V_1;
			NullCheck(L_48);
			int32_t L_49 = L_48->____pathValue_36;
			NullCheck(L_47);
			RewardPathValue_SetPosition_m52B4F2F415802E07DEC614FF450EA3CE5B7873A4(L_47, L_49, NULL);
			// for (int i = 0; i < rewardPathValueList.Count; i++)
			int32_t L_50 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		}

IL_018e_1:
		{
			// for (int i = 0; i < rewardPathValueList.Count; i++)
			int32_t L_51 = V_6;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_52 = V_1;
			NullCheck(L_52);
			List_1_t9DB9F356C56927002060E9D3DD428A4DDB09A794* L_53 = L_52->___rewardPathValueList_6;
			NullCheck(L_53);
			int32_t L_54;
			L_54 = List_1_get_Count_mFD5EA68A00F9EA6B5753B7375CDB7B6DE1E0502C_inline(L_53, List_1_get_Count_mFD5EA68A00F9EA6B5753B7375CDB7B6DE1E0502C_RuntimeMethod_var);
			if ((((int32_t)L_51) < ((int32_t)L_54)))
			{
				goto IL_0170_1;
			}
		}
		{
			// ChangeSlots().Forget();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_55 = V_1;
			NullCheck(L_55);
			UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_56;
			L_56 = FortuneWheelManager_ChangeSlots_m1048E12DD849E8CD2173B3419430B29370344ECB(L_55, NULL);
			V_7 = L_56;
			UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_7), NULL);
			// _isSpinning = false;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_57 = V_1;
			NullCheck(L_57);
			L_57->____isSpinning_33 = (bool)0;
			goto IL_01ce;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b5;
		}
		throw e;
	}

CATCH_01b5:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_58 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_59 = V_8;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_58, L_59, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e1;
	}// end catch (depth: 1)

IL_01ce:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_60 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_60, NULL);
	}

IL_01e1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSpinTheWheelU3Ed__39_MoveNext_m18781DDAF0788837C9C63A8E59EB1336D52C0828_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*>(__this + _offset);
	U3CSpinTheWheelU3Ed__39_MoveNext_m18781DDAF0788837C9C63A8E59EB1336D52C0828(_thisAdjusted, method);
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<SpinTheWheel>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpinTheWheelU3Ed__39_SetStateMachine_m5E8A2E6923AB8865F5C47DB27857685376BDA070 (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSpinTheWheelU3Ed__39_SetStateMachine_m5E8A2E6923AB8865F5C47DB27857685376BDA070_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*>(__this + _offset);
	U3CSpinTheWheelU3Ed__39_SetStateMachine_m5E8A2E6923AB8865F5C47DB27857685376BDA070(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterSpinCheckU3Ed__40_MoveNext_m247B5616931683236052007D24CDB5CAFB184888 (U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* V_1 = NULL;
	int32_t V_2 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_01f4_1;
				}
				case 1:
				{
					goto IL_026c_1;
				}
				case 2:
				{
					goto IL_0326_1;
				}
			}
		}
		{
			// int currentIndex = CalculateIndicatorShowsSlotIndex();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = FortuneWheelManager_CalculateIndicatorShowsSlotIndex_m1F423ECAEC434822AAEFD4F9E196DBBCE78936C1(L_3, NULL);
			V_2 = L_4;
			// if (rewardWheelSlotList[currentIndex].reward.rewardType == RewardType.Bomb)
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_5 = V_1;
			NullCheck(L_5);
			List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_6 = L_5->___rewardWheelSlotList_5;
			int32_t L_7 = V_2;
			NullCheck(L_6);
			RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_8;
			L_8 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_6, L_7, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
			NullCheck(L_8);
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_9 = L_8->___reward_4;
			NullCheck(L_9);
			int32_t L_10 = L_9->___rewardType_4;
			if (L_10)
			{
				goto IL_004a_1;
			}
		}
		{
			// OpenBombLosePanel();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_11 = V_1;
			NullCheck(L_11);
			FortuneWheelManager_OpenBombLosePanel_mBB67F7BE01DFC5C14269B6CFAC5C40ACE8E60F53(L_11, NULL);
			goto IL_0360_1;
		}

IL_004a_1:
		{
			// rewardWheelSlotList[currentIndex].reward.amount += _pathValue / 10;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_12 = V_1;
			NullCheck(L_12);
			List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_13 = L_12->___rewardWheelSlotList_5;
			int32_t L_14 = V_2;
			NullCheck(L_13);
			RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_15;
			L_15 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_13, L_14, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
			NullCheck(L_15);
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_16 = L_15->___reward_4;
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_17 = L_16;
			NullCheck(L_17);
			int32_t L_18 = L_17->___amount_5;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_19 = V_1;
			NullCheck(L_19);
			int32_t L_20 = L_19->____pathValue_36;
			NullCheck(L_17);
			L_17->___amount_5 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(L_20/((int32_t)10)))));
			// playerInventory.AddRewardToInventory(rewardWheelSlotList[currentIndex].reward);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_21 = V_1;
			NullCheck(L_21);
			WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* L_22 = L_21->___playerInventory_9;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_23 = V_1;
			NullCheck(L_23);
			List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_24 = L_23->___rewardWheelSlotList_5;
			int32_t L_25 = V_2;
			NullCheck(L_24);
			RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_26;
			L_26 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_24, L_25, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
			NullCheck(L_26);
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_27 = L_26->___reward_4;
			NullCheck(L_22);
			bool L_28;
			L_28 = WheelRewardInventorySettingsSO_AddRewardToInventory_m59FF6C481D11F34B0DE71DEB192490A783DA1710(L_22, L_27, NULL);
			// rewardWheelSlotList[currentIndex].reward.amount -= _pathValue / 10;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_29 = V_1;
			NullCheck(L_29);
			List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_30 = L_29->___rewardWheelSlotList_5;
			int32_t L_31 = V_2;
			NullCheck(L_30);
			RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_32;
			L_32 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_30, L_31, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
			NullCheck(L_32);
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_33 = L_32->___reward_4;
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_34 = L_33;
			NullCheck(L_34);
			int32_t L_35 = L_34->___amount_5;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_36 = V_1;
			NullCheck(L_36);
			int32_t L_37 = L_36->____pathValue_36;
			NullCheck(L_34);
			L_34->___amount_5 = ((int32_t)il2cpp_codegen_subtract(L_35, ((int32_t)(L_37/((int32_t)10)))));
			// _rewardsMoveRewardsPanelImage.sprite = rewardWheelSlotList[currentIndex].reward.sprite;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_38 = V_1;
			NullCheck(L_38);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = L_38->____rewardsMoveRewardsPanelImage_22;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_40 = V_1;
			NullCheck(L_40);
			List_1_tFE913C4185B41F19222729AD035D3456710F5B99* L_41 = L_40->___rewardWheelSlotList_5;
			int32_t L_42 = V_2;
			NullCheck(L_41);
			RewardWheelSlot_t14F78927B7C83C9067EF04314183F5D9C25B5ED8* L_43;
			L_43 = List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3(L_41, L_42, List_1_get_Item_m878C1C4EE3B2A1B40A15919E50349A4FB834C2B3_RuntimeMethod_var);
			NullCheck(L_43);
			RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_44 = L_43->___reward_4;
			NullCheck(L_44);
			Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_45 = L_44->___sprite_6;
			NullCheck(L_39);
			Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_39, L_45, NULL);
			// _rewardsMoveRewardsPanelImage.transform.position = _startRewardsPosition.transform.position;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_46 = V_1;
			NullCheck(L_46);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = L_46->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_47);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
			L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_49 = V_1;
			NullCheck(L_49);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = L_49->____startRewardsPosition_21;
			NullCheck(L_50);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
			L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
			NullCheck(L_51);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
			L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
			NullCheck(L_48);
			Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_52, NULL);
			// _rewardsMoveRewardsPanelImage.color = Color.white;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_53 = V_1;
			NullCheck(L_53);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = L_53->____rewardsMoveRewardsPanelImage_22;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
			L_55 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
			NullCheck(L_54);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_55);
			// var ct = this.GetCancellationTokenOnDestroy();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_56 = V_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_57;
			L_57 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m7A7FB271F8237E1950CCB298D6AF0E0D9E6A7051(L_56, NULL);
			__this->___U3CctU3E5__2_3 = L_57;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CctU3E5__2_3))->____source_0), (void*)NULL);
			// await UniTask.WhenAll(
			//     _rewardsMoveRewardsPanelImage.transform.DOMove(
			//     (new Vector2(_rewardsMoveRewardsPanelImage.transform.position.x + Random.Range(50, 100), _rewardsMoveRewardsPanelImage.transform.position.y + Random.Range(50, 100))), 1f).WithCancellation(ct),
			//     _rewardsMoveRewardsPanelImage.transform.DOScale(Vector2.one, 1f).WithCancellation(ct)
			//     );
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_58 = (UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2*)(UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2*)SZArrayNew(UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2_il2cpp_TypeInfo_var, (uint32_t)2);
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_59 = L_58;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_60 = V_1;
			NullCheck(L_60);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61 = L_60->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_61);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
			L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_61, NULL);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_63 = V_1;
			NullCheck(L_63);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = L_63->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_64);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
			L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_64, NULL);
			NullCheck(L_65);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
			L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
			float L_67 = L_66.___x_2;
			int32_t L_68;
			L_68 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)50), ((int32_t)100), NULL);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_69 = V_1;
			NullCheck(L_69);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = L_69->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_70);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
			L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
			NullCheck(L_71);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
			L_72 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_71, NULL);
			float L_73 = L_72.___y_3;
			int32_t L_74;
			L_74 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)50), ((int32_t)100), NULL);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
			memset((&L_75), 0, sizeof(L_75));
			Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_75), ((float)il2cpp_codegen_add(L_67, ((float)L_68))), ((float)il2cpp_codegen_add(L_73, ((float)L_74))), /*hidden argument*/NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
			L_76 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_75, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_77;
			L_77 = ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B(L_62, L_76, (1.0f), (bool)0, NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_78 = __this->___U3CctU3E5__2_3;
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_79;
			L_79 = DOTweenAsyncExtensions_WithCancellation_mE7173C7EAC5E39B303560F14F8A4782FBBADB727(L_77, L_78, NULL);
			NullCheck(L_59);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270)L_79);
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_80 = L_59;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_81 = V_1;
			NullCheck(L_81);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = L_81->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_82);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
			L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_82, NULL);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
			L_84 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
			L_85 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_84, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_86;
			L_86 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_83, L_85, (1.0f), NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_87 = __this->___U3CctU3E5__2_3;
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_88;
			L_88 = DOTweenAsyncExtensions_WithCancellation_mE7173C7EAC5E39B303560F14F8A4782FBBADB727(L_86, L_87, NULL);
			NullCheck(L_80);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270)L_88);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_89;
			L_89 = UniTask_WhenAll_m56FADC89DF4F36D94A0AEA9A19C29A62E01314C6(L_80, NULL);
			V_4 = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90;
			L_90 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_4), NULL);
			V_3 = L_90;
			bool L_91;
			L_91 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_91)
			{
				goto IL_0210_1;
			}
		}
		{
			int32_t L_92 = 0;
			V_0 = L_92;
			__this->___U3CU3E1__state_0 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = V_3;
			__this->___U3CU3Eu__1_4 = L_93;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_94 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA(L_94, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_RuntimeMethod_var);
			goto IL_038e;
		}

IL_01f4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = __this->___U3CU3Eu__1_4;
			V_3 = L_95;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_96 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_96, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_97 = (-1);
			V_0 = L_97;
			__this->___U3CU3E1__state_0 = L_97;
		}

IL_0210_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// await _rewardsMoveRewardsPanelImage.transform.DOMove(_inventoryPosition.position, 1);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_98 = V_1;
			NullCheck(L_98);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_99 = L_98->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_99);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
			L_100 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_99, NULL);
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_101 = V_1;
			NullCheck(L_101);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = L_101->____inventoryPosition_28;
			NullCheck(L_102);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
			L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_104;
			L_104 = ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B(L_100, L_103, (1.0f), (bool)0, NULL);
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_105;
			L_105 = DOTweenAsyncExtensions_GetAwaiter_m609B2C16707D25F14F7BA66294AA3ECC911426EA(L_104, NULL);
			V_5 = L_105;
			bool L_106;
			L_106 = TweenAwaiter_get_IsCompleted_m4F40B494B983AF730D22C6D68A2F1179BA9D3360((&V_5), NULL);
			if (L_106)
			{
				goto IL_0289_1;
			}
		}
		{
			int32_t L_107 = 1;
			V_0 = L_107;
			__this->___U3CU3E1__state_0 = L_107;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_108 = V_5;
			__this->___U3CU3Eu__2_5 = L_108;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___tween_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_109 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009(L_109, (&V_5), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mD04190BCE65B502653FA1321339AA9F220B4D009_RuntimeMethod_var);
			goto IL_038e;
		}

IL_026c_1:
		{
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2 L_110 = __this->___U3CU3Eu__2_5;
			V_5 = L_110;
			TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_111 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_111, sizeof(TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2));
			int32_t L_112 = (-1);
			V_0 = L_112;
			__this->___U3CU3E1__state_0 = L_112;
		}

IL_0289_1:
		{
			TweenAwaiter_GetResult_m762E37CE12BE2C2B1890A646216AAA93066F2611((&V_5), NULL);
			// await UniTask.WhenAll(
			//     _rewardsMoveRewardsPanelImage.transform.DOScale(Vector2.zero, .2f).WithCancellation(ct),
			//     _rewardsMoveRewardsPanelImage.DOFade(0, .2f).WithCancellation(ct)
			//     );
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_113 = (UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2*)(UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2*)SZArrayNew(UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2_il2cpp_TypeInfo_var, (uint32_t)2);
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_114 = L_113;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_115 = V_1;
			NullCheck(L_115);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_116 = L_115->____rewardsMoveRewardsPanelImage_22;
			NullCheck(L_116);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
			L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
			L_118 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
			L_119 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_118, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_120;
			L_120 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_117, L_119, (0.200000003f), NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_121 = __this->___U3CctU3E5__2_3;
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_122;
			L_122 = DOTweenAsyncExtensions_WithCancellation_mE7173C7EAC5E39B303560F14F8A4782FBBADB727(L_120, L_121, NULL);
			NullCheck(L_114);
			(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270)L_122);
			UniTaskU5BU5D_t0B802B9CF355E98BCBA1CF20C00796F4CC6CA8C2* L_123 = L_114;
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_124 = V_1;
			NullCheck(L_124);
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_125 = L_124->____rewardsMoveRewardsPanelImage_22;
			TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_126;
			L_126 = DOTweenModuleUI_DOFade_m06FA7654709E511E24159284799E4B4591CC2AEC(L_125, (0.0f), (0.200000003f), NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_127 = __this->___U3CctU3E5__2_3;
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_128;
			L_128 = DOTweenAsyncExtensions_WithCancellation_mE7173C7EAC5E39B303560F14F8A4782FBBADB727(L_126, L_127, NULL);
			NullCheck(L_123);
			(L_123)->SetAt(static_cast<il2cpp_array_size_t>(1), (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270)L_128);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_129;
			L_129 = UniTask_WhenAll_m56FADC89DF4F36D94A0AEA9A19C29A62E01314C6(L_123, NULL);
			V_4 = L_129;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_130;
			L_130 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_4), NULL);
			V_3 = L_130;
			bool L_131;
			L_131 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_3), NULL);
			if (L_131)
			{
				goto IL_0342_1;
			}
		}
		{
			int32_t L_132 = 2;
			V_0 = L_132;
			__this->___U3CU3E1__state_0 = L_132;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_133 = V_3;
			__this->___U3CU3Eu__1_4 = L_133;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_134 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA(L_134, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302_mA136FE64F356B0E1F5C6DF58EE5047F11D790CDA_RuntimeMethod_var);
			goto IL_038e;
		}

IL_0326_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_135 = __this->___U3CU3Eu__1_4;
			V_3 = L_135;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_136 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_136, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_137 = (-1);
			V_0 = L_137;
			__this->___U3CU3E1__state_0 = L_137;
		}

IL_0342_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_3), NULL);
			// fortuneWheelInventoryManager.UpdateRewardPanelInventory();
			FortuneWheelManager_t606FA42CB6E163A0A53911F93A5E5DF3724BA6B7* L_138 = V_1;
			NullCheck(L_138);
			FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* L_139 = L_138->___fortuneWheelInventoryManager_8;
			NullCheck(L_139);
			FortuneWheelInventoryManager_UpdateRewardPanelInventory_mD8052838B14ACAD9214E910DBE991210E21D1E32(L_139, NULL);
			// }
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_140 = (&__this->___U3CctU3E5__2_3);
			il2cpp_codegen_initobj(L_140, sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		}

IL_0360_1:
		{
			goto IL_037b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0362;
		}
		throw e;
	}

CATCH_0362:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_141 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_142 = V_6;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_141, L_142, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_038e;
	}// end catch (depth: 1)

IL_037b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_143 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_143, NULL);
	}

IL_038e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAfterSpinCheckU3Ed__40_MoveNext_m247B5616931683236052007D24CDB5CAFB184888_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302*>(__this + _offset);
	U3CAfterSpinCheckU3Ed__40_MoveNext_m247B5616931683236052007D24CDB5CAFB184888(_thisAdjusted, method);
}
// System.Void FortuneWheel.Wheel.FortuneWheelManager/<AfterSpinCheck>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterSpinCheckU3Ed__40_SetStateMachine_mA4CA3E108E057150957C9128D392752B271902D2 (U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAfterSpinCheckU3Ed__40_SetStateMachine_mA4CA3E108E057150957C9128D392752B271902D2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAfterSpinCheckU3Ed__40_tB3FB3BC35E23454250E28F9746ACAC5D50F27302*>(__this + _offset);
	U3CAfterSpinCheckU3Ed__40_SetStateMachine_mA4CA3E108E057150957C9128D392752B271902D2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::UpdateRewardPanelInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_UpdateRewardPanelInventory_mD8052838B14ACAD9214E910DBE991210E21D1E32 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C55111E9922535EAE0AC887B97317848AC426D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < rewardPanelSlotsList.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// if (wheelRewardInventory.inventorySlots[i]._rewardAmount > 0)
		WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* L_0 = __this->___wheelRewardInventory_4;
		NullCheck(L_0);
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_1 = L_0->___inventorySlots_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_3;
		L_3 = List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE(L_1, L_2, List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = L_3->____rewardAmount_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// ActiveInventorySlot(i);
		int32_t L_5 = V_0;
		FortuneWheelInventoryManager_ActiveInventorySlot_m3FA92A866C6489E807CDA740A69BE907FC961412(__this, L_5, NULL);
		goto IL_002d;
	}

IL_0026:
	{
		// DisableInventorySlot(i);
		int32_t L_6 = V_0;
		FortuneWheelInventoryManager_DisableInventorySlot_m0F6B00A9245CCCFAD623F4553A2B518DDF2B81F4(__this, L_6, NULL);
	}

IL_002d:
	{
		// for (int i = 0; i < rewardPanelSlotsList.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < rewardPanelSlotsList.Count; i++)
		int32_t L_8 = V_0;
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_9 = __this->___rewardPanelSlotsList_5;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m3C55111E9922535EAE0AC887B97317848AC426D4_inline(L_9, List_1_get_Count_m3C55111E9922535EAE0AC887B97317848AC426D4_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::ActiveInventorySlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_ActiveInventorySlot_m3FA92A866C6489E807CDA740A69BE907FC961412 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLink_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m0E2FC537C115691B42B8B8DF55A6CC57740A1EEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardPanelSlotsList[i].gameObject.SetActive(true);
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_0 = __this->___rewardPanelSlotsList_5;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_2;
		L_2 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_0, L_1, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// rewardPanelSlotsList[i].gameObject.transform.DOScale(Vector2.one, .5f).SetLink(rewardPanelSlotsList[i].gameObject, LinkBehaviour.KillOnDestroy);
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_4 = __this->___rewardPanelSlotsList_5;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_6;
		L_6 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_4, L_5, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_11;
		L_11 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(L_8, L_10, (0.5f), NULL);
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_12 = __this->___rewardPanelSlotsList_5;
		int32_t L_13 = ___i0;
		NullCheck(L_12);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_14;
		L_14 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_12, L_13, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_16;
		L_16 = TweenSettingsExtensions_SetLink_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m0E2FC537C115691B42B8B8DF55A6CC57740A1EEF(L_11, L_15, 6, TweenSettingsExtensions_SetLink_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m0E2FC537C115691B42B8B8DF55A6CC57740A1EEF_RuntimeMethod_var);
		// rewardPanelSlotsList[i].rewardImage.sprite = wheelRewardInventory.inventorySlots[i]._reward.sprite;
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_17 = __this->___rewardPanelSlotsList_5;
		int32_t L_18 = ___i0;
		NullCheck(L_17);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_19;
		L_19 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_17, L_18, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = L_19->___rewardImage_4;
		WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* L_21 = __this->___wheelRewardInventory_4;
		NullCheck(L_21);
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_22 = L_21->___inventorySlots_4;
		int32_t L_23 = ___i0;
		NullCheck(L_22);
		Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_24;
		L_24 = List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE(L_22, L_23, List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var);
		NullCheck(L_24);
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_25 = L_24->____reward_0;
		NullCheck(L_25);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = L_25->___sprite_6;
		NullCheck(L_20);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_20, L_26, NULL);
		// rewardPanelSlotsList[i].rewardAmountText.SetText(wheelRewardInventory.inventorySlots[i]._rewardAmount.ToString());
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_27 = __this->___rewardPanelSlotsList_5;
		int32_t L_28 = ___i0;
		NullCheck(L_27);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_29;
		L_29 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_27, L_28, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_29);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = L_29->___rewardAmountText_5;
		WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* L_31 = __this->___wheelRewardInventory_4;
		NullCheck(L_31);
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_32 = L_31->___inventorySlots_4;
		int32_t L_33 = ___i0;
		NullCheck(L_32);
		Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_34;
		L_34 = List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE(L_32, L_33, List_1_get_Item_m8ECCED45CA0C9608AE74767D5E07A763BC4560AE_RuntimeMethod_var);
		NullCheck(L_34);
		int32_t* L_35 = (&L_34->____rewardAmount_1);
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_35, NULL);
		NullCheck(L_30);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_30, L_36, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::DisableInventorySlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager_DisableInventorySlot_m0F6B00A9245CCCFAD623F4553A2B518DDF2B81F4 (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardPanelSlotsList[i].gameObject.transform.localScale = Vector2.zero;
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_0 = __this->___rewardPanelSlotsList_5;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_2;
		L_2 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_0, L_1, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_6, NULL);
		// rewardPanelSlotsList[i].gameObject.SetActive(false);
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_7 = __this->___rewardPanelSlotsList_5;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* L_9;
		L_9 = List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2(L_7, L_8, List_1_get_Item_m6249637D3AC67C49327CBADB6708BD80505471D2_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FortuneWheel.Inventory.FortuneWheelInventoryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelInventoryManager__ctor_m8FDF1A2BAB664135A9754450DC1F65F81B4F86EC (FortuneWheelInventoryManager_tC3129F575C204D0D471DDEBA71DE8BFD5260924F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m91824258EFBC5BD123ED03776670D11B0F9BFC9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<RewardPanelSlot> rewardPanelSlotsList = new List<RewardPanelSlot>();
		List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629* L_0 = (List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629*)il2cpp_codegen_object_new(List_1_tD15C1F5DDD1FD30F8BB480EAE37870D4BA0CF629_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m91824258EFBC5BD123ED03776670D11B0F9BFC9A(L_0, List_1__ctor_m91824258EFBC5BD123ED03776670D11B0F9BFC9A_RuntimeMethod_var);
		__this->___rewardPanelSlotsList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardPanelSlotsList_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FortuneWheel.Inventory.RewardPanelSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardPanelSlot__ctor_m6831C7CCD69A8A1BFAD99B5759A6A42C2F2E1532 (RewardPanelSlot_t96FCE2F93EA3BEC36461C3BE1D12733BDBB34370* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean FortuneWheel.Inventory.WheelRewardInventorySettingsSO::AddRewardToInventory(FortuneWheel.Slots.RewardDataSO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelRewardInventorySettingsSO_AddRewardToInventory_m59FF6C481D11F34B0DE71DEB192490A783DA1710 (WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* __this, RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ____reward0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* V_1 = NULL;
	bool V_2 = false;
	{
		// foreach (Slot slot in inventorySlots)
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_0 = __this->___inventorySlots_4;
		NullCheck(L_0);
		Enumerator_t34F114101540C88D259966D992A1B9BF42D8095A L_1;
		L_1 = List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E(L_0, List_1_GetEnumerator_mB3156C1E009C53A1191668250EB367E92E8C0D9E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A((&V_0), Enumerator_Dispose_m731115BB3033446FCFBF7E031D53875E266B8E8A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_000e_1:
			{
				// foreach (Slot slot in inventorySlots)
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_2;
				L_2 = Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_inline((&V_0), Enumerator_get_Current_m298CBE1ADC7B8C11D77138824F47270D3C644273_RuntimeMethod_var);
				V_1 = L_2;
				// if (slot._reward == _reward)
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_3 = V_1;
				NullCheck(L_3);
				RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_4 = L_3->____reward_0;
				RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_5 = ____reward0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_003b_1;
				}
			}
			{
				// slot._rewardAmount += _reward.amount;
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_7 = V_1;
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_8 = L_7;
				NullCheck(L_8);
				int32_t L_9 = L_8->____rewardAmount_1;
				RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_10 = ____reward0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___amount_5;
				NullCheck(L_8);
				L_8->____rewardAmount_1 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
				// return true;
				V_2 = (bool)1;
				goto IL_0069;
			}

IL_003b_1:
			{
				// else if (slot._rewardAmount == 0)
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13 = L_12->____rewardAmount_1;
				if (L_13)
				{
					goto IL_004e_1;
				}
			}
			{
				// slot.AddRewardToSlot(_reward);
				Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* L_14 = V_1;
				RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_15 = ____reward0;
				NullCheck(L_14);
				Slot_AddRewardToSlot_mEFB6E17F7E03F9B515BC7FA773AC5B0769A3196E(L_14, L_15, NULL);
				// return true;
				V_2 = (bool)1;
				goto IL_0069;
			}

IL_004e_1:
			{
				// foreach (Slot slot in inventorySlots)
				bool L_16;
				L_16 = Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD((&V_0), Enumerator_MoveNext_mBD70D3F9EF8E2DEF7DDE58614467EB1F014808BD_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// }
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Void FortuneWheel.Inventory.WheelRewardInventorySettingsSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelRewardInventorySettingsSO__ctor_m3AC0EB75CEC36A6D6455642A4F6B439D03979709 (WheelRewardInventorySettingsSO_t960CEB063B9858C30E73F3BA1E5F5F62CED08FF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m13DFDA065F385A6DF173FCCD986801FBB4435AE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Slot> inventorySlots = new List<Slot>();
		List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1* L_0 = (List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1*)il2cpp_codegen_object_new(List_1_t3AE0A512D8FA29CA636F4E1BC1D0C33CF55B7DF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m13DFDA065F385A6DF173FCCD986801FBB4435AE4(L_0, List_1__ctor_m13DFDA065F385A6DF173FCCD986801FBB4435AE4_RuntimeMethod_var);
		__this->___inventorySlots_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventorySlots_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void FortuneWheel.Inventory.Slot::AddRewardToSlot(FortuneWheel.Slots.RewardDataSO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_AddRewardToSlot_mEFB6E17F7E03F9B515BC7FA773AC5B0769A3196E (Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* __this, RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* ____item0, const RuntimeMethod* method) 
{
	{
		// _reward = _item;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_0 = ____item0;
		__this->____reward_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reward_0), (void*)L_0);
		// _rewardAmount = _item.amount;
		RewardDataSO_tAA5FC7DA7DEA308DEE8FD25A9620A98A0587AAC5* L_1 = ____item0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___amount_5;
		__this->____rewardAmount_1 = L_2;
		// }
		return;
	}
}
// System.Void FortuneWheel.Inventory.Slot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot__ctor_m3E7B6AF57F149AC7BD7B51B6218D0F3E653D93A6 (Slot_t8B55A6ED1BB3EA01EC107F46D133F2B5405B3B4A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlyingWormConsole3.ConsoleProRemoteServer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleProRemoteServer_Awake_m33B64F8CCA43E603F09769ADB31006CF4747E6D6 (ConsoleProRemoteServer_t69608DADA2C32249CC57374339466552DBC0AB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638F3947208DD492A456013530B0CB7C60197C32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Console Pro Remote Server is disabled in release mode, please use a Development build or define DEBUG to use it");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral638F3947208DD492A456013530B0CB7C60197C32, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.ConsoleProRemoteServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleProRemoteServer__ctor_m5F752C67E445DF5FE339CD535F002EB813BAA4E2 (ConsoleProRemoteServer_t69608DADA2C32249CC57374339466552DBC0AB3D* __this, const RuntimeMethod* method) 
{
	{
		// public int port = 51000;
		__this->___port_5 = ((int32_t)51000);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m26315786B8D1E568884CD2A1B44990ED7848DA06_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->___runner_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_2, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t* L_3 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m78FB8EB74959FB133CEA8EF57AE3A9A34643DA69(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->___runner_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m9FB9707DC01A8C9D399ED09A7EF33FD9646E66CD(((int32_t)13), L_2, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBBCBE0B56E3583D4B29078283F686950CD72B6C9_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		TweenAwaiter_UnsafeOnCompleted_m3E6700193A0E11955A400474411222B05E6FC2DB(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645_mBD11147F9E5AC9EF882088C40F4793456E6AE4C3_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CChangeSlotsU3Ed__35_t5E9B3C719A8B575697D48E7B0C5186A1DDE24645*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m31B9EBADB3C78CB27EB7DC730C9B8288A478ED78_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		TweenAwaiter_t720E676C1FDA6AF32C91DB1339C05567E9D7C0F2* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		TweenAwaiter_UnsafeOnCompleted_m3E6700193A0E11955A400474411222B05E6FC2DB(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1_m7E9B2A52F42FAE3E9229C5ADD33D055CFD905320_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CSpinTheWheelU3Ed__39_t96875397533A7A9D2DED34DB5974D5E98F0548D1*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
