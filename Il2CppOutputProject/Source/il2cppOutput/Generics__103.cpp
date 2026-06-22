#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5;
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tCF90FB4C3D9D17223FD2D30FE8F86C198C051414;
struct IEnumerator_1_t48DE2C04DB4D057A312C6011901E265D6CAFE759;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB;
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D;
struct SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242;
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC;
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614;
struct StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4;
struct StackItem_t653DA96524E2146197E46E4AB44EB360B1531DEB;
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71;
struct Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016;
struct NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37;
struct RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IFormatterResolver_t5B1CEFC5BBDC456659A223091F4E9614C7CEF1AB;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MessagePackSecurity_tDB02E2D77A7D902F39EDE4B53285607666ABC7DB;
struct MessagePackSerializerOptions_t6356E2266D4FA5A0334004939D1C37D105B23356;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SequencePool_tDDF5759DAF0456103A2A673863B6524E96D83CFF;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD158A55362F81195C165C2CFB448622A361B357C;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5  : public RuntimeObject
{
	int32_t ___index;
	int32_t ___count;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array;
};
struct U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448  : public RuntimeObject
{
	int32_t ___index;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objects;
};
struct CollectionFormatterBase_4_t64CAD9344C5BA7B735D0B4FB4BD405FA6159AB78  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EmptyArray_1_tD44919E2B605D341F68CD611C3D99481A875DFDF  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_t96B040F4BF053B4ED2604BA694C8D9CBB7825DC8  : public RuntimeObject
{
};
struct EmptyArray_1_tCAD8E960832A00501F7F5DD8A7542D90C2DE0F76  : public RuntimeObject
{
};
struct EmptyArray_1_t1E899EF0A8B333E488C10E6CEF9FA35AF52A82FD  : public RuntimeObject
{
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9  : public RuntimeObject
{
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F  : public RuntimeObject
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B  : public RuntimeObject
{
};
struct SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D  : public RuntimeObject
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___root;
	RuntimeObject* ___comparer;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___siInfo;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_array;
};
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____elements;
	int32_t ____freeCount;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____next;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____prev;
};
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614  : public RuntimeObject
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____head;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____tail;
};
struct StackDebugView_1_t44367B01AFAD9690E05D510A1EBE184344E4BC56  : public RuntimeObject
{
};
struct StackItem_t653DA96524E2146197E46E4AB44EB360B1531DEB  : public RuntimeObject
{
	int32_t ___p;
	int32_t ___r;
};
struct Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71  : public RuntimeObject
{
	NodeU5BU5D_tEDF34F08DB17591B4543CE3055D3D16C42535D37* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67  : public RuntimeObject
{
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582 
{
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ____tree;
	int32_t ____version;
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* ____stack;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ____current;
	bool ____reverse;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41;
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 
{
	RuntimeObject* ____startObject;
	RuntimeObject* ____endObject;
	int32_t ____startInteger;
	int32_t ____endInteger;
};
struct RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 
{
	RuntimeObject* ___Value;
};
struct SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____source;
	int32_t ____index;
};
struct StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4  : public CollectionFormatterBase_4_t64CAD9344C5BA7B735D0B4FB4BD405FA6159AB78
{
};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 
{
	intptr_t ____value;
};
struct ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 
{
	intptr_t ____value;
};
struct ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC 
{
	intptr_t ____value;
};
struct ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F 
{
	intptr_t ____value;
};
struct ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 
{
	intptr_t ____value;
};
struct ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 
{
	intptr_t ____value;
};
struct ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC 
{
	Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* ____stack;
	int32_t ____version;
	int32_t ____index;
	RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ____currentElement;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MessagePackCompression_t82BBC99CB3DD2EB27C402070930E756C3AE2D20B 
{
	int32_t ___value__;
};
struct NodeColor_t3C462CF5E46B843CC52B1FF46B6488BC18768F4F 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TreeRotation_t8E73F08A08D4DC4DA6DA17D92767DE6997B01A0A 
{
	uint8_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB : public RuntimeObject {};
struct ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 ____pointer;
	int32_t ____length;
};
struct Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 ____pointer;
	int32_t ____length;
};
struct Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC ____pointer;
	int32_t ____length;
};
struct Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F ____pointer;
	int32_t ____length;
};
struct Span_1_tC1B695440A1567664C2665D76D5614739FDF453D 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 ____pointer;
	int32_t ____length;
};
struct Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 ____pointer;
	int32_t ____length;
};
struct Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct MessagePackSerializerOptions_t6356E2266D4FA5A0334004939D1C37D105B23356  : public RuntimeObject
{
	RuntimeObject* ___U3CResolverU3Ek__BackingField;
	int32_t ___U3CCompressionU3Ek__BackingField;
	int32_t ___U3CCompressionMinLengthU3Ek__BackingField;
	int32_t ___U3CSuggestedContiguousMemorySizeU3Ek__BackingField;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3COldSpecU3Ek__BackingField;
	bool ___U3COmitAssemblyVersionU3Ek__BackingField;
	bool ___U3CAllowAssemblyVersionMismatchU3Ek__BackingField;
	MessagePackSecurity_tDB02E2D77A7D902F39EDE4B53285607666ABC7DB* ___U3CSecurityU3Ek__BackingField;
	SequencePool_tDDF5759DAF0456103A2A673863B6524E96D83CFF* ___U3CSequencePoolU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1  : public MulticastDelegate_t
{
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_tD44919E2B605D341F68CD611C3D99481A875DFDF_StaticFields
{
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_t96B040F4BF053B4ED2604BA694C8D9CBB7825DC8_StaticFields
{
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___Value;
};
struct EmptyArray_1_tCAD8E960832A00501F7F5DD8A7542D90C2DE0F76_StaticFields
{
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___Value;
};
struct EmptyArray_1_t1E899EF0A8B333E488C10E6CEF9FA35AF52A82FD_StaticFields
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Value;
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___Value;
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___Value;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F_StaticFields
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Value;
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Enumerator_t71F09436B846CE1804083C9B36997E4573540582_StaticFields
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___s_dummyNode;
};
struct ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24_StaticFields
{
	ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct MessagePackSerializerOptions_t6356E2266D4FA5A0334004939D1C37D105B23356_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___AssemblyNameVersionSelectorRegex;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___DisallowedTypes;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D m_Items[1];

	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		m_Items[index] = value;
	}
};
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 m_Items[1];

	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42  : public RuntimeArray
{
	ALIGN_FIELD (8) Guid_t m_Items[1];

	inline Guid_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186  : public RuntimeArray
{
	ALIGN_FIELD (8) RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 m_Items[1];

	inline RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_destination, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2B475CBFEFACA6D994548A5D392E1298CA032FC1_gshared_inline (ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* Array_Empty_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m6115D17317B2AF8AA0303DC246C9AAD374AF06C8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669_gshared (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_destination, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m797F2DE9AA443DFFE514A90CAB4BF2C178CD20DF_gshared_inline (ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* Array_Empty_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mC98FAA3CFD315D818E32457F5EF71F26B15EC888_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B_gshared (double* ___0_destination, double* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m901386166636013603AB6BC43BEB0DB15EAC7F7B_gshared_inline (ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Array_Empty_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF89F13D8A053414088C583CBE8BA17D9BA7DDEC3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055_gshared (Guid_t* ___0_destination, Guid_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_gshared_inline (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_gshared_inline (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* EnumerableHelpers_ToArray_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mE9205A140F2D330F1BD67CA68ECE924B2D0B0DA3_gshared (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m101739DBA13BD2E5477EAF85123BA08D6DD13500_gshared (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* ___0_array, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13_gshared (Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC* __this, Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m5677326E0EDDCB6AD5639B14C6BE13B2A75B57CB_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mA42860625ED6BBDD2ACFC27AD9ABDE2680695217_gshared (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E (Enumerator_t71F09436B846CE1804083C9B36997E4573540582* __this, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71F09436B846CE1804083C9B36997E4573540582*, SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, const RuntimeMethod*))Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (bool*, bool*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2*, bool*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, bool*, int32_t, const RuntimeMethod*))Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21*, const RuntimeMethod*))Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_destination, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m2B475CBFEFACA6D994548A5D392E1298CA032FC1_inline (ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m2B475CBFEFACA6D994548A5D392E1298CA032FC1_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, int32_t, const RuntimeMethod*))Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* Array_Empty_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m6115D17317B2AF8AA0303DC246C9AAD374AF06C8_inline (const RuntimeMethod* method)
{
	return ((  DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* (*) (const RuntimeMethod*))Array_Empty_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m6115D17317B2AF8AA0303DC246C9AAD374AF06C8_gshared_inline)(method);
}
inline void Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21*, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*, const RuntimeMethod*))Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9*, const RuntimeMethod*))Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_destination, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m797F2DE9AA443DFFE514A90CAB4BF2C178CD20DF_inline (ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m797F2DE9AA443DFFE514A90CAB4BF2C178CD20DF_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*, int32_t, const RuntimeMethod*))Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* Array_Empty_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mC98FAA3CFD315D818E32457F5EF71F26B15EC888_inline (const RuntimeMethod* method)
{
	return ((  DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* (*) (const RuntimeMethod*))Array_Empty_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mC98FAA3CFD315D818E32457F5EF71F26B15EC888_gshared_inline)(method);
}
inline void Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9*, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*, const RuntimeMethod*))Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5*, const RuntimeMethod*))Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B (double* ___0_destination, double* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (double*, double*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m901386166636013603AB6BC43BEB0DB15EAC7F7B_inline (ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478*, double*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m901386166636013603AB6BC43BEB0DB15EAC7F7B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5*, double*, int32_t, const RuntimeMethod*))Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Array_Empty_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF89F13D8A053414088C583CBE8BA17D9BA7DDEC3_inline (const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (const RuntimeMethod*))Array_Empty_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF89F13D8A053414088C583CBE8BA17D9BA7DDEC3_gshared_inline)(method);
}
inline void Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, const RuntimeMethod*))Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, const RuntimeMethod*))Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055 (Guid_t* ___0_destination, Guid_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Guid_t*, Guid_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2*, Guid_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, Guid_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline (const RuntimeMethod* method)
{
	return ((  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* (*) (const RuntimeMethod*))Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline)(method);
}
inline void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*, const RuntimeMethod*))Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D*, const RuntimeMethod*))Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31 (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int16_t*, int16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71*, int16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D*, int16_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*) (const RuntimeMethod*))Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_gshared_inline)(method);
}
inline void Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D*, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, const RuntimeMethod*))Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, int32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, const RuntimeMethod*))Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4 (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int64_t*, int64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC*, int64_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, int64_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline (const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (const RuntimeMethod*))Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline)(method);
}
inline void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, const RuntimeMethod*))Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2*, const RuntimeMethod*))Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject**, RuntimeObject**, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95*, RuntimeObject**, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2*, RuntimeObject**, int32_t, const RuntimeMethod*))Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03*, const RuntimeMethod*))Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250 (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int8_t*, int8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_inline (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC*, int8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03*, int8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline (const RuntimeMethod* method)
{
	return ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (const RuntimeMethod*))Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_gshared_inline)(method);
}
inline void Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03*, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, const RuntimeMethod*))Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, float*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, float*, int32_t, const RuntimeMethod*))Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (const RuntimeMethod*))Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline)(method);
}
inline void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, uint16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, uint16_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
inline void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, uint32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, uint32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, const RuntimeMethod*))Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908 (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, uint64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F*, uint64_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, uint64_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline (const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (const RuntimeMethod*))Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline)(method);
}
inline void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline)(__this, ___0_array, method);
}
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458 (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared)(__this, ___0_source, ___1_index, method);
}
inline SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline)(__this, method);
}
inline int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline)(__this, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared)(__this, ___0_size, ___1_prev, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared)(__this, ___0_size, method);
}
inline int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared)(__this, method);
}
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_inline (const RuntimeMethod* method)
{
	return ((  RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* (*) (const RuntimeMethod*))Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_gshared_inline)(method);
}
inline RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* EnumerableHelpers_ToArray_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mE9205A140F2D330F1BD67CA68ECE924B2D0B0DA3 (RuntimeObject* ___0_source, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* (*) (RuntimeObject*, int32_t*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mE9205A140F2D330F1BD67CA68ECE924B2D0B0DA3_gshared)(___0_source, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m101739DBA13BD2E5477EAF85123BA08D6DD13500 (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* ___0_array, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186*, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m101739DBA13BD2E5477EAF85123BA08D6DD13500_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13 (Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC* __this, Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC*, Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67*, const RuntimeMethod*))Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m5677326E0EDDCB6AD5639B14C6BE13B2A75B57CB (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67*, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654, const RuntimeMethod*))Stack_1_PushWithResize_m5677326E0EDDCB6AD5639B14C6BE13B2A75B57CB_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mA42860625ED6BBDD2ACFC27AD9ABDE2680695217 (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186**, int32_t, const RuntimeMethod*))Array_Resize_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mA42860625ED6BBDD2ACFC27AD9ABDE2680695217_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m11E2C154F1593209ED2F37673E3B4957BF69F649_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___comparer = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m24BE0E03C0A47F9085DD6691C5EDEB43420379D1_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___comparer = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___comparer), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1__ctor_m92492BF4FAFD9C2A9A8792553A50AB4C285CDE0B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->___siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_InOrderTreeWalk_m14C47AF11708774C0FC2F5E3990F3EA94D72ACB6_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* ___0_action, const RuntimeMethod* method) 
{
	Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_2;
		L_2 = ((  int32_t (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_3 = (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		((  void (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_3, ((int32_t)il2cpp_codegen_multiply(2, L_2)), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = __this->___root;
		V_1 = L_4;
		goto IL_0036;
	}

IL_0028:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_5 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_1;
		NullCheck(L_5);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8;
		L_8 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_8;
	}

IL_0036:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_1;
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_10 = V_0;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = InvokerFuncInvoker0< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10);
		V_1 = L_11;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_12 = ___0_action;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = ((  bool (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_14)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_2 = L_16;
		goto IL_0064;
	}

IL_0056:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_17 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_2;
		NullCheck(L_17);
		InvokerActionInvoker1< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_17, L_18);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_2;
		NullCheck(L_19);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20;
		L_20 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_2 = L_20;
	}

IL_0064:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		if (L_21)
		{
			goto IL_0056;
		}
	}

IL_0067:
	{
		Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ((  int32_t (*) (Stack_1_tEDDC663FCEA0D04571EA6DC6475CCEB7F77D0D71*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		if (L_23)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_get_Count_mF8E6634A05288A9F92B3332D1BB40567F5B8847A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(21, __this);
		int32_t L_0 = __this->___count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2E0CF4A6D3C23BD90B588462CB9507E656E30964_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m9809FDE90D2288A2B487D1B1194002313BE1744D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_ICollection_get_SyncRoot_m861D8904555F40BAA9BF3F3913475286CCB68E71_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_VersionCheck_mA5BE354734205CF02928ADBD583EE7E54AA7CC39_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_IsWithinRange_m586FAA4E96F11DCDE7992F5EA40B6A635113BC70_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Add_mAF89E4EAB2D98CB81C066F6DC2A2C11FF43CC1BC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(24, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5389931753E4B8806E0B1BEEE625E5FF23F9F93D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_AddIfNotPresent_m267A960C51415DB0FAD324726D563692EDB954F2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_7 = L_1;
	const Il2CppFullySharedGenericAny L_30 = L_1;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	int32_t V_4 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_5 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B11_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1), (uint8_t)0);
		__this->___root = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_2);
		__this->___count = 1;
		int32_t L_3 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return (bool)1;
	}

IL_002c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = __this->___root;
		V_0 = L_4;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		int32_t L_5 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_4 = 0;
		goto IL_00ac;
	}

IL_004c:
	{
		RuntimeObject* L_6 = __this->___comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = V_0;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_6);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = __this->___root;
		NullCheck(L_12);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)0;
	}

IL_0071:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_0;
		NullCheck(L_15);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = V_1;
		bool L_17;
		L_17 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_3;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, L_18, (&V_1), L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
	}

IL_0092:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		V_3 = L_21;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		V_2 = L_22;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_0;
		V_1 = L_23;
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_0;
		NullCheck(L_25);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26;
		L_26 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_26);
		goto IL_00ab;
	}

IL_00a5:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = V_0;
		NullCheck(L_27);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28;
		L_28 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		G_B11_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_28);
	}

IL_00ab:
	{
		V_0 = G_B11_0;
	}

IL_00ac:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_0;
		if (L_29)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_30: *(void**)L_30), (uint8_t)1);
		V_5 = L_31;
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_33 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_5;
		NullCheck(L_33);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_00cf;
	}

IL_00c7:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_5;
		NullCheck(L_35);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_00cf:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_1;
		NullCheck(L_37);
		bool L_38;
		L_38 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_38)
		{
			goto IL_00e3;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39 = V_5;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_3;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(__this, L_39, (&V_1), L_40, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
	}

IL_00e3:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_42 = __this->___root;
		NullCheck(L_42);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_43 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Remove_m7FF75998DF211EB5A66B2AFE5118C13A3C6A0A74_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(25, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_DoRemove_m4EED9DCD653F3B89F8BE2D79D53E7811F13D3532_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_2 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_3 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_4 = NULL;
	bool V_5 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_6 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_7 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B26_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B32_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B31_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_2 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_3 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_4 = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		V_5 = (bool)0;
		goto IL_012a;
	}

IL_0030:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if (!L_4)
		{
			goto IL_00f0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = V_1;
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = V_0;
		NullCheck(L_6);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		goto IL_00f0;
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = V_0;
		NullCheck(L_7);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9;
		L_9 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_6 = L_9;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = V_6;
		NullCheck(L_10);
		bool L_11;
		L_11 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = V_1;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14 = V_6;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_14))))
		{
			goto IL_006e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = V_1;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		goto IL_0075;
	}

IL_006e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = V_1;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0075:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = V_1;
		NullCheck(L_19);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = V_6;
		NullCheck(L_20);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = V_6;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = V_6;
		V_2 = L_24;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_26 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_25) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_26))))
		{
			goto IL_0097;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_27 = V_6;
		V_4 = L_27;
	}

IL_0097:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_28 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_29 = V_0;
		NullCheck(L_28);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_30;
		L_30 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_6 = L_30;
	}

IL_00a0:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_31 = V_6;
		NullCheck(L_31);
		bool L_32;
		L_32 = ((  bool (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		if (!L_32)
		{
			goto IL_00b1;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_33 = V_1;
		NullCheck(L_33);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		goto IL_00f0;
	}

IL_00b1:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_34 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_35 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_36 = V_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_37 = V_6;
		NullCheck(L_35);
		uint8_t L_38;
		L_38 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_35, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_34);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_39;
		L_39 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_34, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_7 = L_39;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_40 = V_7;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_41 = V_1;
		NullCheck(L_41);
		uint8_t L_42;
		L_42 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		NullCheck(L_40);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_40, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_43 = V_1;
		NullCheck(L_43);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_44 = V_0;
		NullCheck(L_44);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_45 = V_2;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_46 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_47 = V_7;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_45, L_46, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_48 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_49 = V_3;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_48) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_49))))
		{
			goto IL_00ed;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_50 = V_7;
		V_4 = L_50;
	}

IL_00ed:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_51 = V_7;
		V_2 = L_51;
	}

IL_00f0:
	{
		bool L_52 = V_5;
		if (L_52)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_53 = __this->___comparer;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_55 = V_0;
		NullCheck(L_55);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_55, (Il2CppFullySharedGenericAny*)L_56);
		NullCheck(L_53);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_56: *(void**)L_56));
		G_B21_0 = L_57;
		goto IL_0109;
	}

IL_0108:
	{
		G_B21_0 = (-1);
	}

IL_0109:
	{
		int32_t L_58 = G_B21_0;
		if (L_58)
		{
			G_B23_0 = L_58;
			goto IL_0114;
		}
		G_B22_0 = L_58;
	}
	{
		V_5 = (bool)1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_59 = V_0;
		V_3 = L_59;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_60 = V_1;
		V_4 = L_60;
		G_B23_0 = G_B22_0;
	}

IL_0114:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_61 = V_1;
		V_2 = L_61;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_62 = V_0;
		V_1 = L_62;
		if ((((int32_t)G_B23_0) < ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_63 = V_0;
		NullCheck(L_63);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_64;
		L_64 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_64);
		goto IL_0129;
	}

IL_0123:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_65 = V_0;
		NullCheck(L_65);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_66;
		L_66 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		G_B26_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_66);
	}

IL_0129:
	{
		V_0 = G_B26_0;
	}

IL_012a:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_67 = V_0;
		if (L_67)
		{
			goto IL_0030;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_68 = V_3;
		if (!L_68)
		{
			goto IL_014c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_69 = V_3;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_70 = V_4;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_71 = V_1;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_72 = V_2;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_69, L_70, L_71, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		int32_t L_73 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_014c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_74 = __this->___root;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_75 = L_74;
		if (L_75)
		{
			G_B32_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
			goto IL_0158;
		}
		G_B31_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_75);
	}
	{
		goto IL_015d;
	}

IL_0158:
	{
		NullCheck(G_B32_0);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(G_B32_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_015d:
	{
		bool L_76 = V_5;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_Clear_m72DD3AAD425FBF01ED1695F6E85BD161C6F4BA8B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		__this->___root = (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL);
		__this->___count = 0;
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSet_1_Contains_m08CA74B05D995CF2E6BC7FE029BB55047EEFD292_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = VirtualFuncInvoker1Invoker< Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Il2CppFullySharedGenericAny >::Invoke(28, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return (bool)((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m34CB5771C13F8F93B145C512B6A2D217CC4B12F9_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_CopyTo_m4551621D718EDDBE764C191CD3D1B0D642D9DF72_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_0 = (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 51));
		((  void (*) (U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_3 = V_0;
		int32_t L_4 = ___2_count;
		NullCheck(L_3);
		L_3->___count = L_4;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_5);
		L_5->___array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___array), (void*)L_6);
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_7 = V_0;
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___array;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___index;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___count;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_19 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_22 = V_0;
		NullCheck(L_22);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = L_22->___array;
		NullCheck(L_23);
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___index;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25)))))
		{
			goto IL_008d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_008d:
	{
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_27 = V_0;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___count;
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___index;
		NullCheck(L_27);
		L_27->___count = ((int32_t)il2cpp_codegen_add(L_29, L_31));
		U3CU3Ec__DisplayClass52_0_t2C472C76C625D6C7BEFAA5592B0FC15CA3D97EB5* L_32 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_33 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		bool L_34;
		L_34 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(20, __this, L_33);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Collections_ICollection_CopyTo_m94FDF44EFEE530F94F8F8E04643CB9A414343024_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_0 = (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
		((  void (*) (U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		V_0 = L_0;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index = L_2;
		RuntimeArray* L_3 = ___0_array;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001b:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004d:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___index;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___index;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0071:
	{
		RuntimeArray* L_18 = ___0_array;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_18, NULL);
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___index;
		int32_t L_22;
		L_22 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_21))) >= ((int32_t)L_22)))
		{
			goto IL_0091;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		RuntimeArray* L_24 = ___0_array;
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_24, il2cpp_rgctx_data(method->klass->rgctx_data, 49)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_1;
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___index;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, L_26, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return;
	}

IL_00a9:
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_29 = V_0;
		RuntimeArray* L_30 = ___0_array;
		NullCheck(L_29);
		L_29->___objects = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___objects), (void*)((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_30, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_31 = V_0;
		NullCheck(L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31->___objects;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00cd:
	{
	}
	try
	{
		U3CU3Ec__DisplayClass53_0_t1841DB462CE4617FDBFC8F281A034C50D54B7448* L_34 = V_0;
		TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* L_35 = (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_35, (RuntimeObject*)L_34, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 59)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		bool L_36;
		L_36 = VirtualFuncInvoker1< bool, TreeWalkPredicate_1_tC4073A167ECF26DA9D9D0D4B14F67313B7B8A016* >::Invoke(20, __this, L_35);
		goto IL_00f4;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e3;
		}
		throw e;
	}

CATCH_00e3:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_37 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
	}

IL_00f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71F09436B846CE1804083C9B36997E4573540582 SortedSet_1_GetEnumerator_mB29FBB39E45DF7D1AF3264B732A02613F9305CC2_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37A6313A32B9FC5F6EB5D51D8F684495F740383E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA79EEC19FE3D48F1664BA35994021F31C74FFE1D_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedSet_1_System_Collections_IEnumerable_GetEnumerator_mDCF814E9198EA5D3B8BBBBEF714D78E5CA8FE4EC_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_0;
		L_0 = ((  Enumerator_t71F09436B846CE1804083C9B36997E4573540582 (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		Enumerator_t71F09436B846CE1804083C9B36997E4573540582 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_InsertionBalance_mEC1566973B913256A811997605CD37A9E59C4C4B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_current, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** ___1_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_grandParent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_greatGrandParent, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_1 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B8_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_grandParent;
		NullCheck(L_0);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1;
		L_1 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_2 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = *((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_4 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5 = *((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB**)L_4);
		NullCheck(L_5);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6;
		L_6 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___0_current;
		V_0 = (bool)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7))? 1 : 0);
		bool L_8 = V_0;
		if ((!(((uint32_t)((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_3))? 1 : 0)) == ((uint32_t)L_8))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0023;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_grandParent;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_11);
		goto IL_0029;
	}

IL_0023:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_grandParent;
		NullCheck(L_12);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13;
		L_13 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_13);
	}

IL_0029:
	{
		V_1 = G_B4_0;
		goto IL_0042;
	}

IL_002c:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0037;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_grandParent;
		NullCheck(L_15);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16;
		L_16 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_16);
		goto IL_003d;
	}

IL_0037:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17 = ___2_grandParent;
		NullCheck(L_17);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18;
		L_18 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)))(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		G_B8_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_18);
	}

IL_003d:
	{
		V_1 = G_B8_0;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB** L_19 = ___1_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___3_greatGrandParent;
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_20);
	}

IL_0042:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_21 = ___2_grandParent;
		NullCheck(L_21);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = V_1;
		NullCheck(L_22);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___3_greatGrandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_grandParent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_25 = V_1;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceChildOrRoot_m4E31ECB2E0562BD48BAAAA8CE92E660786D9DBC5_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_parent, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_child, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_newChild, const RuntimeMethod* method) 
{
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___0_parent;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_parent;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___1_child;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = ___2_newChild;
		NullCheck(L_1);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		return;
	}

IL_000c:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_newChild;
		__this->___root = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_ReplaceNode_mBDF5C4FF096EA8F83C4E2FF596C6224955E9241C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___0_match, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___1_parentOfMatch, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___2_successor, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* ___3_parentOfSuccessor, const RuntimeMethod* method) 
{
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B4_0 = NULL;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B3_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_1 = ___0_match;
		if ((!(((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_0) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_2 = ___0_match;
		NullCheck(L_2);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3;
		L_3 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		___2_successor = L_3;
		goto IL_0049;
	}

IL_000e:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_4 = ___2_successor;
		NullCheck(L_4);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_5;
		L_5 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
			goto IL_001a;
		}
		G_B3_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_6);
	}
	{
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B4_0);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_001f:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_8 = ___0_match;
		if ((((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_7) == ((RuntimeObject*)(Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = ___3_parentOfSuccessor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = ___2_successor;
		NullCheck(L_10);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11;
		L_11 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		NullCheck(L_9);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = ___0_match;
		NullCheck(L_13);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_14;
		L_14 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		NullCheck(L_12);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_12, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
	}

IL_003d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_15 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_16 = ___0_match;
		NullCheck(L_16);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_17;
		L_17 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		NullCheck(L_15);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_15, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_0049:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_18 = ___2_successor;
		if (!L_18)
		{
			goto IL_0058;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_19 = ___2_successor;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_20 = ___0_match;
		NullCheck(L_20);
		uint8_t L_21;
		L_21 = ((  uint8_t (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		NullCheck(L_19);
		((  void (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
	}

IL_0058:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_22 = ___1_parentOfMatch;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_23 = ___0_match;
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_24 = ___2_successor;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* SortedSet_1_FindNode_m7E02E4CF3DE74A449FD555A69412FEA4A7D39C34_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* G_B6_0 = NULL;
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_0 = __this->___root;
		V_0 = L_0;
		goto IL_0034;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->___comparer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_3 = V_0;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_3, (Il2CppFullySharedGenericAny*)L_4);
		NullCheck(L_1);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_4: *(void**)L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_7 = V_0;
		return L_7;
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_9 = V_0;
		NullCheck(L_9);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10;
		L_10 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_10);
		goto IL_0033;
	}

IL_002d:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_11 = V_0;
		NullCheck(L_11);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_12;
		L_12 = ((  Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* (*) (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		G_B6_0 = ((Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)L_12);
	}

IL_0033:
	{
		V_0 = G_B6_0;
	}

IL_0034:
	{
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_13 = V_0;
		if (L_13)
		{
			goto IL_0009;
		}
	}
	{
		return (Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_UpdateVersion_m172929972B25F2EDDF426E8D7D69003E7E001E2C_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_ISerializable_GetObjectData_m542305855B960DD4A3C41B23E6C12C671FCBA4AE_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		VirtualActionInvoker2< SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 >::Invoke(29, __this, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_GetObjectData_mE6F953A9B70F9C6F40D01EC828D4AE6EED34D93B_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->___count;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->___comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 68)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->___version;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_9, NULL);
		Node_t2A8A2E5FDB8FFFF9A0226914D754049360D7CFBB* L_10 = __this->___root;
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 69), (uint32_t)L_11);
		V_0 = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		((  void (*) (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, L_13, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 70)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_14);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_14, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, (RuntimeObject*)L_15, L_17, NULL);
	}

IL_007d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_mFDBF0BF4F39DA621F204E108AE8ED0B59349CF8A_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_sender;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(30, __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSet_1_OnDeserialization_m32D2F6DF9680EF85F1E98A262055DB2EE717E334_gshared (SortedSet_1_t5F3E6B262FACA2263604FC55791E6B85C1E0D52D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___comparer;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->___siInfo;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_2 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001c:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 68)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->___comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = __this->___siInfo;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_7, _stringLiteral37B9D73BE7368F9E631CD06C5DC3758F48D4E89C, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->___siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 70)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, L_12, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 49)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_1;
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_15 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0083:
	{
		V_2 = 0;
		goto IL_0099;
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_t934EEDACADF3463E1527A92E3EA1456E1AD0DED6);
		bool L_20;
		L_20 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0099:
	{
		int32_t L_22 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0087;
		}
	}

IL_009f:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_24 = __this->___siInfo;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_24, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->___version = L_25;
		int32_t L_26 = __this->___count;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00c9;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_28 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD158A55362F81195C165C2CFB448622A361B357C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00c9:
	{
		__this->___siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedSet_1_Log2_m6EDFF3696AB144C4BCA5D85DE8FB595407FBD64F_gshared (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_value;
		___0_value = ((int32_t)(L_1>>1));
	}

IL_000d:
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
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
void SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_Multicast(SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* currentDelegate = reinterpret_cast<SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_OpenInst(SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_OpenStatic(SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m03F03E0946089DC4B2999429EFD9CA76AC7CD4D6_gshared (SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_mF271E3A74E1BB6A7C270086B470567D0D0701721_gshared (SpanAction_2_tE2F6FED691F2FC7359AC6B1BE35E9E8C6D10F6A1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ReadOnlySequence_1_tC55D1EE05462C24404AFA9B9E464BB7F49EC1E24, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF010B57B13C6597DA14D7957BD2E07090F8336A6_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		bool* L_11;
		L_11 = il2cpp_unsafe_as_ref<bool>(L_10);
		int32_t L_12 = ___1_start;
		bool* L_13;
		L_13 = il2cpp_unsafe_add<bool,int32_t>(L_11, L_12);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9863659F38934C7B3CF0E727F433498C43070D2F_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		bool* L_2;
		L_2 = il2cpp_unsafe_as_ref<bool>((uint8_t*)L_1);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_get_Item_m27BAFEC8B3FFE7DEB25D60F10C9941C139B90E41_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_GetPinnableReference_mC68E9B3CD4F8680E06367DD4736FA06D7D3CA4F2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_1;
		L_1 = il2cpp_unsafe_as_ref<bool>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m519E41C1F421677B73AAFBBC520A75F377A7CF34_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_0 = __this->____pointer;
		V_0 = L_0;
		bool* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<bool>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m82EADA29C24D18F714A43323334596A4FCB9FD82_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	bool* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<bool>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		bool L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_4 = __this->____pointer;
		V_2 = L_4;
		bool* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_12 = __this->____pointer;
		V_2 = L_12;
		bool* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<bool>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		bool* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		bool* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		bool L_19 = ___0_value;
		*(bool*)L_18 = L_19;
		bool* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		bool* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		bool L_24 = ___0_value;
		*(bool*)L_23 = L_24;
		bool* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		bool* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		bool L_29 = ___0_value;
		*(bool*)L_28 = L_29;
		bool* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		bool* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		bool L_34 = ___0_value;
		*(bool*)L_33 = L_34;
		bool* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		bool* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		bool L_39 = ___0_value;
		*(bool*)L_38 = L_39;
		bool* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		bool* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		bool L_44 = ___0_value;
		*(bool*)L_43 = L_44;
		bool* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		bool* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		bool L_49 = ___0_value;
		*(bool*)L_48 = L_49;
		bool* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		bool* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		bool L_54 = ___0_value;
		*(bool*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		bool* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		bool* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		bool L_64 = ___0_value;
		*(bool*)L_63 = L_64;
		bool* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		bool* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		bool L_69 = ___0_value;
		*(bool*)L_68 = L_69;
		bool* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		bool* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		bool L_74 = ___0_value;
		*(bool*)L_73 = L_74;
		bool* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		bool* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		bool L_79 = ___0_value;
		*(bool*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		bool* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		bool* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		bool L_85 = ___0_value;
		*(bool*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD4A4E2B11E4B55D0E34818F92516CA8C73F66E52_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_0 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m840B35C6072B9118C6B103D322BACAAE77E2F08B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_1 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 Span_1_op_Implicit_m532947D2F4A072CD15514EE6D890A44C2B4C465B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_0 = ___0_span;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1 = L_0.____pointer;
		V_0 = L_1;
		bool* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF5B8BAB40C1B80B9B1A0921B31B2968310CB65A3_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_mF6D7367FEA695E2CE8E186FC9798415839735753_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_m673F7A3E7082015E7E5AA80ACF267623570ABB84_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Span_1_ToArray_mFC04BEB2B94DC9AB1599B278616C046F62EA99C2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		bool* L_6;
		L_6 = il2cpp_unsafe_as_ref<bool>(L_5);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_7 = __this->____pointer;
		V_0 = L_7;
		bool* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55CEACD776C1B696BF7E0EEA57CA12538E5B6A93_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1F00FAF1BC9554C7D07229B28319B50B119EAF21_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_op_Implicit_m1F838ECD24613509CFE3CA0A82DD6F0762357A99_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		goto IL_0037;
	}

IL_0037:
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4;
		L_4 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>(L_3);
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC0632FE24903F748A04477D637CE2AE17288B0A1_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_11;
		L_11 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>(L_10);
		int32_t L_12 = ___1_start;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_13;
		L_13 = il2cpp_unsafe_add<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,int32_t>(L_11, L_12);
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCE473D277917DABE91EED0EAEF2F2267D01F31EE_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2;
		L_2 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>((uint8_t*)L_1);
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___0_ptr;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* Span_1_get_Item_m953C8F0EAE335B71967553037A2E797C6357C2D3_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5;
		L_5 = il2cpp_unsafe_add<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* Span_1_GetPinnableReference_mD328294735D23A8FC687401B2C1E71BA41899131_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1;
		L_1 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDAAB3BDB58A9A95DBAA7A8A4DD515284CB164771_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_0 = __this->____pointer;
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m7BF607EBA08996DF52AC9D6C1297F31904B8FF48_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_4 = __this->____pointer;
		V_2 = L_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_12 = __this->____pointer;
		V_2 = L_12;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_18 = L_19;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_24 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_23 = L_24;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_28 = L_29;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_33 = L_34;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_39 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_38 = L_39;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_43 = L_44;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_48 = L_49;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_54 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_64 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_63 = L_64;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_69 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_68 = L_69;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_74 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_73 = L_74;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_79 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_85 = ___0_value;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9ADCF08B365ECA18F7BAADAE93FD0D8B78E48D15_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_2 = ___0_destination;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_3 = L_2.____pointer;
		V_0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5 = __this->____pointer;
		V_0 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m0AF22A71678AC372F043FFDE7B38A7B8CD0BDCC2_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_2 = ___0_destination;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_3 = L_2.____pointer;
		V_1 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_1));
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5 = __this->____pointer;
		V_1 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027 Span_1_op_Implicit_m76A7D7D0944BAB774CBA36FDA60CA4BE382B5387_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_0 = ___0_span;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_1 = L_0.____pointer;
		V_0 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m2B475CBFEFACA6D994548A5D392E1298CA032FC1_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m69EF2F0FE1B7BE392C44E87B6300369C87050E10_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5 = __this->____pointer;
		V_1 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 Span_1_Slice_m271A152A0E258BD881CF2B9A71A653460A92500E_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5;
		L_5 = il2cpp_unsafe_add<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 Span_1_Slice_mC2E0CD8421BC84F72685AF1376E9CFD2A5C08955_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5 = __this->____pointer;
		V_0 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_8;
		L_8 = il2cpp_unsafe_add<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* Span_1_ToArray_m52A035CC2E6832E3BAC82D0F0AF2AEE567B59228_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_1;
		L_1 = Array_Empty_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m6115D17317B2AF8AA0303DC246C9AAD374AF06C8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_3 = (DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)(DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6;
		L_6 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>(L_5);
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_7 = __this->____pointer;
		V_0 = L_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m043C911A673C0D3DF1B80E0A8DADC5F8967873B6(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC0FF8D64354A5E87F203C990A62070986ACE2E13_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m5BD222CCD918DC7D49706248667F5FB36ABC7F77_gshared (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 Span_1_op_Implicit_m75C4B44A10A7DFDE3881E93BF9E12D574CFF7A71_gshared (DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, const RuntimeMethod* method) 
{
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_0 = ___0_array;
		Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, const RuntimeMethod* method) 
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		goto IL_0037;
	}

IL_0037:
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_4;
		L_4 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>(L_3);
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m59ADB9129C19A03F28237728F3B4BAA2EB1CAFE3_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_11;
		L_11 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>(L_10);
		int32_t L_12 = ___1_start;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_13;
		L_13 = il2cpp_unsafe_add<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,int32_t>(L_11, L_12);
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCC763A265BD92EB3298F5C8F76FE1D3EB01B2AA1_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_2;
		L_2 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>((uint8_t*)L_1);
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_0 = ___0_ptr;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* Span_1_get_Item_mC21E45ACE2F471D659CC81A4E5D7E7E9F9BB6CB5_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_5;
		L_5 = il2cpp_unsafe_add<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* Span_1_GetPinnableReference_m8A00D7F46FA7EA220C11774092EB9170A04B1598_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_1;
		L_1 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m19A218179FC9D8C8A14BB8FA4D06B1BC92E6ABDD_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_0 = __this->____pointer;
		V_0 = L_0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m12C8BFA86AB5B1D4231302A3B963CD579DE001D7_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_4 = __this->____pointer;
		V_2 = L_4;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_12 = __this->____pointer;
		V_2 = L_12;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_19 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_18 = L_19;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_24 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_23 = L_24;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_29 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_28 = L_29;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_34 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_33 = L_34;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_39 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_38 = L_39;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_44 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_43 = L_44;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_49 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_48 = L_49;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_54 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_64 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_63 = L_64;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_69 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_68 = L_69;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_74 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_73 = L_74;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_79 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_85 = ___0_value;
		*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m36411C18B323A41A8359C01BA1DAFF9EBB1C24F0_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_2 = ___0_destination;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_3 = L_2.____pointer;
		V_0 = L_3;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5 = __this->____pointer;
		V_0 = L_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m49B8B5407FCD2DCA331ED59A6245653AD0C0C596_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_2 = ___0_destination;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_3 = L_2.____pointer;
		V_1 = L_3;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_1));
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5 = __this->____pointer;
		V_1 = L_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8 Span_1_op_Implicit_m8E73F3BADB155F930DE6E3950278052F433E2FAA_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_0 = ___0_span;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_1 = L_0.____pointer;
		V_0 = L_1;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m797F2DE9AA443DFFE514A90CAB4BF2C178CD20DF_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m08E0147D056A608E205EB1FC029E6A3D3B1CA58B_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5 = __this->____pointer;
		V_1 = L_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 Span_1_Slice_m124291DD3612048194BB34744540134011AB2A72_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_2 = __this->____pointer;
		V_0 = L_2;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_5;
		L_5 = il2cpp_unsafe_add<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 Span_1_Slice_m873244EED17BB72E34D71BB309E7769C687270D5_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5 = __this->____pointer;
		V_0 = L_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_8;
		L_8 = il2cpp_unsafe_add<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* Span_1_ToArray_m70B163893F8E8A15800C618699F684992FBCEDE7_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_1;
		L_1 = Array_Empty_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mC98FAA3CFD315D818E32457F5EF71F26B15EC888_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_3 = (DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)(DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_6;
		L_6 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>(L_5);
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_7 = __this->____pointer;
		V_0 = L_7;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mBE00D14D47458722B6DE2B0D3994E898CA9FE669(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mAA05E1DF3605BEEF0363A3CB3052BC23181F83D9_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mA0EF947B2E9C7DA0295E327CBC5F5A76D0F7AA7F_gshared (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 Span_1_op_Implicit_m2B88B503E88EAE3D0702C3FE9825CB7C3A5BD7F0_gshared (DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, const RuntimeMethod* method) 
{
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_0 = ___0_array;
		Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		goto IL_0037;
	}

IL_0037:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		double* L_4;
		L_4 = il2cpp_unsafe_as_ref<double>(L_3);
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4EDF54E57EF00CD2A017A92A6D8BEF73D0441734_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		double* L_11;
		L_11 = il2cpp_unsafe_as_ref<double>(L_10);
		int32_t L_12 = ___1_start;
		double* L_13;
		L_13 = il2cpp_unsafe_add<double,int32_t>(L_11, L_12);
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBCBB8DE851A47E109FC93829B35583C922A5EB17_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		double* L_2;
		L_2 = il2cpp_unsafe_as_ref<double>((uint8_t*)L_1);
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_ptr;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* Span_1_get_Item_m9AF82A2C316DD97CF1B922FD7C9DF3695C74D857_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_2 = __this->____pointer;
		V_0 = L_2;
		double* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		double* L_5;
		L_5 = il2cpp_unsafe_add<double,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* Span_1_GetPinnableReference_m9DC03FA85A98078204285D41E71B43B21149CEB8_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		double* L_1;
		L_1 = il2cpp_unsafe_as_ref<double>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_2 = __this->____pointer;
		V_0 = L_2;
		double* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mFACF30BE37865F28FFDC3D718AF45E8DF7549358_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_0 = __this->____pointer;
		V_0 = L_0;
		double* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<double>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m6C17A747DD2673A507B7FBD784C8F5619BAD1F60_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, double ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	double V_1 = 0.0;
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	double* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<double>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		double L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_4 = __this->____pointer;
		V_2 = L_4;
		double* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_12 = __this->____pointer;
		V_2 = L_12;
		double* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<double>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		double* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		double* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		double L_19 = ___0_value;
		*(double*)L_18 = L_19;
		double* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		double* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		double L_24 = ___0_value;
		*(double*)L_23 = L_24;
		double* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		double* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		double L_29 = ___0_value;
		*(double*)L_28 = L_29;
		double* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		double* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		double L_34 = ___0_value;
		*(double*)L_33 = L_34;
		double* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		double* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		double L_39 = ___0_value;
		*(double*)L_38 = L_39;
		double* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		double* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		double L_44 = ___0_value;
		*(double*)L_43 = L_44;
		double* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		double* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		double L_49 = ___0_value;
		*(double*)L_48 = L_49;
		double* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		double* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		double L_54 = ___0_value;
		*(double*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		double* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		double* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		double L_64 = ___0_value;
		*(double*)L_63 = L_64;
		double* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		double* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		double L_69 = ___0_value;
		*(double*)L_68 = L_69;
		double* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		double* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		double L_74 = ___0_value;
		*(double*)L_73 = L_74;
		double* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		double* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		double L_79 = ___0_value;
		*(double*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		double* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		double* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<double,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		double L_85 = ___0_value;
		*(double*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mFDA53C7870798686C0CAF8F525E0F1D3B09DB9F5_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_2 = ___0_destination;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_3 = L_2.____pointer;
		V_0 = L_3;
		double* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5 = __this->____pointer;
		V_0 = L_5;
		double* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m0A3F1E06B1EE1368B2808F7650B45A61FE40B54D_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_2 = ___0_destination;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_3 = L_2.____pointer;
		V_1 = L_3;
		double* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_1));
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5 = __this->____pointer;
		V_1 = L_5;
		double* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478 Span_1_op_Implicit_m29B4023AC8544262E0D41A73926180D3BB5A51DD_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_0 = ___0_span;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_1 = L_0.____pointer;
		V_0 = L_1;
		double* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m901386166636013603AB6BC43BEB0DB15EAC7F7B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m123658CA524B46027072B3648005E1CBAF21D261_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5 = __this->____pointer;
		V_1 = L_5;
		double* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 Span_1_Slice_mA1D7C0C73ACC3FD5BFCA6558F2B25E69B7A77C7C_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_2 = __this->____pointer;
		V_0 = L_2;
		double* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		double* L_5;
		L_5 = il2cpp_unsafe_add<double,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 Span_1_Slice_m611BDC8D12CCBD569A457540AD512AF319FFFE24_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5 = __this->____pointer;
		V_0 = L_5;
		double* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		double* L_8;
		L_8 = il2cpp_unsafe_add<double,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Span_1_ToArray_m373EFA237CCF4878A2224AF46BD6D16AB1876D55_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1;
		L_1 = Array_Empty_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF89F13D8A053414088C583CBE8BA17D9BA7DDEC3_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		double* L_6;
		L_6 = il2cpp_unsafe_as_ref<double>(L_5);
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_7 = __this->____pointer;
		V_0 = L_7;
		double* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(double, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m26B5BBC37A0A9CE155480FC99BC70B2B41E4678B(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD8D06AC41E48089595B22F8F9D80D8134746D20F_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m18A74936B037AEA85B2C6523E5842F14EC538B7B_gshared (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 Span_1_op_Implicit_mC5C5DA9754CD9EF42BB6A4386A822EC106266E01_gshared (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
		Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0037;
	}

IL_0037:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Guid_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<Guid_t>(L_3);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1FD2C8FB671A09BDE1915A4A379D6974522C4929_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Guid_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<Guid_t>(L_10);
		int32_t L_12 = ___1_start;
		Guid_t* L_13;
		L_13 = il2cpp_unsafe_add<Guid_t,int32_t>(L_11, L_12);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9E5B232968621DE43BE39D11E3256431284486E9_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Guid_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<Guid_t>((uint8_t*)L_1);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t* Span_1_get_Item_m2082DDB5259A72A5F7869FF88984EC82CB2B1FBD_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Guid_t* L_5;
		L_5 = il2cpp_unsafe_add<Guid_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t* Span_1_GetPinnableReference_m8FE2A0B29C5AFC60B234CC1B4E3ABF103AA519A5_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Guid_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<Guid_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mF0D6C557B1FB6DAD98B2DBF72FEE53F69A99CA3C_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_0 = __this->____pointer;
		V_0 = L_0;
		Guid_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Guid_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m2F1C0637BBF5F9AC4322B4A0A3BA0C579F2CCDAA_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Guid_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Guid_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Guid_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_4 = __this->____pointer;
		V_2 = L_4;
		Guid_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_12 = __this->____pointer;
		V_2 = L_12;
		Guid_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Guid_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Guid_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Guid_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Guid_t L_19 = ___0_value;
		*(Guid_t*)L_18 = L_19;
		Guid_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Guid_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Guid_t L_24 = ___0_value;
		*(Guid_t*)L_23 = L_24;
		Guid_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Guid_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Guid_t L_29 = ___0_value;
		*(Guid_t*)L_28 = L_29;
		Guid_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Guid_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Guid_t L_34 = ___0_value;
		*(Guid_t*)L_33 = L_34;
		Guid_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Guid_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Guid_t L_39 = ___0_value;
		*(Guid_t*)L_38 = L_39;
		Guid_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Guid_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Guid_t L_44 = ___0_value;
		*(Guid_t*)L_43 = L_44;
		Guid_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Guid_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Guid_t L_49 = ___0_value;
		*(Guid_t*)L_48 = L_49;
		Guid_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Guid_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Guid_t L_54 = ___0_value;
		*(Guid_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Guid_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Guid_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Guid_t L_64 = ___0_value;
		*(Guid_t*)L_63 = L_64;
		Guid_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Guid_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Guid_t L_69 = ___0_value;
		*(Guid_t*)L_68 = L_69;
		Guid_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Guid_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Guid_t L_74 = ___0_value;
		*(Guid_t*)L_73 = L_74;
		Guid_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Guid_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Guid_t L_79 = ___0_value;
		*(Guid_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Guid_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Guid_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Guid_t L_85 = ___0_value;
		*(Guid_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m49D952E77D8D9EA847833A8A0306CF38432F0F60_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_2 = ___0_destination;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3 = L_2.____pointer;
		V_0 = L_3;
		Guid_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_0 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m959BC9DD611B8EA337DA7618376F30C6B751CC82_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_2 = ___0_destination;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3 = L_2.____pointer;
		V_1 = L_3;
		Guid_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_1 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 Span_1_op_Implicit_mB0979C441C6CA5AF2F3D2F3BB6866482BA194964_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_0 = ___0_span;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1 = L_0.____pointer;
		V_0 = L_1;
		Guid_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mABBFE1E34C99A5BA84456EC966F0754FED7FC4EF_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_1 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_Slice_m4358A6176CDDC4FFD79DCA6A29772ED68E345CC5_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Guid_t* L_5;
		L_5 = il2cpp_unsafe_add<Guid_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_Slice_m8BFF27386523C8A5FAEB97C9C729479BB2AB4606_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_0 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Guid_t* L_8;
		L_8 = il2cpp_unsafe_add<Guid_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Span_1_ToArray_mBB99E069A568AD6B3A5FD6852BDDBD8E04B8D944_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1;
		L_1 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Guid_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<Guid_t>(L_5);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_7 = __this->____pointer;
		V_0 = L_7;
		Guid_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mA1B2CB3B50882EB4E3313F68EBD7C58A3D5E06A6_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBAF2C317CECB3D38449CC875B236CBAB0097A033_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_op_Implicit_m4255A6ACF4534515E8030A70013E8604982A8A49_gshared (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC1B695440A1567664C2665D76D5614739FDF453D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int16_t>(L_3);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBE2250A6A274A6A077C700F248F86360B40B16C1_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC1B695440A1567664C2665D76D5614739FDF453D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int16_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int16_t>(L_10);
		int32_t L_12 = ___1_start;
		int16_t* L_13;
		L_13 = il2cpp_unsafe_add<int16_t,int32_t>(L_11, L_12);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB5162139252B18C9C17AE408159CEB9F7C85BD69_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int16_t>((uint8_t*)L_1);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_ptr;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Span_1_get_Item_mBE16C9E200FE891CEE15DF9F6654CE1E8407F294_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Span_1_GetPinnableReference_mF441D4160C65167D7FD4EEE2E37402167A412C88_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int16_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int16_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE914A47677DC216FB072011CF9E06754F7D8E56F_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_0 = __this->____pointer;
		V_0 = L_0;
		int16_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int16_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC468CDF89D04337761AA815E40338769BE470141_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int16_t V_1 = 0;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int16_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int16_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int16_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_4 = __this->____pointer;
		V_2 = L_4;
		int16_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_12 = __this->____pointer;
		V_2 = L_12;
		int16_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int16_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int16_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int16_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int16_t L_19 = ___0_value;
		*(int16_t*)L_18 = L_19;
		int16_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int16_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int16_t L_24 = ___0_value;
		*(int16_t*)L_23 = L_24;
		int16_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int16_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int16_t L_29 = ___0_value;
		*(int16_t*)L_28 = L_29;
		int16_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int16_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int16_t L_34 = ___0_value;
		*(int16_t*)L_33 = L_34;
		int16_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int16_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int16_t L_39 = ___0_value;
		*(int16_t*)L_38 = L_39;
		int16_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int16_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int16_t L_44 = ___0_value;
		*(int16_t*)L_43 = L_44;
		int16_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int16_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int16_t L_49 = ___0_value;
		*(int16_t*)L_48 = L_49;
		int16_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int16_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int16_t L_54 = ___0_value;
		*(int16_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int16_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int16_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int16_t L_64 = ___0_value;
		*(int16_t*)L_63 = L_64;
		int16_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int16_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int16_t L_69 = ___0_value;
		*(int16_t*)L_68 = L_69;
		int16_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int16_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int16_t L_74 = ___0_value;
		*(int16_t*)L_73 = L_74;
		int16_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int16_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int16_t L_79 = ___0_value;
		*(int16_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int16_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int16_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int16_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int16_t L_85 = ___0_value;
		*(int16_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mAFD0A836173500DCF4D632295886D1AAC21409B3_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_0 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA4C9227B1BC5364F12685EAFF0B81A271AF8834C_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_1 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_1 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 Span_1_op_Implicit_mFF5C1064E6C98947E05D7D308023048EEED1BEA2_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_0 = ___0_span;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_1 = L_0.____pointer;
		V_0 = L_1;
		int16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m004DAD7C5DDFC6EAEB3CFA85255FBDFA973B546F_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_1 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC1B695440A1567664C2665D76D5614739FDF453D Span_1_Slice_mA8B28B11D3D6D05728CC283915EDE4F344F8E495_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC1B695440A1567664C2665D76D5614739FDF453D Span_1_Slice_m278BDEE5E9A10B9E32915C90A2AC2048DC3E9120_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int16_t* L_8;
		L_8 = il2cpp_unsafe_add<int16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Span_1_ToArray_m15E420A65E374D0989DDC17B535C2903627EB782_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
		L_1 = Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int16_t>(L_5);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_7 = __this->____pointer;
		V_0 = L_7;
		int16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m5A30842C6C6B08994F52FCEB806AF456DE428074_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6E89ECE8CF4DBF31B62CB08DAB3FB1544DDCE531_gshared (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC1B695440A1567664C2665D76D5614739FDF453D Span_1_op_Implicit_m24F375632A31965FA8FAD49F1230ED1E1E7CFC1D_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE5D19FF7B2CED496CE41333FF842F490D1F14C03_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int32_t>(L_10);
		int32_t L_12 = ___1_start;
		int32_t* L_13;
		L_13 = il2cpp_unsafe_add<int32_t,int32_t>(L_11, L_12);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m9272911ACF4FC0A82F6053A0DE22CEBC8C10D4E0_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_GetPinnableReference_mF920821F83971F1D7D3E554CAD596D5902754811_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m36EEDEB219123208E625AC1446BC03AB5A21A001_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_0 = __this->____pointer;
		V_0 = L_0;
		int32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0911D9EBB79D74E3F1442C095DEDB346CBE87340_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4 = __this->____pointer;
		V_2 = L_4;
		int32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_12 = __this->____pointer;
		V_2 = L_12;
		int32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int32_t L_19 = ___0_value;
		*(int32_t*)L_18 = L_19;
		int32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int32_t L_24 = ___0_value;
		*(int32_t*)L_23 = L_24;
		int32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int32_t L_29 = ___0_value;
		*(int32_t*)L_28 = L_29;
		int32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int32_t L_34 = ___0_value;
		*(int32_t*)L_33 = L_34;
		int32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int32_t L_39 = ___0_value;
		*(int32_t*)L_38 = L_39;
		int32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int32_t L_44 = ___0_value;
		*(int32_t*)L_43 = L_44;
		int32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int32_t L_49 = ___0_value;
		*(int32_t*)L_48 = L_49;
		int32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int32_t L_54 = ___0_value;
		*(int32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int32_t L_64 = ___0_value;
		*(int32_t*)L_63 = L_64;
		int32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int32_t L_69 = ___0_value;
		*(int32_t*)L_68 = L_69;
		int32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int32_t L_74 = ___0_value;
		*(int32_t*)L_73 = L_74;
		int32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int32_t L_79 = ___0_value;
		*(int32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int32_t L_85 = ___0_value;
		*(int32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_span;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1 = L_0.____pointer;
		V_0 = L_1;
		int32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m71CB64722D92C563993B18D00317C1A3929D259B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_mEE3E0DF3B0F4D4D2A6CE3587C2919CD859EF4973_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1756B3F9D59F21477044E6EE24B20B51BB216F31_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBB9141DEAC1EA44851C84E0A12B1A3136460B0D4_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int64_t>(L_3);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m63E0AC4D46B359D853FBD38A15D2C6D19ACC99DB_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int64_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int64_t>(L_10);
		int32_t L_12 = ___1_start;
		int64_t* L_13;
		L_13 = il2cpp_unsafe_add<int64_t,int32_t>(L_11, L_12);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int64_t>((uint8_t*)L_1);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Span_1_get_Item_m1D3E337979E0D03E72B7F9290DAF1ABAE018E913_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int64_t* L_5;
		L_5 = il2cpp_unsafe_add<int64_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Span_1_GetPinnableReference_mF59782789C9CFAF154BCACF6AB27D8CFB84EDB44_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int64_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int64_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6864C2E74199530DEBBE8672C774EF8B41840091_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_0 = __this->____pointer;
		V_0 = L_0;
		int64_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int64_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m76D13625B09398D11591FF340F0B94F788B32D2A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int64_t V_1 = 0;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int64_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int64_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int64_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_4 = __this->____pointer;
		V_2 = L_4;
		int64_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_12 = __this->____pointer;
		V_2 = L_12;
		int64_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int64_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int64_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int64_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int64_t L_19 = ___0_value;
		*(int64_t*)L_18 = L_19;
		int64_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int64_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int64_t L_24 = ___0_value;
		*(int64_t*)L_23 = L_24;
		int64_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int64_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int64_t L_29 = ___0_value;
		*(int64_t*)L_28 = L_29;
		int64_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int64_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int64_t L_34 = ___0_value;
		*(int64_t*)L_33 = L_34;
		int64_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int64_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int64_t L_39 = ___0_value;
		*(int64_t*)L_38 = L_39;
		int64_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int64_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int64_t L_44 = ___0_value;
		*(int64_t*)L_43 = L_44;
		int64_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int64_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int64_t L_49 = ___0_value;
		*(int64_t*)L_48 = L_49;
		int64_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int64_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int64_t L_54 = ___0_value;
		*(int64_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int64_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int64_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int64_t L_64 = ___0_value;
		*(int64_t*)L_63 = L_64;
		int64_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int64_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int64_t L_69 = ___0_value;
		*(int64_t*)L_68 = L_69;
		int64_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int64_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int64_t L_74 = ___0_value;
		*(int64_t*)L_73 = L_74;
		int64_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int64_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int64_t L_79 = ___0_value;
		*(int64_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int64_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int64_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int64_t L_85 = ___0_value;
		*(int64_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m13F279BEC9B9BB1E2D4D06C1C93F44AECA0EEBD4_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_2 = ___0_destination;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3 = L_2.____pointer;
		V_0 = L_3;
		int64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_0 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB819E6D9660E53A8964BEDACE758DBF652C060B0_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_2 = ___0_destination;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3 = L_2.____pointer;
		V_1 = L_3;
		int64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_1 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC Span_1_op_Implicit_m4BB3A14D34CF739A36349066EDF43FA836F70DCE_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_0 = ___0_span;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1 = L_0.____pointer;
		V_0 = L_1;
		int64_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m00EA5D946C52A9C065C59F3E5AE77FB049710EE2_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_1 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_Slice_m1D3852AEAC35396DF476C94E7C9FE3B63480A63B_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int64_t* L_5;
		L_5 = il2cpp_unsafe_add<int64_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_Slice_m99112BD452022D83AFFBA2F394D3F7FC4143FE7D_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_0 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int64_t* L_8;
		L_8 = il2cpp_unsafe_add<int64_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int64_t>(L_5);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_7 = __this->____pointer;
		V_0 = L_7;
		int64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mCC4EC36ABDD3020E07A70D7B2BD57CDCC7EE1EE3_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m732077720FEC16C4611EB21EE86797436F47663A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_op_Implicit_m715E874D8E8E8B7AA91823924610C5854E563216_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		RuntimeObject** L_9;
		L_9 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_8);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_15);
		int32_t L_17 = ___1_start;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_16, L_17);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer = L_19;
		int32_t L_20 = ___2_length;
		__this->____length = L_20;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD196947072A3F29E56F6B2320DBDE20828631A59_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_as_ref<RuntimeObject*>((uint8_t*)L_3);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_ptr;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Span_1_get_Item_mED06F596E018FA53DB0B7F3BF0EB2A1CF5366945_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_2 = __this->____pointer;
		V_0 = L_2;
		RuntimeObject** L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		RuntimeObject** L_5;
		L_5 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Span_1_GetPinnableReference_m29C17737D2C5AADC90597FFA93A62E9D3743C3E2_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject** L_1;
		L_1 = il2cpp_unsafe_as_ref<RuntimeObject*>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_2 = __this->____pointer;
		V_0 = L_2;
		RuntimeObject** L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE8440147924A10C96926501B80472DFE2576383A_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_0 = __this->____pointer;
		V_0 = L_0;
		RuntimeObject** L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)((int32_t)(L_4/L_5))))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m076FEFFBEE980474B0B4DDD1EB7ED878EF4B130B_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	RuntimeObject** V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_4 = __this->____pointer;
		V_2 = L_4;
		RuntimeObject** L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_12 = __this->____pointer;
		V_2 = L_12;
		RuntimeObject** L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		RuntimeObject** L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		RuntimeObject* L_19 = ___0_value;
		*(RuntimeObject**)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)L_19);
		RuntimeObject** L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		RuntimeObject** L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		RuntimeObject* L_24 = ___0_value;
		*(RuntimeObject**)L_23 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)L_24);
		RuntimeObject** L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		RuntimeObject* L_29 = ___0_value;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		RuntimeObject** L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		RuntimeObject** L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		RuntimeObject* L_34 = ___0_value;
		*(RuntimeObject**)L_33 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_33, (void*)L_34);
		RuntimeObject** L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		RuntimeObject** L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		RuntimeObject* L_39 = ___0_value;
		*(RuntimeObject**)L_38 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_39);
		RuntimeObject** L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		RuntimeObject** L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		RuntimeObject* L_44 = ___0_value;
		*(RuntimeObject**)L_43 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_43, (void*)L_44);
		RuntimeObject** L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		RuntimeObject** L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		RuntimeObject* L_49 = ___0_value;
		*(RuntimeObject**)L_48 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_48, (void*)L_49);
		RuntimeObject** L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		RuntimeObject** L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		RuntimeObject* L_54 = ___0_value;
		*(RuntimeObject**)L_53 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_53, (void*)L_54);
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		RuntimeObject** L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		RuntimeObject** L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		RuntimeObject* L_64 = ___0_value;
		*(RuntimeObject**)L_63 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_63, (void*)L_64);
		RuntimeObject** L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		RuntimeObject** L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		RuntimeObject* L_69 = ___0_value;
		*(RuntimeObject**)L_68 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_68, (void*)L_69);
		RuntimeObject** L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		RuntimeObject** L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		RuntimeObject* L_74 = ___0_value;
		*(RuntimeObject**)L_73 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_73, (void*)L_74);
		RuntimeObject** L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		RuntimeObject** L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		RuntimeObject* L_79 = ___0_value;
		*(RuntimeObject**)L_78 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_78, (void*)L_79);
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		RuntimeObject** L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		RuntimeObject** L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		RuntimeObject* L_85 = ___0_value;
		*(RuntimeObject**)L_84 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_84, (void*)L_85);
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF4CD91CD5D3EBBD434B5F9CC3F4F91A37AB5984D_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_2 = ___0_destination;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_3 = L_2.____pointer;
		V_0 = L_3;
		RuntimeObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_5 = __this->____pointer;
		V_0 = L_5;
		RuntimeObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m807B35740814FA9FAD0A8734F45019B6BC35C8A9_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_2 = ___0_destination;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_3 = L_2.____pointer;
		V_1 = L_3;
		RuntimeObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_1));
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_5 = __this->____pointer;
		V_1 = L_5;
		RuntimeObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 Span_1_op_Implicit_mD53EB4D25C23E1572636C01DFEAF1A9EF657DE7D_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_0 = ___0_span;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1 = L_0.____pointer;
		V_0 = L_1;
		RuntimeObject** L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m3C0BC7C800AE3D95D69AA8D0639E23C8A0EB3942_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_5 = __this->____pointer;
		V_1 = L_5;
		RuntimeObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 Span_1_Slice_mFB084B3E2F7E74E9C6D0249A25D7AF1DAFA37B00_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_2 = __this->____pointer;
		V_0 = L_2;
		RuntimeObject** L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		RuntimeObject** L_5;
		L_5 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 Span_1_Slice_mD62E87173D23164C641037162F7DF229A4DD772D_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_5 = __this->____pointer;
		V_0 = L_5;
		RuntimeObject** L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		RuntimeObject** L_8;
		L_8 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Span_1_ToArray_m048501CDA9FB43335CC9A0E27F7C13968F5AA999_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		RuntimeObject** L_6;
		L_6 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_5);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_7 = __this->____pointer;
		V_0 = L_7;
		RuntimeObject** L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m69706E4CE23FA4909D56BDCC0C622582CEB8A7F1_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBC410F47BFAE941EDB0C375AC807E0C32E7CB3FF_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 Span_1_op_Implicit_m880847D96585827EA2A199D7E8F531A2CAF33D8F_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		goto IL_0037;
	}

IL_0037:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int8_t>(L_3);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m984DAF4FBC5E9A17BE7275FB73036C1F1E324801_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int8_t>(L_10);
		int32_t L_12 = ___1_start;
		int8_t* L_13;
		L_13 = il2cpp_unsafe_add<int8_t,int32_t>(L_11, L_12);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9ECB9EFC03BF98C691F4ADEDDAD9A251D0452846_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int8_t>((uint8_t*)L_1);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_ptr;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Span_1_get_Item_m44CB387F5DBCBD564F6E9512EA08331E10CBDDC5_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_2 = __this->____pointer;
		V_0 = L_2;
		int8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int8_t* L_5;
		L_5 = il2cpp_unsafe_add<int8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Span_1_GetPinnableReference_m28D56E5B5E0BCDB327E5A8FCF14909B14D6EB969_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_2 = __this->____pointer;
		V_0 = L_2;
		int8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mBBB3F805C6637F2399B8B350C2E0B41DFB99DD8E_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_0 = __this->____pointer;
		V_0 = L_0;
		int8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m73B38BB1A57451ED7EF46534C2A05B01C8B4F5D2_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int8_t V_1 = 0x0;
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_4 = __this->____pointer;
		V_2 = L_4;
		int8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_12 = __this->____pointer;
		V_2 = L_12;
		int8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int8_t L_19 = ___0_value;
		*(int8_t*)L_18 = L_19;
		int8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int8_t L_24 = ___0_value;
		*(int8_t*)L_23 = L_24;
		int8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int8_t L_29 = ___0_value;
		*(int8_t*)L_28 = L_29;
		int8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int8_t L_34 = ___0_value;
		*(int8_t*)L_33 = L_34;
		int8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int8_t L_39 = ___0_value;
		*(int8_t*)L_38 = L_39;
		int8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int8_t L_44 = ___0_value;
		*(int8_t*)L_43 = L_44;
		int8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int8_t L_49 = ___0_value;
		*(int8_t*)L_48 = L_49;
		int8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int8_t L_54 = ___0_value;
		*(int8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int8_t L_64 = ___0_value;
		*(int8_t*)L_63 = L_64;
		int8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int8_t L_69 = ___0_value;
		*(int8_t*)L_68 = L_69;
		int8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int8_t L_74 = ___0_value;
		*(int8_t*)L_73 = L_74;
		int8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int8_t L_79 = ___0_value;
		*(int8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int8_t L_85 = ___0_value;
		*(int8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m5E8637B3A596494338327E1B1D99BFE6D6530A53_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_2 = ___0_destination;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3 = L_2.____pointer;
		V_0 = L_3;
		int8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_0 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m4555E6AA44ACC87286706FD135172FEDB15A8547_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_2 = ___0_destination;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3 = L_2.____pointer;
		V_1 = L_3;
		int8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_1 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC Span_1_op_Implicit_mEB5386CD324B698077FDFADB776603C569099F8C_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_0 = ___0_span;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_1 = L_0.____pointer;
		V_0 = L_1;
		int8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC4300808DBC547D98DCB1CAA434BDA430659517B_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_1 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 Span_1_Slice_m0C36CA415A4A00F0432A7C9AEB10EA4BD2C94587_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_2 = __this->____pointer;
		V_0 = L_2;
		int8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int8_t* L_5;
		L_5 = il2cpp_unsafe_add<int8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 Span_1_Slice_m7976AB7947E93CC67C17943C5CBE6D34B79291E2_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_0 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int8_t* L_8;
		L_8 = il2cpp_unsafe_add<int8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Span_1_ToArray_m3B383490D4FD606BE2411806B496ACA2CAA3AE2D_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int8_t>(L_5);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_7 = __this->____pointer;
		V_0 = L_7;
		int8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC42120D62951B62C99E4811AEF4EB7C564C4267C_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m12483FCF56DDC5FA8FEF7F8CAC2AB7F664AE2A03_gshared (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 Span_1_op_Implicit_mC73CC6DA4419750B1C83CAC45135E41F5907E8CB_gshared (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC2731788C7CB616BDD9477D53265DA06DC788E1F_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		float* L_11;
		L_11 = il2cpp_unsafe_as_ref<float>(L_10);
		int32_t L_12 = ___1_start;
		float* L_13;
		L_13 = il2cpp_unsafe_add<float,int32_t>(L_11, L_12);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_get_Item_mF6350A5455E12C7AFF2E3C3452232B73A5343BEE_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float* L_1;
		L_1 = il2cpp_unsafe_as_ref<float>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m521D995DEFD6B372D62A2D4ED58CB615A656E0E2_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_0 = __this->____pointer;
		V_0 = L_0;
		float* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<float>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mE5F739A0ED3DE473A64BBCEB9D204A86179900BB_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	float V_1 = 0.0f;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	float* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<float>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		float L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_4 = __this->____pointer;
		V_2 = L_4;
		float* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_12 = __this->____pointer;
		V_2 = L_12;
		float* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<float>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		float* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		float* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		float L_19 = ___0_value;
		*(float*)L_18 = L_19;
		float* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		float* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		float L_24 = ___0_value;
		*(float*)L_23 = L_24;
		float* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		float* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		float L_29 = ___0_value;
		*(float*)L_28 = L_29;
		float* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		float* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		float L_34 = ___0_value;
		*(float*)L_33 = L_34;
		float* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		float* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		float L_39 = ___0_value;
		*(float*)L_38 = L_39;
		float* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		float* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		float L_44 = ___0_value;
		*(float*)L_43 = L_44;
		float* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		float* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		float L_49 = ___0_value;
		*(float*)L_48 = L_49;
		float* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		float* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		float L_54 = ___0_value;
		*(float*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		float* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		float* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		float L_64 = ___0_value;
		*(float*)L_63 = L_64;
		float* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		float* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		float L_69 = ___0_value;
		*(float*)L_68 = L_69;
		float* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		float* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		float L_74 = ___0_value;
		*(float*)L_73 = L_74;
		float* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		float* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		float L_79 = ___0_value;
		*(float*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		float* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		float* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		float L_85 = ___0_value;
		*(float*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m622FEA536F071E2F732664FEE4C3F49F60720853_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_0 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA8236BB567B98CE0F6BB0EED9CF1E27D53611B28_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_1 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_1 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_0 = ___0_span;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1 = L_0.____pointer;
		V_0 = L_1;
		float* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD58A3F7E334C1E37B8F2E2266DE89A2E67A68574_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_1 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_Slice_mD2575575D9ACF2D548DE2DA6DB1FFB36CD923508_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_Slice_mBA215A512B958A2D696F1FC47073FA9453553B8E_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		float* L_8;
		L_8 = il2cpp_unsafe_add<float,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7EE91A3706295633E217636FE45CBB5DD8A76404_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF2A430BCD36FB8331FD4CE77443388F381319EC1_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_op_Implicit_m1CCE9A46E23410F893315674231D60515AB767A8_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88D9BE6D0BF5FDFDF1EC95538768786944AA873A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint16_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint16_t>(L_10);
		int32_t L_12 = ___1_start;
		uint16_t* L_13;
		L_13 = il2cpp_unsafe_add<uint16_t,int32_t>(L_11, L_12);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_get_Item_m51DF8F9B68EB998FCFF5DE6A753DEC3D3BE61D30_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_GetPinnableReference_m2084184F17A5461CA1BD4D2364E1423E83775299_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint16_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint16_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0935AE3C29451F430E10E1C162F4B2767137CC57_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_0 = __this->____pointer;
		V_0 = L_0;
		uint16_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint16_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m1739BAAE7DCB30488B41A98BE7F70F2C3E2A683B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint16_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint16_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4 = __this->____pointer;
		V_2 = L_4;
		uint16_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_12 = __this->____pointer;
		V_2 = L_12;
		uint16_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint16_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint16_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint16_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint16_t L_19 = ___0_value;
		*(uint16_t*)L_18 = L_19;
		uint16_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint16_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint16_t L_24 = ___0_value;
		*(uint16_t*)L_23 = L_24;
		uint16_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint16_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint16_t L_29 = ___0_value;
		*(uint16_t*)L_28 = L_29;
		uint16_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint16_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint16_t L_34 = ___0_value;
		*(uint16_t*)L_33 = L_34;
		uint16_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint16_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint16_t L_39 = ___0_value;
		*(uint16_t*)L_38 = L_39;
		uint16_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint16_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint16_t L_44 = ___0_value;
		*(uint16_t*)L_43 = L_44;
		uint16_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint16_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint16_t L_49 = ___0_value;
		*(uint16_t*)L_48 = L_49;
		uint16_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint16_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint16_t L_54 = ___0_value;
		*(uint16_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint16_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint16_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint16_t L_64 = ___0_value;
		*(uint16_t*)L_63 = L_64;
		uint16_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint16_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint16_t L_69 = ___0_value;
		*(uint16_t*)L_68 = L_69;
		uint16_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint16_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint16_t L_74 = ___0_value;
		*(uint16_t*)L_73 = L_74;
		uint16_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint16_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint16_t L_79 = ___0_value;
		*(uint16_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint16_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint16_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint16_t L_85 = ___0_value;
		*(uint16_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m1E3344EA531D3CEBB2D498C960EA1E11D3042E89_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_0 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m8B92037E39DBEC33F5EFF019B694C6F8422F6254_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_1 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F Span_1_op_Implicit_m2BCA68E89516F4E0AD7CF9A9513466D4837140F8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_0 = ___0_span;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1 = L_0.____pointer;
		V_0 = L_1;
		uint16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC92A31A501B7BC12A11981C1C3D653971D37E35C_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_m60CA4425F69A57B604820588F7299CE6056B9BF7_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_mD475695D1F124D1A5F0514CB93BF8B2D12FFF09A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint16_t* L_8;
		L_8 = il2cpp_unsafe_add<uint16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m658BC08F24940E68B344C2623996A8BAA8506DFF_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m0DD2A2BE777631909AB6BC8EB9C8C50A65227EF8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_op_Implicit_mDFEC7007D8B0366E7FB8FA350AC4D3F3EAFB4EA7_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m660EEF593C35EC36D687474C6F23E166CD9F31D9_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint32_t>(L_10);
		int32_t L_12 = ___1_start;
		uint32_t* L_13;
		L_13 = il2cpp_unsafe_add<uint32_t,int32_t>(L_11, L_12);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_1);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m02A8F30DBE1911D7E5357E864D231529455D1963_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_GetPinnableReference_m296F8EBB04F54E3973579C184284BEFAA947B759_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m2B78C0269CD984BA3EDE84E92E7D0405F534E396_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_0 = __this->____pointer;
		V_0 = L_0;
		uint32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m8EC6942077811D5BDD7FE56421443067FD9B57B8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4 = __this->____pointer;
		V_2 = L_4;
		uint32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_12 = __this->____pointer;
		V_2 = L_12;
		uint32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint32_t L_19 = ___0_value;
		*(uint32_t*)L_18 = L_19;
		uint32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint32_t L_24 = ___0_value;
		*(uint32_t*)L_23 = L_24;
		uint32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint32_t L_29 = ___0_value;
		*(uint32_t*)L_28 = L_29;
		uint32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint32_t L_34 = ___0_value;
		*(uint32_t*)L_33 = L_34;
		uint32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint32_t L_39 = ___0_value;
		*(uint32_t*)L_38 = L_39;
		uint32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint32_t L_44 = ___0_value;
		*(uint32_t*)L_43 = L_44;
		uint32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint32_t L_49 = ___0_value;
		*(uint32_t*)L_48 = L_49;
		uint32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint32_t L_54 = ___0_value;
		*(uint32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint32_t L_64 = ___0_value;
		*(uint32_t*)L_63 = L_64;
		uint32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint32_t L_69 = ___0_value;
		*(uint32_t*)L_68 = L_69;
		uint32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint32_t L_74 = ___0_value;
		*(uint32_t*)L_73 = L_74;
		uint32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint32_t L_79 = ___0_value;
		*(uint32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint32_t L_85 = ___0_value;
		*(uint32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m45ED9076CBEDB2D4CA30A83E16D9BEE75626A9FF_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44CEE930589FCECFE9020025FFB505DD707B2D5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 Span_1_op_Implicit_m030D7D0A16134F1819235F6051864FF9A776A1F6_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_0 = ___0_span;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD3E4D84FCE98C375E6C9F2162A57B2395B398873_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_m0F9C99478BF7174C4DDEA1889C51F3FA1B7A0234_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_mD2B8E011F70C9E2504AF31237A6738E6BDB321A5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Span_1_ToArray_m69464A7BA0B38D8637E326F94C6FBBB031DF39C4_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint32_t>(L_5);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_7 = __this->____pointer;
		V_0 = L_7;
		uint32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mBCA1DE3F35219C89B8834EC233C51D4CF12DF5A8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m8ADDE3CC62F09D09699842E5024D67145223201D_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_op_Implicit_m5689B5F42218BA135D8CF5E828BF56EFB7FF7FBD_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mACE9723FAD4FABB5DB3492127924E7DED70D581F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint64_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint64_t>(L_10);
		int32_t L_12 = ___1_start;
		uint64_t* L_13;
		L_13 = il2cpp_unsafe_add<uint64_t,int32_t>(L_11, L_12);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88AFBBE67F3E951762332D952D09441CB09F29B8_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint64_t>((uint8_t*)L_1);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_get_Item_m30051484137413775875E0518C56A0F7562A62AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_GetPinnableReference_m8E9CCA07F04C35E18E9D852F9221816617DFF043_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint64_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint64_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE1DD2BC27D0EE4070148EC36656CB584143712DD_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_0 = __this->____pointer;
		V_0 = L_0;
		uint64_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint64_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mDA5F8A3B92B36549BDE83CCF74C6B56A77B077AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint64_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint64_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint64_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_4 = __this->____pointer;
		V_2 = L_4;
		uint64_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_12 = __this->____pointer;
		V_2 = L_12;
		uint64_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint64_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint64_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint64_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint64_t L_19 = ___0_value;
		*(uint64_t*)L_18 = L_19;
		uint64_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint64_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint64_t L_24 = ___0_value;
		*(uint64_t*)L_23 = L_24;
		uint64_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint64_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint64_t L_29 = ___0_value;
		*(uint64_t*)L_28 = L_29;
		uint64_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint64_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint64_t L_34 = ___0_value;
		*(uint64_t*)L_33 = L_34;
		uint64_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint64_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint64_t L_39 = ___0_value;
		*(uint64_t*)L_38 = L_39;
		uint64_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint64_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint64_t L_44 = ___0_value;
		*(uint64_t*)L_43 = L_44;
		uint64_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint64_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint64_t L_49 = ___0_value;
		*(uint64_t*)L_48 = L_49;
		uint64_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint64_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint64_t L_54 = ___0_value;
		*(uint64_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint64_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint64_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint64_t L_64 = ___0_value;
		*(uint64_t*)L_63 = L_64;
		uint64_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint64_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint64_t L_69 = ___0_value;
		*(uint64_t*)L_68 = L_69;
		uint64_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint64_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint64_t L_74 = ___0_value;
		*(uint64_t*)L_73 = L_74;
		uint64_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint64_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint64_t L_79 = ___0_value;
		*(uint64_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint64_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint64_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint64_t L_85 = ___0_value;
		*(uint64_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4F011B6E94BE67BF00E6EEF0F52FC07C6143590D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mAB8D99AE7F7B967B3A5381D38CA35D489ED76345_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F Span_1_op_Implicit_mF533047803AD7D0C594E51DBD4C261DA5D5E370D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_0 = ___0_span;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint64_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6E70F419212ED46A47A2900761157E051D0A88D7_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m0B26EE6F75B6659A26656BAF1AE818DD4FF1C376_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m66C540ED824CAA1711823B4BF222E5F30BC81573_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint64_t* L_8;
		L_8 = il2cpp_unsafe_add<uint64_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Span_1_ToArray_mE0817125C69F368855E8B03DE0BA9F37FA32377E_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint64_t>(L_5);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_7 = __this->____pointer;
		V_0 = L_7;
		uint64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m96D35BF7B64CE4FB8444E07FC1FC616FFD98825F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m315CB2A6699FD8608FEA6FFEC966216869215960_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_op_Implicit_m921D52D34E89E0735644236C2846D3DC7A41B774_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___1_start;
		if ((!(((uint32_t)L_12) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck((RuntimeArray*)L_15);
		uint8_t* L_16;
		L_16 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_15, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_16);
		int32_t L_18 = ___1_start;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_20), L_19);
		__this->____pointer = L_20;
		int32_t L_21 = ___2_length;
		__this->____length = L_21;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m11A4E1CD4E1718E30A0C2DA5934B04EDE635A447_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = __this->____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		intptr_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<intptr_t>(L_2);
		int32_t L_4 = __this->____length;
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_6;
		L_6 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_3, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_4), ((int64_t)((int32_t)(L_5/L_6))))), NULL);
		return;
	}

IL_0034:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_as_ref<uint8_t>(L_8);
		int32_t L_10 = __this->____length;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_9, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_10), ((int64_t)L_11))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m6EAE11FECC435B38881A2D1F4D4575D178BCE162_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_19 = L_3;
	const Il2CppFullySharedGenericAny L_64 = L_3;
	const Il2CppFullySharedGenericAny L_85 = L_3;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_69 = L_24;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_74 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_79 = L_34;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_1, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppFullySharedGenericAny* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)V_1);
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppFullySharedGenericAny* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppFullySharedGenericAny* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_19, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_19);
		Il2CppFullySharedGenericAny* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppFullySharedGenericAny* L_23;
		L_23 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_23, L_24, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_23, (void*)L_24);
		Il2CppFullySharedGenericAny* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_28, L_29, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_28, (void*)L_29);
		Il2CppFullySharedGenericAny* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppFullySharedGenericAny* L_33;
		L_33 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, L_34, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)L_34);
		Il2CppFullySharedGenericAny* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppFullySharedGenericAny* L_38;
		L_38 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_39, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_39);
		Il2CppFullySharedGenericAny* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppFullySharedGenericAny* L_43;
		L_43 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_43, L_44, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_43, (void*)L_44);
		Il2CppFullySharedGenericAny* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppFullySharedGenericAny* L_48;
		L_48 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, L_49, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)L_49);
		Il2CppFullySharedGenericAny* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppFullySharedGenericAny* L_53;
		L_53 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_54, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_54);
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppFullySharedGenericAny* L_63;
		L_63 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_63, L_64, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_63, (void*)L_64);
		Il2CppFullySharedGenericAny* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppFullySharedGenericAny* L_68;
		L_68 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_68, L_69, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_68, (void*)L_69);
		Il2CppFullySharedGenericAny* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppFullySharedGenericAny* L_73;
		L_73 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_74, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_73, L_74, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_73, (void*)L_74);
		Il2CppFullySharedGenericAny* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppFullySharedGenericAny* L_78;
		L_78 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_79, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_78, L_79, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_78, (void*)L_79);
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppFullySharedGenericAny* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppFullySharedGenericAny* L_84;
		L_84 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_85, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_84, L_85, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_84, (void*)L_85);
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_mC857EC48EAC26C4D9A5C6302BA08A7796020C8E1_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m40491EA378B979FB91CD7BC368CA95BE931D13F0_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3061054FFC5FFBF234FA34F5319A12C2E9241B3F_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m835EE9E3B6A134B4BAB7901843AAF2E8FA962B8E_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		il2cpp_codegen_memory_barrier();
		__this->___m_array = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SparseArray_1_get_Current_m0FCEEF0118EEDEB25CD8A7FB6E38D1BBC12F86AF_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_mFA82FEC4F7D90A91283709B10F5151F2A7C2ADF0_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;

IL_0000:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0097;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0097:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				V_3 = 0;
				goto IL_0083_1;
			}

IL_0019_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				if (L_8)
				{
					goto IL_0039_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11 = ___0_e;
				VolatileWrite((RuntimeObject**)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), (RuntimeObject*)L_11);
				int32_t L_12 = V_3;
				V_4 = L_12;
				goto IL_0098;
			}

IL_0039_1:
			{
				int32_t L_13 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
				NullCheck(L_14);
				if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1))))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				if ((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_15) == ((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
				NullCheck(L_17);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)));
				V_5 = L_18;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_5;
				int32_t L_21 = V_3;
				Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_19, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_5;
				int32_t L_23 = V_3;
				RuntimeObject* L_24 = ___0_e;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (RuntimeObject*)L_24);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_5;
				il2cpp_codegen_memory_barrier();
				__this->___m_array = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_25);
				int32_t L_26 = V_3;
				V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_0098;
			}

IL_007f_1:
			{
				int32_t L_27 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_0083_1:
			{
				int32_t L_28 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_0;
				NullCheck(L_29);
				if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0000;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		int32_t L_30 = V_4;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1_Remove_mC48EB2673EB8C6ABDA639D24E83B75A2F4189EB9_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006c;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0054_1;
			}

IL_0017_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				RuntimeObject* L_8 = ___0_e;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
				{
					goto IL_0050_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_10 = V_2;
				NullCheck(L_9);
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_11 = V_3;
				VolatileWrite((RuntimeObject**)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), (RuntimeObject*)L_11);
				goto IL_006d;
			}

IL_0050_1:
			{
				int32_t L_12 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0054_1:
			{
				int32_t L_13 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = ___0_source;
		__this->____source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->____index = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_AdjustorThunk (RuntimeObject* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458(_thisAdjusted, ___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_size;
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(__this, L_0, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_0);
		__this->____elements = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_1);
		int32_t L_2 = ___0_size;
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = L_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = ___1_prev;
		il2cpp_codegen_memory_barrier();
		__this->____prev = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_get_Item_mEF1B53A93D46F6F69F18517CF5472F67BCE45C38_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VolatileRead(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayFragment_1_get_Prev_m549822EBEA5C7E59A7EAC7B83D621B72E822A8FA_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____prev;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_SafeAtomicRemove_m41CC9DA2BF22A6BD80CE1F09B5F56031C6EE67FC_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, RuntimeObject* ___1_expectedElement, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = ___1_expectedElement;
		RuntimeObject* L_4;
		L_4 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_2, L_3);
		RuntimeObject* L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_0035;
		}
		G_B1_0 = L_5;
	}
	{
		int32_t L_6 = __this->____freeCount;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B2_0 = G_B1_0;
	}

IL_0035:
	{
		return G_B2_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArray_1__ctor_m13D75BA18ED19BF0AE6E4AB201C66718D56D0643_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_2);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = V_0;
		__this->____head = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____head), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArray_1_get_Tail_m28175FF31A3507C7DDE945D58B2ADEA01D07B64C_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D SparselyPopulatedArray_1_Add_mE99CA2479CB966676495F0908849E6ADE8C79CDB_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_1 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B15_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B16_1 = NULL;
	int32_t G_B24_0 = 0;

IL_0000:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		goto IL_001d;
	}

IL_000b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = V_0;
		NullCheck(L_1);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1->____next;
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = L_2;
		V_0 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_3);
	}

IL_001d:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_4 = V_0;
		NullCheck(L_4);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_5 = L_4->____next;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_6 = V_0;
		V_1 = L_6;
		goto IL_0115;
	}

IL_002e:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_9 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_10);
		il2cpp_codegen_memory_barrier();
		L_10->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_004b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)-10))))
		{
			goto IL_010c;
		}
	}

IL_0065:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_3 = L_17;
		int32_t L_18 = V_3;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____freeCount;
		il2cpp_codegen_memory_barrier();
		int32_t L_21 = V_3;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, L_20))%L_21));
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		V_4 = 0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_23 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_24 = L_23;
		NullCheck(L_24);
		int32_t L_25 = L_24->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0094:
	{
		V_5 = 0;
		goto IL_0107;
	}

IL_0099:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, L_27))%L_28));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_29 = V_1;
		NullCheck(L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29->____elements;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if (L_33)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_34 = V_1;
		NullCheck(L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34->____elements;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		RuntimeObject* L_37 = ___0_element;
		il2cpp_codegen_initobj((&V_7), sizeof(RuntimeObject*));
		RuntimeObject* L_38 = V_7;
		RuntimeObject* L_39;
		L_39 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), L_37, L_38);
		if (L_39)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->____freeCount;
		il2cpp_codegen_memory_barrier();
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_42 = V_1;
		int32_t L_43 = V_8;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B15_0 = L_42;
			goto IL_00ef;
		}
		G_B14_0 = L_42;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00f1;
	}

IL_00ef:
	{
		int32_t L_44 = V_8;
		G_B16_0 = L_44;
		G_B16_1 = G_B15_0;
	}

IL_00f1:
	{
		NullCheck(G_B16_1);
		il2cpp_codegen_memory_barrier();
		G_B16_1->____freeCount = G_B16_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_45 = V_1;
		int32_t L_46 = V_6;
		SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D L_47;
		memset((&L_47), 0, sizeof(L_47));
		SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458((&L_47), L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_47;
	}

IL_0101:
	{
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0107:
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0099;
		}
	}

IL_010c:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_51 = V_1;
		NullCheck(L_51);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_52 = L_51->____prev;
		il2cpp_codegen_memory_barrier();
		V_1 = L_52;
	}

IL_0115:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_53 = V_1;
		if (L_53)
		{
			goto IL_002e;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_54 = V_0;
		NullCheck(L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_54->____elements;
		NullCheck(L_55);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0136;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_56 = V_0;
		NullCheck(L_56);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56->____elements;
		NullCheck(L_57);
		G_B24_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_57)->max_length)), 2));
		goto IL_013b;
	}

IL_0136:
	{
		G_B24_0 = ((int32_t)4096);
	}

IL_013b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_58 = V_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_59 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(L_59, G_B24_0, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_2 = L_59;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_60 = V_0;
		NullCheck(L_60);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC** L_61 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC**)(&L_60->____next);
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_62 = V_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_63;
		L_63 = InterlockedCompareExchangeImpl<SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*>(L_61, L_62, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL);
		if (L_63)
		{
			goto IL_0000;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_64 = V_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_64);
		goto IL_0000;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 StackFormatter_1_GetCount_mFF15B148AA3F20088CBD36B15FD82DA0D162B3C6_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___0_sequence, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_0 = ___0_sequence;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_2), L_1, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFormatter_1_Add_m3AACA783DB0DBC9E22ECA1426C742E5399719774_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_collection, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, MessagePackSerializerOptions_t6356E2266D4FA5A0334004939D1C37D105B23356* ___3_options, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7B6D4141203F2B90D3827CC76CA15ED4D0088A95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t7B6D4141203F2B90D3827CC76CA15ED4D0088A95);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_collection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_collection;
		NullCheck(L_1);
		if (((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)) - (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)) - (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		int32_t L_2 = ___1_index;
		if (((int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)) - (int64_t)L_2 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)) - (int64_t)L_2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___2_value : &___2_value), SizeOf_T_t7B6D4141203F2B90D3827CC76CA15ED4D0088A95);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2)))), L_3, SizeOf_T_t7B6D4141203F2B90D3827CC76CA15ED4D0088A95);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* StackFormatter_1_Create_m77BAC45BAEADA28E2ADD7C36EE89B84EB00AE32A_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, int32_t ___0_count, MessagePackSerializerOptions_t6356E2266D4FA5A0334004939D1C37D105B23356* ___1_options, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___0_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (uint32_t)L_1);
		return L_2;
	}

IL_000a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFormatter_1_GetSourceEnumerator_mBEDD7D244B508E20763FEB466254332959A5D994_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___0_source, Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t04E8B278BAC906D0749519D1BE347B4B3C932020 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41 L_1 = alloca(SizeOf_Enumerator_t04E8B278BAC906D0749519D1BE347B4B3C932020);
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_0 = ___0_source;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_0, (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_t04E8B278BAC906D0749519D1BE347B4B3C932020);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* StackFormatter_1_Complete_mCE3753BC2B26618BF4CACB3B0B4D28F182013E31_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_intermediateCollection, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_intermediateCollection;
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_1 = (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFormatter_1__ctor_m7A802AD30430B90C286FAEB2A611E4762B6FC685_gshared (StackFormatter_1_tDFD80D25A4FEF1FD6AF71727AE2DB15A591D35C4* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (CollectionFormatterBase_4_t64CAD9344C5BA7B735D0B4FB4BD405FA6159AB78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((CollectionFormatterBase_4_t64CAD9344C5BA7B735D0B4FB4BD405FA6159AB78*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackItem__ctor_mD824B8B1E5C80942625942B46A707730C703FFCF_gshared (StackItem_t653DA96524E2146197E46E4AB44EB360B1531DEB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m055611BBF5D7F2430087C6EABCB9BC26D63A5A86_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_0;
		L_0 = Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m46DD76975EFBD5B93BC11E70D6913FD309B1B20F_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_6 = (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186*)(RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mE5A454B43CEB6E63BBB24990F54465957AAEA48A_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		int32_t* L_3 = (int32_t*)(&__this->____size);
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_4;
		L_4 = EnumerableHelpers_ToArray_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mE9205A140F2D330F1BD67CA68ECE924B2D0B0DA3(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____array = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mEA253BA6F030F96B99200FB32493FAC08D780726_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m562B1222BD6EDFB866A4F0AB1466C180DA1BA13D_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mEF51EC741AC77308E3ECA0722FFEB6820EB68B51_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD9954C05CDB5BB25C8616B6D18AC6BEDF2EBE553_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_0 = __this->____array;
		int32_t L_1 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_1, NULL);
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m9F747D7B5E7C65971D54D98280213A9FB831F1FB_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1 = __this->____array;
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m101739DBA13BD2E5477EAF85123BA08D6DD13500(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_mD658E09FABEF2037B712739C876E8815443BBD4B_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_28 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC Stack_1_GetEnumerator_m5375225AC86A902981364E6244F8A2C210303D71_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE76A638AE31095126D08BBC0FCF3D01A17951FCA_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m5AFE9FC7C057FCF583FD3F757E5A1A32424465A3_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1CA9573AF6376E9DE5D01340BC438666D124CB13((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Enumerator_t6C87A4CFDE2206491F41A95637BE2F6F5222FABC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 Stack_1_Peek_m13B3571DB4F7AD55FA9D94D0C11303D5998C8C5A_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_001c:
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 Stack_1_Pop_m95D85369A808CE1F53B10DCF794455ED8CDA3469_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* V_1 = NULL;
	RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_10 = V_1;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654));
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654)L_12);
		G_B4_0 = G_B3_0;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m4126754E3719961D12646C784767E5B44E0708AD_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_4 = V_1;
		int32_t L_5 = V_0;
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_9 = ___0_item;
		Stack_1_PushWithResize_m5677326E0EDDCB6AD5639B14C6BE13B2A75B57CB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m5677326E0EDDCB6AD5639B14C6BE13B2A75B57CB_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 ___0_item, const RuntimeMethod* method) 
{
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** G_B2_0 = NULL;
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** G_B3_1 = NULL;
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186** L_0 = (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186**)(&__this->____array);
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_mA42860625ED6BBDD2ACFC27AD9ABDE2680695217(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* Stack_1_ToArray_m5E7A418232192CA0C0D4EF59AEE160786C2D8A91_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_1;
		L_1 = Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_3 = (RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186*)(RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_003e;
	}

IL_001e:
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_4 = V_0;
		int32_t L_5 = V_1;
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_6 = __this->____array;
		int32_t L_7 = __this->____size;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_7, L_8)), 1));
		RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001e;
		}
	}
	{
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m4C37721B5BEFB577136A37C100C0D1898A078EEE_gshared (Stack_1_tA3F4A536EC8EE3E2546DD6381768C08B6EBAFE67* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8155B5A5DAD4EA144338619BB74A1AF1F87D7B81_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2B475CBFEFACA6D994548A5D392E1298CA032FC1_gshared_inline (ReadOnlySpan_1_t6C25C5184BD66C5297687E92750CF85798A61027* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___0_ptr;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF0BEBC4674822232BFFDC78377A4185E81DDF434_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___0_ptr;
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* Array_Empty_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m6115D17317B2AF8AA0303DC246C9AAD374AF06C8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_0 = ((EmptyArray_1_t96B040F4BF053B4ED2604BA694C8D9CBB7825DC8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82A39B6E490DE6E258DC460C45081944A7E60BC9_gshared_inline (Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21* __this, DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___0_array, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t12A63DE4B3D3E8E0ECFD3FE34E1ACCF89F0A1E21));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		goto IL_0037;
	}

IL_0037:
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4;
		L_4 = il2cpp_unsafe_as_ref<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D>(L_3);
		ByReference_1_tA15586C3B6CC04F8424B486E52309B018777ABC9 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF0E1572F595F2AA82CFE9D2FDB0D4042B7560055_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m797F2DE9AA443DFFE514A90CAB4BF2C178CD20DF_gshared_inline (ReadOnlySpan_1_t250AE73243C38F11359D5893C13DA6C99B430FB8* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_0 = ___0_ptr;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0D0027198288D313B5D6C81C9FD2C22A64364B14_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_0 = ___0_ptr;
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* Array_Empty_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mC98FAA3CFD315D818E32457F5EF71F26B15EC888_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_0 = ((EmptyArray_1_tCAD8E960832A00501F7F5DD8A7542D90C2DE0F76_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9596F297DB4365E8A832B664B01DEBE0A7810341_gshared_inline (Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9* __this, DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___0_array, const RuntimeMethod* method) 
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t402A380D028D0B0EEAE28DCE149CE88B121B2CB9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4));
		goto IL_0037;
	}

IL_0037:
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* L_4;
		L_4 = il2cpp_unsafe_as_ref<DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4>(L_3);
		ByReference_1_t0FF212D171885AC7905E0C0B3A79D9A1211B41E5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m1C71AC03559FC201FD828719B13ABF20AF8E7C42_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m901386166636013603AB6BC43BEB0DB15EAC7F7B_gshared_inline (ReadOnlySpan_1_t172B00B98D08F5F55C39F09BDF546FAFB741C478* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_ptr;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2EE51890CC57839C3D2E7199593A90CEA1F8E065_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, double* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_ptr;
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Array_Empty_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF89F13D8A053414088C583CBE8BA17D9BA7DDEC3_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ((EmptyArray_1_t1E899EF0A8B333E488C10E6CEF9FA35AF52A82FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDDCE6C5F3EFF8BEBF6BFB70AC69DB48758F1A1F4_gshared_inline (Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t49889ACD274FAD18EF7DE6B84826A3AACAEE32B5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		goto IL_0037;
	}

IL_0037:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		double* L_4;
		L_4 = il2cpp_unsafe_as_ref<double>(L_3);
		ByReference_1_t4505442DB99F393450BB394E5A719E096875B1AC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ((EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0037;
	}

IL_0037:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Guid_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<Guid_t>(L_3);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_gshared_inline (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_ptr;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA6D497B62BAF63B93ECB194587454223C52951CC_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_ptr;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ((EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD647668626E700F20A7147EEEA677B38F2C46FEE_gshared_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC1B695440A1567664C2665D76D5614739FDF453D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int16_t>(L_3);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ((EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int64_t>(L_3);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m0B5336E05EEAAE122DF68A3A82C2D4359A2BE33D_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_ptr;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_ptr;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8DB171982E2F26182BA531AC18EEAA27D52763EE_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		RuntimeObject** L_9;
		L_9 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_8);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_gshared_inline (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_ptr;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA974AFDCD35D895EAD5E356146AD6C8682F2738A_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_ptr;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ((EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m08998C4090851C62879905634F774B4D4A1B3221_gshared_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		goto IL_0037;
	}

IL_0037:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int8_t>(L_3);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* Array_Empty_TisRefAsValueType_1_t4782DEE731ECCA9680D45996CB400BD7EA1A0654_m82361CB24EBE3B6C36CB18376DF3A1C7F6EE7228_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RefAsValueType_1U5BU5D_t0FA919E635B60BCB363285A8066D34DF6E552186* L_0 = ((EmptyArray_1_tD44919E2B605D341F68CD611C3D99481A875DFDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
