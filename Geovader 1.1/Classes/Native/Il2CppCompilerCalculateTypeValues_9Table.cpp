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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t190603108;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3481652266;
// System.Collections.ArrayList
struct ArrayList_t2646369124;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1810823944;
// System.Byte[]
struct ByteU5BU5D_t846009489;
// System.AsyncCallback
struct AsyncCallback_t1102503424;
// System.Exception
struct Exception_t3153244288;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t878851730;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2306673765;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1153302872;
// System.IO.Stream
struct Stream_t4261191733;
// Mono.Security.Protocol.Tls.Context
struct Context_t3003248080;
// System.Collections.Hashtable
struct Hashtable_t4126833402;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2442847053;
// System.Collections.IEnumerator
struct IEnumerator_t1808681291;
// Mono.Security.X509.X509Store
struct X509Store_t3195287687;
// Mono.Security.X509.X509Stores
struct X509Stores_t3967370735;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t525204915;
// System.UInt32[]
struct UInt32U5BU5D_t657407019;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t2272621373;
// Mono.Math.BigInteger
struct BigInteger_t3343915020;
// System.Void
struct Void_t3007105787;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t4193664857;
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t3874166035;
// System.Char[]
struct CharU5BU5D_t3152716171;
// System.Security.Cryptography.RSA
struct RSA_t258460123;
// System.IO.MemoryStream
struct MemoryStream_t1752964049;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t262916275;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3018104882;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t4116469292;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t929836278;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3316567174;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t554174953;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t2320646023;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t4158131631;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t4288934298;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1116865091;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2505716966;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3568751158;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1328949861;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2905308919;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t667294382;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t3790775089;
// System.String[]
struct StringU5BU5D_t62953633;
// System.Int32[]
struct Int32U5BU5D_t790510266;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2769113024;
// System.Security.Cryptography.DSA
struct DSA_t1437237631;
// System.EventArgs
struct EventArgs_t2285369582;
// System.IAsyncResult
struct IAsyncResult_t2118572072;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3901467752;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2045369167;




#ifndef U3CMODULEU3E_T1934358505_H
#define U3CMODULEU3E_T1934358505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1934358505 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1934358505_H
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
#ifndef CONTENTINFO_T1810823944_H
#define CONTENTINFO_T1810823944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t1810823944  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t190603108 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t1810823944, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t1810823944, ___content_1)); }
	inline ASN1_t190603108 * get_content_1() const { return ___content_1; }
	inline ASN1_t190603108 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t190603108 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T1810823944_H
#ifndef X509STORE_T3195287687_H
#define X509STORE_T3195287687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t3195287687  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t3481652266 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t2646369124 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t3195287687, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t3195287687, ____certificates_1)); }
	inline X509CertificateCollection_t3481652266 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t3481652266 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t3481652266 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t3195287687, ____crls_2)); }
	inline ArrayList_t2646369124 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t2646369124 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t2646369124 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t3195287687, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T3195287687_H
#ifndef ENCRYPTEDDATA_T3594288597_H
#define ENCRYPTEDDATA_T3594288597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3594288597  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t1810823944 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t1810823944 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t846009489* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3594288597, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3594288597, ____content_1)); }
	inline ContentInfo_t1810823944 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t1810823944 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t1810823944 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3594288597, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t1810823944 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t1810823944 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t1810823944 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3594288597, ____encrypted_3)); }
	inline ByteU5BU5D_t846009489* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t846009489** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t846009489* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3594288597_H
#ifndef SENDRECORDASYNCRESULT_T2468562178_H
#define SENDRECORDASYNCRESULT_T2468562178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct  SendRecordAsyncResult_t2468562178  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t1102503424 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t3153244288 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t878851730 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t2306673765 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ____userCallback_1)); }
	inline AsyncCallback_t1102503424 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t1102503424 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t1102503424 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ____asyncException_3)); }
	inline Exception_t3153244288 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t3153244288 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t3153244288 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ___handle_4)); }
	inline ManualResetEvent_t878851730 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t878851730 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t878851730 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__message_5() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ____message_5)); }
	inline HandshakeMessage_t2306673765 * get__message_5() const { return ____message_5; }
	inline HandshakeMessage_t2306673765 ** get_address_of__message_5() { return &____message_5; }
	inline void set__message_5(HandshakeMessage_t2306673765 * value)
	{
		____message_5 = value;
		Il2CppCodeGenWriteBarrier((&____message_5), value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2468562178, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDRECORDASYNCRESULT_T2468562178_H
#ifndef CRYPTOCONVERT_T595715730_H
#define CRYPTOCONVERT_T595715730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t595715730  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T595715730_H
#ifndef KEYBUILDER_T1513841246_H
#define KEYBUILDER_T1513841246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1513841246  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1513841246_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t1153302872 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1513841246_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t1153302872 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t1153302872 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t1153302872 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1513841246_H
#ifndef RECEIVERECORDASYNCRESULT_T4198486377_H
#define RECEIVERECORDASYNCRESULT_T4198486377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t4198486377  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t1102503424 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t3153244288 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t878851730 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t846009489* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t4261191733 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t846009489* ____initialBuffer_8;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____userCallback_1)); }
	inline AsyncCallback_t1102503424 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t1102503424 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t1102503424 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____asyncException_3)); }
	inline Exception_t3153244288 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t3153244288 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t3153244288 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ___handle_4)); }
	inline ManualResetEvent_t878851730 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t878851730 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t878851730 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__resultingBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____resultingBuffer_5)); }
	inline ByteU5BU5D_t846009489* get__resultingBuffer_5() const { return ____resultingBuffer_5; }
	inline ByteU5BU5D_t846009489** get_address_of__resultingBuffer_5() { return &____resultingBuffer_5; }
	inline void set__resultingBuffer_5(ByteU5BU5D_t846009489* value)
	{
		____resultingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____resultingBuffer_5), value);
	}

	inline static int32_t get_offset_of__record_6() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____record_6)); }
	inline Stream_t4261191733 * get__record_6() const { return ____record_6; }
	inline Stream_t4261191733 ** get_address_of__record_6() { return &____record_6; }
	inline void set__record_6(Stream_t4261191733 * value)
	{
		____record_6 = value;
		Il2CppCodeGenWriteBarrier((&____record_6), value);
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of__initialBuffer_8() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t4198486377, ____initialBuffer_8)); }
	inline ByteU5BU5D_t846009489* get__initialBuffer_8() const { return ____initialBuffer_8; }
	inline ByteU5BU5D_t846009489** get_address_of__initialBuffer_8() { return &____initialBuffer_8; }
	inline void set__initialBuffer_8(ByteU5BU5D_t846009489* value)
	{
		____initialBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____initialBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECEIVERECORDASYNCRESULT_T4198486377_H
#ifndef RECORDPROTOCOL_T262916275_H
#define RECORDPROTOCOL_T262916275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t262916275  : public RuntimeObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t4261191733 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t3003248080 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t262916275, ___innerStream_1)); }
	inline Stream_t4261191733 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t4261191733 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t4261191733 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t262916275, ___context_2)); }
	inline Context_t3003248080 * get_context_2() const { return ___context_2; }
	inline Context_t3003248080 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t3003248080 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((&___context_2), value);
	}
};

struct RecordProtocol_t262916275_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t878851730 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t262916275_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t878851730 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t878851730 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t878851730 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDPROTOCOL_T262916275_H
#ifndef CLIENTSESSIONCACHE_T2713819488_H
#define CLIENTSESSIONCACHE_T2713819488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionCache
struct  ClientSessionCache_t2713819488  : public RuntimeObject
{
public:

public:
};

struct ClientSessionCache_t2713819488_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.Protocol.Tls.ClientSessionCache::cache
	Hashtable_t4126833402 * ___cache_0;
	// System.Object Mono.Security.Protocol.Tls.ClientSessionCache::locker
	RuntimeObject * ___locker_1;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2713819488_StaticFields, ___cache_0)); }
	inline Hashtable_t4126833402 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t4126833402 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t4126833402 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2713819488_StaticFields, ___locker_1)); }
	inline RuntimeObject * get_locker_1() const { return ___locker_1; }
	inline RuntimeObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(RuntimeObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier((&___locker_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONCACHE_T2713819488_H
#ifndef PKCS1_T1101578648_H
#define PKCS1_T1101578648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1101578648  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1101578648_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t846009489* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t846009489* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t846009489* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t846009489* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1101578648_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t846009489* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t846009489** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t846009489* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1101578648_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t846009489* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t846009489** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t846009489* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1101578648_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t846009489* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t846009489** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t846009489* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1101578648_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t846009489* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t846009489** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t846009489* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1101578648_H
#ifndef PKCS8_T3868002858_H
#define PKCS8_T3868002858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t3868002858  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T3868002858_H
#ifndef PRIVATEKEYINFO_T22684222_H
#define PRIVATEKEYINFO_T22684222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t22684222  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t846009489* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t2646369124 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t22684222, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t22684222, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t22684222, ____key_2)); }
	inline ByteU5BU5D_t846009489* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t846009489** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t846009489* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t22684222, ____list_3)); }
	inline ArrayList_t2646369124 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2646369124 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2646369124 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T22684222_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T1130451900_H
#define ENCRYPTEDPRIVATEKEYINFO_T1130451900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t1130451900  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t846009489* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t846009489* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1130451900, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1130451900, ____salt_1)); }
	inline ByteU5BU5D_t846009489* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t846009489** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t846009489* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1130451900, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1130451900, ____data_3)); }
	inline ByteU5BU5D_t846009489* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t846009489** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t846009489* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T1130451900_H
#ifndef CIPHERSUITEFACTORY_T178931272_H
#define CIPHERSUITEFACTORY_T178931272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct  CipherSuiteFactory_t178931272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITEFACTORY_T178931272_H
#ifndef SAFEBAG_T3299700157_H
#define SAFEBAG_T3299700157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t3299700157  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t190603108 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t3299700157, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t3299700157, ____asn1_1)); }
	inline ASN1_t190603108 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t190603108 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t190603108 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T3299700157_H
#ifndef PKCS12_T3661415161_H
#define PKCS12_T3661415161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t3661415161  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t846009489* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t2646369124 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t2646369124 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t3481652266 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t2646369124 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t1153302872 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____password_1)); }
	inline ByteU5BU5D_t846009489* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t846009489** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t846009489* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier((&____password_1), value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____keyBags_2)); }
	inline ArrayList_t2646369124 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t2646369124 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t2646369124 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_2), value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____secretBags_3)); }
	inline ArrayList_t2646369124 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t2646369124 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t2646369124 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_3), value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____certs_4)); }
	inline X509CertificateCollection_t3481652266 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t3481652266 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t3481652266 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier((&____certs_4), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____safeBags_9)); }
	inline ArrayList_t2646369124 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t2646369124 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t2646369124 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_9), value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161, ____rng_10)); }
	inline RandomNumberGenerator_t1153302872 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t1153302872 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t1153302872 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier((&____rng_10), value);
	}
};

struct PKCS12_t3661415161_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map5_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map6_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map7_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map8_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24mapC_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_12() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___U3CU3Ef__switchU24map5_12)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map5_12() const { return ___U3CU3Ef__switchU24map5_12; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map5_12() { return &___U3CU3Ef__switchU24map5_12; }
	inline void set_U3CU3Ef__switchU24map5_12(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map5_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_13() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___U3CU3Ef__switchU24map6_13)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map6_13() const { return ___U3CU3Ef__switchU24map6_13; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map6_13() { return &___U3CU3Ef__switchU24map6_13; }
	inline void set_U3CU3Ef__switchU24map6_13(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map6_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_14() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___U3CU3Ef__switchU24map7_14)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map7_14() const { return ___U3CU3Ef__switchU24map7_14; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map7_14() { return &___U3CU3Ef__switchU24map7_14; }
	inline void set_U3CU3Ef__switchU24map7_14(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map7_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_15() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___U3CU3Ef__switchU24map8_15)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map8_15() const { return ___U3CU3Ef__switchU24map8_15; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map8_15() { return &___U3CU3Ef__switchU24map8_15; }
	inline void set_U3CU3Ef__switchU24map8_15(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map8_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_16() { return static_cast<int32_t>(offsetof(PKCS12_t3661415161_StaticFields, ___U3CU3Ef__switchU24mapC_16)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24mapC_16() const { return ___U3CU3Ef__switchU24mapC_16; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24mapC_16() { return &___U3CU3Ef__switchU24mapC_16; }
	inline void set_U3CU3Ef__switchU24mapC_16(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24mapC_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T3661415161_H
#ifndef DERIVEBYTES_T1669489832_H
#define DERIVEBYTES_T1669489832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1669489832  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t846009489* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t846009489* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832, ____password_5)); }
	inline ByteU5BU5D_t846009489* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t846009489** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t846009489* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832, ____salt_6)); }
	inline ByteU5BU5D_t846009489* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t846009489** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t846009489* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1669489832_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t846009489* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t846009489* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t846009489* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t846009489* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t846009489** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t846009489* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t846009489* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t846009489** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t846009489* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1669489832_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t846009489* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t846009489** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t846009489* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1669489832_H
#ifndef X501_T2374464351_H
#define X501_T2374464351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t2374464351  : public RuntimeObject
{
public:

public:
};

struct X501_t2374464351_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t846009489* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t846009489* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t846009489* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t846009489* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t846009489* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t846009489* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t846009489* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t846009489* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t846009489* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t846009489* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t846009489* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t846009489* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t846009489* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t846009489* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t846009489* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t846009489* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t846009489** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t846009489* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t846009489* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t846009489** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t846009489* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t846009489* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t846009489** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t846009489* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t846009489* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t846009489** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t846009489* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t846009489* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t846009489** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t846009489* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t846009489* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t846009489** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t846009489* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t846009489* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t846009489** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t846009489* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t846009489* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t846009489** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t846009489* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t846009489* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t846009489** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t846009489* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t846009489* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t846009489** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t846009489* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t846009489* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t846009489** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t846009489* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t846009489* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t846009489** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t846009489* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t846009489* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t846009489** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t846009489* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t846009489* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t846009489** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t846009489* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t2374464351_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t846009489* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t846009489** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t846009489* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T2374464351_H
#ifndef X509CERTIFICATEENUMERATOR_T607570099_H
#define X509CERTIFICATEENUMERATOR_T607570099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t607570099  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t607570099, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T607570099_H
#ifndef GENERALNAMES_T3874166035_H
#define GENERALNAMES_T3874166035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t3874166035  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t2646369124 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t2646369124 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t2646369124 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t2646369124 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t2646369124 * ___ipAddr_4;

public:
	inline static int32_t get_offset_of_rfc822Name_0() { return static_cast<int32_t>(offsetof(GeneralNames_t3874166035, ___rfc822Name_0)); }
	inline ArrayList_t2646369124 * get_rfc822Name_0() const { return ___rfc822Name_0; }
	inline ArrayList_t2646369124 ** get_address_of_rfc822Name_0() { return &___rfc822Name_0; }
	inline void set_rfc822Name_0(ArrayList_t2646369124 * value)
	{
		___rfc822Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___rfc822Name_0), value);
	}

	inline static int32_t get_offset_of_dnsName_1() { return static_cast<int32_t>(offsetof(GeneralNames_t3874166035, ___dnsName_1)); }
	inline ArrayList_t2646369124 * get_dnsName_1() const { return ___dnsName_1; }
	inline ArrayList_t2646369124 ** get_address_of_dnsName_1() { return &___dnsName_1; }
	inline void set_dnsName_1(ArrayList_t2646369124 * value)
	{
		___dnsName_1 = value;
		Il2CppCodeGenWriteBarrier((&___dnsName_1), value);
	}

	inline static int32_t get_offset_of_directoryNames_2() { return static_cast<int32_t>(offsetof(GeneralNames_t3874166035, ___directoryNames_2)); }
	inline ArrayList_t2646369124 * get_directoryNames_2() const { return ___directoryNames_2; }
	inline ArrayList_t2646369124 ** get_address_of_directoryNames_2() { return &___directoryNames_2; }
	inline void set_directoryNames_2(ArrayList_t2646369124 * value)
	{
		___directoryNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___directoryNames_2), value);
	}

	inline static int32_t get_offset_of_uris_3() { return static_cast<int32_t>(offsetof(GeneralNames_t3874166035, ___uris_3)); }
	inline ArrayList_t2646369124 * get_uris_3() const { return ___uris_3; }
	inline ArrayList_t2646369124 ** get_address_of_uris_3() { return &___uris_3; }
	inline void set_uris_3(ArrayList_t2646369124 * value)
	{
		___uris_3 = value;
		Il2CppCodeGenWriteBarrier((&___uris_3), value);
	}

	inline static int32_t get_offset_of_ipAddr_4() { return static_cast<int32_t>(offsetof(GeneralNames_t3874166035, ___ipAddr_4)); }
	inline ArrayList_t2646369124 * get_ipAddr_4() const { return ___ipAddr_4; }
	inline ArrayList_t2646369124 ** get_address_of_ipAddr_4() { return &___ipAddr_4; }
	inline void set_ipAddr_4(ArrayList_t2646369124 * value)
	{
		___ipAddr_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipAddr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERALNAMES_T3874166035_H
#ifndef STREAM_T4261191733_H
#define STREAM_T4261191733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t4261191733  : public RuntimeObject
{
public:

public:
};

struct Stream_t4261191733_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t4261191733 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t4261191733_StaticFields, ___Null_0)); }
	inline Stream_t4261191733 * get_Null_0() const { return ___Null_0; }
	inline Stream_t4261191733 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t4261191733 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T4261191733_H
#ifndef X509EXTENSION_T905951720_H
#define X509EXTENSION_T905951720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t905951720  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t190603108 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t905951720, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t905951720, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t905951720, ___extnValue_2)); }
	inline ASN1_t190603108 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t190603108 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t190603108 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T905951720_H
#ifndef X509STORES_T3967370735_H
#define X509STORES_T3967370735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3967370735  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t3195287687 * ____trusted_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3967370735, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__trusted_1() { return static_cast<int32_t>(offsetof(X509Stores_t3967370735, ____trusted_1)); }
	inline X509Store_t3195287687 * get__trusted_1() const { return ____trusted_1; }
	inline X509Store_t3195287687 ** get_address_of__trusted_1() { return &____trusted_1; }
	inline void set__trusted_1(X509Store_t3195287687 * value)
	{
		____trusted_1 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T3967370735_H
#ifndef PKCS7_T3280267781_H
#define PKCS7_T3280267781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t3280267781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T3280267781_H
#ifndef BITCONVERTERLE_T3256152058_H
#define BITCONVERTERLE_T3256152058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t3256152058  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T3256152058_H
#ifndef X509STOREMANAGER_T3915821765_H
#define X509STOREMANAGER_T3915821765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t3915821765  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t3915821765_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t3967370735 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t3967370735 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t3915821765_StaticFields, ____userStore_0)); }
	inline X509Stores_t3967370735 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t3967370735 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t3967370735 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t3915821765_StaticFields, ____machineStore_1)); }
	inline X509Stores_t3967370735 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t3967370735 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t3967370735 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T3915821765_H
#ifndef ASN1_T190603108_H
#define ASN1_T190603108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t190603108  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t846009489* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2646369124 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t190603108, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t190603108, ___m_aValue_1)); }
	inline ByteU5BU5D_t846009489* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t846009489** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t846009489* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t190603108, ___elist_2)); }
	inline ArrayList_t2646369124 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2646369124 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2646369124 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T190603108_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T609893961_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T609893961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t609893961  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T609893961_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3376423969_H
#define ASYMMETRICSIGNATUREFORMATTER_T3376423969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3376423969  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3376423969_H
#ifndef ASN1CONVERT_T608738959_H
#define ASN1CONVERT_T608738959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t608738959  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T608738959_H
#ifndef HASHALGORITHM_T4193664857_H
#define HASHALGORITHM_T4193664857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t4193664857  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t846009489* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4193664857, ___HashValue_0)); }
	inline ByteU5BU5D_t846009489* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t846009489** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t846009489* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4193664857, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4193664857, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4193664857, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T4193664857_H
#ifndef VALUETYPE_T2095814083_H
#define VALUETYPE_T2095814083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2095814083  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2095814083_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2095814083_marshaled_com
{
};
#endif // VALUETYPE_T2095814083_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef VALIDATIONRESULT_T3480032513_H
#define VALIDATIONRESULT_T3480032513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ValidationResult
struct  ValidationResult_t3480032513  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::trusted
	bool ___trusted_0;
	// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::user_denied
	bool ___user_denied_1;
	// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::error_code
	int32_t ___error_code_2;

public:
	inline static int32_t get_offset_of_trusted_0() { return static_cast<int32_t>(offsetof(ValidationResult_t3480032513, ___trusted_0)); }
	inline bool get_trusted_0() const { return ___trusted_0; }
	inline bool* get_address_of_trusted_0() { return &___trusted_0; }
	inline void set_trusted_0(bool value)
	{
		___trusted_0 = value;
	}

	inline static int32_t get_offset_of_user_denied_1() { return static_cast<int32_t>(offsetof(ValidationResult_t3480032513, ___user_denied_1)); }
	inline bool get_user_denied_1() const { return ___user_denied_1; }
	inline bool* get_address_of_user_denied_1() { return &___user_denied_1; }
	inline void set_user_denied_1(bool value)
	{
		___user_denied_1 = value;
	}

	inline static int32_t get_offset_of_error_code_2() { return static_cast<int32_t>(offsetof(ValidationResult_t3480032513, ___error_code_2)); }
	inline int32_t get_error_code_2() const { return ___error_code_2; }
	inline int32_t* get_address_of_error_code_2() { return &___error_code_2; }
	inline void set_error_code_2(int32_t value)
	{
		___error_code_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONRESULT_T3480032513_H
#ifndef COLLECTIONBASE_T2507588983_H
#define COLLECTIONBASE_T2507588983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2507588983  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2646369124 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2507588983, ___list_0)); }
	inline ArrayList_t2646369124 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2646369124 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2646369124 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2507588983_H
#ifndef ASYMMETRICALGORITHM_T1157666344_H
#define ASYMMETRICALGORITHM_T1157666344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t1157666344  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t525204915* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1157666344, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1157666344, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t525204915* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t525204915** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t525204915* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T1157666344_H
#ifndef BIGINTEGER_T3343915020_H
#define BIGINTEGER_T3343915020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3343915020  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t657407019* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3343915020, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3343915020, ___data_1)); }
	inline UInt32U5BU5D_t657407019* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t657407019** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t657407019* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t3343915020_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t657407019* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t1153302872 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3343915020_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t657407019* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t657407019** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t657407019* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3343915020_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t1153302872 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t1153302872 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t1153302872 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T3343915020_H
#ifndef SECURITYPARAMETERS_T1116865091_H
#define SECURITYPARAMETERS_T1116865091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t1116865091  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t2272621373 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t846009489* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t846009489* ___serverWriteMAC_2;

public:
	inline static int32_t get_offset_of_cipher_0() { return static_cast<int32_t>(offsetof(SecurityParameters_t1116865091, ___cipher_0)); }
	inline CipherSuite_t2272621373 * get_cipher_0() const { return ___cipher_0; }
	inline CipherSuite_t2272621373 ** get_address_of_cipher_0() { return &___cipher_0; }
	inline void set_cipher_0(CipherSuite_t2272621373 * value)
	{
		___cipher_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_0), value);
	}

	inline static int32_t get_offset_of_clientWriteMAC_1() { return static_cast<int32_t>(offsetof(SecurityParameters_t1116865091, ___clientWriteMAC_1)); }
	inline ByteU5BU5D_t846009489* get_clientWriteMAC_1() const { return ___clientWriteMAC_1; }
	inline ByteU5BU5D_t846009489** get_address_of_clientWriteMAC_1() { return &___clientWriteMAC_1; }
	inline void set_clientWriteMAC_1(ByteU5BU5D_t846009489* value)
	{
		___clientWriteMAC_1 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteMAC_1), value);
	}

	inline static int32_t get_offset_of_serverWriteMAC_2() { return static_cast<int32_t>(offsetof(SecurityParameters_t1116865091, ___serverWriteMAC_2)); }
	inline ByteU5BU5D_t846009489* get_serverWriteMAC_2() const { return ___serverWriteMAC_2; }
	inline ByteU5BU5D_t846009489** get_address_of_serverWriteMAC_2() { return &___serverWriteMAC_2; }
	inline void set_serverWriteMAC_2(ByteU5BU5D_t846009489* value)
	{
		___serverWriteMAC_2 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteMAC_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARAMETERS_T1116865091_H
#ifndef MODULUSRING_T2414408114_H
#define MODULUSRING_T2414408114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t2414408114  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3343915020 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3343915020 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t2414408114, ___mod_0)); }
	inline BigInteger_t3343915020 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3343915020 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3343915020 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t2414408114, ___constant_1)); }
	inline BigInteger_t3343915020 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3343915020 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3343915020 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T2414408114_H
#ifndef KERNEL_T4172798060_H
#define KERNEL_T4172798060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t4172798060  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T4172798060_H
#ifndef PRIMALITYTESTS_T418984751_H
#define PRIMALITYTESTS_T418984751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t418984751  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T418984751_H
#ifndef PRIMEGENERATORBASE_T1641341661_H
#define PRIMEGENERATORBASE_T1641341661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t1641341661  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T1641341661_H
#ifndef LOCALE_T949506950_H
#define LOCALE_T949506950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t949506950  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T949506950_H
#ifndef BASICCONSTRAINTSEXTENSION_T1650579649_H
#define BASICCONSTRAINTSEXTENSION_T1650579649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t1650579649  : public X509Extension_t905951720
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t1650579649, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t1650579649, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T1650579649_H
#ifndef TIMESPAN_T1775461494_H
#define TIMESPAN_T1775461494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1775461494 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1775461494, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1775461494_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1775461494  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1775461494  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1775461494  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1775461494_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1775461494  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1775461494 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1775461494  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1775461494_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1775461494  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1775461494 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1775461494  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1775461494_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1775461494  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1775461494 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1775461494  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1775461494_H
#ifndef EXTENDEDKEYUSAGEEXTENSION_T1208568481_H
#define EXTENDEDKEYUSAGEEXTENSION_T1208568481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct  ExtendedKeyUsageExtension_t1208568481  : public X509Extension_t905951720
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::keyPurpose
	ArrayList_t2646369124 * ___keyPurpose_3;

public:
	inline static int32_t get_offset_of_keyPurpose_3() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t1208568481, ___keyPurpose_3)); }
	inline ArrayList_t2646369124 * get_keyPurpose_3() const { return ___keyPurpose_3; }
	inline ArrayList_t2646369124 ** get_address_of_keyPurpose_3() { return &___keyPurpose_3; }
	inline void set_keyPurpose_3(ArrayList_t2646369124 * value)
	{
		___keyPurpose_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyPurpose_3), value);
	}
};

struct ExtendedKeyUsageExtension_t1208568481_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::<>f__switch$map14
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map14_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_4() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t1208568481_StaticFields, ___U3CU3Ef__switchU24map14_4)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map14_4() const { return ___U3CU3Ef__switchU24map14_4; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map14_4() { return &___U3CU3Ef__switchU24map14_4; }
	inline void set_U3CU3Ef__switchU24map14_4(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map14_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDKEYUSAGEEXTENSION_T1208568481_H
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
#ifndef KEYUSAGEEXTENSION_T3258188274_H
#define KEYUSAGEEXTENSION_T3258188274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t3258188274  : public X509Extension_t905951720
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t3258188274, ___kubits_3)); }
	inline int32_t get_kubits_3() const { return ___kubits_3; }
	inline int32_t* get_address_of_kubits_3() { return &___kubits_3; }
	inline void set_kubits_3(int32_t value)
	{
		___kubits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYUSAGEEXTENSION_T3258188274_H
#ifndef MD5SHA1_T775078680_H
#define MD5SHA1_T775078680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD5SHA1
struct  MD5SHA1_t775078680  : public HashAlgorithm_t4193664857
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::md5
	HashAlgorithm_t4193664857 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::sha
	HashAlgorithm_t4193664857 * ___sha_5;
	// System.Boolean Mono.Security.Cryptography.MD5SHA1::hashing
	bool ___hashing_6;

public:
	inline static int32_t get_offset_of_md5_4() { return static_cast<int32_t>(offsetof(MD5SHA1_t775078680, ___md5_4)); }
	inline HashAlgorithm_t4193664857 * get_md5_4() const { return ___md5_4; }
	inline HashAlgorithm_t4193664857 ** get_address_of_md5_4() { return &___md5_4; }
	inline void set_md5_4(HashAlgorithm_t4193664857 * value)
	{
		___md5_4 = value;
		Il2CppCodeGenWriteBarrier((&___md5_4), value);
	}

	inline static int32_t get_offset_of_sha_5() { return static_cast<int32_t>(offsetof(MD5SHA1_t775078680, ___sha_5)); }
	inline HashAlgorithm_t4193664857 * get_sha_5() const { return ___sha_5; }
	inline HashAlgorithm_t4193664857 ** get_address_of_sha_5() { return &___sha_5; }
	inline void set_sha_5(HashAlgorithm_t4193664857 * value)
	{
		___sha_5 = value;
		Il2CppCodeGenWriteBarrier((&___sha_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(MD5SHA1_t775078680, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5SHA1_T775078680_H
#ifndef KEYEDHASHALGORITHM_T3790775089_H
#define KEYEDHASHALGORITHM_T3790775089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t3790775089  : public HashAlgorithm_t4193664857
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t846009489* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t3790775089, ___KeyValue_4)); }
	inline ByteU5BU5D_t846009489* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t846009489** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t846009489* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T3790775089_H
#ifndef VOID_T3007105787_H
#define VOID_T3007105787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3007105787 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3007105787_H
#ifndef RSA_T258460123_H
#define RSA_T258460123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t258460123  : public AsymmetricAlgorithm_t1157666344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T258460123_H
#ifndef SUBJECTALTNAMEEXTENSION_T874007027_H
#define SUBJECTALTNAMEEXTENSION_T874007027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t874007027  : public X509Extension_t905951720
{
public:
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t3874166035 * ____names_3;

public:
	inline static int32_t get_offset_of__names_3() { return static_cast<int32_t>(offsetof(SubjectAltNameExtension_t874007027, ____names_3)); }
	inline GeneralNames_t3874166035 * get__names_3() const { return ____names_3; }
	inline GeneralNames_t3874166035 ** get_address_of__names_3() { return &____names_3; }
	inline void set__names_3(GeneralNames_t3874166035 * value)
	{
		____names_3 = value;
		Il2CppCodeGenWriteBarrier((&____names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTALTNAMEEXTENSION_T874007027_H
#ifndef ENUM_T1051914835_H
#define ENUM_T1051914835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1051914835  : public ValueType_t2095814083
{
public:

public:
};

struct Enum_t1051914835_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3152716171* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1051914835_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3152716171* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3152716171** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3152716171* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1051914835_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1051914835_marshaled_com
{
};
#endif // ENUM_T1051914835_H
#ifndef CLIENTRECORDPROTOCOL_T2784146701_H
#define CLIENTRECORDPROTOCOL_T2784146701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct  ClientRecordProtocol_t2784146701  : public RecordProtocol_t262916275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTRECORDPROTOCOL_T2784146701_H
#ifndef RSASSLSIGNATUREFORMATTER_T719758716_H
#define RSASSLSIGNATUREFORMATTER_T719758716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t719758716  : public AsymmetricSignatureFormatter_t3376423969
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t258460123 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t4193664857 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t719758716, ___key_0)); }
	inline RSA_t258460123 * get_key_0() const { return ___key_0; }
	inline RSA_t258460123 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t258460123 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t719758716, ___hash_1)); }
	inline HashAlgorithm_t4193664857 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t4193664857 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t4193664857 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureFormatter_t719758716_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map16_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_2() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t719758716_StaticFields, ___U3CU3Ef__switchU24map16_2)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map16_2() const { return ___U3CU3Ef__switchU24map16_2; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map16_2() { return &___U3CU3Ef__switchU24map16_2; }
	inline void set_U3CU3Ef__switchU24map16_2(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map16_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREFORMATTER_T719758716_H
#ifndef RSASSLSIGNATUREDEFORMATTER_T2734879307_H
#define RSASSLSIGNATUREDEFORMATTER_T2734879307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t2734879307  : public AsymmetricSignatureDeformatter_t609893961
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t258460123 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t4193664857 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t2734879307, ___key_0)); }
	inline RSA_t258460123 * get_key_0() const { return ___key_0; }
	inline RSA_t258460123 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t258460123 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t2734879307, ___hash_1)); }
	inline HashAlgorithm_t4193664857 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t4193664857 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t4193664857 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureDeformatter_t2734879307_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map15_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_2() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t2734879307_StaticFields, ___U3CU3Ef__switchU24map15_2)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map15_2() const { return ___U3CU3Ef__switchU24map15_2; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map15_2() { return &___U3CU3Ef__switchU24map15_2; }
	inline void set_U3CU3Ef__switchU24map15_2(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map15_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREDEFORMATTER_T2734879307_H
#ifndef NETSCAPECERTTYPEEXTENSION_T3962022583_H
#define NETSCAPECERTTYPEEXTENSION_T3962022583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct  NetscapeCertTypeExtension_t3962022583  : public X509Extension_t905951720
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ctbits
	int32_t ___ctbits_3;

public:
	inline static int32_t get_offset_of_ctbits_3() { return static_cast<int32_t>(offsetof(NetscapeCertTypeExtension_t3962022583, ___ctbits_3)); }
	inline int32_t get_ctbits_3() const { return ___ctbits_3; }
	inline int32_t* get_address_of_ctbits_3() { return &___ctbits_3; }
	inline void set_ctbits_3(int32_t value)
	{
		___ctbits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSCAPECERTTYPEEXTENSION_T3962022583_H
#ifndef U24ARRAYTYPEU2448_T2670424207_H
#define U24ARRAYTYPEU2448_T2670424207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t2670424207 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t2670424207__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T2670424207_H
#ifndef AUTHORITYKEYIDENTIFIEREXTENSION_T2649437901_H
#define AUTHORITYKEYIDENTIFIEREXTENSION_T2649437901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct  AuthorityKeyIdentifierExtension_t2649437901  : public X509Extension_t905951720
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::aki
	ByteU5BU5D_t846009489* ___aki_3;

public:
	inline static int32_t get_offset_of_aki_3() { return static_cast<int32_t>(offsetof(AuthorityKeyIdentifierExtension_t2649437901, ___aki_3)); }
	inline ByteU5BU5D_t846009489* get_aki_3() const { return ___aki_3; }
	inline ByteU5BU5D_t846009489** get_address_of_aki_3() { return &___aki_3; }
	inline void set_aki_3(ByteU5BU5D_t846009489* value)
	{
		___aki_3 = value;
		Il2CppCodeGenWriteBarrier((&___aki_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORITYKEYIDENTIFIEREXTENSION_T2649437901_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T1572445569_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T1572445569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t1572445569  : public PrimeGeneratorBase_t1641341661
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T1572445569_H
#ifndef X509EXTENSIONCOLLECTION_T2769113024_H
#define X509EXTENSIONCOLLECTION_T2769113024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t2769113024  : public CollectionBase_t2507588983
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t2769113024, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T2769113024_H
#ifndef __IL2CPPCOMDELEGATE_T157706448_H
#define __IL2CPPCOMDELEGATE_T157706448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t157706448  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T157706448_H
#ifndef U24ARRAYTYPEU2452_T815401566_H
#define U24ARRAYTYPEU2452_T815401566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t815401566 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t815401566__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T815401566_H
#ifndef U24ARRAYTYPEU24128_T1946169821_H
#define U24ARRAYTYPEU24128_T1946169821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t1946169821 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t1946169821__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T1946169821_H
#ifndef U24ARRAYTYPEU24640_T793090750_H
#define U24ARRAYTYPEU24640_T793090750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t793090750 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t793090750__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T793090750_H
#ifndef U24ARRAYTYPEU241024_T3148486879_H
#define U24ARRAYTYPEU241024_T3148486879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3148486879 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3148486879__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3148486879_H
#ifndef U24ARRAYTYPEU24256_T982558634_H
#define U24ARRAYTYPEU24256_T982558634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t982558634 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t982558634__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T982558634_H
#ifndef U24ARRAYTYPEU242048_T2380189131_H
#define U24ARRAYTYPEU242048_T2380189131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t2380189131 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t2380189131__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T2380189131_H
#ifndef U24ARRAYTYPEU2496_T4218419161_H
#define U24ARRAYTYPEU2496_T4218419161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t4218419161 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t4218419161__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T4218419161_H
#ifndef U24ARRAYTYPEU24124_T3880911953_H
#define U24ARRAYTYPEU24124_T3880911953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t3880911953 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t3880911953__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T3880911953_H
#ifndef U24ARRAYTYPEU2472_T451504977_H
#define U24ARRAYTYPEU2472_T451504977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t451504977 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t451504977__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T451504977_H
#ifndef U24ARRAYTYPEU248_T184912751_H
#define U24ARRAYTYPEU248_T184912751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t184912751 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t184912751__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T184912751_H
#ifndef U24ARRAYTYPEU24136_T2220392326_H
#define U24ARRAYTYPEU24136_T2220392326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2220392326 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t2220392326__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2220392326_H
#ifndef U24ARRAYTYPEU2412_T819939822_H
#define U24ARRAYTYPEU2412_T819939822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t819939822 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t819939822__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T819939822_H
#ifndef U24ARRAYTYPEU2464_T3098264126_H
#define U24ARRAYTYPEU2464_T3098264126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t3098264126 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t3098264126__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T3098264126_H
#ifndef MD2_T2358545844_H
#define MD2_T2358545844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t2358545844  : public HashAlgorithm_t4193664857
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T2358545844_H
#ifndef MD4_T86105526_H
#define MD4_T86105526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t86105526  : public HashAlgorithm_t4193664857
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T86105526_H
#ifndef BOOLEAN_T779405450_H
#define BOOLEAN_T779405450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t779405450 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t779405450, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t779405450_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t779405450_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t779405450_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T779405450_H
#ifndef X509CERTIFICATECOLLECTION_T3481652266_H
#define X509CERTIFICATECOLLECTION_T3481652266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t3481652266  : public CollectionBase_t2507588983
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3481652266_H
#ifndef MD4MANAGED_T1785447264_H
#define MD4MANAGED_T1785447264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t1785447264  : public MD4_t86105526
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t657407019* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t846009489* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t657407019* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t657407019* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t846009489* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t1785447264, ___state_4)); }
	inline UInt32U5BU5D_t657407019* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t657407019** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t657407019* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t1785447264, ___buffer_5)); }
	inline ByteU5BU5D_t846009489* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t846009489** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t846009489* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t1785447264, ___count_6)); }
	inline UInt32U5BU5D_t657407019* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t657407019** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t657407019* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t1785447264, ___x_7)); }
	inline UInt32U5BU5D_t657407019* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t657407019** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t657407019* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t1785447264, ___digest_8)); }
	inline ByteU5BU5D_t846009489* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t846009489** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t846009489* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T1785447264_H
#ifndef SSLSTREAMBASE_T1632026005_H
#define SSLSTREAMBASE_T1632026005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1632026005  : public Stream_t4261191733
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t4261191733 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t1752964049 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t3003248080 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t262916275 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	RuntimeObject * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	RuntimeObject * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	RuntimeObject * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t878851730 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t846009489* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t1752964049 * ___recordStream_15;

public:
	inline static int32_t get_offset_of_innerStream_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___innerStream_3)); }
	inline Stream_t4261191733 * get_innerStream_3() const { return ___innerStream_3; }
	inline Stream_t4261191733 ** get_address_of_innerStream_3() { return &___innerStream_3; }
	inline void set_innerStream_3(Stream_t4261191733 * value)
	{
		___innerStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_3), value);
	}

	inline static int32_t get_offset_of_inputBuffer_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___inputBuffer_4)); }
	inline MemoryStream_t1752964049 * get_inputBuffer_4() const { return ___inputBuffer_4; }
	inline MemoryStream_t1752964049 ** get_address_of_inputBuffer_4() { return &___inputBuffer_4; }
	inline void set_inputBuffer_4(MemoryStream_t1752964049 * value)
	{
		___inputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_4), value);
	}

	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___context_5)); }
	inline Context_t3003248080 * get_context_5() const { return ___context_5; }
	inline Context_t3003248080 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t3003248080 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier((&___context_5), value);
	}

	inline static int32_t get_offset_of_protocol_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___protocol_6)); }
	inline RecordProtocol_t262916275 * get_protocol_6() const { return ___protocol_6; }
	inline RecordProtocol_t262916275 ** get_address_of_protocol_6() { return &___protocol_6; }
	inline void set_protocol_6(RecordProtocol_t262916275 * value)
	{
		___protocol_6 = value;
		Il2CppCodeGenWriteBarrier((&___protocol_6), value);
	}

	inline static int32_t get_offset_of_ownsStream_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___ownsStream_7)); }
	inline bool get_ownsStream_7() const { return ___ownsStream_7; }
	inline bool* get_address_of_ownsStream_7() { return &___ownsStream_7; }
	inline void set_ownsStream_7(bool value)
	{
		___ownsStream_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___checkCertRevocationStatus_9)); }
	inline bool get_checkCertRevocationStatus_9() const { return ___checkCertRevocationStatus_9; }
	inline bool* get_address_of_checkCertRevocationStatus_9() { return &___checkCertRevocationStatus_9; }
	inline void set_checkCertRevocationStatus_9(bool value)
	{
		___checkCertRevocationStatus_9 = value;
	}

	inline static int32_t get_offset_of_negotiate_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___negotiate_10)); }
	inline RuntimeObject * get_negotiate_10() const { return ___negotiate_10; }
	inline RuntimeObject ** get_address_of_negotiate_10() { return &___negotiate_10; }
	inline void set_negotiate_10(RuntimeObject * value)
	{
		___negotiate_10 = value;
		Il2CppCodeGenWriteBarrier((&___negotiate_10), value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___read_11)); }
	inline RuntimeObject * get_read_11() const { return ___read_11; }
	inline RuntimeObject ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(RuntimeObject * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier((&___read_11), value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___write_12)); }
	inline RuntimeObject * get_write_12() const { return ___write_12; }
	inline RuntimeObject ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(RuntimeObject * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier((&___write_12), value);
	}

	inline static int32_t get_offset_of_negotiationComplete_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___negotiationComplete_13)); }
	inline ManualResetEvent_t878851730 * get_negotiationComplete_13() const { return ___negotiationComplete_13; }
	inline ManualResetEvent_t878851730 ** get_address_of_negotiationComplete_13() { return &___negotiationComplete_13; }
	inline void set_negotiationComplete_13(ManualResetEvent_t878851730 * value)
	{
		___negotiationComplete_13 = value;
		Il2CppCodeGenWriteBarrier((&___negotiationComplete_13), value);
	}

	inline static int32_t get_offset_of_recbuf_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___recbuf_14)); }
	inline ByteU5BU5D_t846009489* get_recbuf_14() const { return ___recbuf_14; }
	inline ByteU5BU5D_t846009489** get_address_of_recbuf_14() { return &___recbuf_14; }
	inline void set_recbuf_14(ByteU5BU5D_t846009489* value)
	{
		___recbuf_14 = value;
		Il2CppCodeGenWriteBarrier((&___recbuf_14), value);
	}

	inline static int32_t get_offset_of_recordStream_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005, ___recordStream_15)); }
	inline MemoryStream_t1752964049 * get_recordStream_15() const { return ___recordStream_15; }
	inline MemoryStream_t1752964049 ** get_address_of_recordStream_15() { return &___recordStream_15; }
	inline void set_recordStream_15(MemoryStream_t1752964049 * value)
	{
		___recordStream_15 = value;
		Il2CppCodeGenWriteBarrier((&___recordStream_15), value);
	}
};

struct SslStreamBase_t1632026005_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t878851730 * ___record_processing_2;

public:
	inline static int32_t get_offset_of_record_processing_2() { return static_cast<int32_t>(offsetof(SslStreamBase_t1632026005_StaticFields, ___record_processing_2)); }
	inline ManualResetEvent_t878851730 * get_record_processing_2() const { return ___record_processing_2; }
	inline ManualResetEvent_t878851730 ** get_address_of_record_processing_2() { return &___record_processing_2; }
	inline void set_record_processing_2(ManualResetEvent_t878851730 * value)
	{
		___record_processing_2 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAMBASE_T1632026005_H
#ifndef DATETIMEKIND_T4004160427_H
#define DATETIMEKIND_T4004160427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t4004160427 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t4004160427, ___value___1)); }
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
#endif // DATETIMEKIND_T4004160427_H
#ifndef X509CHAINSTATUSFLAGS_T2494182269_H
#define X509CHAINSTATUSFLAGS_T2494182269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t2494182269 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t2494182269, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T2494182269_H
#ifndef DELEGATE_T444233800_H
#define DELEGATE_T444233800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t444233800  : public RuntimeObject
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
	DelegateData_t3018104882 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t444233800, ___data_8)); }
	inline DelegateData_t3018104882 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3018104882 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3018104882 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T444233800_H
#ifndef PADDINGMODE_T887555091_H
#define PADDINGMODE_T887555091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t887555091 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t887555091, ___value___1)); }
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
#endif // PADDINGMODE_T887555091_H
#ifndef KEYUSAGES_T1053736455_H
#define KEYUSAGES_T1053736455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t1053736455 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t1053736455, ___value___1)); }
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
#endif // KEYUSAGES_T1053736455_H
#ifndef HANDSHAKETYPE_T4028869538_H
#define HANDSHAKETYPE_T4028869538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
struct  HandshakeType_t4028869538 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.Handshake.HandshakeType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeType_t4028869538, ___value___1)); }
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
#endif // HANDSHAKETYPE_T4028869538_H
#ifndef CIPHERMODE_T3517556250_H
#define CIPHERMODE_T3517556250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3517556250 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3517556250, ___value___1)); }
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
#endif // CIPHERMODE_T3517556250_H
#ifndef CERTTYPES_T2301309499_H
#define CERTTYPES_T2301309499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
struct  CertTypes_t2301309499 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CertTypes_t2301309499, ___value___1)); }
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
#endif // CERTTYPES_T2301309499_H
#ifndef HMAC_T3032901717_H
#define HMAC_T3032901717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMAC
struct  HMAC_t3032901717  : public KeyedHashAlgorithm_t3790775089
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t4193664857 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t846009489* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t846009489* ___outerPad_8;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(HMAC_t3032901717, ___hash_5)); }
	inline HashAlgorithm_t4193664857 * get_hash_5() const { return ___hash_5; }
	inline HashAlgorithm_t4193664857 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(HashAlgorithm_t4193664857 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(HMAC_t3032901717, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_innerPad_7() { return static_cast<int32_t>(offsetof(HMAC_t3032901717, ___innerPad_7)); }
	inline ByteU5BU5D_t846009489* get_innerPad_7() const { return ___innerPad_7; }
	inline ByteU5BU5D_t846009489** get_address_of_innerPad_7() { return &___innerPad_7; }
	inline void set_innerPad_7(ByteU5BU5D_t846009489* value)
	{
		___innerPad_7 = value;
		Il2CppCodeGenWriteBarrier((&___innerPad_7), value);
	}

	inline static int32_t get_offset_of_outerPad_8() { return static_cast<int32_t>(offsetof(HMAC_t3032901717, ___outerPad_8)); }
	inline ByteU5BU5D_t846009489* get_outerPad_8() const { return ___outerPad_8; }
	inline ByteU5BU5D_t846009489** get_address_of_outerPad_8() { return &___outerPad_8; }
	inline void set_outerPad_8(ByteU5BU5D_t846009489* value)
	{
		___outerPad_8 = value;
		Il2CppCodeGenWriteBarrier((&___outerPad_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T3032901717_H
#ifndef RSAMANAGED_T1892944802_H
#define RSAMANAGED_T1892944802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1892944802  : public RSA_t258460123
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t3343915020 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3343915020 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3343915020 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3343915020 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3343915020 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3343915020 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3343915020 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3343915020 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t4116469292 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___d_6)); }
	inline BigInteger_t3343915020 * get_d_6() const { return ___d_6; }
	inline BigInteger_t3343915020 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t3343915020 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___p_7)); }
	inline BigInteger_t3343915020 * get_p_7() const { return ___p_7; }
	inline BigInteger_t3343915020 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t3343915020 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___q_8)); }
	inline BigInteger_t3343915020 * get_q_8() const { return ___q_8; }
	inline BigInteger_t3343915020 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t3343915020 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___dp_9)); }
	inline BigInteger_t3343915020 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t3343915020 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t3343915020 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___dq_10)); }
	inline BigInteger_t3343915020 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t3343915020 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t3343915020 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___qInv_11)); }
	inline BigInteger_t3343915020 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t3343915020 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t3343915020 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___n_12)); }
	inline BigInteger_t3343915020 * get_n_12() const { return ___n_12; }
	inline BigInteger_t3343915020 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t3343915020 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___e_13)); }
	inline BigInteger_t3343915020 * get_e_13() const { return ___e_13; }
	inline BigInteger_t3343915020 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t3343915020 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1892944802, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t4116469292 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t4116469292 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t4116469292 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1892944802_H
#ifndef ALERTDESCRIPTION_T1815730233_H
#define ALERTDESCRIPTION_T1815730233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertDescription
struct  AlertDescription_t1815730233 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertDescription::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertDescription_t1815730233, ___value___1)); }
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
#endif // ALERTDESCRIPTION_T1815730233_H
#ifndef CIPHERALGORITHMTYPE_T3785075654_H
#define CIPHERALGORITHMTYPE_T3785075654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherAlgorithmType
struct  CipherAlgorithmType_t3785075654 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.CipherAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherAlgorithmType_t3785075654, ___value___1)); }
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
#endif // CIPHERALGORITHMTYPE_T3785075654_H
#ifndef SECURITYPROTOCOLTYPE_T2498531016_H
#define SECURITYPROTOCOLTYPE_T2498531016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityProtocolType
struct  SecurityProtocolType_t2498531016 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t2498531016, ___value___1)); }
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
#endif // SECURITYPROTOCOLTYPE_T2498531016_H
#ifndef ALERTLEVEL_T3454492317_H
#define ALERTLEVEL_T3454492317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertLevel
struct  AlertLevel_t3454492317 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t3454492317, ___value___1)); }
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
#endif // ALERTLEVEL_T3454492317_H
#ifndef MD2MANAGED_T295206673_H
#define MD2MANAGED_T295206673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t295206673  : public MD2_t2358545844
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t846009489* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t846009489* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t846009489* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t846009489* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673, ___state_4)); }
	inline ByteU5BU5D_t846009489* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t846009489** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t846009489* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673, ___checksum_5)); }
	inline ByteU5BU5D_t846009489* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t846009489** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t846009489* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673, ___buffer_6)); }
	inline ByteU5BU5D_t846009489* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t846009489** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t846009489* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673, ___x_8)); }
	inline ByteU5BU5D_t846009489* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t846009489** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t846009489* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t295206673_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t846009489* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t295206673_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t846009489* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t846009489** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t846009489* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T295206673_H
#ifndef SECURITYCOMPRESSIONTYPE_T963523542_H
#define SECURITYCOMPRESSIONTYPE_T963523542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityCompressionType
struct  SecurityCompressionType_t963523542 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityCompressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCompressionType_t963523542, ___value___1)); }
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
#endif // SECURITYCOMPRESSIONTYPE_T963523542_H
#ifndef HANDSHAKESTATE_T4276154716_H
#define HANDSHAKESTATE_T4276154716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HandshakeState
struct  HandshakeState_t4276154716 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HandshakeState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeState_t4276154716, ___value___1)); }
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
#endif // HANDSHAKESTATE_T4276154716_H
#ifndef CONFIDENCEFACTOR_T3609155689_H
#define CONFIDENCEFACTOR_T3609155689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t3609155689 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t3609155689, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T3609155689_H
#ifndef HASHALGORITHMTYPE_T1835907478_H
#define HASHALGORITHMTYPE_T1835907478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HashAlgorithmType
struct  HashAlgorithmType_t1835907478 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HashAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HashAlgorithmType_t1835907478, ___value___1)); }
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
#endif // HASHALGORITHMTYPE_T1835907478_H
#ifndef SIGN_T2499895769_H
#define SIGN_T2499895769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2499895769 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t2499895769, ___value___1)); }
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
#endif // SIGN_T2499895769_H
#ifndef CONTENTTYPE_T702276224_H
#define CONTENTTYPE_T702276224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ContentType
struct  ContentType_t702276224 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.ContentType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t702276224, ___value___1)); }
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
#endif // CONTENTTYPE_T702276224_H
#ifndef EXCHANGEALGORITHMTYPE_T148916855_H
#define EXCHANGEALGORITHMTYPE_T148916855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
struct  ExchangeAlgorithmType_t148916855 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ExchangeAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExchangeAlgorithmType_t148916855, ___value___1)); }
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
#endif // EXCHANGEALGORITHMTYPE_T148916855_H
#ifndef SSLCLIENTSTREAM_T3901467752_H
#define SSLCLIENTSTREAM_T3901467752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t3901467752  : public SslStreamBase_t1632026005
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t929836278 * ___ServerCertValidation_16;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t3316567174 * ___ClientCertSelection_17;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t554174953 * ___PrivateKeySelection_18;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t2320646023 * ___ServerCertValidation2_19;

public:
	inline static int32_t get_offset_of_ServerCertValidation_16() { return static_cast<int32_t>(offsetof(SslClientStream_t3901467752, ___ServerCertValidation_16)); }
	inline CertificateValidationCallback_t929836278 * get_ServerCertValidation_16() const { return ___ServerCertValidation_16; }
	inline CertificateValidationCallback_t929836278 ** get_address_of_ServerCertValidation_16() { return &___ServerCertValidation_16; }
	inline void set_ServerCertValidation_16(CertificateValidationCallback_t929836278 * value)
	{
		___ServerCertValidation_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation_16), value);
	}

	inline static int32_t get_offset_of_ClientCertSelection_17() { return static_cast<int32_t>(offsetof(SslClientStream_t3901467752, ___ClientCertSelection_17)); }
	inline CertificateSelectionCallback_t3316567174 * get_ClientCertSelection_17() const { return ___ClientCertSelection_17; }
	inline CertificateSelectionCallback_t3316567174 ** get_address_of_ClientCertSelection_17() { return &___ClientCertSelection_17; }
	inline void set_ClientCertSelection_17(CertificateSelectionCallback_t3316567174 * value)
	{
		___ClientCertSelection_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClientCertSelection_17), value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_18() { return static_cast<int32_t>(offsetof(SslClientStream_t3901467752, ___PrivateKeySelection_18)); }
	inline PrivateKeySelectionCallback_t554174953 * get_PrivateKeySelection_18() const { return ___PrivateKeySelection_18; }
	inline PrivateKeySelectionCallback_t554174953 ** get_address_of_PrivateKeySelection_18() { return &___PrivateKeySelection_18; }
	inline void set_PrivateKeySelection_18(PrivateKeySelectionCallback_t554174953 * value)
	{
		___PrivateKeySelection_18 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateKeySelection_18), value);
	}

	inline static int32_t get_offset_of_ServerCertValidation2_19() { return static_cast<int32_t>(offsetof(SslClientStream_t3901467752, ___ServerCertValidation2_19)); }
	inline CertificateValidationCallback2_t2320646023 * get_ServerCertValidation2_19() const { return ___ServerCertValidation2_19; }
	inline CertificateValidationCallback2_t2320646023 ** get_address_of_ServerCertValidation2_19() { return &___ServerCertValidation2_19; }
	inline void set_ServerCertValidation2_19(CertificateValidationCallback2_t2320646023 * value)
	{
		___ServerCertValidation2_19 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation2_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLCLIENTSTREAM_T3901467752_H
#ifndef CONTEXT_T3003248080_H
#define CONTEXT_T3003248080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t3003248080  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_0;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t846009489* ___sessionId_1;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_2;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t4158131631 * ___serverSettings_3;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t4288934298 * ___clientSettings_4;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t1116865091 * ___current_5;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t1116865091 * ___negotiating_6;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t1116865091 * ___read_7;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t1116865091 * ___write_8;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t2505716966 * ___supportedCiphers_9;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::lastHandshakeMsg
	uint8_t ___lastHandshakeMsg_10;
	// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::handshakeState
	int32_t ___handshakeState_11;
	// System.Boolean Mono.Security.Protocol.Tls.Context::abbreviatedHandshake
	bool ___abbreviatedHandshake_12;
	// System.Boolean Mono.Security.Protocol.Tls.Context::receivedConnectionEnd
	bool ___receivedConnectionEnd_13;
	// System.Boolean Mono.Security.Protocol.Tls.Context::sentConnectionEnd
	bool ___sentConnectionEnd_14;
	// System.Boolean Mono.Security.Protocol.Tls.Context::protocolNegotiated
	bool ___protocolNegotiated_15;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::writeSequenceNumber
	uint64_t ___writeSequenceNumber_16;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::readSequenceNumber
	uint64_t ___readSequenceNumber_17;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientRandom
	ByteU5BU5D_t846009489* ___clientRandom_18;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t846009489* ___serverRandom_19;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t846009489* ___randomCS_20;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t846009489* ___randomSC_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t846009489* ___masterSecret_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t846009489* ___clientWriteKey_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t846009489* ___serverWriteKey_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t846009489* ___clientWriteIV_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t846009489* ___serverWriteIV_26;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t3568751158 * ___handshakeMessages_27;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t1153302872 * ___random_28;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t262916275 * ___recordProtocol_29;

public:
	inline static int32_t get_offset_of_securityProtocol_0() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___securityProtocol_0)); }
	inline int32_t get_securityProtocol_0() const { return ___securityProtocol_0; }
	inline int32_t* get_address_of_securityProtocol_0() { return &___securityProtocol_0; }
	inline void set_securityProtocol_0(int32_t value)
	{
		___securityProtocol_0 = value;
	}

	inline static int32_t get_offset_of_sessionId_1() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___sessionId_1)); }
	inline ByteU5BU5D_t846009489* get_sessionId_1() const { return ___sessionId_1; }
	inline ByteU5BU5D_t846009489** get_address_of_sessionId_1() { return &___sessionId_1; }
	inline void set_sessionId_1(ByteU5BU5D_t846009489* value)
	{
		___sessionId_1 = value;
		Il2CppCodeGenWriteBarrier((&___sessionId_1), value);
	}

	inline static int32_t get_offset_of_compressionMethod_2() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___compressionMethod_2)); }
	inline int32_t get_compressionMethod_2() const { return ___compressionMethod_2; }
	inline int32_t* get_address_of_compressionMethod_2() { return &___compressionMethod_2; }
	inline void set_compressionMethod_2(int32_t value)
	{
		___compressionMethod_2 = value;
	}

	inline static int32_t get_offset_of_serverSettings_3() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___serverSettings_3)); }
	inline TlsServerSettings_t4158131631 * get_serverSettings_3() const { return ___serverSettings_3; }
	inline TlsServerSettings_t4158131631 ** get_address_of_serverSettings_3() { return &___serverSettings_3; }
	inline void set_serverSettings_3(TlsServerSettings_t4158131631 * value)
	{
		___serverSettings_3 = value;
		Il2CppCodeGenWriteBarrier((&___serverSettings_3), value);
	}

	inline static int32_t get_offset_of_clientSettings_4() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___clientSettings_4)); }
	inline TlsClientSettings_t4288934298 * get_clientSettings_4() const { return ___clientSettings_4; }
	inline TlsClientSettings_t4288934298 ** get_address_of_clientSettings_4() { return &___clientSettings_4; }
	inline void set_clientSettings_4(TlsClientSettings_t4288934298 * value)
	{
		___clientSettings_4 = value;
		Il2CppCodeGenWriteBarrier((&___clientSettings_4), value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___current_5)); }
	inline SecurityParameters_t1116865091 * get_current_5() const { return ___current_5; }
	inline SecurityParameters_t1116865091 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(SecurityParameters_t1116865091 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_negotiating_6() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___negotiating_6)); }
	inline SecurityParameters_t1116865091 * get_negotiating_6() const { return ___negotiating_6; }
	inline SecurityParameters_t1116865091 ** get_address_of_negotiating_6() { return &___negotiating_6; }
	inline void set_negotiating_6(SecurityParameters_t1116865091 * value)
	{
		___negotiating_6 = value;
		Il2CppCodeGenWriteBarrier((&___negotiating_6), value);
	}

	inline static int32_t get_offset_of_read_7() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___read_7)); }
	inline SecurityParameters_t1116865091 * get_read_7() const { return ___read_7; }
	inline SecurityParameters_t1116865091 ** get_address_of_read_7() { return &___read_7; }
	inline void set_read_7(SecurityParameters_t1116865091 * value)
	{
		___read_7 = value;
		Il2CppCodeGenWriteBarrier((&___read_7), value);
	}

	inline static int32_t get_offset_of_write_8() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___write_8)); }
	inline SecurityParameters_t1116865091 * get_write_8() const { return ___write_8; }
	inline SecurityParameters_t1116865091 ** get_address_of_write_8() { return &___write_8; }
	inline void set_write_8(SecurityParameters_t1116865091 * value)
	{
		___write_8 = value;
		Il2CppCodeGenWriteBarrier((&___write_8), value);
	}

	inline static int32_t get_offset_of_supportedCiphers_9() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___supportedCiphers_9)); }
	inline CipherSuiteCollection_t2505716966 * get_supportedCiphers_9() const { return ___supportedCiphers_9; }
	inline CipherSuiteCollection_t2505716966 ** get_address_of_supportedCiphers_9() { return &___supportedCiphers_9; }
	inline void set_supportedCiphers_9(CipherSuiteCollection_t2505716966 * value)
	{
		___supportedCiphers_9 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCiphers_9), value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_10() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___lastHandshakeMsg_10)); }
	inline uint8_t get_lastHandshakeMsg_10() const { return ___lastHandshakeMsg_10; }
	inline uint8_t* get_address_of_lastHandshakeMsg_10() { return &___lastHandshakeMsg_10; }
	inline void set_lastHandshakeMsg_10(uint8_t value)
	{
		___lastHandshakeMsg_10 = value;
	}

	inline static int32_t get_offset_of_handshakeState_11() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___handshakeState_11)); }
	inline int32_t get_handshakeState_11() const { return ___handshakeState_11; }
	inline int32_t* get_address_of_handshakeState_11() { return &___handshakeState_11; }
	inline void set_handshakeState_11(int32_t value)
	{
		___handshakeState_11 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_12() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___abbreviatedHandshake_12)); }
	inline bool get_abbreviatedHandshake_12() const { return ___abbreviatedHandshake_12; }
	inline bool* get_address_of_abbreviatedHandshake_12() { return &___abbreviatedHandshake_12; }
	inline void set_abbreviatedHandshake_12(bool value)
	{
		___abbreviatedHandshake_12 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_13() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___receivedConnectionEnd_13)); }
	inline bool get_receivedConnectionEnd_13() const { return ___receivedConnectionEnd_13; }
	inline bool* get_address_of_receivedConnectionEnd_13() { return &___receivedConnectionEnd_13; }
	inline void set_receivedConnectionEnd_13(bool value)
	{
		___receivedConnectionEnd_13 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_14() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___sentConnectionEnd_14)); }
	inline bool get_sentConnectionEnd_14() const { return ___sentConnectionEnd_14; }
	inline bool* get_address_of_sentConnectionEnd_14() { return &___sentConnectionEnd_14; }
	inline void set_sentConnectionEnd_14(bool value)
	{
		___sentConnectionEnd_14 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_15() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___protocolNegotiated_15)); }
	inline bool get_protocolNegotiated_15() const { return ___protocolNegotiated_15; }
	inline bool* get_address_of_protocolNegotiated_15() { return &___protocolNegotiated_15; }
	inline void set_protocolNegotiated_15(bool value)
	{
		___protocolNegotiated_15 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_16() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___writeSequenceNumber_16)); }
	inline uint64_t get_writeSequenceNumber_16() const { return ___writeSequenceNumber_16; }
	inline uint64_t* get_address_of_writeSequenceNumber_16() { return &___writeSequenceNumber_16; }
	inline void set_writeSequenceNumber_16(uint64_t value)
	{
		___writeSequenceNumber_16 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_17() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___readSequenceNumber_17)); }
	inline uint64_t get_readSequenceNumber_17() const { return ___readSequenceNumber_17; }
	inline uint64_t* get_address_of_readSequenceNumber_17() { return &___readSequenceNumber_17; }
	inline void set_readSequenceNumber_17(uint64_t value)
	{
		___readSequenceNumber_17 = value;
	}

	inline static int32_t get_offset_of_clientRandom_18() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___clientRandom_18)); }
	inline ByteU5BU5D_t846009489* get_clientRandom_18() const { return ___clientRandom_18; }
	inline ByteU5BU5D_t846009489** get_address_of_clientRandom_18() { return &___clientRandom_18; }
	inline void set_clientRandom_18(ByteU5BU5D_t846009489* value)
	{
		___clientRandom_18 = value;
		Il2CppCodeGenWriteBarrier((&___clientRandom_18), value);
	}

	inline static int32_t get_offset_of_serverRandom_19() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___serverRandom_19)); }
	inline ByteU5BU5D_t846009489* get_serverRandom_19() const { return ___serverRandom_19; }
	inline ByteU5BU5D_t846009489** get_address_of_serverRandom_19() { return &___serverRandom_19; }
	inline void set_serverRandom_19(ByteU5BU5D_t846009489* value)
	{
		___serverRandom_19 = value;
		Il2CppCodeGenWriteBarrier((&___serverRandom_19), value);
	}

	inline static int32_t get_offset_of_randomCS_20() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___randomCS_20)); }
	inline ByteU5BU5D_t846009489* get_randomCS_20() const { return ___randomCS_20; }
	inline ByteU5BU5D_t846009489** get_address_of_randomCS_20() { return &___randomCS_20; }
	inline void set_randomCS_20(ByteU5BU5D_t846009489* value)
	{
		___randomCS_20 = value;
		Il2CppCodeGenWriteBarrier((&___randomCS_20), value);
	}

	inline static int32_t get_offset_of_randomSC_21() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___randomSC_21)); }
	inline ByteU5BU5D_t846009489* get_randomSC_21() const { return ___randomSC_21; }
	inline ByteU5BU5D_t846009489** get_address_of_randomSC_21() { return &___randomSC_21; }
	inline void set_randomSC_21(ByteU5BU5D_t846009489* value)
	{
		___randomSC_21 = value;
		Il2CppCodeGenWriteBarrier((&___randomSC_21), value);
	}

	inline static int32_t get_offset_of_masterSecret_22() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___masterSecret_22)); }
	inline ByteU5BU5D_t846009489* get_masterSecret_22() const { return ___masterSecret_22; }
	inline ByteU5BU5D_t846009489** get_address_of_masterSecret_22() { return &___masterSecret_22; }
	inline void set_masterSecret_22(ByteU5BU5D_t846009489* value)
	{
		___masterSecret_22 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_22), value);
	}

	inline static int32_t get_offset_of_clientWriteKey_23() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___clientWriteKey_23)); }
	inline ByteU5BU5D_t846009489* get_clientWriteKey_23() const { return ___clientWriteKey_23; }
	inline ByteU5BU5D_t846009489** get_address_of_clientWriteKey_23() { return &___clientWriteKey_23; }
	inline void set_clientWriteKey_23(ByteU5BU5D_t846009489* value)
	{
		___clientWriteKey_23 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteKey_23), value);
	}

	inline static int32_t get_offset_of_serverWriteKey_24() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___serverWriteKey_24)); }
	inline ByteU5BU5D_t846009489* get_serverWriteKey_24() const { return ___serverWriteKey_24; }
	inline ByteU5BU5D_t846009489** get_address_of_serverWriteKey_24() { return &___serverWriteKey_24; }
	inline void set_serverWriteKey_24(ByteU5BU5D_t846009489* value)
	{
		___serverWriteKey_24 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteKey_24), value);
	}

	inline static int32_t get_offset_of_clientWriteIV_25() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___clientWriteIV_25)); }
	inline ByteU5BU5D_t846009489* get_clientWriteIV_25() const { return ___clientWriteIV_25; }
	inline ByteU5BU5D_t846009489** get_address_of_clientWriteIV_25() { return &___clientWriteIV_25; }
	inline void set_clientWriteIV_25(ByteU5BU5D_t846009489* value)
	{
		___clientWriteIV_25 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteIV_25), value);
	}

	inline static int32_t get_offset_of_serverWriteIV_26() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___serverWriteIV_26)); }
	inline ByteU5BU5D_t846009489* get_serverWriteIV_26() const { return ___serverWriteIV_26; }
	inline ByteU5BU5D_t846009489** get_address_of_serverWriteIV_26() { return &___serverWriteIV_26; }
	inline void set_serverWriteIV_26(ByteU5BU5D_t846009489* value)
	{
		___serverWriteIV_26 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteIV_26), value);
	}

	inline static int32_t get_offset_of_handshakeMessages_27() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___handshakeMessages_27)); }
	inline TlsStream_t3568751158 * get_handshakeMessages_27() const { return ___handshakeMessages_27; }
	inline TlsStream_t3568751158 ** get_address_of_handshakeMessages_27() { return &___handshakeMessages_27; }
	inline void set_handshakeMessages_27(TlsStream_t3568751158 * value)
	{
		___handshakeMessages_27 = value;
		Il2CppCodeGenWriteBarrier((&___handshakeMessages_27), value);
	}

	inline static int32_t get_offset_of_random_28() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___random_28)); }
	inline RandomNumberGenerator_t1153302872 * get_random_28() const { return ___random_28; }
	inline RandomNumberGenerator_t1153302872 ** get_address_of_random_28() { return &___random_28; }
	inline void set_random_28(RandomNumberGenerator_t1153302872 * value)
	{
		___random_28 = value;
		Il2CppCodeGenWriteBarrier((&___random_28), value);
	}

	inline static int32_t get_offset_of_recordProtocol_29() { return static_cast<int32_t>(offsetof(Context_t3003248080, ___recordProtocol_29)); }
	inline RecordProtocol_t262916275 * get_recordProtocol_29() const { return ___recordProtocol_29; }
	inline RecordProtocol_t262916275 ** get_address_of_recordProtocol_29() { return &___recordProtocol_29; }
	inline void set_recordProtocol_29(RecordProtocol_t262916275 * value)
	{
		___recordProtocol_29 = value;
		Il2CppCodeGenWriteBarrier((&___recordProtocol_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3003248080_H
#ifndef CIPHERSUITECOLLECTION_T2505716966_H
#define CIPHERSUITECOLLECTION_T2505716966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t2505716966  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t2646369124 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;

public:
	inline static int32_t get_offset_of_cipherSuites_0() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2505716966, ___cipherSuites_0)); }
	inline ArrayList_t2646369124 * get_cipherSuites_0() const { return ___cipherSuites_0; }
	inline ArrayList_t2646369124 ** get_address_of_cipherSuites_0() { return &___cipherSuites_0; }
	inline void set_cipherSuites_0(ArrayList_t2646369124 * value)
	{
		___cipherSuites_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherSuites_0), value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2505716966, ___protocol_1)); }
	inline int32_t get_protocol_1() const { return ___protocol_1; }
	inline int32_t* get_address_of_protocol_1() { return &___protocol_1; }
	inline void set_protocol_1(int32_t value)
	{
		___protocol_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECOLLECTION_T2505716966_H
#ifndef X509CHAIN_T846790323_H
#define X509CHAIN_T846790323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t846790323  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3481652266 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3481652266 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t1328949861 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3481652266 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t846790323, ___roots_0)); }
	inline X509CertificateCollection_t3481652266 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t3481652266 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t3481652266 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t846790323, ___certs_1)); }
	inline X509CertificateCollection_t3481652266 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t3481652266 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t3481652266 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t846790323, ____root_2)); }
	inline X509Certificate_t1328949861 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t1328949861 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t1328949861 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t846790323, ____chain_3)); }
	inline X509CertificateCollection_t3481652266 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t3481652266 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t3481652266 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t846790323, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T846790323_H
#ifndef MULTICASTDELEGATE_T3891838365_H
#define MULTICASTDELEGATE_T3891838365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3891838365  : public Delegate_t444233800
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3891838365 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3891838365 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3891838365, ___prev_9)); }
	inline MulticastDelegate_t3891838365 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3891838365 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3891838365 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3891838365, ___kpm_next_10)); }
	inline MulticastDelegate_t3891838365 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3891838365 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3891838365 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3891838365_H
#ifndef SYMMETRICALGORITHM_T2905308919_H
#define SYMMETRICALGORITHM_T2905308919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2905308919  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t846009489* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t846009489* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t525204915* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t525204915* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___IVValue_1)); }
	inline ByteU5BU5D_t846009489* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t846009489** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t846009489* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___KeyValue_3)); }
	inline ByteU5BU5D_t846009489* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t846009489** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t846009489* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t525204915* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t525204915** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t525204915* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t525204915* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t525204915** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t525204915* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2905308919, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T2905308919_H
#ifndef CIPHERSUITE_T2272621373_H
#define CIPHERSUITE_T2272621373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuite
struct  CipherSuite_t2272621373  : public RuntimeObject
{
public:
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::code
	int16_t ___code_1;
	// System.String Mono.Security.Protocol.Tls.CipherSuite::name
	String_t* ___name_2;
	// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::cipherAlgorithmType
	int32_t ___cipherAlgorithmType_3;
	// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::hashAlgorithmType
	int32_t ___hashAlgorithmType_4;
	// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::exchangeAlgorithmType
	int32_t ___exchangeAlgorithmType_5;
	// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::isExportable
	bool ___isExportable_6;
	// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::cipherMode
	int32_t ___cipherMode_7;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::keyMaterialSize
	uint8_t ___keyMaterialSize_8;
	// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::keyBlockSize
	int32_t ___keyBlockSize_9;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::expandedKeyMaterialSize
	uint8_t ___expandedKeyMaterialSize_10;
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::effectiveKeyBits
	int16_t ___effectiveKeyBits_11;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::ivSize
	uint8_t ___ivSize_12;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::blockSize
	uint8_t ___blockSize_13;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::context
	Context_t3003248080 * ___context_14;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::encryptionAlgorithm
	SymmetricAlgorithm_t2905308919 * ___encryptionAlgorithm_15;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::encryptionCipher
	RuntimeObject* ___encryptionCipher_16;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::decryptionAlgorithm
	SymmetricAlgorithm_t2905308919 * ___decryptionAlgorithm_17;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::decryptionCipher
	RuntimeObject* ___decryptionCipher_18;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::clientHMAC
	KeyedHashAlgorithm_t3790775089 * ___clientHMAC_19;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::serverHMAC
	KeyedHashAlgorithm_t3790775089 * ___serverHMAC_20;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_cipherAlgorithmType_3() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___cipherAlgorithmType_3)); }
	inline int32_t get_cipherAlgorithmType_3() const { return ___cipherAlgorithmType_3; }
	inline int32_t* get_address_of_cipherAlgorithmType_3() { return &___cipherAlgorithmType_3; }
	inline void set_cipherAlgorithmType_3(int32_t value)
	{
		___cipherAlgorithmType_3 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithmType_4() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___hashAlgorithmType_4)); }
	inline int32_t get_hashAlgorithmType_4() const { return ___hashAlgorithmType_4; }
	inline int32_t* get_address_of_hashAlgorithmType_4() { return &___hashAlgorithmType_4; }
	inline void set_hashAlgorithmType_4(int32_t value)
	{
		___hashAlgorithmType_4 = value;
	}

	inline static int32_t get_offset_of_exchangeAlgorithmType_5() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___exchangeAlgorithmType_5)); }
	inline int32_t get_exchangeAlgorithmType_5() const { return ___exchangeAlgorithmType_5; }
	inline int32_t* get_address_of_exchangeAlgorithmType_5() { return &___exchangeAlgorithmType_5; }
	inline void set_exchangeAlgorithmType_5(int32_t value)
	{
		___exchangeAlgorithmType_5 = value;
	}

	inline static int32_t get_offset_of_isExportable_6() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___isExportable_6)); }
	inline bool get_isExportable_6() const { return ___isExportable_6; }
	inline bool* get_address_of_isExportable_6() { return &___isExportable_6; }
	inline void set_isExportable_6(bool value)
	{
		___isExportable_6 = value;
	}

	inline static int32_t get_offset_of_cipherMode_7() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___cipherMode_7)); }
	inline int32_t get_cipherMode_7() const { return ___cipherMode_7; }
	inline int32_t* get_address_of_cipherMode_7() { return &___cipherMode_7; }
	inline void set_cipherMode_7(int32_t value)
	{
		___cipherMode_7 = value;
	}

	inline static int32_t get_offset_of_keyMaterialSize_8() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___keyMaterialSize_8)); }
	inline uint8_t get_keyMaterialSize_8() const { return ___keyMaterialSize_8; }
	inline uint8_t* get_address_of_keyMaterialSize_8() { return &___keyMaterialSize_8; }
	inline void set_keyMaterialSize_8(uint8_t value)
	{
		___keyMaterialSize_8 = value;
	}

	inline static int32_t get_offset_of_keyBlockSize_9() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___keyBlockSize_9)); }
	inline int32_t get_keyBlockSize_9() const { return ___keyBlockSize_9; }
	inline int32_t* get_address_of_keyBlockSize_9() { return &___keyBlockSize_9; }
	inline void set_keyBlockSize_9(int32_t value)
	{
		___keyBlockSize_9 = value;
	}

	inline static int32_t get_offset_of_expandedKeyMaterialSize_10() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___expandedKeyMaterialSize_10)); }
	inline uint8_t get_expandedKeyMaterialSize_10() const { return ___expandedKeyMaterialSize_10; }
	inline uint8_t* get_address_of_expandedKeyMaterialSize_10() { return &___expandedKeyMaterialSize_10; }
	inline void set_expandedKeyMaterialSize_10(uint8_t value)
	{
		___expandedKeyMaterialSize_10 = value;
	}

	inline static int32_t get_offset_of_effectiveKeyBits_11() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___effectiveKeyBits_11)); }
	inline int16_t get_effectiveKeyBits_11() const { return ___effectiveKeyBits_11; }
	inline int16_t* get_address_of_effectiveKeyBits_11() { return &___effectiveKeyBits_11; }
	inline void set_effectiveKeyBits_11(int16_t value)
	{
		___effectiveKeyBits_11 = value;
	}

	inline static int32_t get_offset_of_ivSize_12() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___ivSize_12)); }
	inline uint8_t get_ivSize_12() const { return ___ivSize_12; }
	inline uint8_t* get_address_of_ivSize_12() { return &___ivSize_12; }
	inline void set_ivSize_12(uint8_t value)
	{
		___ivSize_12 = value;
	}

	inline static int32_t get_offset_of_blockSize_13() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___blockSize_13)); }
	inline uint8_t get_blockSize_13() const { return ___blockSize_13; }
	inline uint8_t* get_address_of_blockSize_13() { return &___blockSize_13; }
	inline void set_blockSize_13(uint8_t value)
	{
		___blockSize_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___context_14)); }
	inline Context_t3003248080 * get_context_14() const { return ___context_14; }
	inline Context_t3003248080 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(Context_t3003248080 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier((&___context_14), value);
	}

	inline static int32_t get_offset_of_encryptionAlgorithm_15() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___encryptionAlgorithm_15)); }
	inline SymmetricAlgorithm_t2905308919 * get_encryptionAlgorithm_15() const { return ___encryptionAlgorithm_15; }
	inline SymmetricAlgorithm_t2905308919 ** get_address_of_encryptionAlgorithm_15() { return &___encryptionAlgorithm_15; }
	inline void set_encryptionAlgorithm_15(SymmetricAlgorithm_t2905308919 * value)
	{
		___encryptionAlgorithm_15 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionAlgorithm_15), value);
	}

	inline static int32_t get_offset_of_encryptionCipher_16() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___encryptionCipher_16)); }
	inline RuntimeObject* get_encryptionCipher_16() const { return ___encryptionCipher_16; }
	inline RuntimeObject** get_address_of_encryptionCipher_16() { return &___encryptionCipher_16; }
	inline void set_encryptionCipher_16(RuntimeObject* value)
	{
		___encryptionCipher_16 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionCipher_16), value);
	}

	inline static int32_t get_offset_of_decryptionAlgorithm_17() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___decryptionAlgorithm_17)); }
	inline SymmetricAlgorithm_t2905308919 * get_decryptionAlgorithm_17() const { return ___decryptionAlgorithm_17; }
	inline SymmetricAlgorithm_t2905308919 ** get_address_of_decryptionAlgorithm_17() { return &___decryptionAlgorithm_17; }
	inline void set_decryptionAlgorithm_17(SymmetricAlgorithm_t2905308919 * value)
	{
		___decryptionAlgorithm_17 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionAlgorithm_17), value);
	}

	inline static int32_t get_offset_of_decryptionCipher_18() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___decryptionCipher_18)); }
	inline RuntimeObject* get_decryptionCipher_18() const { return ___decryptionCipher_18; }
	inline RuntimeObject** get_address_of_decryptionCipher_18() { return &___decryptionCipher_18; }
	inline void set_decryptionCipher_18(RuntimeObject* value)
	{
		___decryptionCipher_18 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionCipher_18), value);
	}

	inline static int32_t get_offset_of_clientHMAC_19() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___clientHMAC_19)); }
	inline KeyedHashAlgorithm_t3790775089 * get_clientHMAC_19() const { return ___clientHMAC_19; }
	inline KeyedHashAlgorithm_t3790775089 ** get_address_of_clientHMAC_19() { return &___clientHMAC_19; }
	inline void set_clientHMAC_19(KeyedHashAlgorithm_t3790775089 * value)
	{
		___clientHMAC_19 = value;
		Il2CppCodeGenWriteBarrier((&___clientHMAC_19), value);
	}

	inline static int32_t get_offset_of_serverHMAC_20() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373, ___serverHMAC_20)); }
	inline KeyedHashAlgorithm_t3790775089 * get_serverHMAC_20() const { return ___serverHMAC_20; }
	inline KeyedHashAlgorithm_t3790775089 ** get_address_of_serverHMAC_20() { return &___serverHMAC_20; }
	inline void set_serverHMAC_20(KeyedHashAlgorithm_t3790775089 * value)
	{
		___serverHMAC_20 = value;
		Il2CppCodeGenWriteBarrier((&___serverHMAC_20), value);
	}
};

struct CipherSuite_t2272621373_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EmptyArray
	ByteU5BU5D_t846009489* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(CipherSuite_t2272621373_StaticFields, ___EmptyArray_0)); }
	inline ByteU5BU5D_t846009489* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline ByteU5BU5D_t846009489** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(ByteU5BU5D_t846009489* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITE_T2272621373_H
#ifndef ALERT_T4028358682_H
#define ALERT_T4028358682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Alert
struct  Alert_t4028358682  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t4028358682, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t4028358682, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERT_T4028358682_H
#ifndef DATETIME_T625588519_H
#define DATETIME_T625588519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t625588519 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1775461494  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t625588519, ___ticks_0)); }
	inline TimeSpan_t1775461494  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1775461494 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1775461494  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t625588519, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t625588519_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t625588519  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t625588519  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t62953633* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t62953633* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t62953633* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t62953633* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t62953633* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t62953633* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t62953633* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t790510266* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t790510266* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___MaxValue_2)); }
	inline DateTime_t625588519  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t625588519 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t625588519  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___MinValue_3)); }
	inline DateTime_t625588519  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t625588519 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t625588519  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t62953633* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t62953633** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t62953633* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t62953633* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t62953633** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t62953633* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t62953633* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t62953633** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t62953633* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t62953633* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t62953633** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t62953633* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t62953633* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t62953633** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t62953633* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t62953633* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t62953633** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t62953633* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t62953633* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t62953633** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t62953633* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t790510266* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t790510266** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t790510266* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t790510266* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t790510266** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t790510266* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t625588519_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T625588519_H
#ifndef CLIENTSESSIONINFO_T2908536865_H
#define CLIENTSESSIONINFO_T2908536865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct  ClientSessionInfo_t2908536865  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::disposed
	bool ___disposed_1;
	// System.DateTime Mono.Security.Protocol.Tls.ClientSessionInfo::validuntil
	DateTime_t625588519  ___validuntil_2;
	// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::host
	String_t* ___host_3;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::sid
	ByteU5BU5D_t846009489* ___sid_4;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::masterSecret
	ByteU5BU5D_t846009489* ___masterSecret_5;

public:
	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_validuntil_2() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865, ___validuntil_2)); }
	inline DateTime_t625588519  get_validuntil_2() const { return ___validuntil_2; }
	inline DateTime_t625588519 * get_address_of_validuntil_2() { return &___validuntil_2; }
	inline void set_validuntil_2(DateTime_t625588519  value)
	{
		___validuntil_2 = value;
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_sid_4() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865, ___sid_4)); }
	inline ByteU5BU5D_t846009489* get_sid_4() const { return ___sid_4; }
	inline ByteU5BU5D_t846009489** get_address_of_sid_4() { return &___sid_4; }
	inline void set_sid_4(ByteU5BU5D_t846009489* value)
	{
		___sid_4 = value;
		Il2CppCodeGenWriteBarrier((&___sid_4), value);
	}

	inline static int32_t get_offset_of_masterSecret_5() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865, ___masterSecret_5)); }
	inline ByteU5BU5D_t846009489* get_masterSecret_5() const { return ___masterSecret_5; }
	inline ByteU5BU5D_t846009489** get_address_of_masterSecret_5() { return &___masterSecret_5; }
	inline void set_masterSecret_5(ByteU5BU5D_t846009489* value)
	{
		___masterSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_5), value);
	}
};

struct ClientSessionInfo_t2908536865_StaticFields
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ClientSessionInfo::ValidityInterval
	int32_t ___ValidityInterval_0;

public:
	inline static int32_t get_offset_of_ValidityInterval_0() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2908536865_StaticFields, ___ValidityInterval_0)); }
	inline int32_t get_ValidityInterval_0() const { return ___ValidityInterval_0; }
	inline int32_t* get_address_of_ValidityInterval_0() { return &___ValidityInterval_0; }
	inline void set_ValidityInterval_0(int32_t value)
	{
		___ValidityInterval_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONINFO_T2908536865_H
#ifndef X509CRL_T3522240849_H
#define X509CRL_T3522240849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t3522240849  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t625588519  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t625588519  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t2646369124 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t846009489* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t2769113024 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t846009489* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t846009489* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___thisUpdate_2)); }
	inline DateTime_t625588519  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t625588519 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t625588519  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___nextUpdate_3)); }
	inline DateTime_t625588519  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t625588519 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t625588519  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___entries_4)); }
	inline ArrayList_t2646369124 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t2646369124 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t2646369124 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___signature_6)); }
	inline ByteU5BU5D_t846009489* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t846009489** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t846009489* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___extensions_7)); }
	inline X509ExtensionCollection_t2769113024 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t2769113024 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t2769113024 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___encoded_8)); }
	inline ByteU5BU5D_t846009489* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t846009489** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t846009489* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849, ___hash_value_9)); }
	inline ByteU5BU5D_t846009489* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t846009489** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t846009489* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t3522240849_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(X509Crl_t3522240849_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T3522240849_H
#ifndef RC4_T1548322013_H
#define RC4_T1548322013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t1548322013  : public SymmetricAlgorithm_t2905308919
{
public:

public:
};

struct RC4_t1548322013_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t525204915* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t525204915* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t1548322013_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t525204915* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t525204915** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t525204915* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t1548322013_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t525204915* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t525204915** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t525204915* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T1548322013_H
#ifndef SERVERCONTEXT_T3848570566_H
#define SERVERCONTEXT_T3848570566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ServerContext
struct  ServerContext_t3848570566  : public Context_t3003248080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXT_T3848570566_H
#ifndef X509CERTIFICATE_T1328949861_H
#define X509CERTIFICATE_T1328949861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t1328949861  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t190603108 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t846009489* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t625588519  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t625588519  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t190603108 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t846009489* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t190603108 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t846009489* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t846009489* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t846009489* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t846009489* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t258460123 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t1437237631 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t846009489* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t846009489* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t846009489* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t2769113024 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___decoder_0)); }
	inline ASN1_t190603108 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t190603108 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t190603108 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t846009489* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t846009489** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t846009489* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_from_2)); }
	inline DateTime_t625588519  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t625588519 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t625588519  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_until_3)); }
	inline DateTime_t625588519  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t625588519 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t625588519  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___issuer_4)); }
	inline ASN1_t190603108 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t190603108 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t190603108 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t846009489* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t846009489** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t846009489* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___subject_8)); }
	inline ASN1_t190603108 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t190603108 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t190603108 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_publickey_10)); }
	inline ByteU5BU5D_t846009489* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t846009489** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t846009489* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___signature_11)); }
	inline ByteU5BU5D_t846009489* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t846009489** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t846009489* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t846009489* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t846009489** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t846009489* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___certhash_14)); }
	inline ByteU5BU5D_t846009489* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t846009489** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t846009489* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ____rsa_15)); }
	inline RSA_t258460123 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t258460123 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t258460123 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ____dsa_16)); }
	inline DSA_t1437237631 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t1437237631 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t1437237631 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___serialnumber_18)); }
	inline ByteU5BU5D_t846009489* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t846009489** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t846009489* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t846009489* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t846009489** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t846009489* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t846009489* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t846009489** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t846009489* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861, ___extensions_21)); }
	inline X509ExtensionCollection_t2769113024 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t2769113024 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t2769113024 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t1328949861_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t2442847053 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t1328949861_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t2442847053 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t2442847053 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t2442847053 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T1328949861_H
#ifndef KEYGENERATEDEVENTHANDLER_T4116469292_H
#define KEYGENERATEDEVENTHANDLER_T4116469292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t4116469292  : public MulticastDelegate_t3891838365
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T4116469292_H
#ifndef CLIENTCONTEXT_T495549367_H
#define CLIENTCONTEXT_T495549367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t495549367  : public Context_t3003248080
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t3901467752 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;

public:
	inline static int32_t get_offset_of_sslStream_30() { return static_cast<int32_t>(offsetof(ClientContext_t495549367, ___sslStream_30)); }
	inline SslClientStream_t3901467752 * get_sslStream_30() const { return ___sslStream_30; }
	inline SslClientStream_t3901467752 ** get_address_of_sslStream_30() { return &___sslStream_30; }
	inline void set_sslStream_30(SslClientStream_t3901467752 * value)
	{
		___sslStream_30 = value;
		Il2CppCodeGenWriteBarrier((&___sslStream_30), value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_31() { return static_cast<int32_t>(offsetof(ClientContext_t495549367, ___clientHelloProtocol_31)); }
	inline int16_t get_clientHelloProtocol_31() const { return ___clientHelloProtocol_31; }
	inline int16_t* get_address_of_clientHelloProtocol_31() { return &___clientHelloProtocol_31; }
	inline void set_clientHelloProtocol_31(int16_t value)
	{
		___clientHelloProtocol_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXT_T495549367_H
#ifndef HTTPSCLIENTSTREAM_T946306019_H
#define HTTPSCLIENTSTREAM_T946306019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t946306019  : public SslClientStream_t3901467752
{
public:
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t2045369167 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;

public:
	inline static int32_t get_offset_of__request_20() { return static_cast<int32_t>(offsetof(HttpsClientStream_t946306019, ____request_20)); }
	inline HttpWebRequest_t2045369167 * get__request_20() const { return ____request_20; }
	inline HttpWebRequest_t2045369167 ** get_address_of__request_20() { return &____request_20; }
	inline void set__request_20(HttpWebRequest_t2045369167 * value)
	{
		____request_20 = value;
		Il2CppCodeGenWriteBarrier((&____request_20), value);
	}

	inline static int32_t get_offset_of__status_21() { return static_cast<int32_t>(offsetof(HttpsClientStream_t946306019, ____status_21)); }
	inline int32_t get__status_21() const { return ____status_21; }
	inline int32_t* get_address_of__status_21() { return &____status_21; }
	inline void set__status_21(int32_t value)
	{
		____status_21 = value;
	}
};

struct HttpsClientStream_t946306019_StaticFields
{
public:
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t3316567174 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t554174953 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(HttpsClientStream_t946306019_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline CertificateSelectionCallback_t3316567174 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline CertificateSelectionCallback_t3316567174 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(CertificateSelectionCallback_t3316567174 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(HttpsClientStream_t946306019_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline PrivateKeySelectionCallback_t554174953 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline PrivateKeySelectionCallback_t554174953 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(PrivateKeySelectionCallback_t554174953 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSCLIENTSTREAM_T946306019_H
#ifndef X509CRLENTRY_T1146156426_H
#define X509CRLENTRY_T1146156426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t1146156426  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t846009489* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t625588519  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t2769113024 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1146156426, ___sn_0)); }
	inline ByteU5BU5D_t846009489* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t846009489** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t846009489* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1146156426, ___revocationDate_1)); }
	inline DateTime_t625588519  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t625588519 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t625588519  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t1146156426, ___extensions_2)); }
	inline X509ExtensionCollection_t2769113024 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t2769113024 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t2769113024 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T1146156426_H
#ifndef ARC4MANAGED_T3718052861_H
#define ARC4MANAGED_T3718052861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t3718052861  : public RC4_t1548322013
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t846009489* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t846009489* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t3718052861, ___key_12)); }
	inline ByteU5BU5D_t846009489* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t846009489** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t846009489* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t3718052861, ___state_13)); }
	inline ByteU5BU5D_t846009489* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t846009489** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t846009489* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t3718052861, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t3718052861, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t3718052861, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T3718052861_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (U24ArrayTypeU2448_t2670424207)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t2670424207 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (U24ArrayTypeU2464_t3098264126)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t3098264126 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (U24ArrayTypeU2412_t819939822)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t819939822 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (U24ArrayTypeU24136_t2220392326)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2220392326 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (U24ArrayTypeU248_t184912751)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t184912751 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (U24ArrayTypeU2472_t451504977)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t451504977 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (U24ArrayTypeU24124_t3880911953)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t3880911953 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (U24ArrayTypeU2496_t4218419161)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t4218419161 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (U24ArrayTypeU242048_t2380189131)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t2380189131 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (U24ArrayTypeU24256_t982558634)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t982558634 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (U24ArrayTypeU241024_t3148486879)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3148486879 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (U24ArrayTypeU24640_t793090750)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t793090750 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (U24ArrayTypeU24128_t1946169821)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t1946169821 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (U24ArrayTypeU2452_t815401566)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t815401566 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (__Il2CppComDelegate_t157706448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (U3CModuleU3E_t1934358505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (Locale_t949506950), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (BigInteger_t3343915020), -1, sizeof(BigInteger_t3343915020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	BigInteger_t3343915020::get_offset_of_length_0(),
	BigInteger_t3343915020::get_offset_of_data_1(),
	BigInteger_t3343915020_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t3343915020_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (Sign_t2499895769)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable919[4] = 
{
	Sign_t2499895769::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (ModulusRing_t2414408114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable920[2] = 
{
	ModulusRing_t2414408114::get_offset_of_mod_0(),
	ModulusRing_t2414408114::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (Kernel_t4172798060), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (ConfidenceFactor_t3609155689)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable922[7] = 
{
	ConfidenceFactor_t3609155689::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (PrimalityTests_t418984751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (PrimeGeneratorBase_t1641341661), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (SequentialSearchPrimeGeneratorBase_t1572445569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (ASN1_t190603108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	ASN1_t190603108::get_offset_of_m_nTag_0(),
	ASN1_t190603108::get_offset_of_m_aValue_1(),
	ASN1_t190603108::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ASN1Convert_t608738959), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (BitConverterLE_t3256152058), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (PKCS7_t3280267781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (ContentInfo_t1810823944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable930[2] = 
{
	ContentInfo_t1810823944::get_offset_of_contentType_0(),
	ContentInfo_t1810823944::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (EncryptedData_t3594288597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[4] = 
{
	EncryptedData_t3594288597::get_offset_of__version_0(),
	EncryptedData_t3594288597::get_offset_of__content_1(),
	EncryptedData_t3594288597::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3594288597::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (ARC4Managed_t3718052861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[5] = 
{
	ARC4Managed_t3718052861::get_offset_of_key_12(),
	ARC4Managed_t3718052861::get_offset_of_state_13(),
	ARC4Managed_t3718052861::get_offset_of_x_14(),
	ARC4Managed_t3718052861::get_offset_of_y_15(),
	ARC4Managed_t3718052861::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CryptoConvert_t595715730), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (KeyBuilder_t1513841246), -1, sizeof(KeyBuilder_t1513841246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable934[1] = 
{
	KeyBuilder_t1513841246_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (MD2_t2358545844), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (MD2Managed_t295206673), -1, sizeof(MD2Managed_t295206673_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable936[6] = 
{
	MD2Managed_t295206673::get_offset_of_state_4(),
	MD2Managed_t295206673::get_offset_of_checksum_5(),
	MD2Managed_t295206673::get_offset_of_buffer_6(),
	MD2Managed_t295206673::get_offset_of_count_7(),
	MD2Managed_t295206673::get_offset_of_x_8(),
	MD2Managed_t295206673_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (MD4_t86105526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (MD4Managed_t1785447264), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[5] = 
{
	MD4Managed_t1785447264::get_offset_of_state_4(),
	MD4Managed_t1785447264::get_offset_of_buffer_5(),
	MD4Managed_t1785447264::get_offset_of_count_6(),
	MD4Managed_t1785447264::get_offset_of_x_7(),
	MD4Managed_t1785447264::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (PKCS1_t1101578648), -1, sizeof(PKCS1_t1101578648_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable939[4] = 
{
	PKCS1_t1101578648_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1101578648_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1101578648_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1101578648_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (PKCS8_t3868002858), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (PrivateKeyInfo_t22684222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable941[4] = 
{
	PrivateKeyInfo_t22684222::get_offset_of__version_0(),
	PrivateKeyInfo_t22684222::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t22684222::get_offset_of__key_2(),
	PrivateKeyInfo_t22684222::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (EncryptedPrivateKeyInfo_t1130451900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable942[4] = 
{
	EncryptedPrivateKeyInfo_t1130451900::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t1130451900::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t1130451900::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t1130451900::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (RC4_t1548322013), -1, sizeof(RC4_t1548322013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable943[2] = 
{
	RC4_t1548322013_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t1548322013_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (RSAManaged_t1892944802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[13] = 
{
	RSAManaged_t1892944802::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1892944802::get_offset_of_keyBlinding_3(),
	RSAManaged_t1892944802::get_offset_of_keypairGenerated_4(),
	RSAManaged_t1892944802::get_offset_of_m_disposed_5(),
	RSAManaged_t1892944802::get_offset_of_d_6(),
	RSAManaged_t1892944802::get_offset_of_p_7(),
	RSAManaged_t1892944802::get_offset_of_q_8(),
	RSAManaged_t1892944802::get_offset_of_dp_9(),
	RSAManaged_t1892944802::get_offset_of_dq_10(),
	RSAManaged_t1892944802::get_offset_of_qInv_11(),
	RSAManaged_t1892944802::get_offset_of_n_12(),
	RSAManaged_t1892944802::get_offset_of_e_13(),
	RSAManaged_t1892944802::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (KeyGeneratedEventHandler_t4116469292), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (SafeBag_t3299700157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[2] = 
{
	SafeBag_t3299700157::get_offset_of__bagOID_0(),
	SafeBag_t3299700157::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (PKCS12_t3661415161), -1, sizeof(PKCS12_t3661415161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable947[17] = 
{
	PKCS12_t3661415161_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t3661415161::get_offset_of__password_1(),
	PKCS12_t3661415161::get_offset_of__keyBags_2(),
	PKCS12_t3661415161::get_offset_of__secretBags_3(),
	PKCS12_t3661415161::get_offset_of__certs_4(),
	PKCS12_t3661415161::get_offset_of__keyBagsChanged_5(),
	PKCS12_t3661415161::get_offset_of__secretBagsChanged_6(),
	PKCS12_t3661415161::get_offset_of__certsChanged_7(),
	PKCS12_t3661415161::get_offset_of__iterations_8(),
	PKCS12_t3661415161::get_offset_of__safeBags_9(),
	PKCS12_t3661415161::get_offset_of__rng_10(),
	PKCS12_t3661415161_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t3661415161_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_12(),
	PKCS12_t3661415161_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_13(),
	PKCS12_t3661415161_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_14(),
	PKCS12_t3661415161_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_15(),
	PKCS12_t3661415161_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (DeriveBytes_t1669489832), -1, sizeof(DeriveBytes_t1669489832_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable948[7] = 
{
	DeriveBytes_t1669489832_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1669489832_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1669489832_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1669489832::get_offset_of__hashName_3(),
	DeriveBytes_t1669489832::get_offset_of__iterations_4(),
	DeriveBytes_t1669489832::get_offset_of__password_5(),
	DeriveBytes_t1669489832::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (X501_t2374464351), -1, sizeof(X501_t2374464351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable949[15] = 
{
	X501_t2374464351_StaticFields::get_offset_of_countryName_0(),
	X501_t2374464351_StaticFields::get_offset_of_organizationName_1(),
	X501_t2374464351_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t2374464351_StaticFields::get_offset_of_commonName_3(),
	X501_t2374464351_StaticFields::get_offset_of_localityName_4(),
	X501_t2374464351_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t2374464351_StaticFields::get_offset_of_streetAddress_6(),
	X501_t2374464351_StaticFields::get_offset_of_domainComponent_7(),
	X501_t2374464351_StaticFields::get_offset_of_userid_8(),
	X501_t2374464351_StaticFields::get_offset_of_email_9(),
	X501_t2374464351_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t2374464351_StaticFields::get_offset_of_title_11(),
	X501_t2374464351_StaticFields::get_offset_of_surname_12(),
	X501_t2374464351_StaticFields::get_offset_of_givenName_13(),
	X501_t2374464351_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (X509Certificate_t1328949861), -1, sizeof(X509Certificate_t1328949861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable950[26] = 
{
	X509Certificate_t1328949861::get_offset_of_decoder_0(),
	X509Certificate_t1328949861::get_offset_of_m_encodedcert_1(),
	X509Certificate_t1328949861::get_offset_of_m_from_2(),
	X509Certificate_t1328949861::get_offset_of_m_until_3(),
	X509Certificate_t1328949861::get_offset_of_issuer_4(),
	X509Certificate_t1328949861::get_offset_of_m_issuername_5(),
	X509Certificate_t1328949861::get_offset_of_m_keyalgo_6(),
	X509Certificate_t1328949861::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t1328949861::get_offset_of_subject_8(),
	X509Certificate_t1328949861::get_offset_of_m_subject_9(),
	X509Certificate_t1328949861::get_offset_of_m_publickey_10(),
	X509Certificate_t1328949861::get_offset_of_signature_11(),
	X509Certificate_t1328949861::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t1328949861::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t1328949861::get_offset_of_certhash_14(),
	X509Certificate_t1328949861::get_offset_of__rsa_15(),
	X509Certificate_t1328949861::get_offset_of__dsa_16(),
	X509Certificate_t1328949861::get_offset_of_version_17(),
	X509Certificate_t1328949861::get_offset_of_serialnumber_18(),
	X509Certificate_t1328949861::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t1328949861::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t1328949861::get_offset_of_extensions_21(),
	X509Certificate_t1328949861_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t1328949861_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t1328949861_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t1328949861_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (X509CertificateCollection_t3481652266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (X509CertificateEnumerator_t607570099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable952[1] = 
{
	X509CertificateEnumerator_t607570099::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (X509Chain_t846790323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable953[5] = 
{
	X509Chain_t846790323::get_offset_of_roots_0(),
	X509Chain_t846790323::get_offset_of_certs_1(),
	X509Chain_t846790323::get_offset_of__root_2(),
	X509Chain_t846790323::get_offset_of__chain_3(),
	X509Chain_t846790323::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (X509ChainStatusFlags_t2494182269)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable954[8] = 
{
	X509ChainStatusFlags_t2494182269::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (X509Crl_t3522240849), -1, sizeof(X509Crl_t3522240849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable955[11] = 
{
	X509Crl_t3522240849::get_offset_of_issuer_0(),
	X509Crl_t3522240849::get_offset_of_version_1(),
	X509Crl_t3522240849::get_offset_of_thisUpdate_2(),
	X509Crl_t3522240849::get_offset_of_nextUpdate_3(),
	X509Crl_t3522240849::get_offset_of_entries_4(),
	X509Crl_t3522240849::get_offset_of_signatureOID_5(),
	X509Crl_t3522240849::get_offset_of_signature_6(),
	X509Crl_t3522240849::get_offset_of_extensions_7(),
	X509Crl_t3522240849::get_offset_of_encoded_8(),
	X509Crl_t3522240849::get_offset_of_hash_value_9(),
	X509Crl_t3522240849_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (X509CrlEntry_t1146156426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[3] = 
{
	X509CrlEntry_t1146156426::get_offset_of_sn_0(),
	X509CrlEntry_t1146156426::get_offset_of_revocationDate_1(),
	X509CrlEntry_t1146156426::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (X509Extension_t905951720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable957[3] = 
{
	X509Extension_t905951720::get_offset_of_extnOid_0(),
	X509Extension_t905951720::get_offset_of_extnCritical_1(),
	X509Extension_t905951720::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (X509ExtensionCollection_t2769113024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[1] = 
{
	X509ExtensionCollection_t2769113024::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (X509Store_t3195287687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable959[4] = 
{
	X509Store_t3195287687::get_offset_of__storePath_0(),
	X509Store_t3195287687::get_offset_of__certificates_1(),
	X509Store_t3195287687::get_offset_of__crls_2(),
	X509Store_t3195287687::get_offset_of__crl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (X509StoreManager_t3915821765), -1, sizeof(X509StoreManager_t3915821765_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable960[2] = 
{
	X509StoreManager_t3915821765_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t3915821765_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (X509Stores_t3967370735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable961[2] = 
{
	X509Stores_t3967370735::get_offset_of__storePath_0(),
	X509Stores_t3967370735::get_offset_of__trusted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (AuthorityKeyIdentifierExtension_t2649437901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable962[1] = 
{
	AuthorityKeyIdentifierExtension_t2649437901::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (BasicConstraintsExtension_t1650579649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[2] = 
{
	BasicConstraintsExtension_t1650579649::get_offset_of_cA_3(),
	BasicConstraintsExtension_t1650579649::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (ExtendedKeyUsageExtension_t1208568481), -1, sizeof(ExtendedKeyUsageExtension_t1208568481_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable964[2] = 
{
	ExtendedKeyUsageExtension_t1208568481::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t1208568481_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (GeneralNames_t3874166035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[5] = 
{
	GeneralNames_t3874166035::get_offset_of_rfc822Name_0(),
	GeneralNames_t3874166035::get_offset_of_dnsName_1(),
	GeneralNames_t3874166035::get_offset_of_directoryNames_2(),
	GeneralNames_t3874166035::get_offset_of_uris_3(),
	GeneralNames_t3874166035::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (KeyUsages_t1053736455)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable966[11] = 
{
	KeyUsages_t1053736455::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (KeyUsageExtension_t3258188274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[1] = 
{
	KeyUsageExtension_t3258188274::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (NetscapeCertTypeExtension_t3962022583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[1] = 
{
	NetscapeCertTypeExtension_t3962022583::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (CertTypes_t2301309499)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable969[8] = 
{
	CertTypes_t2301309499::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (SubjectAltNameExtension_t874007027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable970[1] = 
{
	SubjectAltNameExtension_t874007027::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (HMAC_t3032901717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[4] = 
{
	HMAC_t3032901717::get_offset_of_hash_5(),
	HMAC_t3032901717::get_offset_of_hashing_6(),
	HMAC_t3032901717::get_offset_of_innerPad_7(),
	HMAC_t3032901717::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (MD5SHA1_t775078680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable972[3] = 
{
	MD5SHA1_t775078680::get_offset_of_md5_4(),
	MD5SHA1_t775078680::get_offset_of_sha_5(),
	MD5SHA1_t775078680::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (AlertLevel_t3454492317)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable973[3] = 
{
	AlertLevel_t3454492317::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (AlertDescription_t1815730233)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable974[25] = 
{
	AlertDescription_t1815730233::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (Alert_t4028358682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[2] = 
{
	Alert_t4028358682::get_offset_of_level_0(),
	Alert_t4028358682::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (CipherAlgorithmType_t3785075654)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable976[8] = 
{
	CipherAlgorithmType_t3785075654::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (CipherSuite_t2272621373), -1, sizeof(CipherSuite_t2272621373_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[21] = 
{
	CipherSuite_t2272621373_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t2272621373::get_offset_of_code_1(),
	CipherSuite_t2272621373::get_offset_of_name_2(),
	CipherSuite_t2272621373::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t2272621373::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t2272621373::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t2272621373::get_offset_of_isExportable_6(),
	CipherSuite_t2272621373::get_offset_of_cipherMode_7(),
	CipherSuite_t2272621373::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t2272621373::get_offset_of_keyBlockSize_9(),
	CipherSuite_t2272621373::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t2272621373::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t2272621373::get_offset_of_ivSize_12(),
	CipherSuite_t2272621373::get_offset_of_blockSize_13(),
	CipherSuite_t2272621373::get_offset_of_context_14(),
	CipherSuite_t2272621373::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t2272621373::get_offset_of_encryptionCipher_16(),
	CipherSuite_t2272621373::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t2272621373::get_offset_of_decryptionCipher_18(),
	CipherSuite_t2272621373::get_offset_of_clientHMAC_19(),
	CipherSuite_t2272621373::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (CipherSuiteCollection_t2505716966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable978[2] = 
{
	CipherSuiteCollection_t2505716966::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t2505716966::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (CipherSuiteFactory_t178931272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (ClientContext_t495549367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[2] = 
{
	ClientContext_t495549367::get_offset_of_sslStream_30(),
	ClientContext_t495549367::get_offset_of_clientHelloProtocol_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (ClientRecordProtocol_t2784146701), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (ClientSessionInfo_t2908536865), -1, sizeof(ClientSessionInfo_t2908536865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable982[6] = 
{
	ClientSessionInfo_t2908536865_StaticFields::get_offset_of_ValidityInterval_0(),
	ClientSessionInfo_t2908536865::get_offset_of_disposed_1(),
	ClientSessionInfo_t2908536865::get_offset_of_validuntil_2(),
	ClientSessionInfo_t2908536865::get_offset_of_host_3(),
	ClientSessionInfo_t2908536865::get_offset_of_sid_4(),
	ClientSessionInfo_t2908536865::get_offset_of_masterSecret_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (ClientSessionCache_t2713819488), -1, sizeof(ClientSessionCache_t2713819488_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable983[2] = 
{
	ClientSessionCache_t2713819488_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t2713819488_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (ContentType_t702276224)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable984[5] = 
{
	ContentType_t702276224::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (Context_t3003248080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[30] = 
{
	Context_t3003248080::get_offset_of_securityProtocol_0(),
	Context_t3003248080::get_offset_of_sessionId_1(),
	Context_t3003248080::get_offset_of_compressionMethod_2(),
	Context_t3003248080::get_offset_of_serverSettings_3(),
	Context_t3003248080::get_offset_of_clientSettings_4(),
	Context_t3003248080::get_offset_of_current_5(),
	Context_t3003248080::get_offset_of_negotiating_6(),
	Context_t3003248080::get_offset_of_read_7(),
	Context_t3003248080::get_offset_of_write_8(),
	Context_t3003248080::get_offset_of_supportedCiphers_9(),
	Context_t3003248080::get_offset_of_lastHandshakeMsg_10(),
	Context_t3003248080::get_offset_of_handshakeState_11(),
	Context_t3003248080::get_offset_of_abbreviatedHandshake_12(),
	Context_t3003248080::get_offset_of_receivedConnectionEnd_13(),
	Context_t3003248080::get_offset_of_sentConnectionEnd_14(),
	Context_t3003248080::get_offset_of_protocolNegotiated_15(),
	Context_t3003248080::get_offset_of_writeSequenceNumber_16(),
	Context_t3003248080::get_offset_of_readSequenceNumber_17(),
	Context_t3003248080::get_offset_of_clientRandom_18(),
	Context_t3003248080::get_offset_of_serverRandom_19(),
	Context_t3003248080::get_offset_of_randomCS_20(),
	Context_t3003248080::get_offset_of_randomSC_21(),
	Context_t3003248080::get_offset_of_masterSecret_22(),
	Context_t3003248080::get_offset_of_clientWriteKey_23(),
	Context_t3003248080::get_offset_of_serverWriteKey_24(),
	Context_t3003248080::get_offset_of_clientWriteIV_25(),
	Context_t3003248080::get_offset_of_serverWriteIV_26(),
	Context_t3003248080::get_offset_of_handshakeMessages_27(),
	Context_t3003248080::get_offset_of_random_28(),
	Context_t3003248080::get_offset_of_recordProtocol_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ExchangeAlgorithmType_t148916855)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable986[6] = 
{
	ExchangeAlgorithmType_t148916855::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (HandshakeState_t4276154716)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable987[4] = 
{
	HandshakeState_t4276154716::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (HashAlgorithmType_t1835907478)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable988[4] = 
{
	HashAlgorithmType_t1835907478::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (HttpsClientStream_t946306019), -1, sizeof(HttpsClientStream_t946306019_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable989[4] = 
{
	HttpsClientStream_t946306019::get_offset_of__request_20(),
	HttpsClientStream_t946306019::get_offset_of__status_21(),
	HttpsClientStream_t946306019_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_22(),
	HttpsClientStream_t946306019_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (RecordProtocol_t262916275), -1, sizeof(RecordProtocol_t262916275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable990[3] = 
{
	RecordProtocol_t262916275_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t262916275::get_offset_of_innerStream_1(),
	RecordProtocol_t262916275::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (ReceiveRecordAsyncResult_t4198486377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[9] = 
{
	ReceiveRecordAsyncResult_t4198486377::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t4198486377::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (SendRecordAsyncResult_t2468562178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[7] = 
{
	SendRecordAsyncResult_t2468562178::get_offset_of_locker_0(),
	SendRecordAsyncResult_t2468562178::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t2468562178::get_offset_of__userState_2(),
	SendRecordAsyncResult_t2468562178::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t2468562178::get_offset_of_handle_4(),
	SendRecordAsyncResult_t2468562178::get_offset_of__message_5(),
	SendRecordAsyncResult_t2468562178::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (RSASslSignatureDeformatter_t2734879307), -1, sizeof(RSASslSignatureDeformatter_t2734879307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[3] = 
{
	RSASslSignatureDeformatter_t2734879307::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t2734879307::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t2734879307_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (RSASslSignatureFormatter_t719758716), -1, sizeof(RSASslSignatureFormatter_t719758716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable994[3] = 
{
	RSASslSignatureFormatter_t719758716::get_offset_of_key_0(),
	RSASslSignatureFormatter_t719758716::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t719758716_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (SecurityCompressionType_t963523542)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable995[3] = 
{
	SecurityCompressionType_t963523542::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (SecurityParameters_t1116865091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[3] = 
{
	SecurityParameters_t1116865091::get_offset_of_cipher_0(),
	SecurityParameters_t1116865091::get_offset_of_clientWriteMAC_1(),
	SecurityParameters_t1116865091::get_offset_of_serverWriteMAC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (SecurityProtocolType_t2498531016)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	SecurityProtocolType_t2498531016::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (ServerContext_t3848570566), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (ValidationResult_t3480032513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[3] = 
{
	ValidationResult_t3480032513::get_offset_of_trusted_0(),
	ValidationResult_t3480032513::get_offset_of_user_denied_1(),
	ValidationResult_t3480032513::get_offset_of_error_code_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
