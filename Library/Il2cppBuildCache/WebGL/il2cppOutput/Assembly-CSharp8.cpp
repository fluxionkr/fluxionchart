#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`2<System.Int32,System.String>
struct Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5;
// System.Collections.Generic.Dictionary`2<System.Double,System.String>
struct Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6;
// System.Collections.Generic.Dictionary`2<ChartAndGraph.DoubleVector3,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Dictionary_2_t0491A4FAF699F48405E9F48ED6C3CDE0E8D46FF2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Int32,BillboardText>>
struct Dictionary_2_t348DB448799DE531DCE51E47E49DB1E4E56BF524;
// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.BaseScrollableCategoryData>
struct Dictionary_2_t4778E2F3A1B2F7A4FDACE3E9E0564FE2837E923D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.CanvasCandleChart/CategoryObject>
struct Dictionary_2_t281E0FF0935769072FB01E71D39AA382E76832FD;
// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.GraphChart/CategoryObject>
struct Dictionary_2_tEE961AF4805C07E9B17CC2937263B287DE352B0F;
// System.Func`2<System.DateTime,System.String>
struct Func_2_t226CE9C6F91B106952123BEAD68F02E345BAABCA;
// System.Func`2<ChartAndGraph.DoubleVector3,UnityEngine.Vector4>
struct Func_2_tD6B9DA81C18A1A1016FC7CE03B40B79B9FD71A40;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4>
struct Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8;
// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector3>
struct Func_2_tA6B20794E71B01DBB95C2366481D0913D3A5B34D;
// System.Func`3<System.Double,System.Int32,System.String>
struct Func_3_tE7030EF1717F1632054DA14E12D548E9918A0797;
// System.Collections.Generic.HashSet`1<BillboardText>
struct HashSet_1_t5E70B381E599B96D4DCB5DB279B0A6FF725F1E69;
// System.Collections.Generic.HashSet`1<ChartAndGraph.CanvasCandle>
struct HashSet_1_t606E2081AE2595208734EA250F510E07C371F22E;
// System.Collections.Generic.HashSet`1<ChartAndGraph.CanvasCandleGraphic>
struct HashSet_1_t7C5AFA36AFF376D91AAA7F655A0BD10F81C6FAC7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB;
// System.Collections.Generic.List`1<ChartAndGraph.BaseSlider>
struct List_1_tCA6EAF47C20AAD3F2A1E4FEA74A97C7532097E2E;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC;
// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3>
struct List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669;
// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector4>
struct List_1_t4617847BF844C5C8FDDA9D75FFD36E3E4B0FBDBA;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<ChartAndGraph.Axis.IAxisGenerator>
struct List_1_tA8A2054008FA384913BE70813D260D569C677582;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<ChartAndGraph.CandleChartData/CandleValue>
struct List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ChartAndGraph.GraphData/SerializedCategory[]
struct SerializedCategoryU5BU5D_tC10E09339634E5C32575EACA49D416F38B6EFBDA;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// ChartAndGraph.AnyChart
struct AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1;
// ChartAndGraph.AxisBase
struct AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405;
// ChartAndGraph.CandleChartData
struct CandleChartData_t4953342A38CD2805918D3C6202261146D08DB682;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// ChartAndGraph.CanvasCandle
struct CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4;
// ChartAndGraph.CanvasCandleChart
struct CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F;
// ChartAndGraph.CanvasCandleGraphic
struct CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666;
// ChartAndGraph.CanvasChartMesh
struct CanvasChartMesh_t275D9212EB5DB4F524670FC09503B0CEB801E806;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CategoryLabels
struct CategoryLabels_t5295E8E0028A2C380CA871E1A20BC6FB62A25724;
// ChartAndGraph.ChartDivisionInfo
struct ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC;
// ChartAndGraph.ChartItemEffect
struct ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093;
// ChartAndGraph.ChartMainDivisionInfo
struct ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988;
// ChartAndGraph.ChartSubDivisionInfo
struct ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// ChartAndGraph.FillPathGenerator
struct FillPathGenerator_t2F884F4CD6255F49CF247B1BA83B17E1EBE06C92;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ChartAndGraph.GraphChart
struct GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B;
// ChartAndGraph.GraphChartBase
struct GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716;
// ChartAndGraph.GraphData
struct GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6;
// GroupLabels
struct GroupLabels_tE92E630E9DBBAA6E0C29A8CC9588091343CC666E;
// ChartAndGraph.HorizontalAxis
struct HorizontalAxis_tE0C6F7ED94BCCEC88C99A3274A7D794625AA91C7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ChartAndGraph.ItemLabels
struct ItemLabels_t63A77A269FA9BBF881F4CE2DD1FC5422A64F128E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ChartAndGraph.PathGenerator
struct PathGenerator_t343BA96C31A1D8016454000D4CBDB88B544D3A1F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// TextController
struct TextController_t9E7C2168AFDC199CA73C17AF87070BB78107BFA5;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// ChartAndGraph.VerticalAxis
struct VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WebClient
struct WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.XmlName
struct XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63;
// colorRandomizer
struct colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34;
// ChartAndGraph.CandleChart/CandleEvent
struct CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1;
// ChartAndGraph.CanvasCandleChart/CategoryObject
struct CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1;
// ChartAndGraph.EventHandlingGraphic/GraphicEvent
struct GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465;
// ChartAndGraph.GraphChartBase/GraphEvent
struct GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084;
// ChartAndGraph.GraphData/CategoryData
struct CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C;
// ChartAndGraph.GraphData/VectorComparer
struct VectorComparer_tA5245E0301EDCD28A2B7E3CBAB9FD9A1AB718417;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// WebClient/<WaitForRequest>d__2
struct U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874;
// ChartAndGraph.WorldSpaceGraphChart/<>c
struct U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5;
// ChartAndGraph.WorldSpaceGraphChart/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t873160D347BC6974E531C558A56012C815EF28C5;
// ChartAndGraph.XMLParser/<GetAllChildObjects>d__12
struct U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086;
// colorRandomizer/<SwitchColor>d__5
struct U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186;
// ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B;
// ChartAndGraph.CanvasLines/LineSegement/<>c
struct U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9A09D77AED96BB3BC13B659C5E930B49835D377C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B_mFC58B95AFD0295B2288D5AB32F15A58FEF0051CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mDC7848386B8D059E0BA31383ED93DE80D7F6C421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllChildObjectsU3Ed__12_System_Collections_IEnumerator_Reset_m923A08FAA75635F95C9232E0D359A57AA09702CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchColorU3Ed__5_System_Collections_IEnumerator_Reset_mF5F4B673EA545404280B4D177FFC8D66AB9B66D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_mC99FF49CBBCF233AFF917AC6E2CFDE79A70BA13C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


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


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// ChartAndGraph.ScrollableChartData
struct ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<ChartAndGraph.BaseSlider> ChartAndGraph.ScrollableChartData::mSliders
	List_1_tCA6EAF47C20AAD3F2A1E4FEA74A97C7532097E2E * ___mSliders_0;
	// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.BaseScrollableCategoryData> ChartAndGraph.ScrollableChartData::mData
	Dictionary_2_t4778E2F3A1B2F7A4FDACE3E9E0564FE2837E923D * ___mData_1;
	// System.EventHandler ChartAndGraph.ScrollableChartData::DataChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DataChanged_2;
	// System.EventHandler ChartAndGraph.ScrollableChartData::ViewPortionChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ViewPortionChanged_3;
	// System.Action`2<System.Int32,System.String> ChartAndGraph.ScrollableChartData::RealtimeDataChanged
	Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * ___RealtimeDataChanged_4;
	// System.Boolean ChartAndGraph.ScrollableChartData::mSuspendEvents
	bool ___mSuspendEvents_5;
	// System.Double ChartAndGraph.ScrollableChartData::automaticVerticalViewGap
	double ___automaticVerticalViewGap_6;
	// System.Boolean ChartAndGraph.ScrollableChartData::automaticVerticallView
	bool ___automaticVerticallView_7;
	// System.Double ChartAndGraph.ScrollableChartData::automaticcHorizontaViewGap
	double ___automaticcHorizontaViewGap_8;
	// System.Boolean ChartAndGraph.ScrollableChartData::automaticHorizontalView
	bool ___automaticHorizontalView_9;
	// System.Double ChartAndGraph.ScrollableChartData::horizontalViewSize
	double ___horizontalViewSize_10;
	// System.Double ChartAndGraph.ScrollableChartData::horizontalViewOrigin
	double ___horizontalViewOrigin_11;
	// System.Double ChartAndGraph.ScrollableChartData::verticalViewSize
	double ___verticalViewSize_12;
	// System.Double ChartAndGraph.ScrollableChartData::verticalViewOrigin
	double ___verticalViewOrigin_13;

public:
	inline static int32_t get_offset_of_mSliders_0() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___mSliders_0)); }
	inline List_1_tCA6EAF47C20AAD3F2A1E4FEA74A97C7532097E2E * get_mSliders_0() const { return ___mSliders_0; }
	inline List_1_tCA6EAF47C20AAD3F2A1E4FEA74A97C7532097E2E ** get_address_of_mSliders_0() { return &___mSliders_0; }
	inline void set_mSliders_0(List_1_tCA6EAF47C20AAD3F2A1E4FEA74A97C7532097E2E * value)
	{
		___mSliders_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSliders_0), (void*)value);
	}

	inline static int32_t get_offset_of_mData_1() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___mData_1)); }
	inline Dictionary_2_t4778E2F3A1B2F7A4FDACE3E9E0564FE2837E923D * get_mData_1() const { return ___mData_1; }
	inline Dictionary_2_t4778E2F3A1B2F7A4FDACE3E9E0564FE2837E923D ** get_address_of_mData_1() { return &___mData_1; }
	inline void set_mData_1(Dictionary_2_t4778E2F3A1B2F7A4FDACE3E9E0564FE2837E923D * value)
	{
		___mData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mData_1), (void*)value);
	}

	inline static int32_t get_offset_of_DataChanged_2() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___DataChanged_2)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DataChanged_2() const { return ___DataChanged_2; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DataChanged_2() { return &___DataChanged_2; }
	inline void set_DataChanged_2(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DataChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataChanged_2), (void*)value);
	}

	inline static int32_t get_offset_of_ViewPortionChanged_3() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___ViewPortionChanged_3)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ViewPortionChanged_3() const { return ___ViewPortionChanged_3; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ViewPortionChanged_3() { return &___ViewPortionChanged_3; }
	inline void set_ViewPortionChanged_3(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ViewPortionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ViewPortionChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_RealtimeDataChanged_4() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___RealtimeDataChanged_4)); }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * get_RealtimeDataChanged_4() const { return ___RealtimeDataChanged_4; }
	inline Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 ** get_address_of_RealtimeDataChanged_4() { return &___RealtimeDataChanged_4; }
	inline void set_RealtimeDataChanged_4(Action_2_t0359A210F354A728FCD80F275D8CF192D61A98C5 * value)
	{
		___RealtimeDataChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RealtimeDataChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_mSuspendEvents_5() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___mSuspendEvents_5)); }
	inline bool get_mSuspendEvents_5() const { return ___mSuspendEvents_5; }
	inline bool* get_address_of_mSuspendEvents_5() { return &___mSuspendEvents_5; }
	inline void set_mSuspendEvents_5(bool value)
	{
		___mSuspendEvents_5 = value;
	}

	inline static int32_t get_offset_of_automaticVerticalViewGap_6() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___automaticVerticalViewGap_6)); }
	inline double get_automaticVerticalViewGap_6() const { return ___automaticVerticalViewGap_6; }
	inline double* get_address_of_automaticVerticalViewGap_6() { return &___automaticVerticalViewGap_6; }
	inline void set_automaticVerticalViewGap_6(double value)
	{
		___automaticVerticalViewGap_6 = value;
	}

	inline static int32_t get_offset_of_automaticVerticallView_7() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___automaticVerticallView_7)); }
	inline bool get_automaticVerticallView_7() const { return ___automaticVerticallView_7; }
	inline bool* get_address_of_automaticVerticallView_7() { return &___automaticVerticallView_7; }
	inline void set_automaticVerticallView_7(bool value)
	{
		___automaticVerticallView_7 = value;
	}

	inline static int32_t get_offset_of_automaticcHorizontaViewGap_8() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___automaticcHorizontaViewGap_8)); }
	inline double get_automaticcHorizontaViewGap_8() const { return ___automaticcHorizontaViewGap_8; }
	inline double* get_address_of_automaticcHorizontaViewGap_8() { return &___automaticcHorizontaViewGap_8; }
	inline void set_automaticcHorizontaViewGap_8(double value)
	{
		___automaticcHorizontaViewGap_8 = value;
	}

	inline static int32_t get_offset_of_automaticHorizontalView_9() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___automaticHorizontalView_9)); }
	inline bool get_automaticHorizontalView_9() const { return ___automaticHorizontalView_9; }
	inline bool* get_address_of_automaticHorizontalView_9() { return &___automaticHorizontalView_9; }
	inline void set_automaticHorizontalView_9(bool value)
	{
		___automaticHorizontalView_9 = value;
	}

	inline static int32_t get_offset_of_horizontalViewSize_10() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___horizontalViewSize_10)); }
	inline double get_horizontalViewSize_10() const { return ___horizontalViewSize_10; }
	inline double* get_address_of_horizontalViewSize_10() { return &___horizontalViewSize_10; }
	inline void set_horizontalViewSize_10(double value)
	{
		___horizontalViewSize_10 = value;
	}

	inline static int32_t get_offset_of_horizontalViewOrigin_11() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___horizontalViewOrigin_11)); }
	inline double get_horizontalViewOrigin_11() const { return ___horizontalViewOrigin_11; }
	inline double* get_address_of_horizontalViewOrigin_11() { return &___horizontalViewOrigin_11; }
	inline void set_horizontalViewOrigin_11(double value)
	{
		___horizontalViewOrigin_11 = value;
	}

	inline static int32_t get_offset_of_verticalViewSize_12() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___verticalViewSize_12)); }
	inline double get_verticalViewSize_12() const { return ___verticalViewSize_12; }
	inline double* get_address_of_verticalViewSize_12() { return &___verticalViewSize_12; }
	inline void set_verticalViewSize_12(double value)
	{
		___verticalViewSize_12 = value;
	}

	inline static int32_t get_offset_of_verticalViewOrigin_13() { return static_cast<int32_t>(offsetof(ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9, ___verticalViewOrigin_13)); }
	inline double get_verticalViewOrigin_13() const { return ___verticalViewOrigin_13; }
	inline double* get_address_of_verticalViewOrigin_13() { return &___verticalViewOrigin_13; }
	inline void set_verticalViewOrigin_13(double value)
	{
		___verticalViewOrigin_13 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlNodeList
struct XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ChartAndGraph.CanvasCandleChart/CategoryObject
struct CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1  : public RuntimeObject
{
public:
	// ChartAndGraph.CanvasChartMesh ChartAndGraph.CanvasCandleChart/CategoryObject::mItemLabels
	CanvasChartMesh_t275D9212EB5DB4F524670FC09503B0CEB801E806 * ___mItemLabels_0;
	// ChartAndGraph.CanvasCandle ChartAndGraph.CanvasCandleChart/CategoryObject::mUp
	CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___mUp_1;
	// ChartAndGraph.CanvasCandle ChartAndGraph.CanvasCandleChart/CategoryObject::mDown
	CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___mDown_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> ChartAndGraph.CanvasCandleChart/CategoryObject::mCahced
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___mCahced_3;
	// System.Collections.Generic.HashSet`1<ChartAndGraph.CanvasCandle> ChartAndGraph.CanvasCandleChart/CategoryObject::mOccupiedCandles
	HashSet_1_t606E2081AE2595208734EA250F510E07C371F22E * ___mOccupiedCandles_4;
	// ChartAndGraph.CanvasCandleChart ChartAndGraph.CanvasCandleChart/CategoryObject::mParent
	CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * ___mParent_5;
	// ChartAndGraph.EventHandlingGraphic/GraphicEvent ChartAndGraph.CanvasCandleChart/CategoryObject::Hover
	GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * ___Hover_6;
	// ChartAndGraph.EventHandlingGraphic/GraphicEvent ChartAndGraph.CanvasCandleChart/CategoryObject::Click
	GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * ___Click_7;
	// System.Action ChartAndGraph.CanvasCandleChart/CategoryObject::Leave
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___Leave_8;

public:
	inline static int32_t get_offset_of_mItemLabels_0() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mItemLabels_0)); }
	inline CanvasChartMesh_t275D9212EB5DB4F524670FC09503B0CEB801E806 * get_mItemLabels_0() const { return ___mItemLabels_0; }
	inline CanvasChartMesh_t275D9212EB5DB4F524670FC09503B0CEB801E806 ** get_address_of_mItemLabels_0() { return &___mItemLabels_0; }
	inline void set_mItemLabels_0(CanvasChartMesh_t275D9212EB5DB4F524670FC09503B0CEB801E806 * value)
	{
		___mItemLabels_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mItemLabels_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUp_1() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mUp_1)); }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * get_mUp_1() const { return ___mUp_1; }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 ** get_address_of_mUp_1() { return &___mUp_1; }
	inline void set_mUp_1(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * value)
	{
		___mUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDown_2() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mDown_2)); }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * get_mDown_2() const { return ___mDown_2; }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 ** get_address_of_mDown_2() { return &___mDown_2; }
	inline void set_mDown_2(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * value)
	{
		___mDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_mCahced_3() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mCahced_3)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_mCahced_3() const { return ___mCahced_3; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_mCahced_3() { return &___mCahced_3; }
	inline void set_mCahced_3(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___mCahced_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCahced_3), (void*)value);
	}

	inline static int32_t get_offset_of_mOccupiedCandles_4() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mOccupiedCandles_4)); }
	inline HashSet_1_t606E2081AE2595208734EA250F510E07C371F22E * get_mOccupiedCandles_4() const { return ___mOccupiedCandles_4; }
	inline HashSet_1_t606E2081AE2595208734EA250F510E07C371F22E ** get_address_of_mOccupiedCandles_4() { return &___mOccupiedCandles_4; }
	inline void set_mOccupiedCandles_4(HashSet_1_t606E2081AE2595208734EA250F510E07C371F22E * value)
	{
		___mOccupiedCandles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOccupiedCandles_4), (void*)value);
	}

	inline static int32_t get_offset_of_mParent_5() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___mParent_5)); }
	inline CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * get_mParent_5() const { return ___mParent_5; }
	inline CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F ** get_address_of_mParent_5() { return &___mParent_5; }
	inline void set_mParent_5(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * value)
	{
		___mParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_Hover_6() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___Hover_6)); }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * get_Hover_6() const { return ___Hover_6; }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 ** get_address_of_Hover_6() { return &___Hover_6; }
	inline void set_Hover_6(GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * value)
	{
		___Hover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hover_6), (void*)value);
	}

	inline static int32_t get_offset_of_Click_7() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___Click_7)); }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * get_Click_7() const { return ___Click_7; }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 ** get_address_of_Click_7() { return &___Click_7; }
	inline void set_Click_7(GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * value)
	{
		___Click_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Click_7), (void*)value);
	}

	inline static int32_t get_offset_of_Leave_8() { return static_cast<int32_t>(offsetof(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1, ___Leave_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_Leave_8() const { return ___Leave_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_Leave_8() { return &___Leave_8; }
	inline void set_Leave_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___Leave_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leave_8), (void*)value);
	}
};


// WebClient/<WaitForRequest>d__2
struct U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874  : public RuntimeObject
{
public:
	// System.Int32 WebClient/<WaitForRequest>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebClient/<WaitForRequest>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW WebClient/<WaitForRequest>d__2::www
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___www_2;
	// WebClient WebClient/<WaitForRequest>d__2::<>4__this
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874, ___www_2)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_www_2() const { return ___www_2; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874, ___U3CU3E4__this_3)); }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// ChartAndGraph.WorldSpaceGraphChart/<>c
struct U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_StaticFields
{
public:
	// ChartAndGraph.WorldSpaceGraphChart/<>c ChartAndGraph.WorldSpaceGraphChart/<>c::<>9
	U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * ___U3CU3E9_0;
	// System.Func`2<ChartAndGraph.DoubleVector3,UnityEngine.Vector4> ChartAndGraph.WorldSpaceGraphChart/<>c::<>9__36_1
	Func_2_tD6B9DA81C18A1A1016FC7CE03B40B79B9FD71A40 * ___U3CU3E9__36_1_1;
	// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector3> ChartAndGraph.WorldSpaceGraphChart/<>c::<>9__36_0
	Func_2_tA6B20794E71B01DBB95C2366481D0913D3A5B34D * ___U3CU3E9__36_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_StaticFields, ___U3CU3E9__36_1_1)); }
	inline Func_2_tD6B9DA81C18A1A1016FC7CE03B40B79B9FD71A40 * get_U3CU3E9__36_1_1() const { return ___U3CU3E9__36_1_1; }
	inline Func_2_tD6B9DA81C18A1A1016FC7CE03B40B79B9FD71A40 ** get_address_of_U3CU3E9__36_1_1() { return &___U3CU3E9__36_1_1; }
	inline void set_U3CU3E9__36_1_1(Func_2_tD6B9DA81C18A1A1016FC7CE03B40B79B9FD71A40 * value)
	{
		___U3CU3E9__36_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_StaticFields, ___U3CU3E9__36_0_2)); }
	inline Func_2_tA6B20794E71B01DBB95C2366481D0913D3A5B34D * get_U3CU3E9__36_0_2() const { return ___U3CU3E9__36_0_2; }
	inline Func_2_tA6B20794E71B01DBB95C2366481D0913D3A5B34D ** get_address_of_U3CU3E9__36_0_2() { return &___U3CU3E9__36_0_2; }
	inline void set_U3CU3E9__36_0_2(Func_2_tA6B20794E71B01DBB95C2366481D0913D3A5B34D * value)
	{
		___U3CU3E9__36_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_2), (void*)value);
	}
};


// ChartAndGraph.WorldSpaceGraphChart/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t873160D347BC6974E531C558A56012C815EF28C5  : public RuntimeObject
{
public:
	// System.String ChartAndGraph.WorldSpaceGraphChart/<>c__DisplayClass29_0::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t873160D347BC6974E531C558A56012C815EF28C5, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_0), (void*)value);
	}
};


// colorRandomizer/<SwitchColor>d__5
struct U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186  : public RuntimeObject
{
public:
	// System.Int32 colorRandomizer/<SwitchColor>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object colorRandomizer/<SwitchColor>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// colorRandomizer colorRandomizer/<SwitchColor>d__5::<>4__this
	colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186, ___U3CU3E4__this_2)); }
	inline colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B  : public RuntimeObject
{
public:
	// ChartAndGraph.CanvasCandleChart/CategoryObject ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::<>4__this
	CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * ___U3CU3E4__this_0;
	// ChartAndGraph.CanvasCandle ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::candle
	CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___candle_1;
	// System.Boolean ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::isUp
	bool ___isUp_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B, ___U3CU3E4__this_0)); }
	inline CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_candle_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B, ___candle_1)); }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * get_candle_1() const { return ___candle_1; }
	inline CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 ** get_address_of_candle_1() { return &___candle_1; }
	inline void set_candle_1(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * value)
	{
		___candle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___candle_1), (void*)value);
	}

	inline static int32_t get_offset_of_isUp_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B, ___isUp_2)); }
	inline bool get_isUp_2() const { return ___isUp_2; }
	inline bool* get_address_of_isUp_2() { return &___isUp_2; }
	inline void set_isUp_2(bool value)
	{
		___isUp_2 = value;
	}
};


// ChartAndGraph.CanvasLines/LineSegement/<>c
struct U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_StaticFields
{
public:
	// ChartAndGraph.CanvasLines/LineSegement/<>c ChartAndGraph.CanvasLines/LineSegement/<>c::<>9
	U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector4> ChartAndGraph.CanvasLines/LineSegement/<>c::<>9__1_0
	Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tB37712A07DE53FD0F82EF2864932A6139B559EF8 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// ChartAndGraph.AutoFloat
struct AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279 
{
public:
	// System.Boolean ChartAndGraph.AutoFloat::Automatic
	bool ___Automatic_0;
	// System.Single ChartAndGraph.AutoFloat::Value
	float ___Value_1;

public:
	inline static int32_t get_offset_of_Automatic_0() { return static_cast<int32_t>(offsetof(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279, ___Automatic_0)); }
	inline bool get_Automatic_0() const { return ___Automatic_0; }
	inline bool* get_address_of_Automatic_0() { return &___Automatic_0; }
	inline void set_Automatic_0(bool value)
	{
		___Automatic_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ChartAndGraph.AutoFloat
struct AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279_marshaled_pinvoke
{
	int32_t ___Automatic_0;
	float ___Value_1;
};
// Native definition for COM marshalling of ChartAndGraph.AutoFloat
struct AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279_marshaled_com
{
	int32_t ___Automatic_0;
	float ___Value_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// ChartAndGraph.ChartMagin
struct ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822 
{
public:
	// System.Single ChartAndGraph.ChartMagin::left
	float ___left_0;
	// System.Single ChartAndGraph.ChartMagin::top
	float ___top_1;
	// System.Single ChartAndGraph.ChartMagin::right
	float ___right_2;
	// System.Single ChartAndGraph.ChartMagin::bottom
	float ___bottom_3;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822, ___left_0)); }
	inline float get_left_0() const { return ___left_0; }
	inline float* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(float value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_top_1() { return static_cast<int32_t>(offsetof(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822, ___top_1)); }
	inline float get_top_1() const { return ___top_1; }
	inline float* get_address_of_top_1() { return &___top_1; }
	inline void set_top_1(float value)
	{
		___top_1 = value;
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822, ___right_2)); }
	inline float get_right_2() const { return ___right_2; }
	inline float* get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(float value)
	{
		___right_2 = value;
	}

	inline static int32_t get_offset_of_bottom_3() { return static_cast<int32_t>(offsetof(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822, ___bottom_3)); }
	inline float get_bottom_3() const { return ___bottom_3; }
	inline float* get_address_of_bottom_3() { return &___bottom_3; }
	inline void set_bottom_3(float value)
	{
		___bottom_3 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// ChartAndGraph.DoubleVector3
struct DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48 
{
public:
	// System.Double ChartAndGraph.DoubleVector3::x
	double ___x_0;
	// System.Double ChartAndGraph.DoubleVector3::y
	double ___y_1;
	// System.Double ChartAndGraph.DoubleVector3::z
	double ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// ChartAndGraph.GraphData
struct GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543  : public ScrollableChartData_tDBECB6A161403C78413099710AB061307B7991B9
{
public:
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3> ChartAndGraph.GraphData::mTmpDriv
	List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * ___mTmpDriv_14;
	// ChartAndGraph.GraphData/VectorComparer ChartAndGraph.GraphData::mComparer
	VectorComparer_tA5245E0301EDCD28A2B7E3CBAB9FD9A1AB718417 * ___mComparer_15;
	// ChartAndGraph.GraphData/SerializedCategory[] ChartAndGraph.GraphData::mSerializedData
	SerializedCategoryU5BU5D_tC10E09339634E5C32575EACA49D416F38B6EFBDA* ___mSerializedData_16;

public:
	inline static int32_t get_offset_of_mTmpDriv_14() { return static_cast<int32_t>(offsetof(GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543, ___mTmpDriv_14)); }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * get_mTmpDriv_14() const { return ___mTmpDriv_14; }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 ** get_address_of_mTmpDriv_14() { return &___mTmpDriv_14; }
	inline void set_mTmpDriv_14(List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * value)
	{
		___mTmpDriv_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpDriv_14), (void*)value);
	}

	inline static int32_t get_offset_of_mComparer_15() { return static_cast<int32_t>(offsetof(GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543, ___mComparer_15)); }
	inline VectorComparer_tA5245E0301EDCD28A2B7E3CBAB9FD9A1AB718417 * get_mComparer_15() const { return ___mComparer_15; }
	inline VectorComparer_tA5245E0301EDCD28A2B7E3CBAB9FD9A1AB718417 ** get_address_of_mComparer_15() { return &___mComparer_15; }
	inline void set_mComparer_15(VectorComparer_tA5245E0301EDCD28A2B7E3CBAB9FD9A1AB718417 * value)
	{
		___mComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_mSerializedData_16() { return static_cast<int32_t>(offsetof(GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543, ___mSerializedData_16)); }
	inline SerializedCategoryU5BU5D_tC10E09339634E5C32575EACA49D416F38B6EFBDA* get_mSerializedData_16() const { return ___mSerializedData_16; }
	inline SerializedCategoryU5BU5D_tC10E09339634E5C32575EACA49D416F38B6EFBDA** get_address_of_mSerializedData_16() { return &___mSerializedData_16; }
	inline void set_mSerializedData_16(SerializedCategoryU5BU5D_tC10E09339634E5C32575EACA49D416F38B6EFBDA* value)
	{
		___mSerializedData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSerializedData_16), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// ChartAndGraph.MaterialTiling
struct MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A 
{
public:
	// System.Boolean ChartAndGraph.MaterialTiling::EnableTiling
	bool ___EnableTiling_0;
	// System.Single ChartAndGraph.MaterialTiling::TileFactor
	float ___TileFactor_1;

public:
	inline static int32_t get_offset_of_EnableTiling_0() { return static_cast<int32_t>(offsetof(MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A, ___EnableTiling_0)); }
	inline bool get_EnableTiling_0() const { return ___EnableTiling_0; }
	inline bool* get_address_of_EnableTiling_0() { return &___EnableTiling_0; }
	inline void set_EnableTiling_0(bool value)
	{
		___EnableTiling_0 = value;
	}

	inline static int32_t get_offset_of_TileFactor_1() { return static_cast<int32_t>(offsetof(MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A, ___TileFactor_1)); }
	inline float get_TileFactor_1() const { return ___TileFactor_1; }
	inline float* get_address_of_TileFactor_1() { return &___TileFactor_1; }
	inline void set_TileFactor_1(float value)
	{
		___TileFactor_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ChartAndGraph.MaterialTiling
struct MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A_marshaled_pinvoke
{
	int32_t ___EnableTiling_0;
	float ___TileFactor_1;
};
// Native definition for COM marshalling of ChartAndGraph.MaterialTiling
struct MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A_marshaled_com
{
	int32_t ___EnableTiling_0;
	float ___TileFactor_1;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0, ___next_1)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB 
{
public:
	// T System.Nullable`1::value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB, ___value_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_value_0() const { return ___value_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// ChartAndGraph.AxisFormat
struct AxisFormat_tC8455B010FC25557EDF48D3149DDC23006EB19D6 
{
public:
	// System.Int32 ChartAndGraph.AxisFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisFormat_tC8455B010FC25557EDF48D3149DDC23006EB19D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ChartAndGraph.BaseScrollableCategoryData
struct BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D  : public RuntimeObject
{
public:
	// System.String ChartAndGraph.BaseScrollableCategoryData::Name
	String_t* ___Name_0;
	// System.Boolean ChartAndGraph.BaseScrollableCategoryData::Enabled
	bool ___Enabled_1;
	// System.Int32 ChartAndGraph.BaseScrollableCategoryData::ViewOrder
	int32_t ___ViewOrder_2;
	// System.Nullable`1<System.Double> ChartAndGraph.BaseScrollableCategoryData::MaxX
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___MaxX_3;
	// System.Nullable`1<System.Double> ChartAndGraph.BaseScrollableCategoryData::MaxY
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___MaxY_4;
	// System.Nullable`1<System.Double> ChartAndGraph.BaseScrollableCategoryData::MinX
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___MinX_5;
	// System.Nullable`1<System.Double> ChartAndGraph.BaseScrollableCategoryData::MinY
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___MinY_6;
	// System.Nullable`1<System.Double> ChartAndGraph.BaseScrollableCategoryData::MaxRadius
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___MaxRadius_7;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Enabled_1() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___Enabled_1)); }
	inline bool get_Enabled_1() const { return ___Enabled_1; }
	inline bool* get_address_of_Enabled_1() { return &___Enabled_1; }
	inline void set_Enabled_1(bool value)
	{
		___Enabled_1 = value;
	}

	inline static int32_t get_offset_of_ViewOrder_2() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___ViewOrder_2)); }
	inline int32_t get_ViewOrder_2() const { return ___ViewOrder_2; }
	inline int32_t* get_address_of_ViewOrder_2() { return &___ViewOrder_2; }
	inline void set_ViewOrder_2(int32_t value)
	{
		___ViewOrder_2 = value;
	}

	inline static int32_t get_offset_of_MaxX_3() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___MaxX_3)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_MaxX_3() const { return ___MaxX_3; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_MaxX_3() { return &___MaxX_3; }
	inline void set_MaxX_3(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___MaxX_3 = value;
	}

	inline static int32_t get_offset_of_MaxY_4() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___MaxY_4)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_MaxY_4() const { return ___MaxY_4; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_MaxY_4() { return &___MaxY_4; }
	inline void set_MaxY_4(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___MaxY_4 = value;
	}

	inline static int32_t get_offset_of_MinX_5() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___MinX_5)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_MinX_5() const { return ___MinX_5; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_MinX_5() { return &___MinX_5; }
	inline void set_MinX_5(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___MinX_5 = value;
	}

	inline static int32_t get_offset_of_MinY_6() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___MinY_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_MinY_6() const { return ___MinY_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_MinY_6() { return &___MinY_6; }
	inline void set_MinY_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___MinY_6 = value;
	}

	inline static int32_t get_offset_of_MaxRadius_7() { return static_cast<int32_t>(offsetof(BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D, ___MaxRadius_7)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_MaxRadius_7() const { return ___MaxRadius_7; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_MaxRadius_7() { return &___MaxRadius_7; }
	inline void set_MaxRadius_7(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___MaxRadius_7 = value;
	}
};


// ChartAndGraph.ChartDivisionAligment
struct ChartDivisionAligment_t8DC8BC42250F72E3C7784374538B8BE8233B9614 
{
public:
	// System.Int32 ChartAndGraph.ChartDivisionAligment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChartDivisionAligment_t8DC8BC42250F72E3C7784374538B8BE8233B9614, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// WEB_PROTOCOL
struct WEB_PROTOCOL_t7E954BAAFB39489BB4FF557587BDF2C8DE34EB5E 
{
public:
	// System.Int32 WEB_PROTOCOL::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WEB_PROTOCOL_t7E954BAAFB39489BB4FF557587BDF2C8DE34EB5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlElement
struct XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___name_2)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_2() const { return ___name_2; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___attributes_3)); }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * get_attributes_3() const { return ___attributes_3; }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_3), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_4() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___lastChild_4)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_4() const { return ___lastChild_4; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_4() { return &___lastChild_4; }
	inline void set_lastChild_4(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_4), (void*)value);
	}
};


// ChartAndGraph.CandleChart/CandleThicknessMode
struct CandleThicknessMode_t6B69E5349BC6F97DFD1623D7B8B18DD5267DE909 
{
public:
	// System.Int32 ChartAndGraph.CandleChart/CandleThicknessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CandleThicknessMode_t6B69E5349BC6F97DFD1623D7B8B18DD5267DE909, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ChartAndGraph.ChartDivisionInfo/DivisionMessure
struct DivisionMessure_tFDB9475D76FBC144B99580716D6A617D48984B28 
{
public:
	// System.Int32 ChartAndGraph.ChartDivisionInfo/DivisionMessure::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DivisionMessure_tFDB9475D76FBC144B99580716D6A617D48984B28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ChartAndGraph.XMLParser/<GetAllChildObjects>d__12
struct U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086  : public RuntimeObject
{
public:
	// System.Int32 ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Int32 ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::obj
	RuntimeObject * ___obj_3;
	// System.Object ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>3__obj
	RuntimeObject * ___U3CU3E3__obj_4;
	// System.Collections.IEnumerator ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___obj_3)); }
	inline RuntimeObject * get_obj_3() const { return ___obj_3; }
	inline RuntimeObject ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(RuntimeObject * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__obj_4() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___U3CU3E3__obj_4)); }
	inline RuntimeObject * get_U3CU3E3__obj_4() const { return ___U3CU3E3__obj_4; }
	inline RuntimeObject ** get_address_of_U3CU3E3__obj_4() { return &___U3CU3E3__obj_4; }
	inline void set_U3CU3E3__obj_4(RuntimeObject * value)
	{
		___U3CU3E3__obj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__obj_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}
};


// GraphAndChartSimpleJSON.JSONNode/Enumerator/Type
struct Type_t2D9974CB280A0FFF96A16EBC7759E394D33067AD 
{
public:
	// System.Int32 GraphAndChartSimpleJSON.JSONNode/Enumerator/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t2D9974CB280A0FFF96A16EBC7759E394D33067AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ChartAndGraph.ChartDivisionInfo
struct ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC  : public RuntimeObject
{
public:
	// ChartAndGraph.ChartDivisionInfo/DivisionMessure ChartAndGraph.ChartDivisionInfo::messure
	int32_t ___messure_0;
	// System.Single ChartAndGraph.ChartDivisionInfo::unitsPerDivision
	float ___unitsPerDivision_1;
	// System.Int32 ChartAndGraph.ChartDivisionInfo::total
	int32_t ___total_2;
	// UnityEngine.Material ChartAndGraph.ChartDivisionInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// ChartAndGraph.MaterialTiling ChartAndGraph.ChartDivisionInfo::materialTiling
	MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  ___materialTiling_4;
	// ChartAndGraph.AutoFloat ChartAndGraph.ChartDivisionInfo::markBackLength
	AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  ___markBackLength_5;
	// ChartAndGraph.AutoFloat ChartAndGraph.ChartDivisionInfo::markLength
	AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  ___markLength_6;
	// ChartAndGraph.AutoFloat ChartAndGraph.ChartDivisionInfo::markDepth
	AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  ___markDepth_7;
	// System.Single ChartAndGraph.ChartDivisionInfo::markThickness
	float ___markThickness_8;
	// UnityEngine.MonoBehaviour ChartAndGraph.ChartDivisionInfo::textPrefab
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___textPrefab_9;
	// System.String ChartAndGraph.ChartDivisionInfo::textPrefix
	String_t* ___textPrefix_10;
	// System.String ChartAndGraph.ChartDivisionInfo::textSuffix
	String_t* ___textSuffix_11;
	// System.Int32 ChartAndGraph.ChartDivisionInfo::fractionDigits
	int32_t ___fractionDigits_12;
	// System.Int32 ChartAndGraph.ChartDivisionInfo::fontSize
	int32_t ___fontSize_13;
	// System.Single ChartAndGraph.ChartDivisionInfo::fontSharpness
	float ___fontSharpness_14;
	// System.Single ChartAndGraph.ChartDivisionInfo::textDepth
	float ___textDepth_15;
	// System.Single ChartAndGraph.ChartDivisionInfo::textSeperation
	float ___textSeperation_16;
	// ChartAndGraph.ChartDivisionAligment ChartAndGraph.ChartDivisionInfo::alignment
	int32_t ___alignment_17;
	// System.EventHandler ChartAndGraph.ChartDivisionInfo::OnDataUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnDataUpdate_18;
	// System.EventHandler ChartAndGraph.ChartDivisionInfo::OnDataChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnDataChanged_19;

public:
	inline static int32_t get_offset_of_messure_0() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___messure_0)); }
	inline int32_t get_messure_0() const { return ___messure_0; }
	inline int32_t* get_address_of_messure_0() { return &___messure_0; }
	inline void set_messure_0(int32_t value)
	{
		___messure_0 = value;
	}

	inline static int32_t get_offset_of_unitsPerDivision_1() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___unitsPerDivision_1)); }
	inline float get_unitsPerDivision_1() const { return ___unitsPerDivision_1; }
	inline float* get_address_of_unitsPerDivision_1() { return &___unitsPerDivision_1; }
	inline void set_unitsPerDivision_1(float value)
	{
		___unitsPerDivision_1 = value;
	}

	inline static int32_t get_offset_of_total_2() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___total_2)); }
	inline int32_t get_total_2() const { return ___total_2; }
	inline int32_t* get_address_of_total_2() { return &___total_2; }
	inline void set_total_2(int32_t value)
	{
		___total_2 = value;
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_materialTiling_4() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___materialTiling_4)); }
	inline MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  get_materialTiling_4() const { return ___materialTiling_4; }
	inline MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A * get_address_of_materialTiling_4() { return &___materialTiling_4; }
	inline void set_materialTiling_4(MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  value)
	{
		___materialTiling_4 = value;
	}

	inline static int32_t get_offset_of_markBackLength_5() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___markBackLength_5)); }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  get_markBackLength_5() const { return ___markBackLength_5; }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279 * get_address_of_markBackLength_5() { return &___markBackLength_5; }
	inline void set_markBackLength_5(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  value)
	{
		___markBackLength_5 = value;
	}

	inline static int32_t get_offset_of_markLength_6() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___markLength_6)); }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  get_markLength_6() const { return ___markLength_6; }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279 * get_address_of_markLength_6() { return &___markLength_6; }
	inline void set_markLength_6(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  value)
	{
		___markLength_6 = value;
	}

	inline static int32_t get_offset_of_markDepth_7() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___markDepth_7)); }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  get_markDepth_7() const { return ___markDepth_7; }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279 * get_address_of_markDepth_7() { return &___markDepth_7; }
	inline void set_markDepth_7(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  value)
	{
		___markDepth_7 = value;
	}

	inline static int32_t get_offset_of_markThickness_8() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___markThickness_8)); }
	inline float get_markThickness_8() const { return ___markThickness_8; }
	inline float* get_address_of_markThickness_8() { return &___markThickness_8; }
	inline void set_markThickness_8(float value)
	{
		___markThickness_8 = value;
	}

	inline static int32_t get_offset_of_textPrefab_9() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___textPrefab_9)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_textPrefab_9() const { return ___textPrefab_9; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_textPrefab_9() { return &___textPrefab_9; }
	inline void set_textPrefab_9(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___textPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_textPrefix_10() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___textPrefix_10)); }
	inline String_t* get_textPrefix_10() const { return ___textPrefix_10; }
	inline String_t** get_address_of_textPrefix_10() { return &___textPrefix_10; }
	inline void set_textPrefix_10(String_t* value)
	{
		___textPrefix_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrefix_10), (void*)value);
	}

	inline static int32_t get_offset_of_textSuffix_11() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___textSuffix_11)); }
	inline String_t* get_textSuffix_11() const { return ___textSuffix_11; }
	inline String_t** get_address_of_textSuffix_11() { return &___textSuffix_11; }
	inline void set_textSuffix_11(String_t* value)
	{
		___textSuffix_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSuffix_11), (void*)value);
	}

	inline static int32_t get_offset_of_fractionDigits_12() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___fractionDigits_12)); }
	inline int32_t get_fractionDigits_12() const { return ___fractionDigits_12; }
	inline int32_t* get_address_of_fractionDigits_12() { return &___fractionDigits_12; }
	inline void set_fractionDigits_12(int32_t value)
	{
		___fractionDigits_12 = value;
	}

	inline static int32_t get_offset_of_fontSize_13() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___fontSize_13)); }
	inline int32_t get_fontSize_13() const { return ___fontSize_13; }
	inline int32_t* get_address_of_fontSize_13() { return &___fontSize_13; }
	inline void set_fontSize_13(int32_t value)
	{
		___fontSize_13 = value;
	}

	inline static int32_t get_offset_of_fontSharpness_14() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___fontSharpness_14)); }
	inline float get_fontSharpness_14() const { return ___fontSharpness_14; }
	inline float* get_address_of_fontSharpness_14() { return &___fontSharpness_14; }
	inline void set_fontSharpness_14(float value)
	{
		___fontSharpness_14 = value;
	}

	inline static int32_t get_offset_of_textDepth_15() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___textDepth_15)); }
	inline float get_textDepth_15() const { return ___textDepth_15; }
	inline float* get_address_of_textDepth_15() { return &___textDepth_15; }
	inline void set_textDepth_15(float value)
	{
		___textDepth_15 = value;
	}

	inline static int32_t get_offset_of_textSeperation_16() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___textSeperation_16)); }
	inline float get_textSeperation_16() const { return ___textSeperation_16; }
	inline float* get_address_of_textSeperation_16() { return &___textSeperation_16; }
	inline void set_textSeperation_16(float value)
	{
		___textSeperation_16 = value;
	}

	inline static int32_t get_offset_of_alignment_17() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___alignment_17)); }
	inline int32_t get_alignment_17() const { return ___alignment_17; }
	inline int32_t* get_address_of_alignment_17() { return &___alignment_17; }
	inline void set_alignment_17(int32_t value)
	{
		___alignment_17 = value;
	}

	inline static int32_t get_offset_of_OnDataUpdate_18() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___OnDataUpdate_18)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnDataUpdate_18() const { return ___OnDataUpdate_18; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnDataUpdate_18() { return &___OnDataUpdate_18; }
	inline void set_OnDataUpdate_18(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnDataUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnDataChanged_19() { return static_cast<int32_t>(offsetof(ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC, ___OnDataChanged_19)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnDataChanged_19() const { return ___OnDataChanged_19; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnDataChanged_19() { return &___OnDataChanged_19; }
	inline void set_OnDataChanged_19(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnDataChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataChanged_19), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// ChartAndGraph.GraphData/CategoryData
struct CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C  : public BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D
{
public:
	// System.Boolean ChartAndGraph.GraphData/CategoryData::IsBezierCurve
	bool ___IsBezierCurve_9;
	// System.Int32 ChartAndGraph.GraphData/CategoryData::SegmentsPerCurve
	int32_t ___SegmentsPerCurve_10;
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3> ChartAndGraph.GraphData/CategoryData::mTmpCurveData
	List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * ___mTmpCurveData_11;
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3> ChartAndGraph.GraphData/CategoryData::Data
	List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * ___Data_12;
	// System.Boolean ChartAndGraph.GraphData/CategoryData::Regenerate
	bool ___Regenerate_13;
	// System.Boolean ChartAndGraph.GraphData/CategoryData::AllowNonFunctions
	bool ___AllowNonFunctions_14;
	// UnityEngine.Vector2[] ChartAndGraph.GraphData/CategoryData::initialData
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___initialData_15;
	// ChartAndGraph.ChartItemEffect ChartAndGraph.GraphData/CategoryData::LineHoverPrefab
	ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * ___LineHoverPrefab_16;
	// ChartAndGraph.ChartItemEffect ChartAndGraph.GraphData/CategoryData::PointHoverPrefab
	ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * ___PointHoverPrefab_17;
	// System.Boolean ChartAndGraph.GraphData/CategoryData::MaskPoints
	bool ___MaskPoints_18;
	// UnityEngine.Material ChartAndGraph.GraphData/CategoryData::LineMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___LineMaterial_19;
	// ChartAndGraph.MaterialTiling ChartAndGraph.GraphData/CategoryData::LineTiling
	MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  ___LineTiling_20;
	// System.Double ChartAndGraph.GraphData/CategoryData::LineThickness
	double ___LineThickness_21;
	// UnityEngine.Material ChartAndGraph.GraphData/CategoryData::FillMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___FillMaterial_22;
	// System.Boolean ChartAndGraph.GraphData/CategoryData::StetchFill
	bool ___StetchFill_23;
	// UnityEngine.Material ChartAndGraph.GraphData/CategoryData::PointMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___PointMaterial_24;
	// System.Double ChartAndGraph.GraphData/CategoryData::PointSize
	double ___PointSize_25;
	// ChartAndGraph.PathGenerator ChartAndGraph.GraphData/CategoryData::LinePrefab
	PathGenerator_t343BA96C31A1D8016454000D4CBDB88B544D3A1F * ___LinePrefab_26;
	// ChartAndGraph.FillPathGenerator ChartAndGraph.GraphData/CategoryData::FillPrefab
	FillPathGenerator_t2F884F4CD6255F49CF247B1BA83B17E1EBE06C92 * ___FillPrefab_27;
	// UnityEngine.GameObject ChartAndGraph.GraphData/CategoryData::DotPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DotPrefab_28;
	// System.Double ChartAndGraph.GraphData/CategoryData::Depth
	double ___Depth_29;

public:
	inline static int32_t get_offset_of_IsBezierCurve_9() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___IsBezierCurve_9)); }
	inline bool get_IsBezierCurve_9() const { return ___IsBezierCurve_9; }
	inline bool* get_address_of_IsBezierCurve_9() { return &___IsBezierCurve_9; }
	inline void set_IsBezierCurve_9(bool value)
	{
		___IsBezierCurve_9 = value;
	}

	inline static int32_t get_offset_of_SegmentsPerCurve_10() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___SegmentsPerCurve_10)); }
	inline int32_t get_SegmentsPerCurve_10() const { return ___SegmentsPerCurve_10; }
	inline int32_t* get_address_of_SegmentsPerCurve_10() { return &___SegmentsPerCurve_10; }
	inline void set_SegmentsPerCurve_10(int32_t value)
	{
		___SegmentsPerCurve_10 = value;
	}

	inline static int32_t get_offset_of_mTmpCurveData_11() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___mTmpCurveData_11)); }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * get_mTmpCurveData_11() const { return ___mTmpCurveData_11; }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 ** get_address_of_mTmpCurveData_11() { return &___mTmpCurveData_11; }
	inline void set_mTmpCurveData_11(List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * value)
	{
		___mTmpCurveData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpCurveData_11), (void*)value);
	}

	inline static int32_t get_offset_of_Data_12() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___Data_12)); }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * get_Data_12() const { return ___Data_12; }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 ** get_address_of_Data_12() { return &___Data_12; }
	inline void set_Data_12(List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * value)
	{
		___Data_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_12), (void*)value);
	}

	inline static int32_t get_offset_of_Regenerate_13() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___Regenerate_13)); }
	inline bool get_Regenerate_13() const { return ___Regenerate_13; }
	inline bool* get_address_of_Regenerate_13() { return &___Regenerate_13; }
	inline void set_Regenerate_13(bool value)
	{
		___Regenerate_13 = value;
	}

	inline static int32_t get_offset_of_AllowNonFunctions_14() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___AllowNonFunctions_14)); }
	inline bool get_AllowNonFunctions_14() const { return ___AllowNonFunctions_14; }
	inline bool* get_address_of_AllowNonFunctions_14() { return &___AllowNonFunctions_14; }
	inline void set_AllowNonFunctions_14(bool value)
	{
		___AllowNonFunctions_14 = value;
	}

	inline static int32_t get_offset_of_initialData_15() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___initialData_15)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_initialData_15() const { return ___initialData_15; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_initialData_15() { return &___initialData_15; }
	inline void set_initialData_15(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___initialData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialData_15), (void*)value);
	}

	inline static int32_t get_offset_of_LineHoverPrefab_16() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___LineHoverPrefab_16)); }
	inline ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * get_LineHoverPrefab_16() const { return ___LineHoverPrefab_16; }
	inline ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 ** get_address_of_LineHoverPrefab_16() { return &___LineHoverPrefab_16; }
	inline void set_LineHoverPrefab_16(ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * value)
	{
		___LineHoverPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineHoverPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_PointHoverPrefab_17() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___PointHoverPrefab_17)); }
	inline ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * get_PointHoverPrefab_17() const { return ___PointHoverPrefab_17; }
	inline ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 ** get_address_of_PointHoverPrefab_17() { return &___PointHoverPrefab_17; }
	inline void set_PointHoverPrefab_17(ChartItemEffect_t2503A99C8E3424F9BF9954B2A87414D57DB34093 * value)
	{
		___PointHoverPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointHoverPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_MaskPoints_18() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___MaskPoints_18)); }
	inline bool get_MaskPoints_18() const { return ___MaskPoints_18; }
	inline bool* get_address_of_MaskPoints_18() { return &___MaskPoints_18; }
	inline void set_MaskPoints_18(bool value)
	{
		___MaskPoints_18 = value;
	}

	inline static int32_t get_offset_of_LineMaterial_19() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___LineMaterial_19)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_LineMaterial_19() const { return ___LineMaterial_19; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_LineMaterial_19() { return &___LineMaterial_19; }
	inline void set_LineMaterial_19(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___LineMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineMaterial_19), (void*)value);
	}

	inline static int32_t get_offset_of_LineTiling_20() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___LineTiling_20)); }
	inline MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  get_LineTiling_20() const { return ___LineTiling_20; }
	inline MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A * get_address_of_LineTiling_20() { return &___LineTiling_20; }
	inline void set_LineTiling_20(MaterialTiling_t94CF882DC8BFD8349CA60670C192A49376DE954A  value)
	{
		___LineTiling_20 = value;
	}

	inline static int32_t get_offset_of_LineThickness_21() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___LineThickness_21)); }
	inline double get_LineThickness_21() const { return ___LineThickness_21; }
	inline double* get_address_of_LineThickness_21() { return &___LineThickness_21; }
	inline void set_LineThickness_21(double value)
	{
		___LineThickness_21 = value;
	}

	inline static int32_t get_offset_of_FillMaterial_22() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___FillMaterial_22)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_FillMaterial_22() const { return ___FillMaterial_22; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_FillMaterial_22() { return &___FillMaterial_22; }
	inline void set_FillMaterial_22(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___FillMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FillMaterial_22), (void*)value);
	}

	inline static int32_t get_offset_of_StetchFill_23() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___StetchFill_23)); }
	inline bool get_StetchFill_23() const { return ___StetchFill_23; }
	inline bool* get_address_of_StetchFill_23() { return &___StetchFill_23; }
	inline void set_StetchFill_23(bool value)
	{
		___StetchFill_23 = value;
	}

	inline static int32_t get_offset_of_PointMaterial_24() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___PointMaterial_24)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_PointMaterial_24() const { return ___PointMaterial_24; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_PointMaterial_24() { return &___PointMaterial_24; }
	inline void set_PointMaterial_24(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___PointMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointMaterial_24), (void*)value);
	}

	inline static int32_t get_offset_of_PointSize_25() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___PointSize_25)); }
	inline double get_PointSize_25() const { return ___PointSize_25; }
	inline double* get_address_of_PointSize_25() { return &___PointSize_25; }
	inline void set_PointSize_25(double value)
	{
		___PointSize_25 = value;
	}

	inline static int32_t get_offset_of_LinePrefab_26() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___LinePrefab_26)); }
	inline PathGenerator_t343BA96C31A1D8016454000D4CBDB88B544D3A1F * get_LinePrefab_26() const { return ___LinePrefab_26; }
	inline PathGenerator_t343BA96C31A1D8016454000D4CBDB88B544D3A1F ** get_address_of_LinePrefab_26() { return &___LinePrefab_26; }
	inline void set_LinePrefab_26(PathGenerator_t343BA96C31A1D8016454000D4CBDB88B544D3A1F * value)
	{
		___LinePrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LinePrefab_26), (void*)value);
	}

	inline static int32_t get_offset_of_FillPrefab_27() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___FillPrefab_27)); }
	inline FillPathGenerator_t2F884F4CD6255F49CF247B1BA83B17E1EBE06C92 * get_FillPrefab_27() const { return ___FillPrefab_27; }
	inline FillPathGenerator_t2F884F4CD6255F49CF247B1BA83B17E1EBE06C92 ** get_address_of_FillPrefab_27() { return &___FillPrefab_27; }
	inline void set_FillPrefab_27(FillPathGenerator_t2F884F4CD6255F49CF247B1BA83B17E1EBE06C92 * value)
	{
		___FillPrefab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FillPrefab_27), (void*)value);
	}

	inline static int32_t get_offset_of_DotPrefab_28() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___DotPrefab_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DotPrefab_28() const { return ___DotPrefab_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DotPrefab_28() { return &___DotPrefab_28; }
	inline void set_DotPrefab_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DotPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DotPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_Depth_29() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C, ___Depth_29)); }
	inline double get_Depth_29() const { return ___Depth_29; }
	inline double* get_address_of_Depth_29() { return &___Depth_29; }
	inline void set_Depth_29(double value)
	{
		___Depth_29 = value;
	}
};

struct CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C_StaticFields
{
public:
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3> ChartAndGraph.GraphData/CategoryData::mEmpty
	List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * ___mEmpty_8;

public:
	inline static int32_t get_offset_of_mEmpty_8() { return static_cast<int32_t>(offsetof(CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C_StaticFields, ___mEmpty_8)); }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * get_mEmpty_8() const { return ___mEmpty_8; }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 ** get_address_of_mEmpty_8() { return &___mEmpty_8; }
	inline void set_mEmpty_8(List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * value)
	{
		___mEmpty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEmpty_8), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ChartAndGraph.ChartMainDivisionInfo
struct ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988  : public ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC
{
public:

public:
};


// ChartAndGraph.ChartSubDivisionInfo
struct ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881  : public ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ChartAndGraph.AnyChart
struct AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 ChartAndGraph.AnyChart::mLastSetSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mLastSetSize_4;
	// System.Boolean ChartAndGraph.AnyChart::mGenerating
	bool ___mGenerating_5;
	// System.Collections.Generic.Dictionary`2<System.Double,System.String> ChartAndGraph.AnyChart::mHorizontalValueToStringMap
	Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * ___mHorizontalValueToStringMap_6;
	// System.Collections.Generic.Dictionary`2<System.Double,System.String> ChartAndGraph.AnyChart::mVerticalValueToStringMap
	Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * ___mVerticalValueToStringMap_7;
	// System.Collections.Generic.Dictionary`2<ChartAndGraph.DoubleVector3,System.Collections.Generic.KeyValuePair`2<System.String,System.String>> ChartAndGraph.AnyChart::mVectorToValueMap
	Dictionary_2_t0491A4FAF699F48405E9F48ED6C3CDE0E8D46FF2 * ___mVectorToValueMap_8;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::mFixPosition
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mFixPosition_9;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::mPreviewObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mPreviewObject_10;
	// System.Func`3<System.Double,System.Int32,System.String> ChartAndGraph.AnyChart::customNumberFormat
	Func_3_tE7030EF1717F1632054DA14E12D548E9918A0797 * ___customNumberFormat_11;
	// System.Func`2<System.DateTime,System.String> ChartAndGraph.AnyChart::customDateTimeFormat
	Func_2_t226CE9C6F91B106952123BEAD68F02E345BAABCA * ___customDateTimeFormat_12;
	// UnityEngine.Events.UnityEvent ChartAndGraph.AnyChart::OnRedraw
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRedraw_13;
	// System.Boolean ChartAndGraph.AnyChart::keepOrthoSize
	bool ___keepOrthoSize_14;
	// System.Boolean ChartAndGraph.AnyChart::paperEffectText
	bool ___paperEffectText_15;
	// System.Boolean ChartAndGraph.AnyChart::vRSpaceText
	bool ___vRSpaceText_16;
	// System.Single ChartAndGraph.AnyChart::vRSpaceScale
	float ___vRSpaceScale_17;
	// System.Boolean ChartAndGraph.AnyChart::maintainLabelSize
	bool ___maintainLabelSize_18;
	// System.Collections.Generic.HashSet`1<System.Object> ChartAndGraph.AnyChart::mHovered
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___mHovered_19;
	// System.Boolean ChartAndGraph.AnyChart::<IsUnderCanvas>k__BackingField
	bool ___U3CIsUnderCanvasU3Ek__BackingField_20;
	// System.Boolean ChartAndGraph.AnyChart::<CanvasChanged>k__BackingField
	bool ___U3CCanvasChangedU3Ek__BackingField_21;
	// ChartAndGraph.ItemLabels ChartAndGraph.AnyChart::mItemLabels
	ItemLabels_t63A77A269FA9BBF881F4CE2DD1FC5422A64F128E * ___mItemLabels_22;
	// ChartAndGraph.VerticalAxis ChartAndGraph.AnyChart::mVerticalAxis
	VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * ___mVerticalAxis_23;
	// ChartAndGraph.HorizontalAxis ChartAndGraph.AnyChart::mHorizontalAxis
	HorizontalAxis_tE0C6F7ED94BCCEC88C99A3274A7D794625AA91C7 * ___mHorizontalAxis_24;
	// CategoryLabels ChartAndGraph.AnyChart::mCategoryLabels
	CategoryLabels_t5295E8E0028A2C380CA871E1A20BC6FB62A25724 * ___mCategoryLabels_25;
	// GroupLabels ChartAndGraph.AnyChart::mGroupLabels
	GroupLabels_tE92E630E9DBBAA6E0C29A8CC9588091343CC666E * ___mGroupLabels_26;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::VerticalMainDevisions
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___VerticalMainDevisions_27;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::VerticalSubDevisions
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___VerticalSubDevisions_28;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::HorizontalMainDevisions
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HorizontalMainDevisions_29;
	// UnityEngine.GameObject ChartAndGraph.AnyChart::HorizontalSubDevisions
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HorizontalSubDevisions_30;
	// System.Boolean ChartAndGraph.AnyChart::mGenerateOnNextUpdate
	bool ___mGenerateOnNextUpdate_31;
	// System.Boolean ChartAndGraph.AnyChart::mRealtimeOnNextUpdate
	bool ___mRealtimeOnNextUpdate_32;
	// System.Boolean ChartAndGraph.AnyChart::hideHierarchy
	bool ___hideHierarchy_33;
	// System.Collections.Generic.List`1<ChartAndGraph.Axis.IAxisGenerator> ChartAndGraph.AnyChart::mAxis
	List_1_tA8A2054008FA384913BE70813D260D569C677582 * ___mAxis_34;
	// TextController ChartAndGraph.AnyChart::mTextController
	TextController_t9E7C2168AFDC199CA73C17AF87070BB78107BFA5 * ___mTextController_35;
	// System.Action ChartAndGraph.AnyChart::ChartGenerated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___ChartGenerated_37;

public:
	inline static int32_t get_offset_of_mLastSetSize_4() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mLastSetSize_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mLastSetSize_4() const { return ___mLastSetSize_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mLastSetSize_4() { return &___mLastSetSize_4; }
	inline void set_mLastSetSize_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mLastSetSize_4 = value;
	}

	inline static int32_t get_offset_of_mGenerating_5() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mGenerating_5)); }
	inline bool get_mGenerating_5() const { return ___mGenerating_5; }
	inline bool* get_address_of_mGenerating_5() { return &___mGenerating_5; }
	inline void set_mGenerating_5(bool value)
	{
		___mGenerating_5 = value;
	}

	inline static int32_t get_offset_of_mHorizontalValueToStringMap_6() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mHorizontalValueToStringMap_6)); }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * get_mHorizontalValueToStringMap_6() const { return ___mHorizontalValueToStringMap_6; }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 ** get_address_of_mHorizontalValueToStringMap_6() { return &___mHorizontalValueToStringMap_6; }
	inline void set_mHorizontalValueToStringMap_6(Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * value)
	{
		___mHorizontalValueToStringMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHorizontalValueToStringMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_mVerticalValueToStringMap_7() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mVerticalValueToStringMap_7)); }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * get_mVerticalValueToStringMap_7() const { return ___mVerticalValueToStringMap_7; }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 ** get_address_of_mVerticalValueToStringMap_7() { return &___mVerticalValueToStringMap_7; }
	inline void set_mVerticalValueToStringMap_7(Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * value)
	{
		___mVerticalValueToStringMap_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVerticalValueToStringMap_7), (void*)value);
	}

	inline static int32_t get_offset_of_mVectorToValueMap_8() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mVectorToValueMap_8)); }
	inline Dictionary_2_t0491A4FAF699F48405E9F48ED6C3CDE0E8D46FF2 * get_mVectorToValueMap_8() const { return ___mVectorToValueMap_8; }
	inline Dictionary_2_t0491A4FAF699F48405E9F48ED6C3CDE0E8D46FF2 ** get_address_of_mVectorToValueMap_8() { return &___mVectorToValueMap_8; }
	inline void set_mVectorToValueMap_8(Dictionary_2_t0491A4FAF699F48405E9F48ED6C3CDE0E8D46FF2 * value)
	{
		___mVectorToValueMap_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVectorToValueMap_8), (void*)value);
	}

	inline static int32_t get_offset_of_mFixPosition_9() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mFixPosition_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mFixPosition_9() const { return ___mFixPosition_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mFixPosition_9() { return &___mFixPosition_9; }
	inline void set_mFixPosition_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mFixPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFixPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of_mPreviewObject_10() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mPreviewObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mPreviewObject_10() const { return ___mPreviewObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mPreviewObject_10() { return &___mPreviewObject_10; }
	inline void set_mPreviewObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mPreviewObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreviewObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_customNumberFormat_11() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___customNumberFormat_11)); }
	inline Func_3_tE7030EF1717F1632054DA14E12D548E9918A0797 * get_customNumberFormat_11() const { return ___customNumberFormat_11; }
	inline Func_3_tE7030EF1717F1632054DA14E12D548E9918A0797 ** get_address_of_customNumberFormat_11() { return &___customNumberFormat_11; }
	inline void set_customNumberFormat_11(Func_3_tE7030EF1717F1632054DA14E12D548E9918A0797 * value)
	{
		___customNumberFormat_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customNumberFormat_11), (void*)value);
	}

	inline static int32_t get_offset_of_customDateTimeFormat_12() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___customDateTimeFormat_12)); }
	inline Func_2_t226CE9C6F91B106952123BEAD68F02E345BAABCA * get_customDateTimeFormat_12() const { return ___customDateTimeFormat_12; }
	inline Func_2_t226CE9C6F91B106952123BEAD68F02E345BAABCA ** get_address_of_customDateTimeFormat_12() { return &___customDateTimeFormat_12; }
	inline void set_customDateTimeFormat_12(Func_2_t226CE9C6F91B106952123BEAD68F02E345BAABCA * value)
	{
		___customDateTimeFormat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customDateTimeFormat_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnRedraw_13() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___OnRedraw_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRedraw_13() const { return ___OnRedraw_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRedraw_13() { return &___OnRedraw_13; }
	inline void set_OnRedraw_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRedraw_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRedraw_13), (void*)value);
	}

	inline static int32_t get_offset_of_keepOrthoSize_14() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___keepOrthoSize_14)); }
	inline bool get_keepOrthoSize_14() const { return ___keepOrthoSize_14; }
	inline bool* get_address_of_keepOrthoSize_14() { return &___keepOrthoSize_14; }
	inline void set_keepOrthoSize_14(bool value)
	{
		___keepOrthoSize_14 = value;
	}

	inline static int32_t get_offset_of_paperEffectText_15() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___paperEffectText_15)); }
	inline bool get_paperEffectText_15() const { return ___paperEffectText_15; }
	inline bool* get_address_of_paperEffectText_15() { return &___paperEffectText_15; }
	inline void set_paperEffectText_15(bool value)
	{
		___paperEffectText_15 = value;
	}

	inline static int32_t get_offset_of_vRSpaceText_16() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___vRSpaceText_16)); }
	inline bool get_vRSpaceText_16() const { return ___vRSpaceText_16; }
	inline bool* get_address_of_vRSpaceText_16() { return &___vRSpaceText_16; }
	inline void set_vRSpaceText_16(bool value)
	{
		___vRSpaceText_16 = value;
	}

	inline static int32_t get_offset_of_vRSpaceScale_17() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___vRSpaceScale_17)); }
	inline float get_vRSpaceScale_17() const { return ___vRSpaceScale_17; }
	inline float* get_address_of_vRSpaceScale_17() { return &___vRSpaceScale_17; }
	inline void set_vRSpaceScale_17(float value)
	{
		___vRSpaceScale_17 = value;
	}

	inline static int32_t get_offset_of_maintainLabelSize_18() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___maintainLabelSize_18)); }
	inline bool get_maintainLabelSize_18() const { return ___maintainLabelSize_18; }
	inline bool* get_address_of_maintainLabelSize_18() { return &___maintainLabelSize_18; }
	inline void set_maintainLabelSize_18(bool value)
	{
		___maintainLabelSize_18 = value;
	}

	inline static int32_t get_offset_of_mHovered_19() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mHovered_19)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get_mHovered_19() const { return ___mHovered_19; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of_mHovered_19() { return &___mHovered_19; }
	inline void set_mHovered_19(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		___mHovered_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHovered_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUnderCanvasU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___U3CIsUnderCanvasU3Ek__BackingField_20)); }
	inline bool get_U3CIsUnderCanvasU3Ek__BackingField_20() const { return ___U3CIsUnderCanvasU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsUnderCanvasU3Ek__BackingField_20() { return &___U3CIsUnderCanvasU3Ek__BackingField_20; }
	inline void set_U3CIsUnderCanvasU3Ek__BackingField_20(bool value)
	{
		___U3CIsUnderCanvasU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CCanvasChangedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___U3CCanvasChangedU3Ek__BackingField_21)); }
	inline bool get_U3CCanvasChangedU3Ek__BackingField_21() const { return ___U3CCanvasChangedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CCanvasChangedU3Ek__BackingField_21() { return &___U3CCanvasChangedU3Ek__BackingField_21; }
	inline void set_U3CCanvasChangedU3Ek__BackingField_21(bool value)
	{
		___U3CCanvasChangedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_mItemLabels_22() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mItemLabels_22)); }
	inline ItemLabels_t63A77A269FA9BBF881F4CE2DD1FC5422A64F128E * get_mItemLabels_22() const { return ___mItemLabels_22; }
	inline ItemLabels_t63A77A269FA9BBF881F4CE2DD1FC5422A64F128E ** get_address_of_mItemLabels_22() { return &___mItemLabels_22; }
	inline void set_mItemLabels_22(ItemLabels_t63A77A269FA9BBF881F4CE2DD1FC5422A64F128E * value)
	{
		___mItemLabels_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mItemLabels_22), (void*)value);
	}

	inline static int32_t get_offset_of_mVerticalAxis_23() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mVerticalAxis_23)); }
	inline VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * get_mVerticalAxis_23() const { return ___mVerticalAxis_23; }
	inline VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B ** get_address_of_mVerticalAxis_23() { return &___mVerticalAxis_23; }
	inline void set_mVerticalAxis_23(VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * value)
	{
		___mVerticalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVerticalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_mHorizontalAxis_24() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mHorizontalAxis_24)); }
	inline HorizontalAxis_tE0C6F7ED94BCCEC88C99A3274A7D794625AA91C7 * get_mHorizontalAxis_24() const { return ___mHorizontalAxis_24; }
	inline HorizontalAxis_tE0C6F7ED94BCCEC88C99A3274A7D794625AA91C7 ** get_address_of_mHorizontalAxis_24() { return &___mHorizontalAxis_24; }
	inline void set_mHorizontalAxis_24(HorizontalAxis_tE0C6F7ED94BCCEC88C99A3274A7D794625AA91C7 * value)
	{
		___mHorizontalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHorizontalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_mCategoryLabels_25() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mCategoryLabels_25)); }
	inline CategoryLabels_t5295E8E0028A2C380CA871E1A20BC6FB62A25724 * get_mCategoryLabels_25() const { return ___mCategoryLabels_25; }
	inline CategoryLabels_t5295E8E0028A2C380CA871E1A20BC6FB62A25724 ** get_address_of_mCategoryLabels_25() { return &___mCategoryLabels_25; }
	inline void set_mCategoryLabels_25(CategoryLabels_t5295E8E0028A2C380CA871E1A20BC6FB62A25724 * value)
	{
		___mCategoryLabels_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCategoryLabels_25), (void*)value);
	}

	inline static int32_t get_offset_of_mGroupLabels_26() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mGroupLabels_26)); }
	inline GroupLabels_tE92E630E9DBBAA6E0C29A8CC9588091343CC666E * get_mGroupLabels_26() const { return ___mGroupLabels_26; }
	inline GroupLabels_tE92E630E9DBBAA6E0C29A8CC9588091343CC666E ** get_address_of_mGroupLabels_26() { return &___mGroupLabels_26; }
	inline void set_mGroupLabels_26(GroupLabels_tE92E630E9DBBAA6E0C29A8CC9588091343CC666E * value)
	{
		___mGroupLabels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGroupLabels_26), (void*)value);
	}

	inline static int32_t get_offset_of_VerticalMainDevisions_27() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___VerticalMainDevisions_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_VerticalMainDevisions_27() const { return ___VerticalMainDevisions_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_VerticalMainDevisions_27() { return &___VerticalMainDevisions_27; }
	inline void set_VerticalMainDevisions_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___VerticalMainDevisions_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalMainDevisions_27), (void*)value);
	}

	inline static int32_t get_offset_of_VerticalSubDevisions_28() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___VerticalSubDevisions_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_VerticalSubDevisions_28() const { return ___VerticalSubDevisions_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_VerticalSubDevisions_28() { return &___VerticalSubDevisions_28; }
	inline void set_VerticalSubDevisions_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___VerticalSubDevisions_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalSubDevisions_28), (void*)value);
	}

	inline static int32_t get_offset_of_HorizontalMainDevisions_29() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___HorizontalMainDevisions_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HorizontalMainDevisions_29() const { return ___HorizontalMainDevisions_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HorizontalMainDevisions_29() { return &___HorizontalMainDevisions_29; }
	inline void set_HorizontalMainDevisions_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HorizontalMainDevisions_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HorizontalMainDevisions_29), (void*)value);
	}

	inline static int32_t get_offset_of_HorizontalSubDevisions_30() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___HorizontalSubDevisions_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HorizontalSubDevisions_30() const { return ___HorizontalSubDevisions_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HorizontalSubDevisions_30() { return &___HorizontalSubDevisions_30; }
	inline void set_HorizontalSubDevisions_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HorizontalSubDevisions_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HorizontalSubDevisions_30), (void*)value);
	}

	inline static int32_t get_offset_of_mGenerateOnNextUpdate_31() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mGenerateOnNextUpdate_31)); }
	inline bool get_mGenerateOnNextUpdate_31() const { return ___mGenerateOnNextUpdate_31; }
	inline bool* get_address_of_mGenerateOnNextUpdate_31() { return &___mGenerateOnNextUpdate_31; }
	inline void set_mGenerateOnNextUpdate_31(bool value)
	{
		___mGenerateOnNextUpdate_31 = value;
	}

	inline static int32_t get_offset_of_mRealtimeOnNextUpdate_32() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mRealtimeOnNextUpdate_32)); }
	inline bool get_mRealtimeOnNextUpdate_32() const { return ___mRealtimeOnNextUpdate_32; }
	inline bool* get_address_of_mRealtimeOnNextUpdate_32() { return &___mRealtimeOnNextUpdate_32; }
	inline void set_mRealtimeOnNextUpdate_32(bool value)
	{
		___mRealtimeOnNextUpdate_32 = value;
	}

	inline static int32_t get_offset_of_hideHierarchy_33() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___hideHierarchy_33)); }
	inline bool get_hideHierarchy_33() const { return ___hideHierarchy_33; }
	inline bool* get_address_of_hideHierarchy_33() { return &___hideHierarchy_33; }
	inline void set_hideHierarchy_33(bool value)
	{
		___hideHierarchy_33 = value;
	}

	inline static int32_t get_offset_of_mAxis_34() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mAxis_34)); }
	inline List_1_tA8A2054008FA384913BE70813D260D569C677582 * get_mAxis_34() const { return ___mAxis_34; }
	inline List_1_tA8A2054008FA384913BE70813D260D569C677582 ** get_address_of_mAxis_34() { return &___mAxis_34; }
	inline void set_mAxis_34(List_1_tA8A2054008FA384913BE70813D260D569C677582 * value)
	{
		___mAxis_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAxis_34), (void*)value);
	}

	inline static int32_t get_offset_of_mTextController_35() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___mTextController_35)); }
	inline TextController_t9E7C2168AFDC199CA73C17AF87070BB78107BFA5 * get_mTextController_35() const { return ___mTextController_35; }
	inline TextController_t9E7C2168AFDC199CA73C17AF87070BB78107BFA5 ** get_address_of_mTextController_35() { return &___mTextController_35; }
	inline void set_mTextController_35(TextController_t9E7C2168AFDC199CA73C17AF87070BB78107BFA5 * value)
	{
		___mTextController_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextController_35), (void*)value);
	}

	inline static int32_t get_offset_of_ChartGenerated_37() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1, ___ChartGenerated_37)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_ChartGenerated_37() const { return ___ChartGenerated_37; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_ChartGenerated_37() { return &___ChartGenerated_37; }
	inline void set_ChartGenerated_37(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___ChartGenerated_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChartGenerated_37), (void*)value);
	}
};

struct AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChartAndGraph.AnyChart::toMove
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___toMove_36;

public:
	inline static int32_t get_offset_of_toMove_36() { return static_cast<int32_t>(offsetof(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1_StaticFields, ___toMove_36)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_toMove_36() const { return ___toMove_36; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_toMove_36() { return &___toMove_36; }
	inline void set_toMove_36(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___toMove_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toMove_36), (void*)value);
	}
};


// ChartAndGraph.CanvasCandle
struct CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<ChartAndGraph.CandleChartData/CandleValue> ChartAndGraph.CanvasCandle::mEmptyCandle
	List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * ___mEmptyCandle_4;
	// System.Collections.Generic.HashSet`1<ChartAndGraph.CanvasCandleGraphic> ChartAndGraph.CanvasCandle::mOccupied
	HashSet_1_t7C5AFA36AFF376D91AAA7F655A0BD10F81C6FAC7 * ___mOccupied_5;
	// ChartAndGraph.CanvasCandleGraphic ChartAndGraph.CanvasCandle::mCandle
	CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * ___mCandle_6;
	// ChartAndGraph.CanvasCandleGraphic ChartAndGraph.CanvasCandle::mLine
	CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * ___mLine_7;
	// ChartAndGraph.CanvasCandleGraphic ChartAndGraph.CanvasCandle::mOutline
	CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * ___mOutline_8;
	// ChartAndGraph.EventHandlingGraphic/GraphicEvent ChartAndGraph.CanvasCandle::Hover
	GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * ___Hover_9;
	// ChartAndGraph.EventHandlingGraphic/GraphicEvent ChartAndGraph.CanvasCandle::Click
	GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * ___Click_10;
	// System.Action ChartAndGraph.CanvasCandle::Leave
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___Leave_11;

public:
	inline static int32_t get_offset_of_mEmptyCandle_4() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___mEmptyCandle_4)); }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * get_mEmptyCandle_4() const { return ___mEmptyCandle_4; }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 ** get_address_of_mEmptyCandle_4() { return &___mEmptyCandle_4; }
	inline void set_mEmptyCandle_4(List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * value)
	{
		___mEmptyCandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEmptyCandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_mOccupied_5() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___mOccupied_5)); }
	inline HashSet_1_t7C5AFA36AFF376D91AAA7F655A0BD10F81C6FAC7 * get_mOccupied_5() const { return ___mOccupied_5; }
	inline HashSet_1_t7C5AFA36AFF376D91AAA7F655A0BD10F81C6FAC7 ** get_address_of_mOccupied_5() { return &___mOccupied_5; }
	inline void set_mOccupied_5(HashSet_1_t7C5AFA36AFF376D91AAA7F655A0BD10F81C6FAC7 * value)
	{
		___mOccupied_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOccupied_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCandle_6() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___mCandle_6)); }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * get_mCandle_6() const { return ___mCandle_6; }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 ** get_address_of_mCandle_6() { return &___mCandle_6; }
	inline void set_mCandle_6(CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * value)
	{
		___mCandle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCandle_6), (void*)value);
	}

	inline static int32_t get_offset_of_mLine_7() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___mLine_7)); }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * get_mLine_7() const { return ___mLine_7; }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 ** get_address_of_mLine_7() { return &___mLine_7; }
	inline void set_mLine_7(CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * value)
	{
		___mLine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLine_7), (void*)value);
	}

	inline static int32_t get_offset_of_mOutline_8() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___mOutline_8)); }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * get_mOutline_8() const { return ___mOutline_8; }
	inline CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 ** get_address_of_mOutline_8() { return &___mOutline_8; }
	inline void set_mOutline_8(CanvasCandleGraphic_tDADEEC4D1FF29E55BF466718C360B16FEF8B4666 * value)
	{
		___mOutline_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOutline_8), (void*)value);
	}

	inline static int32_t get_offset_of_Hover_9() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___Hover_9)); }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * get_Hover_9() const { return ___Hover_9; }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 ** get_address_of_Hover_9() { return &___Hover_9; }
	inline void set_Hover_9(GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * value)
	{
		___Hover_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hover_9), (void*)value);
	}

	inline static int32_t get_offset_of_Click_10() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___Click_10)); }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * get_Click_10() const { return ___Click_10; }
	inline GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 ** get_address_of_Click_10() { return &___Click_10; }
	inline void set_Click_10(GraphicEvent_t019D4212271B9E5897867E88AB4F2EADEFD5D465 * value)
	{
		___Click_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Click_10), (void*)value);
	}

	inline static int32_t get_offset_of_Leave_11() { return static_cast<int32_t>(offsetof(CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4, ___Leave_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_Leave_11() const { return ___Leave_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_Leave_11() { return &___Leave_11; }
	inline void set_Leave_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___Leave_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leave_11), (void*)value);
	}
};


// ChartAndGraph.ChartSettingItemBase
struct ChartSettingItemBase_tDCEC0B8E2DF7121399030247F2CE6D734C7E8FE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.EventHandler ChartAndGraph.ChartSettingItemBase::OnDataUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnDataUpdate_4;
	// System.EventHandler ChartAndGraph.ChartSettingItemBase::OnDataChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnDataChanged_5;
	// ChartAndGraph.AnyChart ChartAndGraph.ChartSettingItemBase::mChart
	AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1 * ___mChart_6;

public:
	inline static int32_t get_offset_of_OnDataUpdate_4() { return static_cast<int32_t>(offsetof(ChartSettingItemBase_tDCEC0B8E2DF7121399030247F2CE6D734C7E8FE1, ___OnDataUpdate_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnDataUpdate_4() const { return ___OnDataUpdate_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnDataUpdate_4() { return &___OnDataUpdate_4; }
	inline void set_OnDataUpdate_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnDataUpdate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataUpdate_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnDataChanged_5() { return static_cast<int32_t>(offsetof(ChartSettingItemBase_tDCEC0B8E2DF7121399030247F2CE6D734C7E8FE1, ___OnDataChanged_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnDataChanged_5() const { return ___OnDataChanged_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnDataChanged_5() { return &___OnDataChanged_5; }
	inline void set_OnDataChanged_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnDataChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataChanged_5), (void*)value);
	}

	inline static int32_t get_offset_of_mChart_6() { return static_cast<int32_t>(offsetof(ChartSettingItemBase_tDCEC0B8E2DF7121399030247F2CE6D734C7E8FE1, ___mChart_6)); }
	inline AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1 * get_mChart_6() const { return ___mChart_6; }
	inline AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1 ** get_address_of_mChart_6() { return &___mChart_6; }
	inline void set_mChart_6(AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1 * value)
	{
		___mChart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mChart_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebClient
struct WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// WEB_PROTOCOL WebClient::mCurProtocol
	int32_t ___mCurProtocol_4;

public:
	inline static int32_t get_offset_of_mCurProtocol_4() { return static_cast<int32_t>(offsetof(WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542, ___mCurProtocol_4)); }
	inline int32_t get_mCurProtocol_4() const { return ___mCurProtocol_4; }
	inline int32_t* get_address_of_mCurProtocol_4() { return &___mCurProtocol_4; }
	inline void set_mCurProtocol_4(int32_t value)
	{
		___mCurProtocol_4 = value;
	}
};


// colorRandomizer
struct colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String colorRandomizer::category
	String_t* ___category_4;
	// ChartAndGraph.GraphChart colorRandomizer::chart
	GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B * ___chart_5;
	// UnityEngine.Material colorRandomizer::baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial_6;
	// UnityEngine.GameObject colorRandomizer::textPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___textPrefab_7;

public:
	inline static int32_t get_offset_of_category_4() { return static_cast<int32_t>(offsetof(colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34, ___category_4)); }
	inline String_t* get_category_4() const { return ___category_4; }
	inline String_t** get_address_of_category_4() { return &___category_4; }
	inline void set_category_4(String_t* value)
	{
		___category_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_4), (void*)value);
	}

	inline static int32_t get_offset_of_chart_5() { return static_cast<int32_t>(offsetof(colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34, ___chart_5)); }
	inline GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B * get_chart_5() const { return ___chart_5; }
	inline GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B ** get_address_of_chart_5() { return &___chart_5; }
	inline void set_chart_5(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B * value)
	{
		___chart_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chart_5), (void*)value);
	}

	inline static int32_t get_offset_of_baseMaterial_6() { return static_cast<int32_t>(offsetof(colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34, ___baseMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMaterial_6() const { return ___baseMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMaterial_6() { return &___baseMaterial_6; }
	inline void set_baseMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_textPrefab_7() { return static_cast<int32_t>(offsetof(colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34, ___textPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_textPrefab_7() const { return ___textPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_textPrefab_7() { return &___textPrefab_7; }
	inline void set_textPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___textPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPrefab_7), (void*)value);
	}
};


// ChartAndGraph.AxisBase
struct AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405  : public ChartSettingItemBase_tDCEC0B8E2DF7121399030247F2CE6D734C7E8FE1
{
public:
	// System.Boolean ChartAndGraph.AxisBase::SimpleView
	bool ___SimpleView_7;
	// ChartAndGraph.AxisFormat ChartAndGraph.AxisBase::format
	int32_t ___format_8;
	// ChartAndGraph.AutoFloat ChartAndGraph.AxisBase::depth
	AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  ___depth_9;
	// ChartAndGraph.ChartMainDivisionInfo ChartAndGraph.AxisBase::mainDivisions
	ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * ___mainDivisions_10;
	// ChartAndGraph.ChartSubDivisionInfo ChartAndGraph.AxisBase::subDivisions
	ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881 * ___subDivisions_11;
	// System.Collections.Generic.Dictionary`2<System.Double,System.String> ChartAndGraph.AxisBase::mFormats
	Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * ___mFormats_12;
	// System.Collections.Generic.List`1<System.Double> ChartAndGraph.AxisBase::mTmpToRemove
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___mTmpToRemove_13;

public:
	inline static int32_t get_offset_of_SimpleView_7() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___SimpleView_7)); }
	inline bool get_SimpleView_7() const { return ___SimpleView_7; }
	inline bool* get_address_of_SimpleView_7() { return &___SimpleView_7; }
	inline void set_SimpleView_7(bool value)
	{
		___SimpleView_7 = value;
	}

	inline static int32_t get_offset_of_format_8() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___format_8)); }
	inline int32_t get_format_8() const { return ___format_8; }
	inline int32_t* get_address_of_format_8() { return &___format_8; }
	inline void set_format_8(int32_t value)
	{
		___format_8 = value;
	}

	inline static int32_t get_offset_of_depth_9() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___depth_9)); }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  get_depth_9() const { return ___depth_9; }
	inline AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279 * get_address_of_depth_9() { return &___depth_9; }
	inline void set_depth_9(AutoFloat_tDE6CB713AB811AE0B6F3C5BFEA069EB5C04C1279  value)
	{
		___depth_9 = value;
	}

	inline static int32_t get_offset_of_mainDivisions_10() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___mainDivisions_10)); }
	inline ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * get_mainDivisions_10() const { return ___mainDivisions_10; }
	inline ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 ** get_address_of_mainDivisions_10() { return &___mainDivisions_10; }
	inline void set_mainDivisions_10(ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * value)
	{
		___mainDivisions_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainDivisions_10), (void*)value);
	}

	inline static int32_t get_offset_of_subDivisions_11() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___subDivisions_11)); }
	inline ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881 * get_subDivisions_11() const { return ___subDivisions_11; }
	inline ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881 ** get_address_of_subDivisions_11() { return &___subDivisions_11; }
	inline void set_subDivisions_11(ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881 * value)
	{
		___subDivisions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subDivisions_11), (void*)value);
	}

	inline static int32_t get_offset_of_mFormats_12() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___mFormats_12)); }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * get_mFormats_12() const { return ___mFormats_12; }
	inline Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 ** get_address_of_mFormats_12() { return &___mFormats_12; }
	inline void set_mFormats_12(Dictionary_2_tC1883AD96F9B53E241794CEE43D23FA6EDF6BCA6 * value)
	{
		___mFormats_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFormats_12), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpToRemove_13() { return static_cast<int32_t>(offsetof(AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405, ___mTmpToRemove_13)); }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * get_mTmpToRemove_13() const { return ___mTmpToRemove_13; }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** get_address_of_mTmpToRemove_13() { return &___mTmpToRemove_13; }
	inline void set_mTmpToRemove_13(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * value)
	{
		___mTmpToRemove_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpToRemove_13), (void*)value);
	}
};


// ChartAndGraph.AxisChart
struct AxisChart_t044844BA60DA81EB1B5748AC4095FE17D9A9BF1B  : public AnyChart_t31DF1A1B84AE619E51B483F5CBECADD3779775F1
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// ChartAndGraph.ScrollableAxisChart
struct ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6  : public AxisChart_t044844BA60DA81EB1B5748AC4095FE17D9A9BF1B
{
public:
	// UnityEngine.GameObject ChartAndGraph.ScrollableAxisChart::mMask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mMask_38;
	// System.Nullable`1<UnityEngine.Vector2> ChartAndGraph.ScrollableAxisChart::mLastPosition
	Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB  ___mLastPosition_39;
	// UnityEngine.UI.GraphicRaycaster ChartAndGraph.ScrollableAxisChart::mCaster
	GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * ___mCaster_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Int32,BillboardText>> ChartAndGraph.ScrollableAxisChart::mTexts
	Dictionary_2_t348DB448799DE531DCE51E47E49DB1E4E56BF524 * ___mTexts_41;
	// System.Collections.Generic.HashSet`1<BillboardText> ChartAndGraph.ScrollableAxisChart::mActiveTexts
	HashSet_1_t5E70B381E599B96D4DCB5DB279B0A6FF725F1E69 * ___mActiveTexts_42;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::mMaskCreated
	bool ___mMaskCreated_43;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::autoScrollHorizontally
	bool ___autoScrollHorizontally_44;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::scrollable
	bool ___scrollable_45;
	// System.Double ChartAndGraph.ScrollableAxisChart::horizontalScrolling
	double ___horizontalScrolling_46;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::autoScrollVertically
	bool ___autoScrollVertically_47;
	// System.Double ChartAndGraph.ScrollableAxisChart::verticalScrolling
	double ___verticalScrolling_48;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::raycastTarget
	bool ___raycastTarget_49;
	// UnityEngine.Events.UnityEvent ChartAndGraph.ScrollableAxisChart::MousePan
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MousePan_50;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::horizontalPanning
	bool ___horizontalPanning_51;
	// System.Boolean ChartAndGraph.ScrollableAxisChart::verticalPanning
	bool ___verticalPanning_52;

public:
	inline static int32_t get_offset_of_mMask_38() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mMask_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mMask_38() const { return ___mMask_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mMask_38() { return &___mMask_38; }
	inline void set_mMask_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mMask_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMask_38), (void*)value);
	}

	inline static int32_t get_offset_of_mLastPosition_39() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mLastPosition_39)); }
	inline Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB  get_mLastPosition_39() const { return ___mLastPosition_39; }
	inline Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB * get_address_of_mLastPosition_39() { return &___mLastPosition_39; }
	inline void set_mLastPosition_39(Nullable_1_tF7B8C31618B00224A735E543E66CD257CB7E42FB  value)
	{
		___mLastPosition_39 = value;
	}

	inline static int32_t get_offset_of_mCaster_40() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mCaster_40)); }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * get_mCaster_40() const { return ___mCaster_40; }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 ** get_address_of_mCaster_40() { return &___mCaster_40; }
	inline void set_mCaster_40(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * value)
	{
		___mCaster_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCaster_40), (void*)value);
	}

	inline static int32_t get_offset_of_mTexts_41() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mTexts_41)); }
	inline Dictionary_2_t348DB448799DE531DCE51E47E49DB1E4E56BF524 * get_mTexts_41() const { return ___mTexts_41; }
	inline Dictionary_2_t348DB448799DE531DCE51E47E49DB1E4E56BF524 ** get_address_of_mTexts_41() { return &___mTexts_41; }
	inline void set_mTexts_41(Dictionary_2_t348DB448799DE531DCE51E47E49DB1E4E56BF524 * value)
	{
		___mTexts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTexts_41), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTexts_42() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mActiveTexts_42)); }
	inline HashSet_1_t5E70B381E599B96D4DCB5DB279B0A6FF725F1E69 * get_mActiveTexts_42() const { return ___mActiveTexts_42; }
	inline HashSet_1_t5E70B381E599B96D4DCB5DB279B0A6FF725F1E69 ** get_address_of_mActiveTexts_42() { return &___mActiveTexts_42; }
	inline void set_mActiveTexts_42(HashSet_1_t5E70B381E599B96D4DCB5DB279B0A6FF725F1E69 * value)
	{
		___mActiveTexts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTexts_42), (void*)value);
	}

	inline static int32_t get_offset_of_mMaskCreated_43() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___mMaskCreated_43)); }
	inline bool get_mMaskCreated_43() const { return ___mMaskCreated_43; }
	inline bool* get_address_of_mMaskCreated_43() { return &___mMaskCreated_43; }
	inline void set_mMaskCreated_43(bool value)
	{
		___mMaskCreated_43 = value;
	}

	inline static int32_t get_offset_of_autoScrollHorizontally_44() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___autoScrollHorizontally_44)); }
	inline bool get_autoScrollHorizontally_44() const { return ___autoScrollHorizontally_44; }
	inline bool* get_address_of_autoScrollHorizontally_44() { return &___autoScrollHorizontally_44; }
	inline void set_autoScrollHorizontally_44(bool value)
	{
		___autoScrollHorizontally_44 = value;
	}

	inline static int32_t get_offset_of_scrollable_45() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___scrollable_45)); }
	inline bool get_scrollable_45() const { return ___scrollable_45; }
	inline bool* get_address_of_scrollable_45() { return &___scrollable_45; }
	inline void set_scrollable_45(bool value)
	{
		___scrollable_45 = value;
	}

	inline static int32_t get_offset_of_horizontalScrolling_46() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___horizontalScrolling_46)); }
	inline double get_horizontalScrolling_46() const { return ___horizontalScrolling_46; }
	inline double* get_address_of_horizontalScrolling_46() { return &___horizontalScrolling_46; }
	inline void set_horizontalScrolling_46(double value)
	{
		___horizontalScrolling_46 = value;
	}

	inline static int32_t get_offset_of_autoScrollVertically_47() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___autoScrollVertically_47)); }
	inline bool get_autoScrollVertically_47() const { return ___autoScrollVertically_47; }
	inline bool* get_address_of_autoScrollVertically_47() { return &___autoScrollVertically_47; }
	inline void set_autoScrollVertically_47(bool value)
	{
		___autoScrollVertically_47 = value;
	}

	inline static int32_t get_offset_of_verticalScrolling_48() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___verticalScrolling_48)); }
	inline double get_verticalScrolling_48() const { return ___verticalScrolling_48; }
	inline double* get_address_of_verticalScrolling_48() { return &___verticalScrolling_48; }
	inline void set_verticalScrolling_48(double value)
	{
		___verticalScrolling_48 = value;
	}

	inline static int32_t get_offset_of_raycastTarget_49() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___raycastTarget_49)); }
	inline bool get_raycastTarget_49() const { return ___raycastTarget_49; }
	inline bool* get_address_of_raycastTarget_49() { return &___raycastTarget_49; }
	inline void set_raycastTarget_49(bool value)
	{
		___raycastTarget_49 = value;
	}

	inline static int32_t get_offset_of_MousePan_50() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___MousePan_50)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MousePan_50() const { return ___MousePan_50; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MousePan_50() { return &___MousePan_50; }
	inline void set_MousePan_50(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MousePan_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MousePan_50), (void*)value);
	}

	inline static int32_t get_offset_of_horizontalPanning_51() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___horizontalPanning_51)); }
	inline bool get_horizontalPanning_51() const { return ___horizontalPanning_51; }
	inline bool* get_address_of_horizontalPanning_51() { return &___horizontalPanning_51; }
	inline void set_horizontalPanning_51(bool value)
	{
		___horizontalPanning_51 = value;
	}

	inline static int32_t get_offset_of_verticalPanning_52() { return static_cast<int32_t>(offsetof(ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6, ___verticalPanning_52)); }
	inline bool get_verticalPanning_52() const { return ___verticalPanning_52; }
	inline bool* get_address_of_verticalPanning_52() { return &___verticalPanning_52; }
	inline void set_verticalPanning_52(bool value)
	{
		___verticalPanning_52 = value;
	}
};


// ChartAndGraph.VerticalAxis
struct VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B  : public AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405
{
public:

public:
};


// ChartAndGraph.CandleChart
struct CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7  : public ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6
{
public:
	// System.Single ChartAndGraph.CandleChart::heightRatio
	float ___heightRatio_53;
	// System.Single ChartAndGraph.CandleChart::widthRatio
	float ___widthRatio_54;
	// ChartAndGraph.CandleChart/CandleEvent ChartAndGraph.CandleChart::CandleClicked
	CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * ___CandleClicked_55;
	// ChartAndGraph.CandleChart/CandleEvent ChartAndGraph.CandleChart::CandleHovered
	CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * ___CandleHovered_56;
	// UnityEngine.Events.UnityEvent ChartAndGraph.CandleChart::NonHovered
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___NonHovered_57;
	// ChartAndGraph.CandleChart/CandleThicknessMode ChartAndGraph.CandleChart::thicknessMode
	int32_t ___thicknessMode_58;
	// System.Single ChartAndGraph.CandleChart::thicknessConstant
	float ___thicknessConstant_59;
	// System.String ChartAndGraph.CandleChart::itemFormat
	String_t* ___itemFormat_60;
	// System.String ChartAndGraph.CandleChart::bodyFormat
	String_t* ___bodyFormat_61;
	// System.String ChartAndGraph.CandleChart::highFormat
	String_t* ___highFormat_62;
	// System.String ChartAndGraph.CandleChart::lowFormat
	String_t* ___lowFormat_63;
	// ChartAndGraph.CandleChartData ChartAndGraph.CandleChart::Data
	CandleChartData_t4953342A38CD2805918D3C6202261146D08DB682 * ___Data_64;
	// System.Text.StringBuilder ChartAndGraph.CandleChart::mTmpBuilder
	StringBuilder_t * ___mTmpBuilder_65;

public:
	inline static int32_t get_offset_of_heightRatio_53() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___heightRatio_53)); }
	inline float get_heightRatio_53() const { return ___heightRatio_53; }
	inline float* get_address_of_heightRatio_53() { return &___heightRatio_53; }
	inline void set_heightRatio_53(float value)
	{
		___heightRatio_53 = value;
	}

	inline static int32_t get_offset_of_widthRatio_54() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___widthRatio_54)); }
	inline float get_widthRatio_54() const { return ___widthRatio_54; }
	inline float* get_address_of_widthRatio_54() { return &___widthRatio_54; }
	inline void set_widthRatio_54(float value)
	{
		___widthRatio_54 = value;
	}

	inline static int32_t get_offset_of_CandleClicked_55() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___CandleClicked_55)); }
	inline CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * get_CandleClicked_55() const { return ___CandleClicked_55; }
	inline CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 ** get_address_of_CandleClicked_55() { return &___CandleClicked_55; }
	inline void set_CandleClicked_55(CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * value)
	{
		___CandleClicked_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CandleClicked_55), (void*)value);
	}

	inline static int32_t get_offset_of_CandleHovered_56() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___CandleHovered_56)); }
	inline CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * get_CandleHovered_56() const { return ___CandleHovered_56; }
	inline CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 ** get_address_of_CandleHovered_56() { return &___CandleHovered_56; }
	inline void set_CandleHovered_56(CandleEvent_t6EFF32D0BFBAD50F442FE8A0B9B93F4D8BCF6CF1 * value)
	{
		___CandleHovered_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CandleHovered_56), (void*)value);
	}

	inline static int32_t get_offset_of_NonHovered_57() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___NonHovered_57)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_NonHovered_57() const { return ___NonHovered_57; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_NonHovered_57() { return &___NonHovered_57; }
	inline void set_NonHovered_57(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___NonHovered_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NonHovered_57), (void*)value);
	}

	inline static int32_t get_offset_of_thicknessMode_58() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___thicknessMode_58)); }
	inline int32_t get_thicknessMode_58() const { return ___thicknessMode_58; }
	inline int32_t* get_address_of_thicknessMode_58() { return &___thicknessMode_58; }
	inline void set_thicknessMode_58(int32_t value)
	{
		___thicknessMode_58 = value;
	}

	inline static int32_t get_offset_of_thicknessConstant_59() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___thicknessConstant_59)); }
	inline float get_thicknessConstant_59() const { return ___thicknessConstant_59; }
	inline float* get_address_of_thicknessConstant_59() { return &___thicknessConstant_59; }
	inline void set_thicknessConstant_59(float value)
	{
		___thicknessConstant_59 = value;
	}

	inline static int32_t get_offset_of_itemFormat_60() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___itemFormat_60)); }
	inline String_t* get_itemFormat_60() const { return ___itemFormat_60; }
	inline String_t** get_address_of_itemFormat_60() { return &___itemFormat_60; }
	inline void set_itemFormat_60(String_t* value)
	{
		___itemFormat_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemFormat_60), (void*)value);
	}

	inline static int32_t get_offset_of_bodyFormat_61() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___bodyFormat_61)); }
	inline String_t* get_bodyFormat_61() const { return ___bodyFormat_61; }
	inline String_t** get_address_of_bodyFormat_61() { return &___bodyFormat_61; }
	inline void set_bodyFormat_61(String_t* value)
	{
		___bodyFormat_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyFormat_61), (void*)value);
	}

	inline static int32_t get_offset_of_highFormat_62() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___highFormat_62)); }
	inline String_t* get_highFormat_62() const { return ___highFormat_62; }
	inline String_t** get_address_of_highFormat_62() { return &___highFormat_62; }
	inline void set_highFormat_62(String_t* value)
	{
		___highFormat_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highFormat_62), (void*)value);
	}

	inline static int32_t get_offset_of_lowFormat_63() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___lowFormat_63)); }
	inline String_t* get_lowFormat_63() const { return ___lowFormat_63; }
	inline String_t** get_address_of_lowFormat_63() { return &___lowFormat_63; }
	inline void set_lowFormat_63(String_t* value)
	{
		___lowFormat_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowFormat_63), (void*)value);
	}

	inline static int32_t get_offset_of_Data_64() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___Data_64)); }
	inline CandleChartData_t4953342A38CD2805918D3C6202261146D08DB682 * get_Data_64() const { return ___Data_64; }
	inline CandleChartData_t4953342A38CD2805918D3C6202261146D08DB682 ** get_address_of_Data_64() { return &___Data_64; }
	inline void set_Data_64(CandleChartData_t4953342A38CD2805918D3C6202261146D08DB682 * value)
	{
		___Data_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_64), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpBuilder_65() { return static_cast<int32_t>(offsetof(CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7, ___mTmpBuilder_65)); }
	inline StringBuilder_t * get_mTmpBuilder_65() const { return ___mTmpBuilder_65; }
	inline StringBuilder_t ** get_address_of_mTmpBuilder_65() { return &___mTmpBuilder_65; }
	inline void set_mTmpBuilder_65(StringBuilder_t * value)
	{
		___mTmpBuilder_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpBuilder_65), (void*)value);
	}
};


// ChartAndGraph.GraphChartBase
struct GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716  : public ScrollableAxisChart_t42BDED0107BD1384082A0087006C04E196B6FFC6
{
public:
	// System.Single ChartAndGraph.GraphChartBase::heightRatio
	float ___heightRatio_53;
	// System.Single ChartAndGraph.GraphChartBase::widthRatio
	float ___widthRatio_54;
	// ChartAndGraph.GraphChartBase/GraphEvent ChartAndGraph.GraphChartBase::PointClicked
	GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * ___PointClicked_55;
	// ChartAndGraph.GraphChartBase/GraphEvent ChartAndGraph.GraphChartBase::PointHovered
	GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * ___PointHovered_56;
	// UnityEngine.Events.UnityEvent ChartAndGraph.GraphChartBase::NonHovered
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___NonHovered_57;
	// System.String ChartAndGraph.GraphChartBase::itemFormat
	String_t* ___itemFormat_58;
	// System.Boolean ChartAndGraph.GraphChartBase::mRealtimeUpdateIndex
	bool ___mRealtimeUpdateIndex_59;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ChartAndGraph.GraphChartBase::mMinimumUpdateIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___mMinimumUpdateIndex_60;
	// ChartAndGraph.GraphData ChartAndGraph.GraphChartBase::Data
	GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * ___Data_61;
	// System.Text.StringBuilder ChartAndGraph.GraphChartBase::mTmpBuilder
	StringBuilder_t * ___mTmpBuilder_62;

public:
	inline static int32_t get_offset_of_heightRatio_53() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___heightRatio_53)); }
	inline float get_heightRatio_53() const { return ___heightRatio_53; }
	inline float* get_address_of_heightRatio_53() { return &___heightRatio_53; }
	inline void set_heightRatio_53(float value)
	{
		___heightRatio_53 = value;
	}

	inline static int32_t get_offset_of_widthRatio_54() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___widthRatio_54)); }
	inline float get_widthRatio_54() const { return ___widthRatio_54; }
	inline float* get_address_of_widthRatio_54() { return &___widthRatio_54; }
	inline void set_widthRatio_54(float value)
	{
		___widthRatio_54 = value;
	}

	inline static int32_t get_offset_of_PointClicked_55() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___PointClicked_55)); }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * get_PointClicked_55() const { return ___PointClicked_55; }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 ** get_address_of_PointClicked_55() { return &___PointClicked_55; }
	inline void set_PointClicked_55(GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * value)
	{
		___PointClicked_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointClicked_55), (void*)value);
	}

	inline static int32_t get_offset_of_PointHovered_56() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___PointHovered_56)); }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * get_PointHovered_56() const { return ___PointHovered_56; }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 ** get_address_of_PointHovered_56() { return &___PointHovered_56; }
	inline void set_PointHovered_56(GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * value)
	{
		___PointHovered_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointHovered_56), (void*)value);
	}

	inline static int32_t get_offset_of_NonHovered_57() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___NonHovered_57)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_NonHovered_57() const { return ___NonHovered_57; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_NonHovered_57() { return &___NonHovered_57; }
	inline void set_NonHovered_57(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___NonHovered_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NonHovered_57), (void*)value);
	}

	inline static int32_t get_offset_of_itemFormat_58() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___itemFormat_58)); }
	inline String_t* get_itemFormat_58() const { return ___itemFormat_58; }
	inline String_t** get_address_of_itemFormat_58() { return &___itemFormat_58; }
	inline void set_itemFormat_58(String_t* value)
	{
		___itemFormat_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemFormat_58), (void*)value);
	}

	inline static int32_t get_offset_of_mRealtimeUpdateIndex_59() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___mRealtimeUpdateIndex_59)); }
	inline bool get_mRealtimeUpdateIndex_59() const { return ___mRealtimeUpdateIndex_59; }
	inline bool* get_address_of_mRealtimeUpdateIndex_59() { return &___mRealtimeUpdateIndex_59; }
	inline void set_mRealtimeUpdateIndex_59(bool value)
	{
		___mRealtimeUpdateIndex_59 = value;
	}

	inline static int32_t get_offset_of_mMinimumUpdateIndex_60() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___mMinimumUpdateIndex_60)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_mMinimumUpdateIndex_60() const { return ___mMinimumUpdateIndex_60; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_mMinimumUpdateIndex_60() { return &___mMinimumUpdateIndex_60; }
	inline void set_mMinimumUpdateIndex_60(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___mMinimumUpdateIndex_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMinimumUpdateIndex_60), (void*)value);
	}

	inline static int32_t get_offset_of_Data_61() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___Data_61)); }
	inline GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * get_Data_61() const { return ___Data_61; }
	inline GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 ** get_address_of_Data_61() { return &___Data_61; }
	inline void set_Data_61(GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * value)
	{
		___Data_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_61), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpBuilder_62() { return static_cast<int32_t>(offsetof(GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716, ___mTmpBuilder_62)); }
	inline StringBuilder_t * get_mTmpBuilder_62() const { return ___mTmpBuilder_62; }
	inline StringBuilder_t ** get_address_of_mTmpBuilder_62() { return &___mTmpBuilder_62; }
	inline void set_mTmpBuilder_62(StringBuilder_t * value)
	{
		___mTmpBuilder_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpBuilder_62), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// ChartAndGraph.CanvasCandleChart
struct CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F  : public CandleChart_t71F5072BED721250F32C2D18AD652799FF105EA7
{
public:
	// System.Collections.Generic.List`1<ChartAndGraph.CandleChartData/CandleValue> ChartAndGraph.CanvasCandleChart::mClipped
	List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * ___mClipped_66;
	// System.Collections.Generic.List`1<ChartAndGraph.CandleChartData/CandleValue> ChartAndGraph.CanvasCandleChart::mTransformed
	List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * ___mTransformed_67;
	// System.Collections.Generic.List`1<ChartAndGraph.CandleChartData/CandleValue> ChartAndGraph.CanvasCandleChart::mCurrentSeries
	List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * ___mCurrentSeries_68;
	// System.Int32 ChartAndGraph.CanvasCandleChart::mTmpCurrentIndex
	int32_t ___mTmpCurrentIndex_69;
	// System.Collections.Generic.List`1<System.Int32> ChartAndGraph.CanvasCandleChart::mUpToIndex
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___mUpToIndex_70;
	// System.Collections.Generic.List`1<System.Int32> ChartAndGraph.CanvasCandleChart::mDownToIndex
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___mDownToIndex_71;
	// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.CanvasCandleChart/CategoryObject> ChartAndGraph.CanvasCandleChart::mCategoryObjects
	Dictionary_2_t281E0FF0935769072FB01E71D39AA382E76832FD * ___mCategoryObjects_72;
	// System.Text.StringBuilder ChartAndGraph.CanvasCandleChart::mRealtimeStringBuilder
	StringBuilder_t * ___mRealtimeStringBuilder_73;
	// System.Collections.Generic.HashSet`1<System.String> ChartAndGraph.CanvasCandleChart::mOccupiedCateogies
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___mOccupiedCateogies_74;
	// System.Collections.Generic.List`1<System.Int32> ChartAndGraph.CanvasCandleChart::mTmpToRemove
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___mTmpToRemove_75;
	// System.Boolean ChartAndGraph.CanvasCandleChart::SupressRealtimeGeneration
	bool ___SupressRealtimeGeneration_76;
	// System.Boolean ChartAndGraph.CanvasCandleChart::fitToContainer
	bool ___fitToContainer_77;
	// ChartAndGraph.ChartMagin ChartAndGraph.CanvasCandleChart::fitMargin
	ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  ___fitMargin_78;

public:
	inline static int32_t get_offset_of_mClipped_66() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mClipped_66)); }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * get_mClipped_66() const { return ___mClipped_66; }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 ** get_address_of_mClipped_66() { return &___mClipped_66; }
	inline void set_mClipped_66(List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * value)
	{
		___mClipped_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClipped_66), (void*)value);
	}

	inline static int32_t get_offset_of_mTransformed_67() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mTransformed_67)); }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * get_mTransformed_67() const { return ___mTransformed_67; }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 ** get_address_of_mTransformed_67() { return &___mTransformed_67; }
	inline void set_mTransformed_67(List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * value)
	{
		___mTransformed_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTransformed_67), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentSeries_68() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mCurrentSeries_68)); }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * get_mCurrentSeries_68() const { return ___mCurrentSeries_68; }
	inline List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 ** get_address_of_mCurrentSeries_68() { return &___mCurrentSeries_68; }
	inline void set_mCurrentSeries_68(List_1_t526A9E7A7F80E0DE7DEE9FB4214CB802D9E8DAF4 * value)
	{
		___mCurrentSeries_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentSeries_68), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpCurrentIndex_69() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mTmpCurrentIndex_69)); }
	inline int32_t get_mTmpCurrentIndex_69() const { return ___mTmpCurrentIndex_69; }
	inline int32_t* get_address_of_mTmpCurrentIndex_69() { return &___mTmpCurrentIndex_69; }
	inline void set_mTmpCurrentIndex_69(int32_t value)
	{
		___mTmpCurrentIndex_69 = value;
	}

	inline static int32_t get_offset_of_mUpToIndex_70() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mUpToIndex_70)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_mUpToIndex_70() const { return ___mUpToIndex_70; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_mUpToIndex_70() { return &___mUpToIndex_70; }
	inline void set_mUpToIndex_70(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___mUpToIndex_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpToIndex_70), (void*)value);
	}

	inline static int32_t get_offset_of_mDownToIndex_71() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mDownToIndex_71)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_mDownToIndex_71() const { return ___mDownToIndex_71; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_mDownToIndex_71() { return &___mDownToIndex_71; }
	inline void set_mDownToIndex_71(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___mDownToIndex_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDownToIndex_71), (void*)value);
	}

	inline static int32_t get_offset_of_mCategoryObjects_72() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mCategoryObjects_72)); }
	inline Dictionary_2_t281E0FF0935769072FB01E71D39AA382E76832FD * get_mCategoryObjects_72() const { return ___mCategoryObjects_72; }
	inline Dictionary_2_t281E0FF0935769072FB01E71D39AA382E76832FD ** get_address_of_mCategoryObjects_72() { return &___mCategoryObjects_72; }
	inline void set_mCategoryObjects_72(Dictionary_2_t281E0FF0935769072FB01E71D39AA382E76832FD * value)
	{
		___mCategoryObjects_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCategoryObjects_72), (void*)value);
	}

	inline static int32_t get_offset_of_mRealtimeStringBuilder_73() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mRealtimeStringBuilder_73)); }
	inline StringBuilder_t * get_mRealtimeStringBuilder_73() const { return ___mRealtimeStringBuilder_73; }
	inline StringBuilder_t ** get_address_of_mRealtimeStringBuilder_73() { return &___mRealtimeStringBuilder_73; }
	inline void set_mRealtimeStringBuilder_73(StringBuilder_t * value)
	{
		___mRealtimeStringBuilder_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRealtimeStringBuilder_73), (void*)value);
	}

	inline static int32_t get_offset_of_mOccupiedCateogies_74() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mOccupiedCateogies_74)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_mOccupiedCateogies_74() const { return ___mOccupiedCateogies_74; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_mOccupiedCateogies_74() { return &___mOccupiedCateogies_74; }
	inline void set_mOccupiedCateogies_74(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___mOccupiedCateogies_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOccupiedCateogies_74), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpToRemove_75() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___mTmpToRemove_75)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_mTmpToRemove_75() const { return ___mTmpToRemove_75; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_mTmpToRemove_75() { return &___mTmpToRemove_75; }
	inline void set_mTmpToRemove_75(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___mTmpToRemove_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpToRemove_75), (void*)value);
	}

	inline static int32_t get_offset_of_SupressRealtimeGeneration_76() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___SupressRealtimeGeneration_76)); }
	inline bool get_SupressRealtimeGeneration_76() const { return ___SupressRealtimeGeneration_76; }
	inline bool* get_address_of_SupressRealtimeGeneration_76() { return &___SupressRealtimeGeneration_76; }
	inline void set_SupressRealtimeGeneration_76(bool value)
	{
		___SupressRealtimeGeneration_76 = value;
	}

	inline static int32_t get_offset_of_fitToContainer_77() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___fitToContainer_77)); }
	inline bool get_fitToContainer_77() const { return ___fitToContainer_77; }
	inline bool* get_address_of_fitToContainer_77() { return &___fitToContainer_77; }
	inline void set_fitToContainer_77(bool value)
	{
		___fitToContainer_77 = value;
	}

	inline static int32_t get_offset_of_fitMargin_78() { return static_cast<int32_t>(offsetof(CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F, ___fitMargin_78)); }
	inline ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  get_fitMargin_78() const { return ___fitMargin_78; }
	inline ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822 * get_address_of_fitMargin_78() { return &___fitMargin_78; }
	inline void set_fitMargin_78(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  value)
	{
		___fitMargin_78 = value;
	}
};


// ChartAndGraph.GraphChart
struct GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B  : public GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716
{
public:
	// System.Collections.Generic.HashSet`1<System.String> ChartAndGraph.GraphChart::mOccupiedCateogies
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___mOccupiedCateogies_63;
	// System.Collections.Generic.Dictionary`2<System.String,ChartAndGraph.GraphChart/CategoryObject> ChartAndGraph.GraphChart::mCategoryObjects
	Dictionary_2_tEE961AF4805C07E9B17CC2937263B287DE352B0F * ___mCategoryObjects_64;
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector3> ChartAndGraph.GraphChart::mTmpData
	List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * ___mTmpData_65;
	// System.Collections.Generic.List`1<ChartAndGraph.DoubleVector4> ChartAndGraph.GraphChart::mClipped
	List_1_t4617847BF844C5C8FDDA9D75FFD36E3E4B0FBDBA * ___mClipped_66;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> ChartAndGraph.GraphChart::mTransformed
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___mTransformed_67;
	// System.Collections.Generic.List`1<System.Int32> ChartAndGraph.GraphChart::mTmpToRemove
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___mTmpToRemove_68;
	// System.Boolean ChartAndGraph.GraphChart::SupressRealtimeGeneration
	bool ___SupressRealtimeGeneration_69;
	// System.Text.StringBuilder ChartAndGraph.GraphChart::mRealtimeStringBuilder
	StringBuilder_t * ___mRealtimeStringBuilder_70;
	// ChartAndGraph.GraphChartBase/GraphEvent ChartAndGraph.GraphChart::LineClicked
	GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * ___LineClicked_71;
	// ChartAndGraph.GraphChartBase/GraphEvent ChartAndGraph.GraphChart::LineHovered
	GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * ___LineHovered_72;
	// System.Boolean ChartAndGraph.GraphChart::fitToContainer
	bool ___fitToContainer_73;
	// System.Boolean ChartAndGraph.GraphChart::negativeFill
	bool ___negativeFill_74;
	// ChartAndGraph.ChartMagin ChartAndGraph.GraphChart::fitMargin
	ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  ___fitMargin_75;
	// System.Boolean ChartAndGraph.GraphChart::enableBetaOptimization
	bool ___enableBetaOptimization_76;

public:
	inline static int32_t get_offset_of_mOccupiedCateogies_63() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mOccupiedCateogies_63)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_mOccupiedCateogies_63() const { return ___mOccupiedCateogies_63; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_mOccupiedCateogies_63() { return &___mOccupiedCateogies_63; }
	inline void set_mOccupiedCateogies_63(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___mOccupiedCateogies_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOccupiedCateogies_63), (void*)value);
	}

	inline static int32_t get_offset_of_mCategoryObjects_64() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mCategoryObjects_64)); }
	inline Dictionary_2_tEE961AF4805C07E9B17CC2937263B287DE352B0F * get_mCategoryObjects_64() const { return ___mCategoryObjects_64; }
	inline Dictionary_2_tEE961AF4805C07E9B17CC2937263B287DE352B0F ** get_address_of_mCategoryObjects_64() { return &___mCategoryObjects_64; }
	inline void set_mCategoryObjects_64(Dictionary_2_tEE961AF4805C07E9B17CC2937263B287DE352B0F * value)
	{
		___mCategoryObjects_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCategoryObjects_64), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpData_65() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mTmpData_65)); }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * get_mTmpData_65() const { return ___mTmpData_65; }
	inline List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 ** get_address_of_mTmpData_65() { return &___mTmpData_65; }
	inline void set_mTmpData_65(List_1_tB89B23D0D8E3B6B58CA73B35CFD5F8D2376B2669 * value)
	{
		___mTmpData_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpData_65), (void*)value);
	}

	inline static int32_t get_offset_of_mClipped_66() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mClipped_66)); }
	inline List_1_t4617847BF844C5C8FDDA9D75FFD36E3E4B0FBDBA * get_mClipped_66() const { return ___mClipped_66; }
	inline List_1_t4617847BF844C5C8FDDA9D75FFD36E3E4B0FBDBA ** get_address_of_mClipped_66() { return &___mClipped_66; }
	inline void set_mClipped_66(List_1_t4617847BF844C5C8FDDA9D75FFD36E3E4B0FBDBA * value)
	{
		___mClipped_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClipped_66), (void*)value);
	}

	inline static int32_t get_offset_of_mTransformed_67() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mTransformed_67)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_mTransformed_67() const { return ___mTransformed_67; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_mTransformed_67() { return &___mTransformed_67; }
	inline void set_mTransformed_67(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___mTransformed_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTransformed_67), (void*)value);
	}

	inline static int32_t get_offset_of_mTmpToRemove_68() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mTmpToRemove_68)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_mTmpToRemove_68() const { return ___mTmpToRemove_68; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_mTmpToRemove_68() { return &___mTmpToRemove_68; }
	inline void set_mTmpToRemove_68(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___mTmpToRemove_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTmpToRemove_68), (void*)value);
	}

	inline static int32_t get_offset_of_SupressRealtimeGeneration_69() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___SupressRealtimeGeneration_69)); }
	inline bool get_SupressRealtimeGeneration_69() const { return ___SupressRealtimeGeneration_69; }
	inline bool* get_address_of_SupressRealtimeGeneration_69() { return &___SupressRealtimeGeneration_69; }
	inline void set_SupressRealtimeGeneration_69(bool value)
	{
		___SupressRealtimeGeneration_69 = value;
	}

	inline static int32_t get_offset_of_mRealtimeStringBuilder_70() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___mRealtimeStringBuilder_70)); }
	inline StringBuilder_t * get_mRealtimeStringBuilder_70() const { return ___mRealtimeStringBuilder_70; }
	inline StringBuilder_t ** get_address_of_mRealtimeStringBuilder_70() { return &___mRealtimeStringBuilder_70; }
	inline void set_mRealtimeStringBuilder_70(StringBuilder_t * value)
	{
		___mRealtimeStringBuilder_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRealtimeStringBuilder_70), (void*)value);
	}

	inline static int32_t get_offset_of_LineClicked_71() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___LineClicked_71)); }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * get_LineClicked_71() const { return ___LineClicked_71; }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 ** get_address_of_LineClicked_71() { return &___LineClicked_71; }
	inline void set_LineClicked_71(GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * value)
	{
		___LineClicked_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineClicked_71), (void*)value);
	}

	inline static int32_t get_offset_of_LineHovered_72() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___LineHovered_72)); }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * get_LineHovered_72() const { return ___LineHovered_72; }
	inline GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 ** get_address_of_LineHovered_72() { return &___LineHovered_72; }
	inline void set_LineHovered_72(GraphEvent_t6EF9613B56090A541875BA8834686CEA41F7C084 * value)
	{
		___LineHovered_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineHovered_72), (void*)value);
	}

	inline static int32_t get_offset_of_fitToContainer_73() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___fitToContainer_73)); }
	inline bool get_fitToContainer_73() const { return ___fitToContainer_73; }
	inline bool* get_address_of_fitToContainer_73() { return &___fitToContainer_73; }
	inline void set_fitToContainer_73(bool value)
	{
		___fitToContainer_73 = value;
	}

	inline static int32_t get_offset_of_negativeFill_74() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___negativeFill_74)); }
	inline bool get_negativeFill_74() const { return ___negativeFill_74; }
	inline bool* get_address_of_negativeFill_74() { return &___negativeFill_74; }
	inline void set_negativeFill_74(bool value)
	{
		___negativeFill_74 = value;
	}

	inline static int32_t get_offset_of_fitMargin_75() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___fitMargin_75)); }
	inline ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  get_fitMargin_75() const { return ___fitMargin_75; }
	inline ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822 * get_address_of_fitMargin_75() { return &___fitMargin_75; }
	inline void set_fitMargin_75(ChartMagin_tE1FB488B21538461521990CA7D3567477BB15822  value)
	{
		___fitMargin_75 = value;
	}

	inline static int32_t get_offset_of_enableBetaOptimization_76() { return static_cast<int32_t>(offsetof(GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B, ___enableBetaOptimization_76)); }
	inline bool get_enableBetaOptimization_76() const { return ___enableBetaOptimization_76; }
	inline bool* get_address_of_enableBetaOptimization_76() { return &___enableBetaOptimization_76; }
	inline void set_enableBetaOptimization_76(bool value)
	{
		___enableBetaOptimization_76 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m463456D9FF698859454DF07DE8A0D4A25BD28C9B_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void WebClient::ReceiveProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_ReceiveProtocol_m1CF07E5CE682925BE2AF7823919282C9399A32CE (WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void ChartAndGraph.WorldSpaceGraphChart/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E5E1D042B0F83875663215E54305D72A54DCAB7 (U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ChartAndGraph.DoubleVector3::ToVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DoubleVector3_ToVector3_m1ACDC7F94B3C501179396B16C1B6EDA3EE28604B (DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12_U3CU3Em__Finally1_mE831A99FFB4CE6D505472627C490B17F723A2503 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mDC7848386B8D059E0BA31383ED93DE80D7F6C421 (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, String_t*, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m463456D9FF698859454DF07DE8A0D4A25BD28C9B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12_System_IDisposable_Dispose_mA068C9C20059EDBECBFB8ED0240A55FB93861E95 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method);
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12__ctor_mB32381E398B3A53705178DC78C959759EE33EF3F (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllChildObjectsU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m6337E132D73857A73EEF5F4B5298DC95200F11FF (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Random::ColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Random_ColorHSV_mCC5611616B89F24DFE2667E892B67A58A2D079A6 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// ChartAndGraph.GraphData ChartAndGraph.GraphChartBase::get_DataSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * GraphChartBase_get_DataSource_m10C136B0FACB0AE4AEDEED0D6D489518954C6A2B_inline (GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716 * __this, const RuntimeMethod* method);
// System.Void ChartAndGraph.GraphData::SetCategoryPoint(System.String,UnityEngine.Material,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphData_SetCategoryPoint_mA9B6EC2056F0EB92AE6F253A5451E9562D931E5E (GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * __this, String_t* ___category0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___pointMaterial1, double ___pointSize2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ChartAndGraph.VerticalAxis>()
inline VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * Component_GetComponent_TisVerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B_mFC58B95AFD0295B2288D5AB32F15A58FEF0051CA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// ChartAndGraph.ChartMainDivisionInfo ChartAndGraph.AxisBase::get_MainDivisions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * AxisBase_get_MainDivisions_m6035064E44C798F5788C10A4A50C5B5929AE9FD2_inline (AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405 * __this, const RuntimeMethod* method);
// System.Void ChartAndGraph.ChartDivisionInfo::set_TextPrefab(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChartDivisionInfo_set_TextPrefab_mEC9B50279F0DC56E4B41F7971E1C0F870EF34593 (ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___value0, const RuntimeMethod* method);
// ChartAndGraph.ChartDivisionInfo ChartAndGraph.AxisBase::get_SubDivisions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC * AxisBase_get_SubDivisions_mB429591DB80BAE9F57418D373514C72E1899FFD9_inline (AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject::mLeave(ChartAndGraph.CanvasCandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CategoryObject_mLeave_mDF1D3E66A7C9EDD73926B8B90726F685006C4EB5 (CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * __this, CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___candle0, const RuntimeMethod* method);
// System.Int32 ChartAndGraph.CanvasCandleChart::MapIndex(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CanvasCandleChart_MapIndex_mCDA73191BF35E5497A5239870BE0ED25B6E947D4 (CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * __this, int32_t ___index0, bool ___isUp1, const RuntimeMethod* method);
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject::mHover(ChartAndGraph.CanvasCandle,System.Int32,System.Int32,System.Object,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CategoryObject_mHover_mE245859F5AB3BD1E5D0C680AC63E42DA73FF7FAB (CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * __this, CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___candle0, int32_t ___index1, int32_t ___type2, RuntimeObject * ___data3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position4, const RuntimeMethod* method);
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject::mClick(ChartAndGraph.CanvasCandle,System.Int32,System.Int32,System.Object,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CategoryObject_mClick_m38EF2EE6AB5E4F11DB0CE68BB10F3B7382CE79E8 (CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * __this, CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * ___candle0, int32_t ___index1, int32_t ___type2, RuntimeObject * ___data3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position4, const RuntimeMethod* method);
// System.Void ChartAndGraph.CanvasLines/LineSegement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9CD97138095A7EAF798B159B9C81FAB0DC5EA55F (U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebClient/<WaitForRequest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForRequestU3Ed__2__ctor_m22FA04E1E1B49BE559F16388D7E914E333875CC1 (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebClient/<WaitForRequest>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForRequestU3Ed__2_System_IDisposable_Dispose_mB4A4DBD02D41B625E0F06E9B5F3C29198B9BF9C8 (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebClient/<WaitForRequest>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForRequestU3Ed__2_MoveNext_m3CBF9E7F4A68C8D3143075FB3741EE66F934314D (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A09D77AED96BB3BC13B659C5E930B49835D377C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_4 = __this->get_www_2();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.error == null)
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_5 = __this->get_www_2();
		String_t* L_6;
		L_6 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		// ReceiveProtocol(www.text);
		WebClient_tE72F413577C9F2EA46973A8DDDCCD5A33637E542 * L_7 = V_1;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_8 = __this->get_www_2();
		String_t* L_9;
		L_9 = WWW_get_text_m0D2EF7BBFB58E37FE30A665389355ACA65804138(L_8, /*hidden argument*/NULL);
		WebClient_ReceiveProtocol_m1CF07E5CE682925BE2AF7823919282C9399A32CE(L_7, L_9, /*hidden argument*/NULL);
		// }
		goto IL_0074;
	}

IL_005a:
	{
		// Debug.Log("www error!:" + www.error);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_10 = __this->get_www_2();
		String_t* L_11;
		L_11 = WWW_get_error_mB278F5EC90EF99FEF70D80112940CFB49E79C9BC(L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9A09D77AED96BB3BC13B659C5E930B49835D377C, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return (bool)0;
	}
}
// System.Object WebClient/<WaitForRequest>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForRequestU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE918B18E145FC809F515D0BDA6095FDF6B9698F6 (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebClient/<WaitForRequest>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_mC99FF49CBBCF233AFF917AC6E2CFDE79A70BA13C (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_Reset_mC99FF49CBBCF233AFF917AC6E2CFDE79A70BA13C_RuntimeMethod_var)));
	}
}
// System.Object WebClient/<WaitForRequest>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForRequestU3Ed__2_System_Collections_IEnumerator_get_Current_m0FE379220D5B3F0D9276FFC77BBB01C24AFA6FEE (U3CWaitForRequestU3Ed__2_t560D1DA57E3D6931FEF61781BF3AE47F4B922874 * __this, const RuntimeMethod* method)
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
// System.Void ChartAndGraph.WorldSpaceGraphChart/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m91ED717673DCC2E527A407B562AE7696A4B8AD80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * L_0 = (U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 *)il2cpp_codegen_object_new(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0E5E1D042B0F83875663215E54305D72A54DCAB7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ChartAndGraph.WorldSpaceGraphChart/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E5E1D042B0F83875663215E54305D72A54DCAB7 (U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector4 ChartAndGraph.WorldSpaceGraphChart/<>c::<InternalGenerateChart>b__36_1(ChartAndGraph.DoubleVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  U3CU3Ec_U3CInternalGenerateChartU3Eb__36_1_m82297EEAAC8F754B6AFC7A1E6447340D9BE3FC6D (U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * __this, DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48  ___x0, const RuntimeMethod* method)
{
	{
		// mTransformed.AddRange(points.Select(x => (Vector4)x.ToVector3()));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = DoubleVector3_ToVector3_m1ACDC7F94B3C501179396B16C1B6EDA3EE28604B((DoubleVector3_t7CA4DDC18C65B8298E2E84153BD6B838DA569D48 *)(&___x0), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 ChartAndGraph.WorldSpaceGraphChart/<>c::<InternalGenerateChart>b__36_0(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CInternalGenerateChartU3Eb__36_0_m2FB21FA1247DF742151AE33C95010D25F223F595 (U3CU3Ec_tD682AE11B7614C655E037CDF42BD8F2EA42A30F5 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___x0, const RuntimeMethod* method)
{
	{
		// Vector3[] floatPoints = mTransformed.Select(x => (Vector3)x).ToArray();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___x0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void ChartAndGraph.WorldSpaceGraphChart/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mE06613954B1B1F84115AC0EE4249F5960CA7A548 (U3CU3Ec__DisplayClass29_0_t873160D347BC6974E531C558A56012C815EF28C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ChartAndGraph.WorldSpaceGraphChart/<>c__DisplayClass29_0::<GetCategoryDepth>b__0(ChartAndGraph.GraphData/CategoryData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CGetCategoryDepthU3Eb__0_mB6F396CE326901C630B5535A80004E464316AB21 (U3CU3Ec__DisplayClass29_0_t873160D347BC6974E531C558A56012C815EF28C5 * __this, CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C * ___x0, const RuntimeMethod* method)
{
	{
		// var cat = ((IInternalGraphData)Data).Categories.Where(x => x.Name == category).FirstOrDefault();
		CategoryData_t48DB363245EF7360DAB970DED15B61B5DB89A43C * L_0 = ___x0;
		String_t* L_1 = ((BaseScrollableCategoryData_tBFBC84B2D2044C99F85BE74809F141163104DD2D *)L_0)->get_Name_0();
		String_t* L_2 = __this->get_category_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12__ctor_mB32381E398B3A53705178DC78C959759EE33EF3F (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12_System_IDisposable_Dispose_mA068C9C20059EDBECBFB8ED0240A55FB93861E95 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3CGetAllChildObjectsU3Ed__12_U3CU3Em__Finally1_mE831A99FFB4CE6D505472627C490B17F723A2503(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllChildObjectsU3Ed__12_MoveNext_m41F0F859827174268E1F5FE935EBDE446008BA18 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mDC7848386B8D059E0BA31383ED93DE80D7F6C421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * V_2 = NULL;
	XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_007b;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00a8;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var element = obj as XmlElement;
			RuntimeObject * L_3 = __this->get_obj_3();
			V_2 = ((XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF *)IsInstClass((RuntimeObject*)L_3, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var));
			// if (element == null)
			XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_4 = V_2;
			if (L_4)
			{
				goto IL_002f;
			}
		}

IL_002b:
		{
			// yield break;
			V_0 = (bool)0;
			goto IL_00a8;
		}

IL_002f:
		{
			// foreach(var node in element.ChildNodes)
			XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_5 = V_2;
			XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * L_6;
			L_6 = VirtualFuncInvoker0< XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * >::Invoke(13 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_5);
			RuntimeObject* L_7;
			L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_6);
			__this->set_U3CU3E7__wrap1_5(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0083;
		}

IL_004a:
		{
			// foreach(var node in element.ChildNodes)
			RuntimeObject* L_8 = __this->get_U3CU3E7__wrap1_5();
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			// var xml = node as XmlElement;
			V_3 = ((XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF *)IsInstClass((RuntimeObject*)L_9, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var));
			// if(xml != null)
			XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_10 = V_3;
			if (!L_10)
			{
				goto IL_0083;
			}
		}

IL_005e:
		{
			// yield return new KeyValuePair<string, object>(xml.Name, xml);
			XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_11 = V_3;
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlNode::get_Name() */, L_11);
			XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_13 = V_3;
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_14;
			memset((&L_14), 0, sizeof(L_14));
			KeyValuePair_2__ctor_mDC7848386B8D059E0BA31383ED93DE80D7F6C421((&L_14), L_12, L_13, /*hidden argument*/KeyValuePair_2__ctor_mDC7848386B8D059E0BA31383ED93DE80D7F6C421_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00a8;
		}

IL_007b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0083:
		{
			// foreach(var node in element.ChildNodes)
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap1_5();
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004a;
			}
		}

IL_0090:
		{
			U3CGetAllChildObjectsU3Ed__12_U3CU3Em__Finally1_mE831A99FFB4CE6D505472627C490B17F723A2503(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00a1;
	}

FAULT_00a1:
	{// begin fault (depth: 1)
		U3CGetAllChildObjectsU3Ed__12_System_IDisposable_Dispose_mA068C9C20059EDBECBFB8ED0240A55FB93861E95(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(161)
	}// end fault
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12_U3CU3Em__Finally1_mE831A99FFB4CE6D505472627C490B17F723A2503 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  U3CGetAllChildObjectsU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mA4EF57D74ED8BFE256008D463139449098D2AA29 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllChildObjectsU3Ed__12_System_Collections_IEnumerator_Reset_m923A08FAA75635F95C9232E0D359A57AA09702CA (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllChildObjectsU3Ed__12_System_Collections_IEnumerator_Reset_m923A08FAA75635F95C9232E0D359A57AA09702CA_RuntimeMethod_var)));
	}
}
// System.Object ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAllChildObjectsU3Ed__12_System_Collections_IEnumerator_get_Current_m9D0505BA198AE885A3C1EFA5B8EA8EA602A12A0D (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllChildObjectsU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m6337E132D73857A73EEF5F4B5298DC95200F11FF (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * L_3 = (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 *)il2cpp_codegen_object_new(U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086_il2cpp_TypeInfo_var);
		U3CGetAllChildObjectsU3Ed__12__ctor_mB32381E398B3A53705178DC78C959759EE33EF3F(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_U3CU3E3__obj_4();
		L_4->set_obj_3(L_5);
		U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator ChartAndGraph.XMLParser/<GetAllChildObjects>d__12::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllChildObjectsU3Ed__12_System_Collections_IEnumerable_GetEnumerator_m16C5184DE46FBD3352186B226990DB63955E5D65 (U3CGetAllChildObjectsU3Ed__12_t8D60BD6E4EA94BF48EB070F2111D0E7BF5AAE086 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllChildObjectsU3Ed__12_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m6337E132D73857A73EEF5F4B5298DC95200F11FF(__this, /*hidden argument*/NULL);
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
// System.Void colorRandomizer/<SwitchColor>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchColorU3Ed__5__ctor_mAE4ACF6860354E440203C4C12809E5F41C79644F (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void colorRandomizer/<SwitchColor>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchColorU3Ed__5_System_IDisposable_Dispose_mACE5238EEDBA43BF6D2A7F06A7EAA02BE932990A (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean colorRandomizer/<SwitchColor>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchColorU3Ed__5_MoveNext_m3E9F8F1C13F41B4C980DD46EF02D52FA29CBE495 (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B_mFC58B95AFD0295B2288D5AB32F15A58FEF0051CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * V_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_2 = NULL;
	VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0021:
	{
		// baseMaterial.color = Random.ColorHSV();
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_4 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = L_4->get_baseMaterial_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Random_ColorHSV_mCC5611616B89F24DFE2667E892B67A58A2D079A6(/*hidden argument*/NULL);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_5, L_6, /*hidden argument*/NULL);
		// chart.DataSource.SetCategoryPoint(category, baseMaterial, 5.0);
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_7 = V_1;
		GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B * L_8 = L_7->get_chart_5();
		GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * L_9;
		L_9 = GraphChartBase_get_DataSource_m10C136B0FACB0AE4AEDEED0D6D489518954C6A2B_inline(L_8, /*hidden argument*/NULL);
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_10 = V_1;
		String_t* L_11 = L_10->get_category_4();
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_12 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = L_12->get_baseMaterial_6();
		GraphData_SetCategoryPoint_mA9B6EC2056F0EB92AE6F253A5451E9562D931E5E(L_9, L_11, L_13, (5.0), /*hidden argument*/NULL);
		// var t = textPrefab.GetComponent<Text>();
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_14 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_textPrefab_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16;
		L_16 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528(L_15, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var);
		V_2 = L_16;
		// if(t != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}
	{
		// t.color = Random.ColorHSV();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Random_ColorHSV_mCC5611616B89F24DFE2667E892B67A58A2D079A6(/*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// var axis = chart.GetComponent<VerticalAxis>();
		colorRandomizer_tA61A1F6ADEAF6B25A0CD65238001A4F5DBD68F34 * L_21 = V_1;
		GraphChart_t45B1D997954FE74CD5A0794B65DE5E8D850E875B * L_22 = L_21->get_chart_5();
		VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * L_23;
		L_23 = Component_GetComponent_TisVerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B_mFC58B95AFD0295B2288D5AB32F15A58FEF0051CA(L_22, /*hidden argument*/Component_GetComponent_TisVerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B_mFC58B95AFD0295B2288D5AB32F15A58FEF0051CA_RuntimeMethod_var);
		V_3 = L_23;
		// if(axis != null)
		VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		// axis.MainDivisions.TextPrefab = t;
		VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * L_26 = V_3;
		ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * L_27;
		L_27 = AxisBase_get_MainDivisions_m6035064E44C798F5788C10A4A50C5B5929AE9FD2_inline(L_26, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = V_2;
		ChartDivisionInfo_set_TextPrefab_mEC9B50279F0DC56E4B41F7971E1C0F870EF34593(L_27, L_28, /*hidden argument*/NULL);
		// axis.SubDivisions.TextPrefab = t;
		VerticalAxis_t8A900FA096947A14B0286FF6EF63F9AAF8DAFF4B * L_29 = V_3;
		ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC * L_30;
		L_30 = AxisBase_get_SubDivisions_mB429591DB80BAE9F57418D373514C72E1899FFD9_inline(L_29, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = V_2;
		ChartDivisionInfo_set_TextPrefab_mEC9B50279F0DC56E4B41F7971E1C0F870EF34593(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_32 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_32, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0021;
	}
}
// System.Object colorRandomizer/<SwitchColor>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchColorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8489730DA593874928721699415D72DFF3EAAE51 (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void colorRandomizer/<SwitchColor>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchColorU3Ed__5_System_Collections_IEnumerator_Reset_mF5F4B673EA545404280B4D177FFC8D66AB9B66D5 (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchColorU3Ed__5_System_Collections_IEnumerator_Reset_mF5F4B673EA545404280B4D177FFC8D66AB9B66D5_RuntimeMethod_var)));
	}
}
// System.Object colorRandomizer/<SwitchColor>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchColorU3Ed__5_System_Collections_IEnumerator_get_Current_m33AC5304DA6741B02644FBED864D902FEEB08449 (U3CSwitchColorU3Ed__5_t4B72BEF95E35959743BA126CD9B32A45A2A8D186 * __this, const RuntimeMethod* method)
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
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mC3A6DD09B2A5F65127BD0A76FF0AAFF1E6C7A1F5 (U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::<HookEvents>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CHookEventsU3Eb__0_m1C514B4D2AD0BA979D272728BE71542F5440CEAB (U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B * __this, const RuntimeMethod* method)
{
	{
		// candle.Leave += () => mLeave(candle);
		CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * L_0 = __this->get_U3CU3E4__this_0();
		CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * L_1 = __this->get_candle_1();
		CategoryObject_mLeave_mDF1D3E66A7C9EDD73926B8B90726F685006C4EB5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::<HookEvents>b__1(System.Int32,System.Int32,System.Object,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CHookEventsU3Eb__1_mBDBCEEA89794672E03612ECBAD109631ECCC5125 (U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B * __this, int32_t ___index0, int32_t ___type1, RuntimeObject * ___data2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position3, const RuntimeMethod* method)
{
	{
		// candle.Hover += (index, type, data, position) => { mHover(candle, mParent.MapIndex(index, isUp), type, data, position); };
		CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * L_0 = __this->get_U3CU3E4__this_0();
		CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * L_1 = __this->get_candle_1();
		CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * L_2 = __this->get_U3CU3E4__this_0();
		CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * L_3 = L_2->get_mParent_5();
		int32_t L_4 = ___index0;
		bool L_5 = __this->get_isUp_2();
		int32_t L_6;
		L_6 = CanvasCandleChart_MapIndex_mCDA73191BF35E5497A5239870BE0ED25B6E947D4(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___type1;
		RuntimeObject * L_8 = ___data2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___position3;
		CategoryObject_mHover_mE245859F5AB3BD1E5D0C680AC63E42DA73FF7FAB(L_0, L_1, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// candle.Hover += (index, type, data, position) => { mHover(candle, mParent.MapIndex(index, isUp), type, data, position); };
		return;
	}
}
// System.Void ChartAndGraph.CanvasCandleChart/CategoryObject/<>c__DisplayClass17_0::<HookEvents>b__2(System.Int32,System.Int32,System.Object,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CHookEventsU3Eb__2_mFFE4C3346D444AC361B8DFBE3463103C930997A2 (U3CU3Ec__DisplayClass17_0_tCCE3DF51DED3DB234F7AE9523BEABC354431D42B * __this, int32_t ___index0, int32_t ___type1, RuntimeObject * ___data2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position3, const RuntimeMethod* method)
{
	{
		// candle.Click += (index, type, data, position) => { mClick(candle, mParent.MapIndex(index, isUp), type, data, position); };
		CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * L_0 = __this->get_U3CU3E4__this_0();
		CanvasCandle_t3956618DAB6E60E4BCE76E416BFF1BA339B078E4 * L_1 = __this->get_candle_1();
		CategoryObject_t2BAE83DEA76F446FF2178854B53A6263CD16CED1 * L_2 = __this->get_U3CU3E4__this_0();
		CanvasCandleChart_t56C8ED44CEE18942C4C1C3B280175D8C847C339F * L_3 = L_2->get_mParent_5();
		int32_t L_4 = ___index0;
		bool L_5 = __this->get_isUp_2();
		int32_t L_6;
		L_6 = CanvasCandleChart_MapIndex_mCDA73191BF35E5497A5239870BE0ED25B6E947D4(L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___type1;
		RuntimeObject * L_8 = ___data2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___position3;
		CategoryObject_mClick_m38EF2EE6AB5E4F11DB0CE68BB10F3B7382CE79E8(L_0, L_1, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// candle.Click += (index, type, data, position) => { mClick(candle, mParent.MapIndex(index, isUp), type, data, position); };
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
// System.Void ChartAndGraph.CanvasLines/LineSegement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB3AF9044DEA533B03D3CD996681A870AF583CED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * L_0 = (U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE *)il2cpp_codegen_object_new(U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9CD97138095A7EAF798B159B9C81FAB0DC5EA55F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ChartAndGraph.CanvasLines/LineSegement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9CD97138095A7EAF798B159B9C81FAB0DC5EA55F (U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector4 ChartAndGraph.CanvasLines/LineSegement/<>c::<.ctor>b__1_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  U3CU3Ec_U3C_ctorU3Eb__1_0_m822455E64719F9346EF23DDD9018C019B8C4CE7B (U3CU3Ec_t9B2CF89E9DBC0D261400C36EFB73B8FC836AF7AE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// mLines.AddRange(lines.Select(x=>new Vector4(x.x,x.y,x.z,-1f)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___x0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___x0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___x0;
		float L_5 = L_4.get_z_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_6), L_1, L_3, L_5, (-1.0f), /*hidden argument*/NULL);
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * GraphChartBase_get_DataSource_m10C136B0FACB0AE4AEDEED0D6D489518954C6A2B_inline (GraphChartBase_t658AAA9694EE7E8DCF0A8E5D0B98E69EC10CC716 * __this, const RuntimeMethod* method)
{
	{
		// public GraphData DataSource { get { return Data; } }
		GraphData_tAC0B25A64BC37C6FF47E07E6400ADDB9D097D543 * L_0 = __this->get_Data_61();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * AxisBase_get_MainDivisions_m6035064E44C798F5788C10A4A50C5B5929AE9FD2_inline (AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405 * __this, const RuntimeMethod* method)
{
	{
		// public ChartMainDivisionInfo MainDivisions { get { return mainDivisions; } }
		ChartMainDivisionInfo_tBEB99C0B0B808B0766B1613E21707A425B7E3988 * L_0 = __this->get_mainDivisions_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChartDivisionInfo_tE31F2FFB9104F66352F04CCC080C5B988444FCCC * AxisBase_get_SubDivisions_mB429591DB80BAE9F57418D373514C72E1899FFD9_inline (AxisBase_tEC0CC4BCD49EDC2B6CE0917BB402B67E5EF8E405 * __this, const RuntimeMethod* method)
{
	{
		// public ChartDivisionInfo SubDivisions { get { return subDivisions; } }
		ChartSubDivisionInfo_t4DCDE6873F3959799D6B97BCCB40D1E76872F881 * L_0 = __this->get_subDivisions_11();
		return L_0;
	}
}
