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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Byte[]>
struct Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398;
// System.Action`1<System.Exception>
struct Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118;
// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_t9FFFFAAA9D5A095636602F745CD7A78D65B37B98;
// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6DCEB6C737F808D588F4BD3631CEC7D7E538ED92;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t0D644280189423D65BB3F4496366E40B8F487C87;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tA921560C06F09EE6AF7DA8904BA260E153A93127;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_tD3E6A1E1857345DFC7AB58CED4258EBBAADC7EF7;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898;
// System.Exception
struct Exception_t;
// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.Sockets.TcpClient
struct TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// WebSocketSharp.Logger
struct Logger_t542395E81971CD0ACFA010D1A7A124F890B78AB8;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t4D2B5D6269D99D96C2D16605C50357C8E9F65509;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_tF27694E5677E6C12F59145B837A5F317BACD3F82;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tD106162E56E4B4AC9BDB8D65363C2A40278E7446;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t1F220805F42A8564CCEF88450F2BDA318E031CF3;
// WebSocketSharp.PayloadData
struct PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917;
// WebSocketSharp.WebSocket
struct WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894;
// WebSocketSharp.WebSocket/<>c__DisplayClass15
struct U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553;
// WebSocketSharp.WebSocketException
struct WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2
struct U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4
struct U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass7
struct U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB;
// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__9
struct U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fin_t2541FD0275B77DA2562251DBE9A1AAD83A0C93B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mask_tE058AA5FBD9818EF5F4A252D5521A37A62487D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Opcode_tAC8CDD23A39640D21BBA13BE84CA7F6F9440A882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0152B5080730778D93E2F304EA2EF746F8856462;
IL2CPP_EXTERN_C String_t* _stringLiteral023A6088D48BBEE10985A9F514509CA3F36D7F84;
IL2CPP_EXTERN_C String_t* _stringLiteral3F282E769BA000F89B8DD4F7C6373C66A3DC8F36;
IL2CPP_EXTERN_C String_t* _stringLiteral4246A15CCE9A4756EBDCB35B1E19B61080DA2802;
IL2CPP_EXTERN_C String_t* _stringLiteral4603324C627547F73F3EF6CB5D8DB0C15029EDEA;
IL2CPP_EXTERN_C String_t* _stringLiteral46D866D0FAC8CF61F8B047DFE83C1515FCC94083;
IL2CPP_EXTERN_C String_t* _stringLiteral52D06DBD7F963FDA96EA0811E579EE41E0B92FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral608C7F6B4B5E1EEFED99E0FDE517F634E3F092E1;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABE74DBB0EBB8668A75A7EAF860EE73C60B75BE;
IL2CPP_EXTERN_C String_t* _stringLiteral75CA7244132E407E1141FE2C56AE8CD535C360E2;
IL2CPP_EXTERN_C String_t* _stringLiteral7FEB6F1FCBDF2606186EF8302489D481582DFB22;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC9C2BAF81A18DB428BC11678C7491FDC316E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDBB6A894EC08E1303605FED4C40B991BBF6CF3;
IL2CPP_EXTERN_C String_t* _stringLiteral95C989F08B108DC4A5C009B2631BBFC8FD637104;
IL2CPP_EXTERN_C String_t* _stringLiteral9B38E9B59C54C1C1905D259ADFE3BDE55360CD67;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1ED4733D7BB5477C87446609439016E56FD587;
IL2CPP_EXTERN_C String_t* _stringLiteralE91EFF9F8FC19174100CE03249D0AEB790E73966;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A05FF89C20C2B82C80CB383CF91E9CFA9FFB9E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB95870FD1218256C46F40EA915BDEE1DAF796C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF38D41D8DE2D3FF65156DAD581897672EC68D7C0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m50A05582FAA01E6D0FC24B26B30E861174A0A6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5B9E5F7AB46FE321B40FC4464D07EEB20A38656D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB16D62EB01476B28963CCEDE08E023AC83CBCF61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFE2BC436AC7C6B66C0E8C69244C71F9E4E771FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4__ctor_m4A53F8628C5AFD979FAE2D2270D84A38DAA1F0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ext_Emit_TisMessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E_m4830A0425C9A3657475CDD5CD6B4E14EE8EEA3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mB18E5A71B877600B9FBD05176394ECCBB0AB9A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m877DCC51E7A8802D98131933DE487592010286C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m650CA9CEEF6081BC324677FB6E1FAFD50F97FCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__13_m6BBD20D6193D89E42D04D644D95D96BBD2395BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__14_mC070EA5BB0A1A7F009B13A5FA2221A25AA83EEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_m954453216D91C8ED77B5CA8207413C6ACE7BBD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_mD18450ED02836803EBCE41964F4A24F9ED584D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_Read_mED780860471B7C851DC8FC982839AA8F38B7A4A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m650CA9CEEF6081BC324677FB6E1FAFD50F97FCE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_mB98BBEEF73017FBCE095550A17338A44DC7A83B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__12_m2B444410101007EA2A1500116213E5623AF78EF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__13_m6BBD20D6193D89E42D04D644D95D96BBD2395BC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__14_mC070EA5BB0A1A7F009B13A5FA2221A25AA83EEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_m954453216D91C8ED77B5CA8207413C6ACE7BBD51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_mD18450ED02836803EBCE41964F4A24F9ED584D3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_CreateCloseFrame_mE45C7489DFB223EC648040AC94B4C1CAC1B4D779_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_CreatePingFrame_mD510E47C44BF643BA641FEFF3A9EE9EEB18E47EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_GetEnumerator_m1AC3833D404B7A6E124E75618BE4B7A595124AD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_PrintToString_m5FF1D2C2AF475DEAFB449435392047DFA36E1120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_ReadAsync_mEDF2B3A9D1FF8912BF8B59BE0BB383EC8128EC09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_Read_mED780860471B7C851DC8FC982839AA8F38B7A4A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_ToString_m5E522D58C1B2ABF3278883F56F6D3C5B1676EA6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_Unmask_mD5C8F693EBDD52C3100FB4659BCE1E333C1CD656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame__cctor_m1D6ED66A879BC4743368E993E0B7045A12209123_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame__ctor_m88011038F6994C9A1B838ED8B2DE373F1AC37B79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_createMaskingKey_m06DD4DA3B88F482945E4A1D0EA625F5425D07CAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_print_m4FD24047B8C880095E8DC539E75D872BFB59CA14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

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


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// WebSocketSharp.Ext
struct  Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE  : public RuntimeObject
{
public:

public:
};

struct Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____last_0;
	// System.Byte[] WebSocketSharp.Ext::EmptyByteArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___EmptyByteArray_1;

public:
	inline static int32_t get_offset_of__last_0() { return static_cast<int32_t>(offsetof(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields, ____last_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__last_0() const { return ____last_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__last_0() { return &____last_0; }
	inline void set__last_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____last_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyByteArray_1() { return static_cast<int32_t>(offsetof(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields, ___EmptyByteArray_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_EmptyByteArray_1() const { return ___EmptyByteArray_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_EmptyByteArray_1() { return &___EmptyByteArray_1; }
	inline void set_EmptyByteArray_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___EmptyByteArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyByteArray_1), (void*)value);
	}
};


// WebSocketSharp.PayloadData
struct  PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_1;
	// System.Int64 WebSocketSharp.PayloadData::_extDataLength
	int64_t ____extDataLength_2;
	// System.Int64 WebSocketSharp.PayloadData::_length
	int64_t ____length_3;
	// System.Boolean WebSocketSharp.PayloadData::_masked
	bool ____masked_4;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917, ____data_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__extDataLength_2() { return static_cast<int32_t>(offsetof(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917, ____extDataLength_2)); }
	inline int64_t get__extDataLength_2() const { return ____extDataLength_2; }
	inline int64_t* get_address_of__extDataLength_2() { return &____extDataLength_2; }
	inline void set__extDataLength_2(int64_t value)
	{
		____extDataLength_2 = value;
	}

	inline static int32_t get_offset_of__length_3() { return static_cast<int32_t>(offsetof(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917, ____length_3)); }
	inline int64_t get__length_3() const { return ____length_3; }
	inline int64_t* get_address_of__length_3() { return &____length_3; }
	inline void set__length_3(int64_t value)
	{
		____length_3 = value;
	}

	inline static int32_t get_offset_of__masked_4() { return static_cast<int32_t>(offsetof(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917, ____masked_4)); }
	inline bool get__masked_4() const { return ____masked_4; }
	inline bool* get_address_of__masked_4() { return &____masked_4; }
	inline void set__masked_4(bool value)
	{
		____masked_4 = value;
	}
};


// WebSocketSharp.WebSocket_<>c__DisplayClass15
struct  U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553  : public RuntimeObject
{
public:
	// System.Action WebSocketSharp.WebSocket_<>c__DisplayClass15::receive
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___receive_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket_<>c__DisplayClass15::<>4__this
	WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_receive_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553, ___receive_0)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_receive_0() const { return ___receive_0; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_receive_0() { return &___receive_0; }
	inline void set_receive_0(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___receive_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receive_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553, ___U3CU3E4__this_1)); }
	inline WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame_<>c__DisplayClass2
struct  U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocketFrame_<>c__DisplayClass2::lineFmt
	String_t* ___lineFmt_0;
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame_<>c__DisplayClass2::output
	StringBuilder_t * ___output_1;

public:
	inline static int32_t get_offset_of_lineFmt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD, ___lineFmt_0)); }
	inline String_t* get_lineFmt_0() const { return ___lineFmt_0; }
	inline String_t** get_address_of_lineFmt_0() { return &___lineFmt_0; }
	inline void set_lineFmt_0(String_t* value)
	{
		___lineFmt_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineFmt_0), (void*)value);
	}

	inline static int32_t get_offset_of_output_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD, ___output_1)); }
	inline StringBuilder_t * get_output_1() const { return ___output_1; }
	inline StringBuilder_t ** get_address_of_output_1() { return &___output_1; }
	inline void set_output_1(StringBuilder_t * value)
	{
		___output_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame_<>c__DisplayClass2_<>c__DisplayClass4
struct  U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774  : public RuntimeObject
{
public:
	// WebSocketSharp.WebSocketFrame_<>c__DisplayClass2 WebSocketSharp.WebSocketFrame_<>c__DisplayClass2_<>c__DisplayClass4::CSU24<>8__locals3
	U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * ___CSU24U3CU3E8__locals3_0;
	// System.Int64 WebSocketSharp.WebSocketFrame_<>c__DisplayClass2_<>c__DisplayClass4::lineCnt
	int64_t ___lineCnt_1;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E8__locals3_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774, ___CSU24U3CU3E8__locals3_0)); }
	inline U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * get_CSU24U3CU3E8__locals3_0() const { return ___CSU24U3CU3E8__locals3_0; }
	inline U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD ** get_address_of_CSU24U3CU3E8__locals3_0() { return &___CSU24U3CU3E8__locals3_0; }
	inline void set_CSU24U3CU3E8__locals3_0(U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * value)
	{
		___CSU24U3CU3E8__locals3_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals3_0), (void*)value);
	}

	inline static int32_t get_offset_of_lineCnt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774, ___lineCnt_1)); }
	inline int64_t get_lineCnt_1() const { return ___lineCnt_1; }
	inline int64_t* get_address_of_lineCnt_1() { return &___lineCnt_1; }
	inline void set_lineCnt_1(int64_t value)
	{
		___lineCnt_1 = value;
	}
};


// WebSocketSharp.WebSocketFrame_<>c__DisplayClass7
struct  U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame_<>c__DisplayClass7::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_0;
	// System.Boolean WebSocketSharp.WebSocketFrame_<>c__DisplayClass7::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame_<>c__DisplayClass7::completed
	Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * ___completed_2;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB, ___stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_0() const { return ___stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB, ___completed_2)); }
	inline Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9
struct  U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521  : public RuntimeObject
{
public:
	// System.Byte WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>2__current
	uint8_t ___U3CU3E2__current_0;
	// System.Int32 WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>1__state
	int32_t ___U3CU3E1__state_1;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>4__this
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___U3CU3E4__this_2;
	// System.Byte WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<b>5__a
	uint8_t ___U3CbU3E5__a_3;
	// System.Byte[] WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>7__wrapc
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CU3E7__wrapc_4;
	// System.Int32 WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>7__wrapd
	int32_t ___U3CU3E7__wrapd_5;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CU3E2__current_0)); }
	inline uint8_t get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline uint8_t* get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(uint8_t value)
	{
		___U3CU3E2__current_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CU3E4__this_2)); }
	inline WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbU3E5__a_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CbU3E5__a_3)); }
	inline uint8_t get_U3CbU3E5__a_3() const { return ___U3CbU3E5__a_3; }
	inline uint8_t* get_address_of_U3CbU3E5__a_3() { return &___U3CbU3E5__a_3; }
	inline void set_U3CbU3E5__a_3(uint8_t value)
	{
		___U3CbU3E5__a_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrapc_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CU3E7__wrapc_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CU3E7__wrapc_4() const { return ___U3CU3E7__wrapc_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CU3E7__wrapc_4() { return &___U3CU3E7__wrapc_4; }
	inline void set_U3CU3E7__wrapc_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CU3E7__wrapc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrapc_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrapd_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521, ___U3CU3E7__wrapd_5)); }
	inline int32_t get_U3CU3E7__wrapd_5() const { return ___U3CU3E7__wrapd_5; }
	inline int32_t* get_address_of_U3CU3E7__wrapd_5() { return &___U3CU3E7__wrapd_5; }
	inline void set_U3CU3E7__wrapd_5(int32_t value)
	{
		___U3CU3E7__wrapd_5 = value;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// WebSocketSharp.ByteOrder
struct  ByteOrder_t5303137EC9B97C1EFD926573EFF149EEE34DADC7 
{
public:
	// System.Byte WebSocketSharp.ByteOrder::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteOrder_t5303137EC9B97C1EFD926573EFF149EEE34DADC7, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CloseStatusCode
struct  CloseStatusCode_t2AE21CDBA86262F4A9DE1521FF5E8BC8F1EF765E 
{
public:
	// System.UInt16 WebSocketSharp.CloseStatusCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloseStatusCode_t2AE21CDBA86262F4A9DE1521FF5E8BC8F1EF765E, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CompressionMethod
struct  CompressionMethod_tEC03918F10F3ED42DA51812861C7598BBFF57E26 
{
public:
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_tEC03918F10F3ED42DA51812861C7598BBFF57E26, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Fin
struct  Fin_t2541FD0275B77DA2562251DBE9A1AAD83A0C93B4 
{
public:
	// System.Byte WebSocketSharp.Fin::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fin_t2541FD0275B77DA2562251DBE9A1AAD83A0C93B4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Mask
struct  Mask_tE058AA5FBD9818EF5F4A252D5521A37A62487D7B 
{
public:
	// System.Byte WebSocketSharp.Mask::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mask_tE058AA5FBD9818EF5F4A252D5521A37A62487D7B, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Opcode
struct  Opcode_tAC8CDD23A39640D21BBA13BE84CA7F6F9440A882 
{
public:
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Opcode_tAC8CDD23A39640D21BBA13BE84CA7F6F9440A882, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Rsv
struct  Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959 
{
public:
	// System.Byte WebSocketSharp.Rsv::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.WebSocketState
struct  WebSocketState_tBD4C3B3CD8CDF9693F08B06C7BBBB2CE4F7EE56E 
{
public:
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_tBD4C3B3CD8CDF9693F08B06C7BBBB2CE4F7EE56E, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
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


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};


// WebSocketSharp.MessageEventArgs
struct  MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_2;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____rawData_3;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__opcode_2() { return static_cast<int32_t>(offsetof(MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E, ____opcode_2)); }
	inline uint8_t get__opcode_2() const { return ____opcode_2; }
	inline uint8_t* get_address_of__opcode_2() { return &____opcode_2; }
	inline void set__opcode_2(uint8_t value)
	{
		____opcode_2 = value;
	}

	inline static int32_t get_offset_of__rawData_3() { return static_cast<int32_t>(offsetof(MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E, ____rawData_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__rawData_3() const { return ____rawData_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__rawData_3() { return &____rawData_3; }
	inline void set__rawData_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____rawData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawData_3), (void*)value);
	}
};


// WebSocketSharp.WebSocket
struct  WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894  : public RuntimeObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t4D2B5D6269D99D96C2D16605C50357C8E9F65509 * ____authChallenge_3;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_4;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_5;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____closeContext_6;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_7;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t1F220805F42A8564CCEF88450F2BDA318E031CF3 * ____context_8;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_tD106162E56E4B4AC9BDB8D65363C2A40278E7446 * ____cookies_9;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * ____credentials_10;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_11;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_12;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ____exitReceiving_13;
	// System.Object WebSocketSharp.WebSocket::_forConn
	RuntimeObject * ____forConn_14;
	// System.Object WebSocketSharp.WebSocket::_forEvent
	RuntimeObject * ____forEvent_15;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject * ____forMessageEventQueue_16;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject * ____forSend_17;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * ____handshakeRequestChecker_18;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_19;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t542395E81971CD0ACFA010D1A7A124F890B78AB8 * ____logger_20;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t0D644280189423D65BB3F4496366E40B8F487C87 * ____messageEventQueue_21;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_22;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_23;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_24;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_25;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____protocols_26;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * ____proxyCredentials_27;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ____proxyUri_28;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_29;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ____receivePong_30;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_31;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_tF27694E5677E6C12F59145B837A5F317BACD3F82 * ____sslConfig_32;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____stream_33;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * ____tcpClient_34;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ____uri_35;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ____waitTime_36;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_tA921560C06F09EE6AF7DA8904BA260E153A93127 * ___OnClose_37;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_tD3E6A1E1857345DFC7AB58CED4258EBBAADC7EF7 * ___OnError_38;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 * ___OnMessage_39;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___OnOpen_40;

public:
	inline static int32_t get_offset_of__authChallenge_3() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____authChallenge_3)); }
	inline AuthenticationChallenge_t4D2B5D6269D99D96C2D16605C50357C8E9F65509 * get__authChallenge_3() const { return ____authChallenge_3; }
	inline AuthenticationChallenge_t4D2B5D6269D99D96C2D16605C50357C8E9F65509 ** get_address_of__authChallenge_3() { return &____authChallenge_3; }
	inline void set__authChallenge_3(AuthenticationChallenge_t4D2B5D6269D99D96C2D16605C50357C8E9F65509 * value)
	{
		____authChallenge_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authChallenge_3), (void*)value);
	}

	inline static int32_t get_offset_of__base64Key_4() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____base64Key_4)); }
	inline String_t* get__base64Key_4() const { return ____base64Key_4; }
	inline String_t** get_address_of__base64Key_4() { return &____base64Key_4; }
	inline void set__base64Key_4(String_t* value)
	{
		____base64Key_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Key_4), (void*)value);
	}

	inline static int32_t get_offset_of__client_5() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____client_5)); }
	inline bool get__client_5() const { return ____client_5; }
	inline bool* get_address_of__client_5() { return &____client_5; }
	inline void set__client_5(bool value)
	{
		____client_5 = value;
	}

	inline static int32_t get_offset_of__closeContext_6() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____closeContext_6)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__closeContext_6() const { return ____closeContext_6; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__closeContext_6() { return &____closeContext_6; }
	inline void set__closeContext_6(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____closeContext_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeContext_6), (void*)value);
	}

	inline static int32_t get_offset_of__compression_7() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____compression_7)); }
	inline uint8_t get__compression_7() const { return ____compression_7; }
	inline uint8_t* get_address_of__compression_7() { return &____compression_7; }
	inline void set__compression_7(uint8_t value)
	{
		____compression_7 = value;
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____context_8)); }
	inline WebSocketContext_t1F220805F42A8564CCEF88450F2BDA318E031CF3 * get__context_8() const { return ____context_8; }
	inline WebSocketContext_t1F220805F42A8564CCEF88450F2BDA318E031CF3 ** get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(WebSocketContext_t1F220805F42A8564CCEF88450F2BDA318E031CF3 * value)
	{
		____context_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_8), (void*)value);
	}

	inline static int32_t get_offset_of__cookies_9() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____cookies_9)); }
	inline CookieCollection_tD106162E56E4B4AC9BDB8D65363C2A40278E7446 * get__cookies_9() const { return ____cookies_9; }
	inline CookieCollection_tD106162E56E4B4AC9BDB8D65363C2A40278E7446 ** get_address_of__cookies_9() { return &____cookies_9; }
	inline void set__cookies_9(CookieCollection_tD106162E56E4B4AC9BDB8D65363C2A40278E7446 * value)
	{
		____cookies_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cookies_9), (void*)value);
	}

	inline static int32_t get_offset_of__credentials_10() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____credentials_10)); }
	inline NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * get__credentials_10() const { return ____credentials_10; }
	inline NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF ** get_address_of__credentials_10() { return &____credentials_10; }
	inline void set__credentials_10(NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * value)
	{
		____credentials_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_10), (void*)value);
	}

	inline static int32_t get_offset_of__enableRedirection_11() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____enableRedirection_11)); }
	inline bool get__enableRedirection_11() const { return ____enableRedirection_11; }
	inline bool* get_address_of__enableRedirection_11() { return &____enableRedirection_11; }
	inline void set__enableRedirection_11(bool value)
	{
		____enableRedirection_11 = value;
	}

	inline static int32_t get_offset_of__extensions_12() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____extensions_12)); }
	inline String_t* get__extensions_12() const { return ____extensions_12; }
	inline String_t** get_address_of__extensions_12() { return &____extensions_12; }
	inline void set__extensions_12(String_t* value)
	{
		____extensions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_12), (void*)value);
	}

	inline static int32_t get_offset_of__exitReceiving_13() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____exitReceiving_13)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get__exitReceiving_13() const { return ____exitReceiving_13; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of__exitReceiving_13() { return &____exitReceiving_13; }
	inline void set__exitReceiving_13(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		____exitReceiving_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exitReceiving_13), (void*)value);
	}

	inline static int32_t get_offset_of__forConn_14() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____forConn_14)); }
	inline RuntimeObject * get__forConn_14() const { return ____forConn_14; }
	inline RuntimeObject ** get_address_of__forConn_14() { return &____forConn_14; }
	inline void set__forConn_14(RuntimeObject * value)
	{
		____forConn_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forConn_14), (void*)value);
	}

	inline static int32_t get_offset_of__forEvent_15() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____forEvent_15)); }
	inline RuntimeObject * get__forEvent_15() const { return ____forEvent_15; }
	inline RuntimeObject ** get_address_of__forEvent_15() { return &____forEvent_15; }
	inline void set__forEvent_15(RuntimeObject * value)
	{
		____forEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forEvent_15), (void*)value);
	}

	inline static int32_t get_offset_of__forMessageEventQueue_16() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____forMessageEventQueue_16)); }
	inline RuntimeObject * get__forMessageEventQueue_16() const { return ____forMessageEventQueue_16; }
	inline RuntimeObject ** get_address_of__forMessageEventQueue_16() { return &____forMessageEventQueue_16; }
	inline void set__forMessageEventQueue_16(RuntimeObject * value)
	{
		____forMessageEventQueue_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forMessageEventQueue_16), (void*)value);
	}

	inline static int32_t get_offset_of__forSend_17() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____forSend_17)); }
	inline RuntimeObject * get__forSend_17() const { return ____forSend_17; }
	inline RuntimeObject ** get_address_of__forSend_17() { return &____forSend_17; }
	inline void set__forSend_17(RuntimeObject * value)
	{
		____forSend_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forSend_17), (void*)value);
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_18() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____handshakeRequestChecker_18)); }
	inline Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * get__handshakeRequestChecker_18() const { return ____handshakeRequestChecker_18; }
	inline Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB ** get_address_of__handshakeRequestChecker_18() { return &____handshakeRequestChecker_18; }
	inline void set__handshakeRequestChecker_18(Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * value)
	{
		____handshakeRequestChecker_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handshakeRequestChecker_18), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreExtensions_19() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____ignoreExtensions_19)); }
	inline bool get__ignoreExtensions_19() const { return ____ignoreExtensions_19; }
	inline bool* get_address_of__ignoreExtensions_19() { return &____ignoreExtensions_19; }
	inline void set__ignoreExtensions_19(bool value)
	{
		____ignoreExtensions_19 = value;
	}

	inline static int32_t get_offset_of__logger_20() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____logger_20)); }
	inline Logger_t542395E81971CD0ACFA010D1A7A124F890B78AB8 * get__logger_20() const { return ____logger_20; }
	inline Logger_t542395E81971CD0ACFA010D1A7A124F890B78AB8 ** get_address_of__logger_20() { return &____logger_20; }
	inline void set__logger_20(Logger_t542395E81971CD0ACFA010D1A7A124F890B78AB8 * value)
	{
		____logger_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_20), (void*)value);
	}

	inline static int32_t get_offset_of__messageEventQueue_21() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____messageEventQueue_21)); }
	inline Queue_1_t0D644280189423D65BB3F4496366E40B8F487C87 * get__messageEventQueue_21() const { return ____messageEventQueue_21; }
	inline Queue_1_t0D644280189423D65BB3F4496366E40B8F487C87 ** get_address_of__messageEventQueue_21() { return &____messageEventQueue_21; }
	inline void set__messageEventQueue_21(Queue_1_t0D644280189423D65BB3F4496366E40B8F487C87 * value)
	{
		____messageEventQueue_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageEventQueue_21), (void*)value);
	}

	inline static int32_t get_offset_of__nonceCount_22() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____nonceCount_22)); }
	inline uint32_t get__nonceCount_22() const { return ____nonceCount_22; }
	inline uint32_t* get_address_of__nonceCount_22() { return &____nonceCount_22; }
	inline void set__nonceCount_22(uint32_t value)
	{
		____nonceCount_22 = value;
	}

	inline static int32_t get_offset_of__origin_23() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____origin_23)); }
	inline String_t* get__origin_23() const { return ____origin_23; }
	inline String_t** get_address_of__origin_23() { return &____origin_23; }
	inline void set__origin_23(String_t* value)
	{
		____origin_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____origin_23), (void*)value);
	}

	inline static int32_t get_offset_of__preAuth_24() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____preAuth_24)); }
	inline bool get__preAuth_24() const { return ____preAuth_24; }
	inline bool* get_address_of__preAuth_24() { return &____preAuth_24; }
	inline void set__preAuth_24(bool value)
	{
		____preAuth_24 = value;
	}

	inline static int32_t get_offset_of__protocol_25() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____protocol_25)); }
	inline String_t* get__protocol_25() const { return ____protocol_25; }
	inline String_t** get_address_of__protocol_25() { return &____protocol_25; }
	inline void set__protocol_25(String_t* value)
	{
		____protocol_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocol_25), (void*)value);
	}

	inline static int32_t get_offset_of__protocols_26() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____protocols_26)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__protocols_26() const { return ____protocols_26; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__protocols_26() { return &____protocols_26; }
	inline void set__protocols_26(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____protocols_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocols_26), (void*)value);
	}

	inline static int32_t get_offset_of__proxyCredentials_27() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____proxyCredentials_27)); }
	inline NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * get__proxyCredentials_27() const { return ____proxyCredentials_27; }
	inline NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF ** get_address_of__proxyCredentials_27() { return &____proxyCredentials_27; }
	inline void set__proxyCredentials_27(NetworkCredential_t6785197793BA9354C03E8AAF015BAA98F8DCC0CF * value)
	{
		____proxyCredentials_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyCredentials_27), (void*)value);
	}

	inline static int32_t get_offset_of__proxyUri_28() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____proxyUri_28)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get__proxyUri_28() const { return ____proxyUri_28; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of__proxyUri_28() { return &____proxyUri_28; }
	inline void set__proxyUri_28(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		____proxyUri_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyUri_28), (void*)value);
	}

	inline static int32_t get_offset_of__readyState_29() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____readyState_29)); }
	inline uint16_t get__readyState_29() const { return ____readyState_29; }
	inline uint16_t* get_address_of__readyState_29() { return &____readyState_29; }
	inline void set__readyState_29(uint16_t value)
	{
		____readyState_29 = value;
	}

	inline static int32_t get_offset_of__receivePong_30() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____receivePong_30)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get__receivePong_30() const { return ____receivePong_30; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of__receivePong_30() { return &____receivePong_30; }
	inline void set__receivePong_30(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		____receivePong_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivePong_30), (void*)value);
	}

	inline static int32_t get_offset_of__secure_31() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____secure_31)); }
	inline bool get__secure_31() const { return ____secure_31; }
	inline bool* get_address_of__secure_31() { return &____secure_31; }
	inline void set__secure_31(bool value)
	{
		____secure_31 = value;
	}

	inline static int32_t get_offset_of__sslConfig_32() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____sslConfig_32)); }
	inline ClientSslConfiguration_tF27694E5677E6C12F59145B837A5F317BACD3F82 * get__sslConfig_32() const { return ____sslConfig_32; }
	inline ClientSslConfiguration_tF27694E5677E6C12F59145B837A5F317BACD3F82 ** get_address_of__sslConfig_32() { return &____sslConfig_32; }
	inline void set__sslConfig_32(ClientSslConfiguration_tF27694E5677E6C12F59145B837A5F317BACD3F82 * value)
	{
		____sslConfig_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sslConfig_32), (void*)value);
	}

	inline static int32_t get_offset_of__stream_33() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____stream_33)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__stream_33() const { return ____stream_33; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__stream_33() { return &____stream_33; }
	inline void set__stream_33(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____stream_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_33), (void*)value);
	}

	inline static int32_t get_offset_of__tcpClient_34() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____tcpClient_34)); }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * get__tcpClient_34() const { return ____tcpClient_34; }
	inline TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB ** get_address_of__tcpClient_34() { return &____tcpClient_34; }
	inline void set__tcpClient_34(TcpClient_t8BC37A84681D1839590AE10B14C25BA473063EDB * value)
	{
		____tcpClient_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcpClient_34), (void*)value);
	}

	inline static int32_t get_offset_of__uri_35() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____uri_35)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get__uri_35() const { return ____uri_35; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of__uri_35() { return &____uri_35; }
	inline void set__uri_35(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		____uri_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_35), (void*)value);
	}

	inline static int32_t get_offset_of__waitTime_36() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ____waitTime_36)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get__waitTime_36() const { return ____waitTime_36; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of__waitTime_36() { return &____waitTime_36; }
	inline void set__waitTime_36(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		____waitTime_36 = value;
	}

	inline static int32_t get_offset_of_OnClose_37() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ___OnClose_37)); }
	inline EventHandler_1_tA921560C06F09EE6AF7DA8904BA260E153A93127 * get_OnClose_37() const { return ___OnClose_37; }
	inline EventHandler_1_tA921560C06F09EE6AF7DA8904BA260E153A93127 ** get_address_of_OnClose_37() { return &___OnClose_37; }
	inline void set_OnClose_37(EventHandler_1_tA921560C06F09EE6AF7DA8904BA260E153A93127 * value)
	{
		___OnClose_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_37), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_38() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ___OnError_38)); }
	inline EventHandler_1_tD3E6A1E1857345DFC7AB58CED4258EBBAADC7EF7 * get_OnError_38() const { return ___OnError_38; }
	inline EventHandler_1_tD3E6A1E1857345DFC7AB58CED4258EBBAADC7EF7 ** get_address_of_OnError_38() { return &___OnError_38; }
	inline void set_OnError_38(EventHandler_1_tD3E6A1E1857345DFC7AB58CED4258EBBAADC7EF7 * value)
	{
		___OnError_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_38), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_39() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ___OnMessage_39)); }
	inline EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 * get_OnMessage_39() const { return ___OnMessage_39; }
	inline EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 ** get_address_of_OnMessage_39() { return &___OnMessage_39; }
	inline void set_OnMessage_39(EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 * value)
	{
		___OnMessage_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_39), (void*)value);
	}

	inline static int32_t get_offset_of_OnOpen_40() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894, ___OnOpen_40)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_OnOpen_40() const { return ___OnOpen_40; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_OnOpen_40() { return &___OnOpen_40; }
	inline void set_OnOpen_40(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___OnOpen_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_40), (void*)value);
	}
};

struct WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894_StaticFields
{
public:
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::CSU24<>9__CachedAnonymousMethodDelegate1
	Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41() { return static_cast<int32_t>(offsetof(WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41)); }
	inline Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41; }
	inline Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41(Func_2_t354AB36399D0BB511D90BAB861152E1D32FB2CDB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_41), (void*)value);
	}
};


// WebSocketSharp.WebSocketException
struct  WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542  : public Exception_t
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_17;

public:
	inline static int32_t get_offset_of__code_17() { return static_cast<int32_t>(offsetof(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542, ____code_17)); }
	inline uint16_t get__code_17() const { return ____code_17; }
	inline uint16_t* get_address_of__code_17() { return &____code_17; }
	inline void set__code_17(uint16_t value)
	{
		____code_17 = value;
	}
};


// WebSocketSharp.WebSocketFrame
struct  WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____extPayloadLength_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extPayloadLength_0), (void*)value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____maskingKey_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maskingKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____payloadData_5)); }
	inline PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadData_5), (void*)value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};

struct WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::EmptyUnmaskPingBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___EmptyUnmaskPingBytes_10;

public:
	inline static int32_t get_offset_of_EmptyUnmaskPingBytes_10() { return static_cast<int32_t>(offsetof(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_StaticFields, ___EmptyUnmaskPingBytes_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_EmptyUnmaskPingBytes_10() const { return ___EmptyUnmaskPingBytes_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_EmptyUnmaskPingBytes_10() { return &___EmptyUnmaskPingBytes_10; }
	inline void set_EmptyUnmaskPingBytes_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___EmptyUnmaskPingBytes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyUnmaskPingBytes_10), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Byte[]>
struct  Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct  Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WebSocketSharp.WebSocketFrame>
struct  Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<System.String,System.String,System.String,System.String>
struct  Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct  EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct  Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48  : public MulticastDelegate_t
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


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::Emit<System.Object>(System.EventHandler`1<TEventArgs>,System.Object,TEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_Emit_TisRuntimeObject_mB95AF083E1F8E29C33DCB25AF9BF3E1CD17853C9_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * ___eventHandler0, RuntimeObject * ___sender1, RuntimeObject * ___e2, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m45D1BAA2C6B7079576A696D238636C558F05077F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(!0,!1,!2,!3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_Invoke_m8D10A292721C5CA8FD81F573C8FFDDF4037080AC_gshared (Action_4_t9FFFFAAA9D5A095636602F745CD7A78D65B37B98 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m0532A8D59BA2B6594B7696E771A1410F376A0AC4_gshared (Action_4_t9FFFFAAA9D5A095636602F745CD7A78D65B37B98 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFE2BC436AC7C6B66C0E8C69244C71F9E4E771FE2 (Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB16D62EB01476B28963CCEDE08E023AC83CBCF61 (Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::ReadAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadAsync_mEDF2B3A9D1FF8912BF8B59BE0BB383EC8128EC09 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, bool ___unmask1, Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * ___completed2, Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * ___error3, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_processReceivedFrame_m6DBE1628FA6AA467F3C5C18DDD1013AD88BD17EA (WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * __this, WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsData_m6C29374B7BD5C930A941DCF1C373980F34809064 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// WebSocketSharp.MessageEventArgs WebSocketSharp.WebSocket::dequeueFromMessageEventQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * WebSocket_dequeueFromMessageEventQueue_m0D30094981B93ECDDB1651E0B86679A97E61680B (WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::Emit<WebSocketSharp.MessageEventArgs>(System.EventHandler`1<TEventArgs>,System.Object,TEventArgs)
inline void Ext_Emit_TisMessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E_m4830A0425C9A3657475CDD5CD6B4E14EE8EEA3D4 (EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 * ___eventHandler0, RuntimeObject * ___sender1, MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * ___e2, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 *, RuntimeObject *, MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E *, const RuntimeMethod*))Ext_Emit_TisRuntimeObject_mB95AF083E1F8E29C33DCB25AF9BF3E1CD17853C9_gshared)(___eventHandler0, ___sender1, ___e2, method);
}
// System.Void WebSocketSharp.WebSocket::processException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_processException_m4CC0E1E043212F1F6113520B36ACCBA63CE841E1 (WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * __this, Exception_t * ___exception0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, uint16_t ___code0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String WebSocketSharp.Ext::GetMessage(WebSocketSharp.CloseStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ext_GetMessage_m7FC3F70F6C37A0B189EFC9C17D21424F97BC3C83 (uint16_t ___code0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_CreatePingFrame_mD510E47C44BF643BA641FEFF3A9EE9EEB18E47EA (bool ___mask0, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mCDA2C1925A7185B0EFABCA2C0BD9CE73B2420835 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::isData(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_isData_m8131D756DEC4A1286956A8D22989DEECB8B570EB (uint8_t ___opcode0, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PayloadData_get_Length_m9153060D7C4F951A6DC43CFD8B2256CB80BA3490 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt16,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Ext_InternalToByteArray_mE522C7B93CF3D84A6137CEC4ED07A9E031AB0D23 (uint16_t ___value0, uint8_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt64,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Ext_InternalToByteArray_m44EBC5374FD548E94049037C47B93943F53AC21E (uint64_t ___value0, uint8_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocketFrame_createMaskingKey_m06DD4DA3B88F482945E4A1D0EA625F5425D07CAF (const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_Mask_m4046EAAD5DF08EEB3F015AF6C8CE17B7E630EB49 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2__ctor_m872F64CA88EC767A3D8749838CF2275AF145495E (U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * __this, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mFAE5E38740EBC28A1DBD9DFA7BA2E289A32723BE (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m877DCC51E7A8802D98131933DE487592010286C3 (Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::Invoke()
inline Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * Func_1_Invoke_mB18E5A71B877600B9FBD05176394ECCBB0AB9A6C (Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 * __this, const RuntimeMethod* method)
{
	return ((  Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * (*) (Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 *, const RuntimeMethod*))Func_1_Invoke_m45D1BAA2C6B7079576A696D238636C558F05077F_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5 (uint8_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::Invoke(!0,!1,!2,!3)
inline void Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1 (Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 *, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))Action_4_Invoke_m8D10A292721C5CA8FD81F573C8FFDDF4037080AC_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Ext_ToUInt64_mDF5B949ADF1AEF3461CB702D36E434CDB760A458 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, uint8_t ___sourceOrder1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672 (uint64_t* __this, const RuntimeMethod* method);
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Ext_ToUInt16_m03CA1201AD33991C68268457CD2D778D057BE623 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, uint8_t ___sourceOrder1, const RuntimeMethod* method);
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2 (uint16_t* __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_m40E93E63A39C3A21C255E92F356B9DE845EE59ED (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m6201360C9B19FD17437AA1C88AF1743DCF3442E3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragmented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragmented_m3F5EF830AF31BD10E6801D3542A2F9A06D967DE5 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_mDDD456109A9A1C03FB883F5B5B1BEF7247D948C5 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_m1AE1DD5556BCE4700CA563BAC24B0D7BF564C872 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* PayloadData_get_ApplicationData_mA8474FFA424807B6416F6901DC91E75D75B54F2E (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::isControl(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_isControl_m27CDD2DAF910E321006DE1AF9DD39F566C5AB8E4 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m499D533B04AB36E8C07DC934A2468B5D2E2DD5C7 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, uint16_t ___code0, String_t* ___message1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m20D23C875824503B9F8A98A7A79251698BC52C4D (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Ext_ReadBytes_m76151E26A138BE27F93460EE459CAAE3A9A1546D (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, int32_t ___length1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Ext_ReadBytes_mCBFE1D24C884E2B1ECD68AF77F72C70CAE1FB45A (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, const RuntimeMethod* method);
// System.Int64 System.Array::get_LongLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Array_get_LongLength_m9C506B10DB4FB16C0A2F5059C5C08F8D3B0C2D9A (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mF08B340C6CECDFF0BC78005696250EE751201214 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, bool ___masked1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mD5C8F693EBDD52C3100FB4659BCE1E333C1CD656 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mAC6C1F50CD9697EE23D00349293EF5C45736A5E5 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, const RuntimeMethod* method);
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::read(System.Byte[],System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___header0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream1, bool ___unmask2, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_mBC2A4A13AF8A8921EFBE6FF052DA4EF205EB97E7 (U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5B9E5F7AB46FE321B40FC4464D07EEB20A38656D (Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_ReadBytesAsync_m2CBD3AA203DCBD20953707C3C9CBCFD2B38B2B9B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, int32_t ___length1, Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398 * ___completed2, Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9__ctor_m10D39EAD57497D924BD9D4A3212E19A8BF9B3233 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m4FD24047B8C880095E8DC539E75D872BFB59CA14 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* PayloadData_ToByteArray_m0E1115F31604FDADCF1DA0C24E8A2789219D9DD6 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_WriteBytes_m43636A3F67781B3BC98905310316F5A3A750A852 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m1AC3833D404B7A6E124E75618BE4B7A595124AD4 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass2/<>c__DisplayClass4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4__ctor_m86C2B2DDE0DE3EB2B3D03EBA6DED470E88C9FBA1 (U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_m4A53F8628C5AFD979FAE2D2270D84A38DAA1F0CF (Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_4__ctor_m0532A8D59BA2B6594B7696E771A1410F376A0AC4_gshared)(__this, ___object0, ___method1, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::Invoke(!0)
inline void Action_1_Invoke_m50A05582FAA01E6D0FC24B26B30E861174A0A6D1 (Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * __this, WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 *, WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__9::<>m__Finallyb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9_U3CU3Em__Finallyb_m35DD50E30DC098CD05646FD1F4797A7CFABFD930 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9_System_IDisposable_Dispose_m30D78190926180920DD02BFEF9B7DE8AFBE2CBB7 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketSharp.WebSocket_<>c__DisplayClass15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15__ctor_mEB44521184546EAEFAF57BA37DFD4722365E1BD8 (U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket_<>c__DisplayClass15::<startReceiving>b__12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__12_m2B444410101007EA2A1500116213E5623AF78EF2 (U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__12_m2B444410101007EA2A1500116213E5623AF78EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_0 = __this->get_U3CU3E4__this_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = L_0->get__stream_33();
		Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * L_2 = (Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 *)il2cpp_codegen_object_new(Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118_il2cpp_TypeInfo_var);
		Action_1__ctor_mFE2BC436AC7C6B66C0E8C69244C71F9E4E771FE2(L_2, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__13_m6BBD20D6193D89E42D04D644D95D96BBD2395BC6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFE2BC436AC7C6B66C0E8C69244C71F9E4E771FE2_RuntimeMethod_var);
		Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * L_3 = (Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC *)il2cpp_codegen_object_new(Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC_il2cpp_TypeInfo_var);
		Action_1__ctor_mB16D62EB01476B28963CCEDE08E023AC83CBCF61(L_3, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__14_mC070EA5BB0A1A7F009B13A5FA2221A25AA83EEEC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB16D62EB01476B28963CCEDE08E023AC83CBCF61_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame_ReadAsync_mEDF2B3A9D1FF8912BF8B59BE0BB383EC8128EC09(L_1, (bool)0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket_<>c__DisplayClass15::<startReceiving>b__13(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__13_m6BBD20D6193D89E42D04D644D95D96BBD2395BC6 (U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553 * __this, WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__13_m6BBD20D6193D89E42D04D644D95D96BBD2395BC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_0 = __this->get_U3CU3E4__this_1();
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_1 = ___frame0;
		bool L_2 = WebSocket_processReceivedFrame_m6DBE1628FA6AA467F3C5C18DDD1013AD88BD17EA(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_3 = __this->get_U3CU3E4__this_1();
		uint16_t L_4 = L_3->get__readyState_29();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_00c7;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = __this->get_receive_0();
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_6, /*hidden argument*/NULL);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_7 = ___frame0;
		bool L_8 = WebSocketFrame_get_IsData_m6C29374B7BD5C930A941DCF1C373980F34809064(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_00ec;
	}

IL_0046:
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_10 = __this->get_U3CU3E4__this_1();
		RuntimeObject * L_11 = L_10->get__forEvent_15();
		RuntimeObject * L_12 = L_11;
		V_3 = L_12;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_12, /*hidden argument*/NULL);
	}

IL_0059:
	try
	{ // begin try (depth: 1)
		{
		}

IL_005a:
		try
		{ // begin try (depth: 2)
			{
				WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_13 = __this->get_U3CU3E4__this_1();
				MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * L_14 = WebSocket_dequeueFromMessageEventQueue_m0D30094981B93ECDDB1651E0B86679A97E61680B(L_13, /*hidden argument*/NULL);
				V_0 = L_14;
				MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * L_15 = V_0;
				if (!L_15)
				{
					goto IL_007f;
				}
			}

IL_006a:
			{
				WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_16 = __this->get_U3CU3E4__this_1();
				uint16_t L_17 = L_16->get__readyState_29();
				il2cpp_codegen_memory_barrier();
				G_B11_0 = ((((int32_t)((((int32_t)L_17) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0080;
			}

IL_007f:
			{
				G_B11_0 = 1;
			}

IL_0080:
			{
				V_2 = (bool)G_B11_0;
				bool L_18 = V_2;
				if (L_18)
				{
					goto IL_009d;
				}
			}

IL_0085:
			{
				WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_19 = __this->get_U3CU3E4__this_1();
				EventHandler_1_tBBAC3800D36065684AA5AC475FAC7EADFA3D4898 * L_20 = L_19->get_OnMessage_39();
				WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_21 = __this->get_U3CU3E4__this_1();
				MessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E * L_22 = V_0;
				IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
				Ext_Emit_TisMessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E_m4830A0425C9A3657475CDD5CD6B4E14EE8EEA3D4(L_20, L_21, L_22, /*hidden argument*/Ext_Emit_TisMessageEventArgs_tF6F8D1E3B491D45F93446B6A02F2DB2367C06B9E_m4830A0425C9A3657475CDD5CD6B4E14EE8EEA3D4_RuntimeMethod_var);
			}

IL_009d:
			{
				goto IL_00b7;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00a0;
			throw e;
		}

CATCH_00a0:
		{ // begin catch(System.Exception)
			V_1 = ((Exception_t *)__exception_local);
			WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_23 = __this->get_U3CU3E4__this_1();
			Exception_t * L_24 = V_1;
			WebSocket_processException_m4CC0E1E043212F1F6113520B36ACCBA63CE841E1(L_23, L_24, _stringLiteral9B38E9B59C54C1C1905D259ADFE3BDE55360CD67, /*hidden argument*/NULL);
			goto IL_00b7;
		} // end catch (depth: 2)

IL_00b7:
		{
			IL2CPP_LEAVE(0xC3, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		RuntimeObject * L_25 = V_3;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_25, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c3:
	{
		goto IL_00ec;
	}

IL_00c7:
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_26 = __this->get_U3CU3E4__this_1();
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_27 = L_26->get__exitReceiving_13();
		V_2 = (bool)((((RuntimeObject*)(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)L_27) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_00ec;
		}
	}
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_29 = __this->get_U3CU3E4__this_1();
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_30 = L_29->get__exitReceiving_13();
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_30, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocket_<>c__DisplayClass15::<startReceiving>b__14(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__14_mC070EA5BB0A1A7F009B13A5FA2221A25AA83EEEC (U3CU3Ec__DisplayClass15_t4705CD404212DCCC910F40458E9E6B0A05584553 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_U3CstartReceivingU3Eb__14_mC070EA5BB0A1A7F009B13A5FA2221A25AA83EEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_tFBE0A3E9E24DF9D8C7358E22D4DC17134BFE2894 * L_0 = __this->get_U3CU3E4__this_1();
		Exception_t * L_1 = ___ex0;
		WebSocket_processException_m4CC0E1E043212F1F6113520B36ACCBA63CE841E1(L_0, L_1, _stringLiteral6ABE74DBB0EBB8668A75A7EAF860EE73C60B75BE, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2(__this, ((int32_t)1006), L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mBEAD1C118C75A6A350E4F0AEC1CB7525C143CCF6 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, uint16_t ___code0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___code0;
		WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2(__this, L_0, (String_t*)NULL, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m31FEF9E63302EE3D251474AFC1E44AEBF62848B5 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2(__this, ((int32_t)1006), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m499D533B04AB36E8C07DC934A2468B5D2E2DD5C7 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, uint16_t ___code0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___code0;
		String_t* L_1 = ___message1;
		WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2(__this, L_0, L_1, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, uint16_t ___code0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketException__ctor_m5AD69B237E0F6F844CB07B5BCDB8DB65A5DE1CD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * G_B1_1 = NULL;
	{
		String_t* L_0 = ___message1;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		uint16_t L_2 = ___code0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		String_t* L_3 = Ext_GetMessage_m7FC3F70F6C37A0B189EFC9C17D21424F97BC3C83(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		Exception_t * L_4 = ___innerException2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(G_B2_1, G_B2_0, L_4, /*hidden argument*/NULL);
		uint16_t L_5 = ___code0;
		__this->set__code_17(L_5);
		return;
	}
}
// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WebSocketException_get_Code_mAB9BBFCA1B6F9E6B047C7E3955FAD50DFFBFAC24 (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get__code_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
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
// System.Void WebSocketSharp.WebSocketFrame::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__cctor_m1D6ED66A879BC4743368E993E0B7045A12209123 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame__cctor_m1D6ED66A879BC4743368E993E0B7045A12209123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_0 = WebSocketFrame_CreatePingFrame_mD510E47C44BF643BA641FEFF3A9EE9EEB18E47EA((bool)0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0(L_0, /*hidden argument*/NULL);
		((WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var))->set_EmptyUnmaskPingBytes_10(L_1);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m20D23C875824503B9F8A98A7A79251698BC52C4D (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m8083AA5A5FC77198E6CA8B0F0C076A10428F215E (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, uint8_t ___opcode0, PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * ___payloadData1, bool ___mask2, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___opcode0;
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_1 = ___payloadData1;
		bool L_2 = ___mask2;
		WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9(__this, 1, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m88011038F6994C9A1B838ED8B2DE373F1AC37B79 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame__ctor_m88011038F6994C9A1B838ED8B2DE373F1AC37B79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___fin0;
		uint8_t L_1 = ___opcode1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data2;
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_3 = (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 *)il2cpp_codegen_object_new(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917_il2cpp_TypeInfo_var);
		PayloadData__ctor_mCDA2C1925A7185B0EFABCA2C0BD9CE73B2420835(L_3, L_2, /*hidden argument*/NULL);
		bool L_4 = ___compressed3;
		bool L_5 = ___mask4;
		WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * G_B2_0 = NULL;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * G_B1_0 = NULL;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * G_B4_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___fin0;
		__this->set__fin_1(L_0);
		uint8_t L_1 = ___opcode1;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		bool L_2 = WebSocketFrame_isData_m8131D756DEC4A1286956A8D22989DEECB8B570EB(L_1, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001c;
		}
	}
	{
		bool L_3 = ___compressed3;
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001f;
		}
	}

IL_001c:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0020:
	{
		G_B4_1->set__rsv1_7(G_B4_0);
		__this->set__rsv2_8(0);
		__this->set__rsv3_9(0);
		uint8_t L_4 = ___opcode1;
		__this->set__opcode_4(L_4);
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_5 = ___payloadData2;
		uint64_t L_6 = PayloadData_get_Length_m9153060D7C4F951A6DC43CFD8B2256CB80BA3490(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_7) >= ((uint64_t)(((int64_t)((int64_t)((int32_t)126)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		uint64_t L_9 = V_0;
		__this->set__payloadLength_6((uint8_t)(((int32_t)((uint8_t)L_9))));
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		__this->set__extPayloadLength_0(L_10);
		goto IL_00a7;
	}

IL_0066:
	{
		uint64_t L_11 = V_0;
		V_1 = (bool)((((int32_t)((!(((uint64_t)L_11) >= ((uint64_t)(((int64_t)((int64_t)((int32_t)65536)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0090;
		}
	}
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)126));
		uint64_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = Ext_InternalToByteArray_mE522C7B93CF3D84A6137CEC4ED07A9E031AB0D23((uint16_t)(((int32_t)((uint16_t)L_13))), 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_14);
		goto IL_00a7;
	}

IL_0090:
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)127));
		uint64_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = Ext_InternalToByteArray_m44EBC5374FD548E94049037C47B93943F53AC21E(L_15, 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_16);
	}

IL_00a7:
	{
		bool L_17 = ___mask4;
		V_1 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_00d3;
		}
	}
	{
		__this->set__mask_2(1);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = WebSocketFrame_createMaskingKey_m06DD4DA3B88F482945E4A1D0EA625F5425D07CAF(/*hidden argument*/NULL);
		__this->set__maskingKey_3(L_19);
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_20 = ___payloadData2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = __this->get__maskingKey_3();
		PayloadData_Mask_m4046EAAD5DF08EEB3F015AF6C8CE17B7E630EB49(L_20, L_21, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00d3:
	{
		__this->set__mask_2(0);
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		__this->set__maskingKey_3(L_22);
	}

IL_00e7:
	{
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_23 = ___payloadData2;
		__this->set__payloadData_5(L_23);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsClose_mA36CE2B928866779CCF0D4DF6EA26F6D25DEBCE7 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_mDDD456109A9A1C03FB883F5B5B1BEF7247D948C5 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__rsv1_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsContinuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsContinuation_m50FECABB399D6EC5A90C1EF7487F12756969F62B (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsData_m6C29374B7BD5C930A941DCF1C373980F34809064 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFinal_m3AE670DF346EC50435858F8D3F6A88628F5FEB61 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__fin_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragmented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragmented_m3F5EF830AF31BD10E6801D3542A2F9A06D967DE5 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__fin_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_m40E93E63A39C3A21C255E92F356B9DE845EE59ED (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPing_m08996DEF9EFD9F066E0587AD83C9C5673ACC9B21 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPong_m131ECD7CAECD07A2C3005699E26F1D3C0C761F8A (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_m1AE1DD5556BCE4700CA563BAC24B0D7BF564C872 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mFAE5E38740EBC28A1DBD9DFA7BA2E289A32723BE (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get__extPayloadLength_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get__maskingKey_3();
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_2 = __this->get__payloadData_5();
		uint64_t L_3 = PayloadData_get_Length_m9153060D7C4F951A6DC43CFD8B2256CB80BA3490(L_2, /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)2))), (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))))))), (int64_t)L_3));
		goto IL_0025;
	}

IL_0025:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::get_Opcode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Opcode_m4BD070933D4680051575C6AF2017F49F9A70E459 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::get_PayloadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * WebSocketFrame_get_PayloadData_m75A768D40D1EC592D9C3FA12D3ECC17215AF5F46 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * V_0 = NULL;
	{
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_0 = __this->get__payloadData_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocketFrame_createMaskingKey_m06DD4DA3B88F482945E4A1D0EA625F5425D07CAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_createMaskingKey_m06DD4DA3B88F482945E4A1D0EA625F5425D07CAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_1 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(7 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		V_2 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_2;
		return L_5;
	}
}
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 * V_8 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * V_9 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	String_t* G_B13_0 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B14_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B16_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B15_2 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * G_B17_3 = NULL;
	{
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_0 = (U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2__ctor_m872F64CA88EC767A3D8749838CF2275AF145495E(L_0, /*hidden argument*/NULL);
		V_13 = L_0;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_1 = ___frame0;
		uint64_t L_2 = WebSocketFrame_get_Length_mFAE5E38740EBC28A1DBD9DFA7BA2E289A32723BE(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint64_t L_3 = V_0;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_3/(uint64_t)(int64_t)(((int64_t)((int64_t)4)))));
		uint64_t L_4 = V_0;
		V_2 = (((int32_t)((int32_t)((int64_t)((uint64_t)(int64_t)L_4%(uint64_t)(int64_t)(((int64_t)((int64_t)4))))))));
		int64_t L_5 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_5) < ((int64_t)(((int64_t)((int64_t)((int32_t)10000))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_15;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		V_3 = 4;
		V_4 = _stringLiteralCD1ED4733D7BB5477C87446609439016E56FD587;
		goto IL_0086;
	}

IL_0039:
	{
		int64_t L_7 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)(((int64_t)((int64_t)((int32_t)65536))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_15;
		if (L_8)
		{
			goto IL_0058;
		}
	}
	{
		V_3 = 4;
		V_4 = _stringLiteral3F282E769BA000F89B8DD4F7C6373C66A3DC8F36;
		goto IL_0086;
	}

IL_0058:
	{
		int64_t L_9 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_9) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_15;
		if (L_10)
		{
			goto IL_007a;
		}
	}
	{
		V_3 = 8;
		V_4 = _stringLiteralE91EFF9F8FC19174100CE03249D0AEB790E73966;
		goto IL_0086;
	}

IL_007a:
	{
		V_3 = ((int32_t)16);
		V_4 = _stringLiteral608C7F6B4B5E1EEFED99E0FDE517F634E3F092E1;
	}

IL_0086:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF38D41D8DE2D3FF65156DAD581897672EC68D7C0, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		String_t* L_15 = V_5;
		String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralEB95870FD1218256C46F40EA915BDEE1DAF796C0, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_17 = V_13;
		String_t* L_18 = V_4;
		String_t* L_19 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4603324C627547F73F3EF6CB5D8DB0C15029EDEA, L_18, /*hidden argument*/NULL);
		L_17->set_lineFmt_0(L_19);
		String_t* L_20 = V_5;
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral95C989F08B108DC4A5C009B2631BBFC8FD637104, L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_22 = V_13;
		StringBuilder_t * L_23 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_23, ((int32_t)64), /*hidden argument*/NULL);
		L_22->set_output_1(L_23);
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_24 = V_13;
		Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 * L_25 = (Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 *)il2cpp_codegen_object_new(Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48_il2cpp_TypeInfo_var);
		Func_1__ctor_m877DCC51E7A8802D98131933DE487592010286C3(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_m954453216D91C8ED77B5CA8207413C6ACE7BBD51_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m877DCC51E7A8802D98131933DE487592010286C3_RuntimeMethod_var);
		V_8 = L_25;
		Func_1_t9B517FCF86D3BAA3C804B3907A46B03449AF2E48 * L_26 = V_8;
		Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * L_27 = Func_1_Invoke_mB18E5A71B877600B9FBD05176394ECCBB0AB9A6C(L_26, /*hidden argument*/Func_1_Invoke_mB18E5A71B877600B9FBD05176394ECCBB0AB9A6C_RuntimeMethod_var);
		V_9 = L_27;
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_28 = V_13;
		StringBuilder_t * L_29 = L_28->get_output_1();
		String_t* L_30 = V_6;
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_29, L_30, L_31, /*hidden argument*/NULL);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_32 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0(L_32, /*hidden argument*/NULL);
		V_10 = L_33;
		V_11 = (((int64_t)((int64_t)0)));
		goto IL_0208;
	}

IL_0112:
	{
		int64_t L_34 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)(((int64_t)((int64_t)4)))));
		int64_t L_35 = V_11;
		int64_t L_36 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_35) < ((int64_t)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_15;
		if (L_37)
		{
			goto IL_018c;
		}
	}
	{
		Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * L_38 = V_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = V_10;
		int64_t L_40 = V_12;
		if ((int64_t)(L_40) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_41 = (((intptr_t)L_40));
		uint8_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_43 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_42, 2, /*hidden argument*/NULL);
		String_t* L_44 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_43, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_10;
		int64_t L_46 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_46, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_47 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_46, (int64_t)(((int64_t)((int64_t)1)))))));
		uint8_t L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		String_t* L_49 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_48, 2, /*hidden argument*/NULL);
		String_t* L_50 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_49, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_51 = V_10;
		int64_t L_52 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_52, (int64_t)(((int64_t)((int64_t)2)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_53 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_52, (int64_t)(((int64_t)((int64_t)2)))))));
		uint8_t L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		String_t* L_55 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_54, 2, /*hidden argument*/NULL);
		String_t* L_56 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_55, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = V_10;
		int64_t L_58 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_58, (int64_t)(((int64_t)((int64_t)3)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_59 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_58, (int64_t)(((int64_t)((int64_t)3)))))));
		uint8_t L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		String_t* L_61 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_60, 2, /*hidden argument*/NULL);
		String_t* L_62 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_61, 8, ((int32_t)48), /*hidden argument*/NULL);
		Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1(L_38, L_44, L_50, L_56, L_62, /*hidden argument*/Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1_RuntimeMethod_var);
		goto IL_0201;
	}

IL_018c:
	{
		int32_t L_63 = V_2;
		V_15 = (bool)((((int32_t)((((int32_t)L_63) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_15;
		if (L_64)
		{
			goto IL_0200;
		}
	}
	{
		Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * L_65 = V_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = V_10;
		int64_t L_67 = V_12;
		if ((int64_t)(L_67) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_68 = (((intptr_t)L_67));
		uint8_t L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_70 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_69, 2, /*hidden argument*/NULL);
		String_t* L_71 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_70, 8, ((int32_t)48), /*hidden argument*/NULL);
		int32_t L_72 = V_2;
		G_B12_0 = L_71;
		G_B12_1 = L_65;
		if ((((int32_t)L_72) >= ((int32_t)2)))
		{
			G_B13_0 = L_71;
			G_B13_1 = L_65;
			goto IL_01ba;
		}
	}
	{
		String_t* L_73 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_73;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_01d1;
	}

IL_01ba:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_74 = V_10;
		int64_t L_75 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_75, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_76 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_75, (int64_t)(((int64_t)((int64_t)1)))))));
		uint8_t L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_78 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_77, 2, /*hidden argument*/NULL);
		String_t* L_79 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_78, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B14_0 = L_79;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_01d1:
	{
		int32_t L_80 = V_2;
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if ((((int32_t)L_80) == ((int32_t)3)))
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_01dd;
		}
	}
	{
		String_t* L_81 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B17_0 = L_81;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_01f4;
	}

IL_01dd:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_82 = V_10;
		int64_t L_83 = V_12;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_83, (int64_t)(((int64_t)((int64_t)2)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828_RuntimeMethod_var);
		intptr_t L_84 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_83, (int64_t)(((int64_t)((int64_t)2)))))));
		uint8_t L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_86 = Convert_ToString_mCCE77A65E24E13C52FB65D64213F6B0704583EF5(L_85, 2, /*hidden argument*/NULL);
		String_t* L_87 = String_PadLeft_m3C4E771CF30A3F43E756D47D7896A19E66C948BF(L_86, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B17_0 = L_87;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_01f4:
	{
		String_t* L_88 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1(G_B17_3, G_B17_2, G_B17_1, G_B17_0, L_88, /*hidden argument*/Action_4_Invoke_mC21558F33E02C9302A83C2DADAD8CB175E0322B1_RuntimeMethod_var);
	}

IL_0200:
	{
	}

IL_0201:
	{
		int64_t L_89 = V_11;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0208:
	{
		int64_t L_90 = V_11;
		int64_t L_91 = V_1;
		V_15 = (bool)((((int32_t)((((int64_t)L_90) > ((int64_t)L_91))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_92 = V_15;
		if (L_92)
		{
			goto IL_0112;
		}
	}
	{
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_93 = V_13;
		StringBuilder_t * L_94 = L_93->get_output_1();
		String_t* L_95 = V_7;
		String_t* L_96 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_94, L_95, L_96, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_97 = V_13;
		StringBuilder_t * L_98 = L_97->get_output_1();
		String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		V_14 = L_99;
		goto IL_023d;
	}

IL_023d:
	{
		String_t* L_100 = V_14;
		return L_100;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::isControl(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_isControl_m27CDD2DAF910E321006DE1AF9DD39F566C5AB8E4 (uint8_t ___opcode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		uint8_t L_0 = ___opcode0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_1 = ___opcode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = ___opcode0;
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B4_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::isData(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_isData_m8131D756DEC4A1286956A8D22989DEECB8B570EB (uint8_t ___opcode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ___opcode0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		uint8_t L_1 = ___opcode0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m4FD24047B8C880095E8DC539E75D872BFB59CA14 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_print_m4FD24047B8C880095E8DC539E75D872BFB59CA14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	uint64_t V_8 = 0;
	uint16_t V_9 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_10 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B21_0 = NULL;
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_0 = ___frame0;
		uint8_t L_1 = L_0->get__opcode_4();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Opcode_tAC8CDD23A39640D21BBA13BE84CA7F6F9440A882_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_0 = L_4;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_5 = ___frame0;
		uint8_t L_6 = L_5->get__payloadLength_6();
		V_1 = L_6;
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)126))))
		{
			goto IL_0052;
		}
	}
	{
		uint8_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)126))))
		{
			goto IL_003a;
		}
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_9 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		uint64_t L_11 = Ext_ToUInt64_mDF5B949ADF1AEF3461CB702D36E434CDB760A458(L_10, 1, /*hidden argument*/NULL);
		V_8 = L_11;
		String_t* L_12 = UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672((uint64_t*)(&V_8), /*hidden argument*/NULL);
		G_B4_0 = L_12;
		goto IL_004f;
	}

IL_003a:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_13 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = L_13->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		uint16_t L_15 = Ext_ToUInt16_m03CA1201AD33991C68268457CD2D778D057BE623(L_14, 1, /*hidden argument*/NULL);
		V_9 = L_15;
		String_t* L_16 = UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2((uint16_t*)(&V_9), /*hidden argument*/NULL);
		G_B4_0 = L_16;
	}

IL_004f:
	{
		G_B6_0 = G_B4_0;
		goto IL_0057;
	}

IL_0052:
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B6_0 = L_17;
	}

IL_0057:
	{
		V_2 = G_B6_0;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_18 = ___frame0;
		bool L_19 = WebSocketFrame_get_IsMasked_m40E93E63A39C3A21C255E92F356B9DE845EE59ED(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B9_0 = L_21;
		goto IL_0075;
	}

IL_006a:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_22 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = L_22->get__maskingKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		String_t* L_24 = BitConverter_ToString_m6201360C9B19FD17437AA1C88AF1743DCF3442E3(L_23, /*hidden argument*/NULL);
		G_B9_0 = L_24;
	}

IL_0075:
	{
		V_4 = G_B9_0;
		uint8_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_00d3;
		}
	}
	{
		uint8_t L_26 = V_1;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)125))))
		{
			goto IL_00c0;
		}
	}
	{
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_28 = ___frame0;
		bool L_29 = WebSocketFrame_get_IsFragmented_m3F5EF830AF31BD10E6801D3542A2F9A06D967DE5(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009b;
		}
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_30 = ___frame0;
		bool L_31 = WebSocketFrame_get_IsCompressed_mDDD456109A9A1C03FB883F5B5B1BEF7247D948C5(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_009b;
		}
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_32 = ___frame0;
		bool L_33 = WebSocketFrame_get_IsText_m1AE1DD5556BCE4700CA563BAC24B0D7BF564C872(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00a8;
		}
	}

IL_009b:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_34 = ___frame0;
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_35 = L_34->get__payloadData_5();
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		G_B17_0 = L_36;
		goto IL_00bd;
	}

IL_00a8:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_37 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_38 = ___frame0;
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_39 = L_38->get__payloadData_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = PayloadData_get_ApplicationData_mA8474FFA424807B6416F6901DC91E75D75B54F2E(L_39, /*hidden argument*/NULL);
		String_t* L_41 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_37, L_40);
		G_B17_0 = L_41;
	}

IL_00bd:
	{
		G_B19_0 = G_B17_0;
		goto IL_00d0;
	}

IL_00c0:
	{
		String_t* L_42 = V_0;
		String_t* L_43 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_42, /*hidden argument*/NULL);
		String_t* L_44 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8DC9C2BAF81A18DB428BC11678C7491FDC316E8E, L_43, /*hidden argument*/NULL);
		G_B19_0 = L_44;
	}

IL_00d0:
	{
		G_B21_0 = G_B19_0;
		goto IL_00d8;
	}

IL_00d3:
	{
		String_t* L_45 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B21_0 = L_45;
	}

IL_00d8:
	{
		V_5 = G_B21_0;
		V_6 = _stringLiteral75CA7244132E407E1141FE2C56AE8CD535C360E2;
		String_t* L_46 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_10 = L_47;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = V_10;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_49 = ___frame0;
		uint8_t L_50 = L_49->get__fin_1();
		uint8_t L_51 = L_50;
		RuntimeObject * L_52 = Box(Fin_t2541FD0275B77DA2562251DBE9A1AAD83A0C93B4_il2cpp_TypeInfo_var, &L_51);
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = V_10;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_54 = ___frame0;
		uint8_t L_55 = L_54->get__rsv1_7();
		uint8_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959_il2cpp_TypeInfo_var, &L_56);
		ArrayElementTypeCheck (L_53, L_57);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_57);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_58 = V_10;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_59 = ___frame0;
		uint8_t L_60 = L_59->get__rsv2_8();
		uint8_t L_61 = L_60;
		RuntimeObject * L_62 = Box(Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959_il2cpp_TypeInfo_var, &L_61);
		ArrayElementTypeCheck (L_58, L_62);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_62);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = V_10;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_64 = ___frame0;
		uint8_t L_65 = L_64->get__rsv3_9();
		uint8_t L_66 = L_65;
		RuntimeObject * L_67 = Box(Rsv_t8C05561636D9569B92DA584EE8FC7AF632BD2959_il2cpp_TypeInfo_var, &L_66);
		ArrayElementTypeCheck (L_63, L_67);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_67);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_68 = V_10;
		String_t* L_69 = V_0;
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_69);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = V_10;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_71 = ___frame0;
		uint8_t L_72 = L_71->get__mask_2();
		uint8_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Mask_tE058AA5FBD9818EF5F4A252D5521A37A62487D7B_il2cpp_TypeInfo_var, &L_73);
		ArrayElementTypeCheck (L_70, L_74);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_74);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = V_10;
		uint8_t L_76 = V_1;
		uint8_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_77);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_78);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_79 = V_10;
		String_t* L_80 = V_2;
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_80);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_81 = V_10;
		String_t* L_82 = V_4;
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_82);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_83 = V_10;
		String_t* L_84 = V_5;
		ArrayElementTypeCheck (L_83, L_84);
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_84);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_85 = V_10;
		String_t* L_86 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(L_46, L_85, /*hidden argument*/NULL);
		V_7 = L_86;
		goto IL_0164;
	}

IL_0164:
	{
		String_t* L_87 = V_7;
		return L_87;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::read(System.Byte[],System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___header0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream1, bool ___unmask2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0;
	uint8_t V_5 = 0;
	uint8_t V_6 = 0x0;
	String_t* V_7 = NULL;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	bool V_11 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_12 = NULL;
	uint64_t V_13 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_14 = NULL;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_15 = NULL;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	String_t* G_B23_0 = NULL;
	String_t* G_B25_0 = NULL;
	String_t* G_B27_0 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B38_0 = NULL;
	int32_t G_B41_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B46_0 = NULL;
	int32_t G_B49_0 = 0;
	uint64_t G_B55_0 = 0;
	uint64_t G_B57_0 = 0;
	int32_t G_B61_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B66_0 = NULL;
	int32_t G_B73_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___header0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___header0;
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)64)))) == ((int32_t)((int32_t)64))))
		{
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 1;
	}

IL_0025:
	{
		V_1 = G_B6_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___header0;
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)32)))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0034;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B9_0 = 1;
	}

IL_0035:
	{
		V_2 = G_B9_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___header0;
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)16)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0044;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B12_0 = 1;
	}

IL_0045:
	{
		V_3 = G_B12_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___header0;
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)15))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___header0;
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		G_B15_0 = 0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B15_0 = 1;
	}

IL_0064:
	{
		V_5 = G_B15_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___header0;
		int32_t L_19 = 1;
		uint8_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)127))))));
		uint8_t L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		bool L_22 = WebSocketFrame_isControl_m27CDD2DAF910E321006DE1AF9DD39F566C5AB8E4(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		uint8_t L_23 = V_6;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)125))))
		{
			goto IL_00ab;
		}
	}

IL_007f:
	{
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		bool L_25 = WebSocketFrame_isControl_m27CDD2DAF910E321006DE1AF9DD39F566C5AB8E4(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		uint8_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_00a3;
		}
	}

IL_008b:
	{
		uint8_t L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		bool L_28 = WebSocketFrame_isData_m8131D756DEC4A1286956A8D22989DEECB8B570EB(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0098;
		}
	}
	{
		uint8_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_009b;
		}
	}

IL_0098:
	{
		G_B23_0 = ((String_t*)(NULL));
		goto IL_00a0;
	}

IL_009b:
	{
		G_B23_0 = _stringLiteral023A6088D48BBEE10985A9F514509CA3F36D7F84;
	}

IL_00a0:
	{
		G_B25_0 = G_B23_0;
		goto IL_00a8;
	}

IL_00a3:
	{
		G_B25_0 = _stringLiteral0152B5080730778D93E2F304EA2EF746F8856462;
	}

IL_00a8:
	{
		G_B27_0 = G_B25_0;
		goto IL_00b0;
	}

IL_00ab:
	{
		G_B27_0 = _stringLiteral52D06DBD7F963FDA96EA0811E579EE41E0B92FF0;
	}

IL_00b0:
	{
		V_7 = G_B27_0;
		String_t* L_30 = V_7;
		V_16 = (bool)((((RuntimeObject*)(String_t*)L_30) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_31 = V_16;
		if (L_31)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_32 = V_7;
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_33 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m499D533B04AB36E8C07DC934A2468B5D2E2DD5C7(L_33, ((int32_t)1002), L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var);
	}

IL_00cb:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_34 = (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF *)il2cpp_codegen_object_new(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_m20D23C875824503B9F8A98A7A79251698BC52C4D(L_34, /*hidden argument*/NULL);
		V_8 = L_34;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_35 = V_8;
		uint8_t L_36 = V_0;
		L_35->set__fin_1(L_36);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_37 = V_8;
		uint8_t L_38 = V_1;
		L_37->set__rsv1_7(L_38);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_39 = V_8;
		uint8_t L_40 = V_2;
		L_39->set__rsv2_8(L_40);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_41 = V_8;
		uint8_t L_42 = V_3;
		L_41->set__rsv3_9(L_42);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_43 = V_8;
		uint8_t L_44 = V_4;
		L_43->set__opcode_4(L_44);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_45 = V_8;
		uint8_t L_46 = V_5;
		L_45->set__mask_2(L_46);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_47 = V_8;
		uint8_t L_48 = V_6;
		L_47->set__payloadLength_6(L_48);
		uint8_t L_49 = V_6;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)126))))
		{
			goto IL_0120;
		}
	}
	{
		uint8_t L_50 = V_6;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)126))))
		{
			goto IL_011c;
		}
	}
	{
		G_B33_0 = 8;
		goto IL_011d;
	}

IL_011c:
	{
		G_B33_0 = 2;
	}

IL_011d:
	{
		G_B35_0 = G_B33_0;
		goto IL_0121;
	}

IL_0120:
	{
		G_B35_0 = 0;
	}

IL_0121:
	{
		V_9 = G_B35_0;
		int32_t L_51 = V_9;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0130;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		G_B38_0 = L_52;
		goto IL_0138;
	}

IL_0130:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_53 = ___stream1;
		int32_t L_54 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = Ext_ReadBytes_m76151E26A138BE27F93460EE459CAAE3A9A1546D(L_53, L_54, /*hidden argument*/NULL);
		G_B38_0 = L_55;
	}

IL_0138:
	{
		V_10 = G_B38_0;
		int32_t L_56 = V_9;
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_014a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = V_10;
		int32_t L_58 = V_9;
		G_B41_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))))) == ((int32_t)L_58))? 1 : 0);
		goto IL_014b;
	}

IL_014a:
	{
		G_B41_0 = 1;
	}

IL_014b:
	{
		V_16 = (bool)G_B41_0;
		bool L_59 = V_16;
		if (L_59)
		{
			goto IL_015d;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_60 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA(L_60, _stringLiteral8DDBB6A894EC08E1303605FED4C40B991BBF6CF3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var);
	}

IL_015d:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_61 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_10;
		L_61->set__extPayloadLength_0(L_62);
		uint8_t L_63 = V_5;
		V_11 = (bool)((((int32_t)L_63) == ((int32_t)1))? 1 : 0);
		bool L_64 = V_11;
		if (L_64)
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		G_B46_0 = L_65;
		goto IL_017f;
	}

IL_0178:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_66 = ___stream1;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = Ext_ReadBytes_m76151E26A138BE27F93460EE459CAAE3A9A1546D(L_66, 4, /*hidden argument*/NULL);
		G_B46_0 = L_67;
	}

IL_017f:
	{
		V_12 = G_B46_0;
		bool L_68 = V_11;
		if (!L_68)
		{
			goto IL_018f;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_69 = V_12;
		G_B49_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))) == ((int32_t)4))? 1 : 0);
		goto IL_0190;
	}

IL_018f:
	{
		G_B49_0 = 1;
	}

IL_0190:
	{
		V_16 = (bool)G_B49_0;
		bool L_70 = V_16;
		if (L_70)
		{
			goto IL_01a2;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_71 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA(L_71, _stringLiteralE9A05FF89C20C2B82C80CB383CF91E9CFA9FFB9E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var);
	}

IL_01a2:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_72 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_73 = V_12;
		L_72->set__maskingKey_3(L_73);
		uint8_t L_74 = V_6;
		if ((((int32_t)L_74) < ((int32_t)((int32_t)126))))
		{
			goto IL_01cd;
		}
	}
	{
		uint8_t L_75 = V_6;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)126))))
		{
			goto IL_01c1;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_76 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		uint64_t L_77 = Ext_ToUInt64_mDF5B949ADF1AEF3461CB702D36E434CDB760A458(L_76, 1, /*hidden argument*/NULL);
		G_B55_0 = L_77;
		goto IL_01ca;
	}

IL_01c1:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_78 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		uint16_t L_79 = Ext_ToUInt16_m03CA1201AD33991C68268457CD2D778D057BE623(L_78, 1, /*hidden argument*/NULL);
		G_B55_0 = ((uint64_t)((((int64_t)((uint64_t)L_79)))));
	}

IL_01ca:
	{
		G_B57_0 = G_B55_0;
		goto IL_01d0;
	}

IL_01cd:
	{
		uint8_t L_80 = V_6;
		G_B57_0 = ((uint64_t)((((int64_t)((uint64_t)L_80)))));
	}

IL_01d0:
	{
		V_13 = G_B57_0;
		V_14 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		uint64_t L_81 = V_13;
		V_16 = (bool)((((int32_t)((!(((uint64_t)L_81) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_16;
		if (L_82)
		{
			goto IL_0256;
		}
	}
	{
		uint8_t L_83 = V_6;
		if ((((int32_t)L_83) <= ((int32_t)((int32_t)126))))
		{
			goto IL_01fe;
		}
	}
	{
		uint64_t L_84 = V_13;
		G_B61_0 = ((((int32_t)((!(((uint64_t)L_84) <= ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B61_0 = 1;
	}

IL_01ff:
	{
		V_16 = (bool)G_B61_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_0216;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_86 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m499D533B04AB36E8C07DC934A2468B5D2E2DD5C7(L_86, ((int32_t)1009), _stringLiteral7FEB6F1FCBDF2606186EF8302489D481582DFB22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var);
	}

IL_0216:
	{
		uint8_t L_87 = V_6;
		if ((((int32_t)L_87) > ((int32_t)((int32_t)126))))
		{
			goto IL_0227;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_88 = ___stream1;
		uint64_t L_89 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_90 = Ext_ReadBytes_m76151E26A138BE27F93460EE459CAAE3A9A1546D(L_88, (((int32_t)((int32_t)L_89))), /*hidden argument*/NULL);
		G_B66_0 = L_90;
		goto IL_0234;
	}

IL_0227:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_91 = ___stream1;
		uint64_t L_92 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = Ext_ReadBytes_mCBFE1D24C884E2B1ECD68AF77F72C70CAE1FB45A(L_91, L_92, ((int32_t)1024), /*hidden argument*/NULL);
		G_B66_0 = L_93;
	}

IL_0234:
	{
		V_14 = G_B66_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_14;
		int64_t L_95 = Array_get_LongLength_m9C506B10DB4FB16C0A2F5059C5C08F8D3B0C2D9A((RuntimeArray *)(RuntimeArray *)L_94, /*hidden argument*/NULL);
		uint64_t L_96 = V_13;
		V_16 = (bool)((((int64_t)L_95) == ((int64_t)L_96))? 1 : 0);
		bool L_97 = V_16;
		if (L_97)
		{
			goto IL_0253;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_98 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA(L_98, _stringLiteral4246A15CCE9A4756EBDCB35B1E19B61080DA2802, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686_RuntimeMethod_var);
	}

IL_0253:
	{
		goto IL_025f;
	}

IL_0256:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_99 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		V_14 = L_99;
	}

IL_025f:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_100 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_101 = V_14;
		bool L_102 = V_11;
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_103 = (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 *)il2cpp_codegen_object_new(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917_il2cpp_TypeInfo_var);
		PayloadData__ctor_mF08B340C6CECDFF0BC78005696250EE751201214(L_103, L_101, L_102, /*hidden argument*/NULL);
		L_100->set__payloadData_5(L_103);
		bool L_104 = ___unmask2;
		if (!L_104)
		{
			goto IL_0279;
		}
	}
	{
		bool L_105 = V_11;
		G_B73_0 = ((((int32_t)L_105) == ((int32_t)0))? 1 : 0);
		goto IL_027a;
	}

IL_0279:
	{
		G_B73_0 = 1;
	}

IL_027a:
	{
		V_16 = (bool)G_B73_0;
		bool L_106 = V_16;
		if (L_106)
		{
			goto IL_0289;
		}
	}
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_107 = V_8;
		WebSocketFrame_Unmask_mD5C8F693EBDD52C3100FB4659BCE1E333C1CD656(L_107, /*hidden argument*/NULL);
	}

IL_0289:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_108 = V_8;
		V_15 = L_108;
		goto IL_028f;
	}

IL_028f:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_109 = V_15;
		return L_109;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreateCloseFrame(WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_CreateCloseFrame_mE45C7489DFB223EC648040AC94B4C1CAC1B4D779 (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * ___payloadData0, bool ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_CreateCloseFrame_mE45C7489DFB223EC648040AC94B4C1CAC1B4D779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_0 = NULL;
	{
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_0 = ___payloadData0;
		bool L_1 = ___mask1;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_2 = (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF *)il2cpp_codegen_object_new(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9(L_2, 1, 8, L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_CreatePingFrame_mD510E47C44BF643BA641FEFF3A9EE9EEB18E47EA (bool ___mask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_CreatePingFrame_mD510E47C44BF643BA641FEFF3A9EE9EEB18E47EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_0 = NULL;
	{
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_0 = (PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 *)il2cpp_codegen_object_new(PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917_il2cpp_TypeInfo_var);
		PayloadData__ctor_mAC6C1F50CD9697EE23D00349293EF5C45736A5E5(L_0, /*hidden argument*/NULL);
		bool L_1 = ___mask0;
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_2 = (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF *)il2cpp_codegen_object_new(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mC0BA7A0E369AB80076844CA32C7014BB5221C3D9(L_2, 1, ((int32_t)9), L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::Read(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * WebSocketFrame_Read_mED780860471B7C851DC8FC982839AA8F38B7A4A8 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, bool ___unmask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_Read_mED780860471B7C851DC8FC982839AA8F38B7A4A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_1 = NULL;
	bool V_2 = false;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = Ext_ReadBytes_m76151E26A138BE27F93460EE459CAAE3A9A1546D(L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_0;
		V_2 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((int32_t)2))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_4 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA(L_4, _stringLiteral46D866D0FAC8CF61F8B047DFE83C1515FCC94083, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, WebSocketFrame_Read_mED780860471B7C851DC8FC982839AA8F38B7A4A8_RuntimeMethod_var);
	}

IL_001e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___stream0;
		bool L_7 = ___unmask1;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_8 = WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_9 = V_1;
		return L_9;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::ReadAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadAsync_mEDF2B3A9D1FF8912BF8B59BE0BB383EC8128EC09 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, bool ___unmask1, Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * ___completed2, Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_ReadAsync_mEDF2B3A9D1FF8912BF8B59BE0BB383EC8128EC09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_0 = (U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7__ctor_mBC2A4A13AF8A8921EFBE6FF052DA4EF205EB97E7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_1 = V_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		L_1->set_stream_0(L_2);
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_3 = V_0;
		bool L_4 = ___unmask1;
		L_3->set_unmask_1(L_4);
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_5 = V_0;
		Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * L_6 = ___completed2;
		L_5->set_completed_2(L_6);
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_7 = V_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = L_7->get_stream_0();
		U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * L_9 = V_0;
		Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398 * L_10 = (Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398 *)il2cpp_codegen_object_new(Action_1_t67D6E8441D0DE589716B25B9D8F0D4412B593398_il2cpp_TypeInfo_var);
		Action_1__ctor_m5B9E5F7AB46FE321B40FC4464D07EEB20A38656D(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5B9E5F7AB46FE321B40FC4464D07EEB20A38656D_RuntimeMethod_var);
		Action_1_t18E730906A964925D355310DF8D8719A7B2CB3FC * L_11 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m2CBD3AA203DCBD20953707C3C9CBCFD2B38B2B9B(L_8, 2, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mD5C8F693EBDD52C3100FB4659BCE1E333C1CD656 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_Unmask_mD5C8F693EBDD52C3100FB4659BCE1E333C1CD656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0037;
	}

IL_0013:
	{
		__this->set__mask_2(0);
		PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_2 = __this->get__payloadData_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get__maskingKey_3();
		PayloadData_Mask_m4046EAAD5DF08EEB3F015AF6C8CE17B7E630EB49(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ((Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_StaticFields*)il2cpp_codegen_static_fields_for(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var))->get_EmptyByteArray_1();
		__this->set__maskingKey_3(L_4);
	}

IL_0037:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m1AC3833D404B7A6E124E75618BE4B7A595124AD4 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_GetEnumerator_m1AC3833D404B7A6E124E75618BE4B7A595124AD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * L_0 = (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__9__ctor_m10D39EAD57497D924BD9D4A3212E19A8BF9B3233(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * L_1 = V_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.String WebSocketSharp.WebSocketFrame::PrintToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_PrintToString_m5FF1D2C2AF475DEAFB449435392047DFA36E1120 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, bool ___dumped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_PrintToString_m5FF1D2C2AF475DEAFB449435392047DFA36E1120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___dumped0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		String_t* L_1 = WebSocketFrame_print_m4FD24047B8C880095E8DC539E75D872BFB59CA14(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		String_t* L_2 = WebSocketFrame_dump_mE04AD4B1E056000C574A5B3552BB1C96F72EA828(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B4_1 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_1 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B5_2 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B5_3 = NULL;
	{
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			uint8_t L_1 = __this->get__fin_1();
			V_1 = L_1;
			int32_t L_2 = V_1;
			uint8_t L_3 = __this->get__rsv1_7();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)1)), (int32_t)L_3));
			int32_t L_4 = V_1;
			uint8_t L_5 = __this->get__rsv2_8();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_4<<(int32_t)1)), (int32_t)L_5));
			int32_t L_6 = V_1;
			uint8_t L_7 = __this->get__rsv3_9();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_6<<(int32_t)1)), (int32_t)L_7));
			int32_t L_8 = V_1;
			uint8_t L_9 = __this->get__opcode_4();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_8<<(int32_t)4)), (int32_t)L_9));
			int32_t L_10 = V_1;
			uint8_t L_11 = __this->get__mask_2();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_10<<(int32_t)1)), (int32_t)L_11));
			int32_t L_12 = V_1;
			uint8_t L_13 = __this->get__payloadLength_6();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_12<<(int32_t)7)), (int32_t)L_13));
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_14 = V_0;
			int32_t L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = Ext_InternalToByteArray_mE522C7B93CF3D84A6137CEC4ED07A9E031AB0D23((uint16_t)(((int32_t)((uint16_t)L_15))), 1, /*hidden argument*/NULL);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_16, 0, 2);
			uint8_t L_17 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)((int32_t)125)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_4;
			if (L_18)
			{
				goto IL_0092;
			}
		}

IL_0075:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_19 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = __this->get__extPayloadLength_0();
			uint8_t L_21 = __this->get__payloadLength_6();
			G_B3_0 = 0;
			G_B3_1 = L_20;
			G_B3_2 = L_19;
			if ((((int32_t)L_21) == ((int32_t)((int32_t)126))))
			{
				G_B4_0 = 0;
				G_B4_1 = L_20;
				G_B4_2 = L_19;
				goto IL_008a;
			}
		}

IL_0087:
		{
			G_B5_0 = 8;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			goto IL_008b;
		}

IL_008a:
		{
			G_B5_0 = 2;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
		}

IL_008b:
		{
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, G_B5_3, G_B5_2, G_B5_1, G_B5_0);
		}

IL_0092:
		{
			uint8_t L_22 = __this->get__mask_2();
			V_4 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_4;
			if (L_23)
			{
				goto IL_00b3;
			}
		}

IL_00a4:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_24 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = __this->get__maskingKey_3();
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, 4);
		}

IL_00b3:
		{
			uint8_t L_26 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_27 = V_4;
			if (L_27)
			{
				goto IL_00fc;
			}
		}

IL_00c5:
		{
			PayloadData_t1ED2A240044587622A6FA46AA08FBCF61A480917 * L_28 = __this->get__payloadData_5();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = PayloadData_ToByteArray_m0E1115F31604FDADCF1DA0C24E8A2789219D9DD6(L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			uint8_t L_30 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_4;
			if (L_31)
			{
				goto IL_00f3;
			}
		}

IL_00e5:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_32 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_2;
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))));
			goto IL_00fb;
		}

IL_00f3:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_35 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_t58E0E149CE04593F2406A32E907FA2F0A65171AE_il2cpp_TypeInfo_var);
			Ext_WriteBytes_m43636A3F67781B3BC98905310316F5A3A750A852(L_35, L_36, /*hidden argument*/NULL);
		}

IL_00fb:
		{
		}

IL_00fc:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_37 = V_0;
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_37);
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_38 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_38);
			V_3 = L_39;
			IL2CPP_LEAVE(0x11E, FINALLY_010c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010c;
	}

FINALLY_010c:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_40 = V_0;
			V_4 = (bool)((((RuntimeObject*)(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)L_40) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_41 = V_4;
			if (L_41)
			{
				goto IL_011d;
			}
		}

IL_0116:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_42 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_42);
		}

IL_011d:
		{
			IL2CPP_END_FINALLY(268)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(268)
	{
		IL2CPP_JUMP_TBL(0x11E, IL_011e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = V_3;
		return L_43;
	}
}
// System.String WebSocketSharp.WebSocketFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_ToString_m5E522D58C1B2ABF3278883F56F6D3C5B1676EA6E (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocketFrame_ToString_m5E522D58C1B2ABF3278883F56F6D3C5B1676EA6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		String_t* L_1 = BitConverter_ToString_m6201360C9B19FD17437AA1C88AF1743DCF3442E3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator WebSocketSharp.WebSocketFrame::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_System_Collections_IEnumerable_GetEnumerator_m1AF28A60835D27EE7B850538B520DCC9E967A4F8 (WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = WebSocketFrame_GetEnumerator_m1AC3833D404B7A6E124E75618BE4B7A595124AD4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
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
// System.Void WebSocketSharp.WebSocketFrame_<>c__DisplayClass2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2__ctor_m872F64CA88EC767A3D8749838CF2275AF145495E (U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`4<System.String,System.String,System.String,System.String> WebSocketSharp.WebSocketFrame_<>c__DisplayClass2::<dump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_m954453216D91C8ED77B5CA8207413C6ACE7BBD51 (U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_U3CdumpU3Eb__0_m954453216D91C8ED77B5CA8207413C6ACE7BBD51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * V_0 = NULL;
	Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * L_0 = (U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4__ctor_m86C2B2DDE0DE3EB2B3D03EBA6DED470E88C9FBA1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * L_1 = V_0;
		L_1->set_CSU24U3CU3E8__locals3_0(__this);
		U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * L_2 = V_0;
		L_2->set_lineCnt_1((((int64_t)((int64_t)0))));
		U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * L_3 = V_0;
		Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * L_4 = (Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 *)il2cpp_codegen_object_new(Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1_il2cpp_TypeInfo_var);
		Action_4__ctor_m4A53F8628C5AFD979FAE2D2270D84A38DAA1F0CF(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_mD18450ED02836803EBCE41964F4A24F9ED584D3F_RuntimeMethod_var), /*hidden argument*/Action_4__ctor_m4A53F8628C5AFD979FAE2D2270D84A38DAA1F0CF_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		Action_4_tCCBB71FA36004EE2B32B38B0EDA88413DA5FE0F1 * L_5 = V_1;
		return L_5;
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
// System.Void WebSocketSharp.WebSocketFrame_<>c__DisplayClass2_<>c__DisplayClass4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4__ctor_m86C2B2DDE0DE3EB2B3D03EBA6DED470E88C9FBA1 (U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<>c__DisplayClass2_<>c__DisplayClass4::<dump>b__1(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_mD18450ED02836803EBCE41964F4A24F9ED584D3F (U3CU3Ec__DisplayClass4_tA55B6E551E9C8A63A4E4F59E3EBBE0D1D2B66774 * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_U3CdumpU3Eb__1_mD18450ED02836803EBCE41964F4A24F9ED584D3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int64_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_0 = __this->get_CSU24U3CU3E8__locals3_0();
		StringBuilder_t * L_1 = L_0->get_output_1();
		U3CU3Ec__DisplayClass2_t1E5A2BBDBD8CCCC728A4FA7CC48D388073DCE4DD * L_2 = __this->get_CSU24U3CU3E8__locals3_0();
		String_t* L_3 = L_2->get_lineFmt_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		int64_t L_6 = __this->get_lineCnt_1();
		int64_t L_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)1)))));
		V_1 = L_7;
		__this->set_lineCnt_1(L_7);
		int64_t L_8 = V_1;
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		String_t* L_12 = ___arg10;
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_0;
		String_t* L_14 = ___arg21;
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_0;
		String_t* L_16 = ___arg32;
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
		String_t* L_18 = ___arg43;
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = V_0;
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_1, L_3, L_19, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocketFrame_<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_mBC2A4A13AF8A8921EFBE6FF052DA4EF205EB97E7 (U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<>c__DisplayClass7::<ReadAsync>b__6(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55 (U3CU3Ec__DisplayClass7_t20B4B83FB138791B166BAEF1FDC81154142036EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * V_0 = NULL;
	bool V_1 = false;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___header0;
		V_1 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 * L_2 = (WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542 *)il2cpp_codegen_object_new(WebSocketException_t70A4FD724128CEBDE228D5C751C697694EA92542_il2cpp_TypeInfo_var);
		WebSocketException__ctor_m02F011C49E24F575CEB1B34A765B5E26EDF5DEAA(L_2, _stringLiteral46D866D0FAC8CF61F8B047DFE83C1515FCC94083, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, U3CU3Ec__DisplayClass7_U3CReadAsyncU3Eb__6_mFAA89F0C83204E00E2F742014244D8C243547D55_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___header0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = __this->get_stream_0();
		bool L_5 = __this->get_unmask_1();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF_il2cpp_TypeInfo_var);
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_6 = WebSocketFrame_read_m667BA086550811FFC9F35C18468728BB76880686(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * L_7 = __this->get_completed_2();
		V_1 = (bool)((((RuntimeObject*)(Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		Action_1_t402E84703E7ED34C45F6155A9A01D4F14AC86118 * L_9 = __this->get_completed_2();
		WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_10 = V_0;
		Action_1_Invoke_m50A05582FAA01E6D0FC24B26B30E861174A0A6D1(L_9, L_10, /*hidden argument*/Action_1_Invoke_m50A05582FAA01E6D0FC24B26B30E861174A0A6D1_RuntimeMethod_var);
	}

IL_0043:
	{
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
// System.Boolean WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__9_MoveNext_mB1D947410475AD2CA38432A502277BD1556584D6 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_1();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001d;
				}
				case 1:
				{
					goto IL_001f;
				}
				case 2:
				{
					goto IL_001b;
				}
			}
		}

IL_0019:
		{
			goto IL_001f;
		}

IL_001b:
		{
			goto IL_0078;
		}

IL_001d:
		{
			goto IL_0024;
		}

IL_001f:
		{
			goto IL_00a9;
		}

IL_0024:
		{
			__this->set_U3CU3E1__state_1((-1));
			__this->set_U3CU3E1__state_1(1);
			WebSocketFrame_tC76D0CA2400D88705822C3B39648D90DCAD56ABF * L_2 = __this->get_U3CU3E4__this_2();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = WebSocketFrame_ToByteArray_mF8EE95D8C3C110F50ACFFCAB8D93BABCA78203F0(L_2, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrapc_4(L_3);
			__this->set_U3CU3E7__wrapd_5(0);
			goto IL_008d;
		}

IL_004e:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_U3CU3E7__wrapc_4();
			int32_t L_5 = __this->get_U3CU3E7__wrapd_5();
			int32_t L_6 = L_5;
			uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
			__this->set_U3CbU3E5__a_3(L_7);
			uint8_t L_8 = __this->get_U3CbU3E5__a_3();
			__this->set_U3CU3E2__current_0(L_8);
			__this->set_U3CU3E1__state_1(2);
			V_0 = (bool)1;
			goto IL_00b5;
		}

IL_0078:
		{
			__this->set_U3CU3E1__state_1(1);
			int32_t L_9 = __this->get_U3CU3E7__wrapd_5();
			__this->set_U3CU3E7__wrapd_5(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		}

IL_008d:
		{
			int32_t L_10 = __this->get_U3CU3E7__wrapd_5();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_U3CU3E7__wrapc_4();
			V_2 = (bool)((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))? 1 : 0);
			bool L_12 = V_2;
			if (L_12)
			{
				goto IL_004e;
			}
		}

IL_00a1:
		{
			U3CGetEnumeratorU3Ed__9_U3CU3Em__Finallyb_m35DD50E30DC098CD05646FD1F4797A7CFABFD930(__this, /*hidden argument*/NULL);
		}

IL_00a9:
		{
			V_0 = (bool)0;
			goto IL_00b5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ad;
	}

FAULT_00ad:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__9_System_IDisposable_Dispose_m30D78190926180920DD02BFEF9B7DE8AFBE2CBB7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(173)
	} // end fault
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Byte WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mB9FB7F96815B089524A11E2F55ED785952627B4C (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m650CA9CEEF6081BC324677FB6E1FAFD50F97FCE7 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m650CA9CEEF6081BC324677FB6E1FAFD50F97FCE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m650CA9CEEF6081BC324677FB6E1FAFD50F97FCE7_RuntimeMethod_var);
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9_System_IDisposable_Dispose_m30D78190926180920DD02BFEF9B7DE8AFBE2CBB7 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0019;
			}
		}
	}
	{
		goto IL_001d;
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		goto IL_001f;
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		U3CGetEnumeratorU3Ed__9_U3CU3Em__Finallyb_m35DD50E30DC098CD05646FD1F4797A7CFABFD930(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Object WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_mB98BBEEF73017FBCE095550A17338A44DC7A83B8 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_mB98BBEEF73017FBCE095550A17338A44DC7A83B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_0();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_1);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9__ctor_m10D39EAD57497D924BD9D4A3212E19A8BF9B3233 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_1(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame_<GetEnumerator>d__9::<>m__Finallyb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__9_U3CU3Em__Finallyb_m35DD50E30DC098CD05646FD1F4797A7CFABFD930 (U3CGetEnumeratorU3Ed__9_tD60246CC8643FE2683807042BB0162D2E7FEC521 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U3CU3E1__state_1((-1));
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
