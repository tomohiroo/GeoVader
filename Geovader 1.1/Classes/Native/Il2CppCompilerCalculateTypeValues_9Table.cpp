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
struct ASN1_t1895422298;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2143654083;
// System.Collections.ArrayList
struct ArrayList_t282437244;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3024017160;
// System.Byte[]
struct ByteU5BU5D_t22176289;
// System.AsyncCallback
struct AsyncCallback_t2682097366;
// System.Exception
struct Exception_t1336565028;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t334883682;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1783251394;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t786850696;
// System.IO.Stream
struct Stream_t3741079363;
// Mono.Security.Protocol.Tls.Context
struct Context_t673919819;
// System.Collections.Hashtable
struct Hashtable_t594794268;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4107098295;
// System.Collections.IEnumerator
struct IEnumerator_t1379765322;
// Mono.Security.X509.X509Store
struct X509Store_t1744674200;
// Mono.Security.X509.X509Stores
struct X509Stores_t4017516434;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t47321469;
// System.UInt32[]
struct UInt32U5BU5D_t2250599061;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1664440709;
// Mono.Math.BigInteger
struct BigInteger_t3528660265;
// System.Void
struct Void_t3394263177;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3844408782;
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t3709814340;
// System.Char[]
struct CharU5BU5D_t757589385;
// System.Security.Cryptography.RSA
struct RSA_t796103846;
// System.IO.MemoryStream
struct MemoryStream_t3953002736;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t534984332;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3852585331;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t164953791;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t616406451;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t2948715132;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1399203287;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3069778819;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t2999875930;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2225982385;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t3031907067;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2214665083;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t2523717948;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3536964630;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2491034487;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2894506330;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t2788561272;
// System.String[]
struct StringU5BU5D_t1613568946;
// System.Int32[]
struct Int32U5BU5D_t1730202116;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t240528379;
// System.Security.Cryptography.DSA
struct DSA_t1804690054;
// System.EventArgs
struct EventArgs_t935003683;
// System.IAsyncResult
struct IAsyncResult_t1908054816;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t4011342834;
// System.Net.HttpWebRequest
struct HttpWebRequest_t963293399;




#ifndef U3CMODULEU3E_T2841851831_H
#define U3CMODULEU3E_T2841851831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2841851831 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2841851831_H
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
#ifndef CONTENTINFO_T3024017160_H
#define CONTENTINFO_T3024017160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3024017160  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t1895422298 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3024017160, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3024017160, ___content_1)); }
	inline ASN1_t1895422298 * get_content_1() const { return ___content_1; }
	inline ASN1_t1895422298 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t1895422298 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3024017160_H
#ifndef X509STORE_T1744674200_H
#define X509STORE_T1744674200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t1744674200  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t2143654083 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t282437244 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t1744674200, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t1744674200, ____certificates_1)); }
	inline X509CertificateCollection_t2143654083 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t2143654083 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t2143654083 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t1744674200, ____crls_2)); }
	inline ArrayList_t282437244 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t282437244 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t282437244 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t1744674200, ____crl_3)); }
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
#endif // X509STORE_T1744674200_H
#ifndef ENCRYPTEDDATA_T2349895116_H
#define ENCRYPTEDDATA_T2349895116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t2349895116  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3024017160 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3024017160 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t22176289* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t2349895116, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t2349895116, ____content_1)); }
	inline ContentInfo_t3024017160 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3024017160 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3024017160 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t2349895116, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3024017160 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3024017160 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3024017160 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t2349895116, ____encrypted_3)); }
	inline ByteU5BU5D_t22176289* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t22176289** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t22176289* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T2349895116_H
#ifndef SENDRECORDASYNCRESULT_T2804567747_H
#define SENDRECORDASYNCRESULT_T2804567747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct  SendRecordAsyncResult_t2804567747  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t2682097366 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t1336565028 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t334883682 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t1783251394 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ____userCallback_1)); }
	inline AsyncCallback_t2682097366 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t2682097366 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t2682097366 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ____asyncException_3)); }
	inline Exception_t1336565028 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t1336565028 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t1336565028 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ___handle_4)); }
	inline ManualResetEvent_t334883682 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t334883682 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t334883682 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__message_5() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ____message_5)); }
	inline HandshakeMessage_t1783251394 * get__message_5() const { return ____message_5; }
	inline HandshakeMessage_t1783251394 ** get_address_of__message_5() { return &____message_5; }
	inline void set__message_5(HandshakeMessage_t1783251394 * value)
	{
		____message_5 = value;
		Il2CppCodeGenWriteBarrier((&____message_5), value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t2804567747, ___completed_6)); }
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
#endif // SENDRECORDASYNCRESULT_T2804567747_H
#ifndef CRYPTOCONVERT_T3418947473_H
#define CRYPTOCONVERT_T3418947473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t3418947473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T3418947473_H
#ifndef KEYBUILDER_T2083437291_H
#define KEYBUILDER_T2083437291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2083437291  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2083437291_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t786850696 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2083437291_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t786850696 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t786850696 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t786850696 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2083437291_H
#ifndef RECEIVERECORDASYNCRESULT_T3088436779_H
#define RECEIVERECORDASYNCRESULT_T3088436779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t3088436779  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t2682097366 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t1336565028 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t334883682 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t22176289* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t3741079363 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t22176289* ____initialBuffer_8;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____userCallback_1)); }
	inline AsyncCallback_t2682097366 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t2682097366 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t2682097366 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____asyncException_3)); }
	inline Exception_t1336565028 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t1336565028 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t1336565028 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ___handle_4)); }
	inline ManualResetEvent_t334883682 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t334883682 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t334883682 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__resultingBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____resultingBuffer_5)); }
	inline ByteU5BU5D_t22176289* get__resultingBuffer_5() const { return ____resultingBuffer_5; }
	inline ByteU5BU5D_t22176289** get_address_of__resultingBuffer_5() { return &____resultingBuffer_5; }
	inline void set__resultingBuffer_5(ByteU5BU5D_t22176289* value)
	{
		____resultingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____resultingBuffer_5), value);
	}

	inline static int32_t get_offset_of__record_6() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____record_6)); }
	inline Stream_t3741079363 * get__record_6() const { return ____record_6; }
	inline Stream_t3741079363 ** get_address_of__record_6() { return &____record_6; }
	inline void set__record_6(Stream_t3741079363 * value)
	{
		____record_6 = value;
		Il2CppCodeGenWriteBarrier((&____record_6), value);
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of__initialBuffer_8() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3088436779, ____initialBuffer_8)); }
	inline ByteU5BU5D_t22176289* get__initialBuffer_8() const { return ____initialBuffer_8; }
	inline ByteU5BU5D_t22176289** get_address_of__initialBuffer_8() { return &____initialBuffer_8; }
	inline void set__initialBuffer_8(ByteU5BU5D_t22176289* value)
	{
		____initialBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____initialBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECEIVERECORDASYNCRESULT_T3088436779_H
#ifndef RECORDPROTOCOL_T534984332_H
#define RECORDPROTOCOL_T534984332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t534984332  : public RuntimeObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t3741079363 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t673919819 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t534984332, ___innerStream_1)); }
	inline Stream_t3741079363 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t3741079363 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t3741079363 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t534984332, ___context_2)); }
	inline Context_t673919819 * get_context_2() const { return ___context_2; }
	inline Context_t673919819 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t673919819 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((&___context_2), value);
	}
};

struct RecordProtocol_t534984332_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t334883682 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t534984332_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t334883682 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t334883682 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t334883682 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDPROTOCOL_T534984332_H
#ifndef CLIENTSESSIONCACHE_T2184021598_H
#define CLIENTSESSIONCACHE_T2184021598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionCache
struct  ClientSessionCache_t2184021598  : public RuntimeObject
{
public:

public:
};

struct ClientSessionCache_t2184021598_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.Protocol.Tls.ClientSessionCache::cache
	Hashtable_t594794268 * ___cache_0;
	// System.Object Mono.Security.Protocol.Tls.ClientSessionCache::locker
	RuntimeObject * ___locker_1;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2184021598_StaticFields, ___cache_0)); }
	inline Hashtable_t594794268 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t594794268 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t594794268 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2184021598_StaticFields, ___locker_1)); }
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
#endif // CLIENTSESSIONCACHE_T2184021598_H
#ifndef PKCS1_T3339104953_H
#define PKCS1_T3339104953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t3339104953  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t3339104953_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t22176289* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t22176289* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t22176289* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t22176289* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t3339104953_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t22176289* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t22176289** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t22176289* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t3339104953_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t22176289* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t22176289** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t22176289* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t3339104953_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t22176289* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t22176289** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t22176289* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t3339104953_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t22176289* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t22176289** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t22176289* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T3339104953_H
#ifndef PKCS8_T3712993187_H
#define PKCS8_T3712993187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t3712993187  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T3712993187_H
#ifndef PRIVATEKEYINFO_T2557172927_H
#define PRIVATEKEYINFO_T2557172927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t2557172927  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t22176289* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t282437244 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2557172927, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2557172927, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2557172927, ____key_2)); }
	inline ByteU5BU5D_t22176289* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t22176289** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t22176289* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2557172927, ____list_3)); }
	inline ArrayList_t282437244 * get__list_3() const { return ____list_3; }
	inline ArrayList_t282437244 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t282437244 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T2557172927_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T3711317605_H
#define ENCRYPTEDPRIVATEKEYINFO_T3711317605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t3711317605  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t22176289* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t22176289* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3711317605, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3711317605, ____salt_1)); }
	inline ByteU5BU5D_t22176289* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t22176289** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t22176289* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3711317605, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3711317605, ____data_3)); }
	inline ByteU5BU5D_t22176289* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t22176289** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t22176289* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T3711317605_H
#ifndef CIPHERSUITEFACTORY_T1147383721_H
#define CIPHERSUITEFACTORY_T1147383721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct  CipherSuiteFactory_t1147383721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITEFACTORY_T1147383721_H
#ifndef SAFEBAG_T2848421663_H
#define SAFEBAG_T2848421663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t2848421663  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t1895422298 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t2848421663, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t2848421663, ____asn1_1)); }
	inline ASN1_t1895422298 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t1895422298 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t1895422298 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T2848421663_H
#ifndef PKCS12_T2371731250_H
#define PKCS12_T2371731250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t2371731250  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t22176289* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t282437244 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t282437244 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t2143654083 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t282437244 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t786850696 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____password_1)); }
	inline ByteU5BU5D_t22176289* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t22176289** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t22176289* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier((&____password_1), value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____keyBags_2)); }
	inline ArrayList_t282437244 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t282437244 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t282437244 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_2), value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____secretBags_3)); }
	inline ArrayList_t282437244 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t282437244 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t282437244 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_3), value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____certs_4)); }
	inline X509CertificateCollection_t2143654083 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t2143654083 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t2143654083 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier((&____certs_4), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____safeBags_9)); }
	inline ArrayList_t282437244 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t282437244 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t282437244 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_9), value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250, ____rng_10)); }
	inline RandomNumberGenerator_t786850696 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t786850696 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t786850696 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier((&____rng_10), value);
	}
};

struct PKCS12_t2371731250_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map5_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map6_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map7_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map8_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24mapC_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_12() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___U3CU3Ef__switchU24map5_12)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map5_12() const { return ___U3CU3Ef__switchU24map5_12; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map5_12() { return &___U3CU3Ef__switchU24map5_12; }
	inline void set_U3CU3Ef__switchU24map5_12(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map5_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_13() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___U3CU3Ef__switchU24map6_13)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map6_13() const { return ___U3CU3Ef__switchU24map6_13; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map6_13() { return &___U3CU3Ef__switchU24map6_13; }
	inline void set_U3CU3Ef__switchU24map6_13(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map6_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_14() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___U3CU3Ef__switchU24map7_14)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map7_14() const { return ___U3CU3Ef__switchU24map7_14; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map7_14() { return &___U3CU3Ef__switchU24map7_14; }
	inline void set_U3CU3Ef__switchU24map7_14(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map7_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_15() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___U3CU3Ef__switchU24map8_15)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map8_15() const { return ___U3CU3Ef__switchU24map8_15; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map8_15() { return &___U3CU3Ef__switchU24map8_15; }
	inline void set_U3CU3Ef__switchU24map8_15(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map8_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_16() { return static_cast<int32_t>(offsetof(PKCS12_t2371731250_StaticFields, ___U3CU3Ef__switchU24mapC_16)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24mapC_16() const { return ___U3CU3Ef__switchU24mapC_16; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24mapC_16() { return &___U3CU3Ef__switchU24mapC_16; }
	inline void set_U3CU3Ef__switchU24mapC_16(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24mapC_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T2371731250_H
#ifndef DERIVEBYTES_T3285098245_H
#define DERIVEBYTES_T3285098245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t3285098245  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t22176289* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t22176289* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245, ____password_5)); }
	inline ByteU5BU5D_t22176289* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t22176289** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t22176289* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245, ____salt_6)); }
	inline ByteU5BU5D_t22176289* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t22176289** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t22176289* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t3285098245_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t22176289* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t22176289* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t22176289* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t22176289* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t22176289** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t22176289* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t22176289* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t22176289** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t22176289* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t3285098245_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t22176289* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t22176289** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t22176289* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T3285098245_H
#ifndef X501_T2825093531_H
#define X501_T2825093531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t2825093531  : public RuntimeObject
{
public:

public:
};

struct X501_t2825093531_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t22176289* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t22176289* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t22176289* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t22176289* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t22176289* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t22176289* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t22176289* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t22176289* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t22176289* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t22176289* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t22176289* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t22176289* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t22176289* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t22176289* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t22176289* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t22176289* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t22176289** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t22176289* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t22176289* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t22176289** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t22176289* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t22176289* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t22176289** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t22176289* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t22176289* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t22176289** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t22176289* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t22176289* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t22176289** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t22176289* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t22176289* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t22176289** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t22176289* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t22176289* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t22176289** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t22176289* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t22176289* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t22176289** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t22176289* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t22176289* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t22176289** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t22176289* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t22176289* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t22176289** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t22176289* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t22176289* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t22176289** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t22176289* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t22176289* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t22176289** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t22176289* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t22176289* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t22176289** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t22176289* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t22176289* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t22176289** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t22176289* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t2825093531_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t22176289* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t22176289** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t22176289* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T2825093531_H
#ifndef X509CERTIFICATEENUMERATOR_T1173023546_H
#define X509CERTIFICATEENUMERATOR_T1173023546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t1173023546  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t1173023546, ___enumerator_0)); }
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
#endif // X509CERTIFICATEENUMERATOR_T1173023546_H
#ifndef GENERALNAMES_T3709814340_H
#define GENERALNAMES_T3709814340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t3709814340  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t282437244 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t282437244 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t282437244 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t282437244 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t282437244 * ___ipAddr_4;

public:
	inline static int32_t get_offset_of_rfc822Name_0() { return static_cast<int32_t>(offsetof(GeneralNames_t3709814340, ___rfc822Name_0)); }
	inline ArrayList_t282437244 * get_rfc822Name_0() const { return ___rfc822Name_0; }
	inline ArrayList_t282437244 ** get_address_of_rfc822Name_0() { return &___rfc822Name_0; }
	inline void set_rfc822Name_0(ArrayList_t282437244 * value)
	{
		___rfc822Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___rfc822Name_0), value);
	}

	inline static int32_t get_offset_of_dnsName_1() { return static_cast<int32_t>(offsetof(GeneralNames_t3709814340, ___dnsName_1)); }
	inline ArrayList_t282437244 * get_dnsName_1() const { return ___dnsName_1; }
	inline ArrayList_t282437244 ** get_address_of_dnsName_1() { return &___dnsName_1; }
	inline void set_dnsName_1(ArrayList_t282437244 * value)
	{
		___dnsName_1 = value;
		Il2CppCodeGenWriteBarrier((&___dnsName_1), value);
	}

	inline static int32_t get_offset_of_directoryNames_2() { return static_cast<int32_t>(offsetof(GeneralNames_t3709814340, ___directoryNames_2)); }
	inline ArrayList_t282437244 * get_directoryNames_2() const { return ___directoryNames_2; }
	inline ArrayList_t282437244 ** get_address_of_directoryNames_2() { return &___directoryNames_2; }
	inline void set_directoryNames_2(ArrayList_t282437244 * value)
	{
		___directoryNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___directoryNames_2), value);
	}

	inline static int32_t get_offset_of_uris_3() { return static_cast<int32_t>(offsetof(GeneralNames_t3709814340, ___uris_3)); }
	inline ArrayList_t282437244 * get_uris_3() const { return ___uris_3; }
	inline ArrayList_t282437244 ** get_address_of_uris_3() { return &___uris_3; }
	inline void set_uris_3(ArrayList_t282437244 * value)
	{
		___uris_3 = value;
		Il2CppCodeGenWriteBarrier((&___uris_3), value);
	}

	inline static int32_t get_offset_of_ipAddr_4() { return static_cast<int32_t>(offsetof(GeneralNames_t3709814340, ___ipAddr_4)); }
	inline ArrayList_t282437244 * get_ipAddr_4() const { return ___ipAddr_4; }
	inline ArrayList_t282437244 ** get_address_of_ipAddr_4() { return &___ipAddr_4; }
	inline void set_ipAddr_4(ArrayList_t282437244 * value)
	{
		___ipAddr_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipAddr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERALNAMES_T3709814340_H
#ifndef STREAM_T3741079363_H
#define STREAM_T3741079363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t3741079363  : public RuntimeObject
{
public:

public:
};

struct Stream_t3741079363_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t3741079363 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t3741079363_StaticFields, ___Null_0)); }
	inline Stream_t3741079363 * get_Null_0() const { return ___Null_0; }
	inline Stream_t3741079363 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t3741079363 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T3741079363_H
#ifndef X509EXTENSION_T1990379981_H
#define X509EXTENSION_T1990379981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t1990379981  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t1895422298 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t1990379981, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t1990379981, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t1990379981, ___extnValue_2)); }
	inline ASN1_t1895422298 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t1895422298 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t1895422298 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T1990379981_H
#ifndef X509STORES_T4017516434_H
#define X509STORES_T4017516434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t4017516434  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t1744674200 * ____trusted_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t4017516434, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__trusted_1() { return static_cast<int32_t>(offsetof(X509Stores_t4017516434, ____trusted_1)); }
	inline X509Store_t1744674200 * get__trusted_1() const { return ____trusted_1; }
	inline X509Store_t1744674200 ** get_address_of__trusted_1() { return &____trusted_1; }
	inline void set__trusted_1(X509Store_t1744674200 * value)
	{
		____trusted_1 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T4017516434_H
#ifndef PKCS7_T215409737_H
#define PKCS7_T215409737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t215409737  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T215409737_H
#ifndef BITCONVERTERLE_T2629256147_H
#define BITCONVERTERLE_T2629256147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2629256147  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2629256147_H
#ifndef X509STOREMANAGER_T3376514574_H
#define X509STOREMANAGER_T3376514574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t3376514574  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t3376514574_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t4017516434 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t4017516434 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t3376514574_StaticFields, ____userStore_0)); }
	inline X509Stores_t4017516434 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t4017516434 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t4017516434 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t3376514574_StaticFields, ____machineStore_1)); }
	inline X509Stores_t4017516434 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t4017516434 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t4017516434 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T3376514574_H
#ifndef ASN1_T1895422298_H
#define ASN1_T1895422298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t1895422298  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t22176289* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t282437244 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t1895422298, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t1895422298, ___m_aValue_1)); }
	inline ByteU5BU5D_t22176289* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t22176289** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t22176289* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t1895422298, ___elist_2)); }
	inline ArrayList_t282437244 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t282437244 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t282437244 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T1895422298_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1563031147_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1563031147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1563031147  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1563031147_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1871724624_H
#define ASYMMETRICSIGNATUREFORMATTER_T1871724624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1871724624  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1871724624_H
#ifndef ASN1CONVERT_T1772191266_H
#define ASN1CONVERT_T1772191266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t1772191266  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T1772191266_H
#ifndef HASHALGORITHM_T3844408782_H
#define HASHALGORITHM_T3844408782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3844408782  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t22176289* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3844408782, ___HashValue_0)); }
	inline ByteU5BU5D_t22176289* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t22176289** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t22176289* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3844408782, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3844408782, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3844408782, ___disposed_3)); }
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
#endif // HASHALGORITHM_T3844408782_H
#ifndef VALUETYPE_T2320648697_H
#define VALUETYPE_T2320648697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2320648697  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2320648697_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2320648697_marshaled_com
{
};
#endif // VALUETYPE_T2320648697_H
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
#ifndef VALIDATIONRESULT_T3528151005_H
#define VALIDATIONRESULT_T3528151005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ValidationResult
struct  ValidationResult_t3528151005  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::trusted
	bool ___trusted_0;
	// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::user_denied
	bool ___user_denied_1;
	// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::error_code
	int32_t ___error_code_2;

public:
	inline static int32_t get_offset_of_trusted_0() { return static_cast<int32_t>(offsetof(ValidationResult_t3528151005, ___trusted_0)); }
	inline bool get_trusted_0() const { return ___trusted_0; }
	inline bool* get_address_of_trusted_0() { return &___trusted_0; }
	inline void set_trusted_0(bool value)
	{
		___trusted_0 = value;
	}

	inline static int32_t get_offset_of_user_denied_1() { return static_cast<int32_t>(offsetof(ValidationResult_t3528151005, ___user_denied_1)); }
	inline bool get_user_denied_1() const { return ___user_denied_1; }
	inline bool* get_address_of_user_denied_1() { return &___user_denied_1; }
	inline void set_user_denied_1(bool value)
	{
		___user_denied_1 = value;
	}

	inline static int32_t get_offset_of_error_code_2() { return static_cast<int32_t>(offsetof(ValidationResult_t3528151005, ___error_code_2)); }
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
#endif // VALIDATIONRESULT_T3528151005_H
#ifndef COLLECTIONBASE_T311519888_H
#define COLLECTIONBASE_T311519888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t311519888  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t282437244 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t311519888, ___list_0)); }
	inline ArrayList_t282437244 * get_list_0() const { return ___list_0; }
	inline ArrayList_t282437244 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t282437244 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T311519888_H
#ifndef ASYMMETRICALGORITHM_T3363308924_H
#define ASYMMETRICALGORITHM_T3363308924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3363308924  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t47321469* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3363308924, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3363308924, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t47321469* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t47321469** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t47321469* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T3363308924_H
#ifndef BIGINTEGER_T3528660265_H
#define BIGINTEGER_T3528660265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3528660265  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2250599061* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3528660265, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3528660265, ___data_1)); }
	inline UInt32U5BU5D_t2250599061* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2250599061** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2250599061* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t3528660265_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2250599061* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t786850696 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3528660265_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2250599061* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2250599061** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2250599061* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3528660265_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t786850696 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t786850696 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t786850696 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T3528660265_H
#ifndef SECURITYPARAMETERS_T3031907067_H
#define SECURITYPARAMETERS_T3031907067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t3031907067  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t1664440709 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t22176289* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t22176289* ___serverWriteMAC_2;

public:
	inline static int32_t get_offset_of_cipher_0() { return static_cast<int32_t>(offsetof(SecurityParameters_t3031907067, ___cipher_0)); }
	inline CipherSuite_t1664440709 * get_cipher_0() const { return ___cipher_0; }
	inline CipherSuite_t1664440709 ** get_address_of_cipher_0() { return &___cipher_0; }
	inline void set_cipher_0(CipherSuite_t1664440709 * value)
	{
		___cipher_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipher_0), value);
	}

	inline static int32_t get_offset_of_clientWriteMAC_1() { return static_cast<int32_t>(offsetof(SecurityParameters_t3031907067, ___clientWriteMAC_1)); }
	inline ByteU5BU5D_t22176289* get_clientWriteMAC_1() const { return ___clientWriteMAC_1; }
	inline ByteU5BU5D_t22176289** get_address_of_clientWriteMAC_1() { return &___clientWriteMAC_1; }
	inline void set_clientWriteMAC_1(ByteU5BU5D_t22176289* value)
	{
		___clientWriteMAC_1 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteMAC_1), value);
	}

	inline static int32_t get_offset_of_serverWriteMAC_2() { return static_cast<int32_t>(offsetof(SecurityParameters_t3031907067, ___serverWriteMAC_2)); }
	inline ByteU5BU5D_t22176289* get_serverWriteMAC_2() const { return ___serverWriteMAC_2; }
	inline ByteU5BU5D_t22176289** get_address_of_serverWriteMAC_2() { return &___serverWriteMAC_2; }
	inline void set_serverWriteMAC_2(ByteU5BU5D_t22176289* value)
	{
		___serverWriteMAC_2 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteMAC_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARAMETERS_T3031907067_H
#ifndef MODULUSRING_T898791483_H
#define MODULUSRING_T898791483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t898791483  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3528660265 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3528660265 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t898791483, ___mod_0)); }
	inline BigInteger_t3528660265 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3528660265 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3528660265 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t898791483, ___constant_1)); }
	inline BigInteger_t3528660265 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3528660265 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3528660265 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T898791483_H
#ifndef KERNEL_T4207544835_H
#define KERNEL_T4207544835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t4207544835  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T4207544835_H
#ifndef PRIMALITYTESTS_T3296763986_H
#define PRIMALITYTESTS_T3296763986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t3296763986  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T3296763986_H
#ifndef PRIMEGENERATORBASE_T4234036235_H
#define PRIMEGENERATORBASE_T4234036235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t4234036235  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T4234036235_H
#ifndef LOCALE_T2192383796_H
#define LOCALE_T2192383796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2192383796  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2192383796_H
#ifndef BASICCONSTRAINTSEXTENSION_T3710154000_H
#define BASICCONSTRAINTSEXTENSION_T3710154000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t3710154000  : public X509Extension_t1990379981
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3710154000, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3710154000, ___pathLenConstraint_4)); }
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
#endif // BASICCONSTRAINTSEXTENSION_T3710154000_H
#ifndef TIMESPAN_T1283285318_H
#define TIMESPAN_T1283285318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1283285318 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1283285318, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1283285318_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1283285318  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1283285318  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1283285318  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1283285318_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1283285318  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1283285318 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1283285318  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1283285318_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1283285318  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1283285318 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1283285318  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1283285318_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1283285318  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1283285318 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1283285318  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1283285318_H
#ifndef EXTENDEDKEYUSAGEEXTENSION_T1520518353_H
#define EXTENDEDKEYUSAGEEXTENSION_T1520518353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct  ExtendedKeyUsageExtension_t1520518353  : public X509Extension_t1990379981
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::keyPurpose
	ArrayList_t282437244 * ___keyPurpose_3;

public:
	inline static int32_t get_offset_of_keyPurpose_3() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t1520518353, ___keyPurpose_3)); }
	inline ArrayList_t282437244 * get_keyPurpose_3() const { return ___keyPurpose_3; }
	inline ArrayList_t282437244 ** get_address_of_keyPurpose_3() { return &___keyPurpose_3; }
	inline void set_keyPurpose_3(ArrayList_t282437244 * value)
	{
		___keyPurpose_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyPurpose_3), value);
	}
};

struct ExtendedKeyUsageExtension_t1520518353_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::<>f__switch$map14
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map14_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_4() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t1520518353_StaticFields, ___U3CU3Ef__switchU24map14_4)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map14_4() const { return ___U3CU3Ef__switchU24map14_4; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map14_4() { return &___U3CU3Ef__switchU24map14_4; }
	inline void set_U3CU3Ef__switchU24map14_4(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map14_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDKEYUSAGEEXTENSION_T1520518353_H
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
#ifndef KEYUSAGEEXTENSION_T2482828357_H
#define KEYUSAGEEXTENSION_T2482828357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t2482828357  : public X509Extension_t1990379981
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t2482828357, ___kubits_3)); }
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
#endif // KEYUSAGEEXTENSION_T2482828357_H
#ifndef MD5SHA1_T1326937077_H
#define MD5SHA1_T1326937077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD5SHA1
struct  MD5SHA1_t1326937077  : public HashAlgorithm_t3844408782
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::md5
	HashAlgorithm_t3844408782 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::sha
	HashAlgorithm_t3844408782 * ___sha_5;
	// System.Boolean Mono.Security.Cryptography.MD5SHA1::hashing
	bool ___hashing_6;

public:
	inline static int32_t get_offset_of_md5_4() { return static_cast<int32_t>(offsetof(MD5SHA1_t1326937077, ___md5_4)); }
	inline HashAlgorithm_t3844408782 * get_md5_4() const { return ___md5_4; }
	inline HashAlgorithm_t3844408782 ** get_address_of_md5_4() { return &___md5_4; }
	inline void set_md5_4(HashAlgorithm_t3844408782 * value)
	{
		___md5_4 = value;
		Il2CppCodeGenWriteBarrier((&___md5_4), value);
	}

	inline static int32_t get_offset_of_sha_5() { return static_cast<int32_t>(offsetof(MD5SHA1_t1326937077, ___sha_5)); }
	inline HashAlgorithm_t3844408782 * get_sha_5() const { return ___sha_5; }
	inline HashAlgorithm_t3844408782 ** get_address_of_sha_5() { return &___sha_5; }
	inline void set_sha_5(HashAlgorithm_t3844408782 * value)
	{
		___sha_5 = value;
		Il2CppCodeGenWriteBarrier((&___sha_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(MD5SHA1_t1326937077, ___hashing_6)); }
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
#endif // MD5SHA1_T1326937077_H
#ifndef KEYEDHASHALGORITHM_T2788561272_H
#define KEYEDHASHALGORITHM_T2788561272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2788561272  : public HashAlgorithm_t3844408782
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t22176289* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2788561272, ___KeyValue_4)); }
	inline ByteU5BU5D_t22176289* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t22176289** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t22176289* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2788561272_H
#ifndef VOID_T3394263177_H
#define VOID_T3394263177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3394263177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3394263177_H
#ifndef RSA_T796103846_H
#define RSA_T796103846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t796103846  : public AsymmetricAlgorithm_t3363308924
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T796103846_H
#ifndef SUBJECTALTNAMEEXTENSION_T4158849583_H
#define SUBJECTALTNAMEEXTENSION_T4158849583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t4158849583  : public X509Extension_t1990379981
{
public:
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t3709814340 * ____names_3;

public:
	inline static int32_t get_offset_of__names_3() { return static_cast<int32_t>(offsetof(SubjectAltNameExtension_t4158849583, ____names_3)); }
	inline GeneralNames_t3709814340 * get__names_3() const { return ____names_3; }
	inline GeneralNames_t3709814340 ** get_address_of__names_3() { return &____names_3; }
	inline void set__names_3(GeneralNames_t3709814340 * value)
	{
		____names_3 = value;
		Il2CppCodeGenWriteBarrier((&____names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTALTNAMEEXTENSION_T4158849583_H
#ifndef ENUM_T2729981184_H
#define ENUM_T2729981184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2729981184  : public ValueType_t2320648697
{
public:

public:
};

struct Enum_t2729981184_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t757589385* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2729981184_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t757589385* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t757589385** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t757589385* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2729981184_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2729981184_marshaled_com
{
};
#endif // ENUM_T2729981184_H
#ifndef CLIENTRECORDPROTOCOL_T3198872354_H
#define CLIENTRECORDPROTOCOL_T3198872354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct  ClientRecordProtocol_t3198872354  : public RecordProtocol_t534984332
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTRECORDPROTOCOL_T3198872354_H
#ifndef RSASSLSIGNATUREFORMATTER_T2048686253_H
#define RSASSLSIGNATUREFORMATTER_T2048686253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t2048686253  : public AsymmetricSignatureFormatter_t1871724624
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t796103846 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t3844408782 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2048686253, ___key_0)); }
	inline RSA_t796103846 * get_key_0() const { return ___key_0; }
	inline RSA_t796103846 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t796103846 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2048686253, ___hash_1)); }
	inline HashAlgorithm_t3844408782 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t3844408782 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t3844408782 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureFormatter_t2048686253_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map16_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_2() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2048686253_StaticFields, ___U3CU3Ef__switchU24map16_2)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map16_2() const { return ___U3CU3Ef__switchU24map16_2; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map16_2() { return &___U3CU3Ef__switchU24map16_2; }
	inline void set_U3CU3Ef__switchU24map16_2(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map16_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREFORMATTER_T2048686253_H
#ifndef RSASSLSIGNATUREDEFORMATTER_T3243368733_H
#define RSASSLSIGNATUREDEFORMATTER_T3243368733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t3243368733  : public AsymmetricSignatureDeformatter_t1563031147
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t796103846 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t3844408782 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3243368733, ___key_0)); }
	inline RSA_t796103846 * get_key_0() const { return ___key_0; }
	inline RSA_t796103846 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t796103846 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3243368733, ___hash_1)); }
	inline HashAlgorithm_t3844408782 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t3844408782 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t3844408782 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureDeformatter_t3243368733_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map15_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_2() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3243368733_StaticFields, ___U3CU3Ef__switchU24map15_2)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map15_2() const { return ___U3CU3Ef__switchU24map15_2; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map15_2() { return &___U3CU3Ef__switchU24map15_2; }
	inline void set_U3CU3Ef__switchU24map15_2(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map15_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREDEFORMATTER_T3243368733_H
#ifndef NETSCAPECERTTYPEEXTENSION_T603270548_H
#define NETSCAPECERTTYPEEXTENSION_T603270548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct  NetscapeCertTypeExtension_t603270548  : public X509Extension_t1990379981
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ctbits
	int32_t ___ctbits_3;

public:
	inline static int32_t get_offset_of_ctbits_3() { return static_cast<int32_t>(offsetof(NetscapeCertTypeExtension_t603270548, ___ctbits_3)); }
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
#endif // NETSCAPECERTTYPEEXTENSION_T603270548_H
#ifndef U24ARRAYTYPEU2448_T1594430670_H
#define U24ARRAYTYPEU2448_T1594430670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1594430670 
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
		uint8_t U24ArrayTypeU2448_t1594430670__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1594430670_H
#ifndef AUTHORITYKEYIDENTIFIEREXTENSION_T3942472451_H
#define AUTHORITYKEYIDENTIFIEREXTENSION_T3942472451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct  AuthorityKeyIdentifierExtension_t3942472451  : public X509Extension_t1990379981
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::aki
	ByteU5BU5D_t22176289* ___aki_3;

public:
	inline static int32_t get_offset_of_aki_3() { return static_cast<int32_t>(offsetof(AuthorityKeyIdentifierExtension_t3942472451, ___aki_3)); }
	inline ByteU5BU5D_t22176289* get_aki_3() const { return ___aki_3; }
	inline ByteU5BU5D_t22176289** get_address_of_aki_3() { return &___aki_3; }
	inline void set_aki_3(ByteU5BU5D_t22176289* value)
	{
		___aki_3 = value;
		Il2CppCodeGenWriteBarrier((&___aki_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORITYKEYIDENTIFIEREXTENSION_T3942472451_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T3564433575_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T3564433575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t3564433575  : public PrimeGeneratorBase_t4234036235
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T3564433575_H
#ifndef X509EXTENSIONCOLLECTION_T240528379_H
#define X509EXTENSIONCOLLECTION_T240528379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t240528379  : public CollectionBase_t311519888
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t240528379, ___readOnly_1)); }
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
#endif // X509EXTENSIONCOLLECTION_T240528379_H
#ifndef __IL2CPPCOMDELEGATE_T3661718252_H
#define __IL2CPPCOMDELEGATE_T3661718252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t3661718252  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T3661718252_H
#ifndef U24ARRAYTYPEU2452_T915692018_H
#define U24ARRAYTYPEU2452_T915692018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t915692018 
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
		uint8_t U24ArrayTypeU2452_t915692018__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T915692018_H
#ifndef U24ARRAYTYPEU24128_T1025484945_H
#define U24ARRAYTYPEU24128_T1025484945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t1025484945 
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
		uint8_t U24ArrayTypeU24128_t1025484945__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T1025484945_H
#ifndef U24ARRAYTYPEU24640_T2167601484_H
#define U24ARRAYTYPEU24640_T2167601484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2167601484 
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
		uint8_t U24ArrayTypeU24640_t2167601484__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2167601484_H
#ifndef U24ARRAYTYPEU241024_T1536125364_H
#define U24ARRAYTYPEU241024_T1536125364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t1536125364 
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
		uint8_t U24ArrayTypeU241024_t1536125364__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T1536125364_H
#ifndef U24ARRAYTYPEU24256_T1998025346_H
#define U24ARRAYTYPEU24256_T1998025346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1998025346 
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
		uint8_t U24ArrayTypeU24256_t1998025346__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1998025346_H
#ifndef U24ARRAYTYPEU242048_T1722976098_H
#define U24ARRAYTYPEU242048_T1722976098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t1722976098 
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
		uint8_t U24ArrayTypeU242048_t1722976098__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T1722976098_H
#ifndef U24ARRAYTYPEU2496_T1632160102_H
#define U24ARRAYTYPEU2496_T1632160102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1632160102 
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
		uint8_t U24ArrayTypeU2496_t1632160102__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1632160102_H
#ifndef U24ARRAYTYPEU24124_T405112971_H
#define U24ARRAYTYPEU24124_T405112971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t405112971 
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
		uint8_t U24ArrayTypeU24124_t405112971__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T405112971_H
#ifndef U24ARRAYTYPEU2472_T3427006904_H
#define U24ARRAYTYPEU2472_T3427006904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3427006904 
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
		uint8_t U24ArrayTypeU2472_t3427006904__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3427006904_H
#ifndef U24ARRAYTYPEU248_T1111398537_H
#define U24ARRAYTYPEU248_T1111398537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1111398537 
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
		uint8_t U24ArrayTypeU248_t1111398537__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1111398537_H
#ifndef U24ARRAYTYPEU24136_T2498413296_H
#define U24ARRAYTYPEU24136_T2498413296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2498413296 
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
		uint8_t U24ArrayTypeU24136_t2498413296__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2498413296_H
#ifndef U24ARRAYTYPEU2412_T1110086352_H
#define U24ARRAYTYPEU2412_T1110086352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1110086352 
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
		uint8_t U24ArrayTypeU2412_t1110086352__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1110086352_H
#ifndef U24ARRAYTYPEU2464_T568690016_H
#define U24ARRAYTYPEU2464_T568690016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t568690016 
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
		uint8_t U24ArrayTypeU2464_t568690016__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T568690016_H
#ifndef MD2_T3779100628_H
#define MD2_T3779100628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t3779100628  : public HashAlgorithm_t3844408782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T3779100628_H
#ifndef MD4_T3547796601_H
#define MD4_T3547796601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t3547796601  : public HashAlgorithm_t3844408782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T3547796601_H
#ifndef BOOLEAN_T3792624234_H
#define BOOLEAN_T3792624234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3792624234 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3792624234, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3792624234_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3792624234_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3792624234_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T3792624234_H
#ifndef X509CERTIFICATECOLLECTION_T2143654083_H
#define X509CERTIFICATECOLLECTION_T2143654083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t2143654083  : public CollectionBase_t311519888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T2143654083_H
#ifndef MD4MANAGED_T2304410549_H
#define MD4MANAGED_T2304410549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t2304410549  : public MD4_t3547796601
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t2250599061* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t22176289* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t2250599061* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t2250599061* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t22176289* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t2304410549, ___state_4)); }
	inline UInt32U5BU5D_t2250599061* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t2250599061** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t2250599061* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t2304410549, ___buffer_5)); }
	inline ByteU5BU5D_t22176289* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t22176289** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t22176289* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t2304410549, ___count_6)); }
	inline UInt32U5BU5D_t2250599061* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t2250599061** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t2250599061* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t2304410549, ___x_7)); }
	inline UInt32U5BU5D_t2250599061* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t2250599061** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t2250599061* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t2304410549, ___digest_8)); }
	inline ByteU5BU5D_t22176289* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t22176289** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t22176289* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T2304410549_H
#ifndef SSLSTREAMBASE_T2585837672_H
#define SSLSTREAMBASE_T2585837672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t2585837672  : public Stream_t3741079363
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t3741079363 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t3953002736 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t673919819 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t534984332 * ___protocol_6;
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
	ManualResetEvent_t334883682 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t22176289* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t3953002736 * ___recordStream_15;

public:
	inline static int32_t get_offset_of_innerStream_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___innerStream_3)); }
	inline Stream_t3741079363 * get_innerStream_3() const { return ___innerStream_3; }
	inline Stream_t3741079363 ** get_address_of_innerStream_3() { return &___innerStream_3; }
	inline void set_innerStream_3(Stream_t3741079363 * value)
	{
		___innerStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_3), value);
	}

	inline static int32_t get_offset_of_inputBuffer_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___inputBuffer_4)); }
	inline MemoryStream_t3953002736 * get_inputBuffer_4() const { return ___inputBuffer_4; }
	inline MemoryStream_t3953002736 ** get_address_of_inputBuffer_4() { return &___inputBuffer_4; }
	inline void set_inputBuffer_4(MemoryStream_t3953002736 * value)
	{
		___inputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_4), value);
	}

	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___context_5)); }
	inline Context_t673919819 * get_context_5() const { return ___context_5; }
	inline Context_t673919819 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t673919819 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier((&___context_5), value);
	}

	inline static int32_t get_offset_of_protocol_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___protocol_6)); }
	inline RecordProtocol_t534984332 * get_protocol_6() const { return ___protocol_6; }
	inline RecordProtocol_t534984332 ** get_address_of_protocol_6() { return &___protocol_6; }
	inline void set_protocol_6(RecordProtocol_t534984332 * value)
	{
		___protocol_6 = value;
		Il2CppCodeGenWriteBarrier((&___protocol_6), value);
	}

	inline static int32_t get_offset_of_ownsStream_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___ownsStream_7)); }
	inline bool get_ownsStream_7() const { return ___ownsStream_7; }
	inline bool* get_address_of_ownsStream_7() { return &___ownsStream_7; }
	inline void set_ownsStream_7(bool value)
	{
		___ownsStream_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___checkCertRevocationStatus_9)); }
	inline bool get_checkCertRevocationStatus_9() const { return ___checkCertRevocationStatus_9; }
	inline bool* get_address_of_checkCertRevocationStatus_9() { return &___checkCertRevocationStatus_9; }
	inline void set_checkCertRevocationStatus_9(bool value)
	{
		___checkCertRevocationStatus_9 = value;
	}

	inline static int32_t get_offset_of_negotiate_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___negotiate_10)); }
	inline RuntimeObject * get_negotiate_10() const { return ___negotiate_10; }
	inline RuntimeObject ** get_address_of_negotiate_10() { return &___negotiate_10; }
	inline void set_negotiate_10(RuntimeObject * value)
	{
		___negotiate_10 = value;
		Il2CppCodeGenWriteBarrier((&___negotiate_10), value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___read_11)); }
	inline RuntimeObject * get_read_11() const { return ___read_11; }
	inline RuntimeObject ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(RuntimeObject * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier((&___read_11), value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___write_12)); }
	inline RuntimeObject * get_write_12() const { return ___write_12; }
	inline RuntimeObject ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(RuntimeObject * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier((&___write_12), value);
	}

	inline static int32_t get_offset_of_negotiationComplete_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___negotiationComplete_13)); }
	inline ManualResetEvent_t334883682 * get_negotiationComplete_13() const { return ___negotiationComplete_13; }
	inline ManualResetEvent_t334883682 ** get_address_of_negotiationComplete_13() { return &___negotiationComplete_13; }
	inline void set_negotiationComplete_13(ManualResetEvent_t334883682 * value)
	{
		___negotiationComplete_13 = value;
		Il2CppCodeGenWriteBarrier((&___negotiationComplete_13), value);
	}

	inline static int32_t get_offset_of_recbuf_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___recbuf_14)); }
	inline ByteU5BU5D_t22176289* get_recbuf_14() const { return ___recbuf_14; }
	inline ByteU5BU5D_t22176289** get_address_of_recbuf_14() { return &___recbuf_14; }
	inline void set_recbuf_14(ByteU5BU5D_t22176289* value)
	{
		___recbuf_14 = value;
		Il2CppCodeGenWriteBarrier((&___recbuf_14), value);
	}

	inline static int32_t get_offset_of_recordStream_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672, ___recordStream_15)); }
	inline MemoryStream_t3953002736 * get_recordStream_15() const { return ___recordStream_15; }
	inline MemoryStream_t3953002736 ** get_address_of_recordStream_15() { return &___recordStream_15; }
	inline void set_recordStream_15(MemoryStream_t3953002736 * value)
	{
		___recordStream_15 = value;
		Il2CppCodeGenWriteBarrier((&___recordStream_15), value);
	}
};

struct SslStreamBase_t2585837672_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t334883682 * ___record_processing_2;

public:
	inline static int32_t get_offset_of_record_processing_2() { return static_cast<int32_t>(offsetof(SslStreamBase_t2585837672_StaticFields, ___record_processing_2)); }
	inline ManualResetEvent_t334883682 * get_record_processing_2() const { return ___record_processing_2; }
	inline ManualResetEvent_t334883682 ** get_address_of_record_processing_2() { return &___record_processing_2; }
	inline void set_record_processing_2(ManualResetEvent_t334883682 * value)
	{
		___record_processing_2 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAMBASE_T2585837672_H
#ifndef DATETIMEKIND_T3650542973_H
#define DATETIMEKIND_T3650542973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3650542973 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3650542973, ___value___1)); }
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
#endif // DATETIMEKIND_T3650542973_H
#ifndef X509CHAINSTATUSFLAGS_T1339478564_H
#define X509CHAINSTATUSFLAGS_T1339478564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1339478564 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1339478564, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1339478564_H
#ifndef DELEGATE_T837825617_H
#define DELEGATE_T837825617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t837825617  : public RuntimeObject
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
	DelegateData_t3852585331 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t837825617, ___data_8)); }
	inline DelegateData_t3852585331 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3852585331 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3852585331 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T837825617_H
#ifndef PADDINGMODE_T2557356775_H
#define PADDINGMODE_T2557356775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2557356775 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2557356775, ___value___1)); }
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
#endif // PADDINGMODE_T2557356775_H
#ifndef KEYUSAGES_T822446981_H
#define KEYUSAGES_T822446981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t822446981 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t822446981, ___value___1)); }
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
#endif // KEYUSAGES_T822446981_H
#ifndef HANDSHAKETYPE_T4293399517_H
#define HANDSHAKETYPE_T4293399517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
struct  HandshakeType_t4293399517 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.Handshake.HandshakeType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeType_t4293399517, ___value___1)); }
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
#endif // HANDSHAKETYPE_T4293399517_H
#ifndef CIPHERMODE_T473453992_H
#define CIPHERMODE_T473453992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t473453992 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t473453992, ___value___1)); }
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
#endif // CIPHERMODE_T473453992_H
#ifndef CERTTYPES_T926167726_H
#define CERTTYPES_T926167726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
struct  CertTypes_t926167726 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CertTypes_t926167726, ___value___1)); }
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
#endif // CERTTYPES_T926167726_H
#ifndef HMAC_T1963779386_H
#define HMAC_T1963779386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMAC
struct  HMAC_t1963779386  : public KeyedHashAlgorithm_t2788561272
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t3844408782 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t22176289* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t22176289* ___outerPad_8;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(HMAC_t1963779386, ___hash_5)); }
	inline HashAlgorithm_t3844408782 * get_hash_5() const { return ___hash_5; }
	inline HashAlgorithm_t3844408782 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(HashAlgorithm_t3844408782 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(HMAC_t1963779386, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_innerPad_7() { return static_cast<int32_t>(offsetof(HMAC_t1963779386, ___innerPad_7)); }
	inline ByteU5BU5D_t22176289* get_innerPad_7() const { return ___innerPad_7; }
	inline ByteU5BU5D_t22176289** get_address_of_innerPad_7() { return &___innerPad_7; }
	inline void set_innerPad_7(ByteU5BU5D_t22176289* value)
	{
		___innerPad_7 = value;
		Il2CppCodeGenWriteBarrier((&___innerPad_7), value);
	}

	inline static int32_t get_offset_of_outerPad_8() { return static_cast<int32_t>(offsetof(HMAC_t1963779386, ___outerPad_8)); }
	inline ByteU5BU5D_t22176289* get_outerPad_8() const { return ___outerPad_8; }
	inline ByteU5BU5D_t22176289** get_address_of_outerPad_8() { return &___outerPad_8; }
	inline void set_outerPad_8(ByteU5BU5D_t22176289* value)
	{
		___outerPad_8 = value;
		Il2CppCodeGenWriteBarrier((&___outerPad_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1963779386_H
#ifndef RSAMANAGED_T3925001951_H
#define RSAMANAGED_T3925001951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3925001951  : public RSA_t796103846
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
	BigInteger_t3528660265 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3528660265 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3528660265 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3528660265 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3528660265 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3528660265 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3528660265 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3528660265 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t164953791 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___d_6)); }
	inline BigInteger_t3528660265 * get_d_6() const { return ___d_6; }
	inline BigInteger_t3528660265 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t3528660265 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___p_7)); }
	inline BigInteger_t3528660265 * get_p_7() const { return ___p_7; }
	inline BigInteger_t3528660265 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t3528660265 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___q_8)); }
	inline BigInteger_t3528660265 * get_q_8() const { return ___q_8; }
	inline BigInteger_t3528660265 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t3528660265 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___dp_9)); }
	inline BigInteger_t3528660265 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t3528660265 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t3528660265 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___dq_10)); }
	inline BigInteger_t3528660265 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t3528660265 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t3528660265 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___qInv_11)); }
	inline BigInteger_t3528660265 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t3528660265 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t3528660265 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___n_12)); }
	inline BigInteger_t3528660265 * get_n_12() const { return ___n_12; }
	inline BigInteger_t3528660265 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t3528660265 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___e_13)); }
	inline BigInteger_t3528660265 * get_e_13() const { return ___e_13; }
	inline BigInteger_t3528660265 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t3528660265 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3925001951, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t164953791 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t164953791 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t164953791 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T3925001951_H
#ifndef ALERTDESCRIPTION_T2084337145_H
#define ALERTDESCRIPTION_T2084337145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertDescription
struct  AlertDescription_t2084337145 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertDescription::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertDescription_t2084337145, ___value___1)); }
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
#endif // ALERTDESCRIPTION_T2084337145_H
#ifndef CIPHERALGORITHMTYPE_T2716994716_H
#define CIPHERALGORITHMTYPE_T2716994716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherAlgorithmType
struct  CipherAlgorithmType_t2716994716 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.CipherAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherAlgorithmType_t2716994716, ___value___1)); }
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
#endif // CIPHERALGORITHMTYPE_T2716994716_H
#ifndef SECURITYPROTOCOLTYPE_T2351365639_H
#define SECURITYPROTOCOLTYPE_T2351365639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityProtocolType
struct  SecurityProtocolType_t2351365639 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t2351365639, ___value___1)); }
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
#endif // SECURITYPROTOCOLTYPE_T2351365639_H
#ifndef ALERTLEVEL_T684116482_H
#define ALERTLEVEL_T684116482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertLevel
struct  AlertLevel_t684116482 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t684116482, ___value___1)); }
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
#endif // ALERTLEVEL_T684116482_H
#ifndef MD2MANAGED_T3876801464_H
#define MD2MANAGED_T3876801464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t3876801464  : public MD2_t3779100628
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t22176289* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t22176289* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t22176289* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t22176289* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464, ___state_4)); }
	inline ByteU5BU5D_t22176289* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t22176289** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t22176289* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464, ___checksum_5)); }
	inline ByteU5BU5D_t22176289* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t22176289** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t22176289* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464, ___buffer_6)); }
	inline ByteU5BU5D_t22176289* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t22176289** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t22176289* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464, ___x_8)); }
	inline ByteU5BU5D_t22176289* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t22176289** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t22176289* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t3876801464_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t22176289* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t3876801464_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t22176289* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t22176289** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t22176289* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T3876801464_H
#ifndef SECURITYCOMPRESSIONTYPE_T2262477586_H
#define SECURITYCOMPRESSIONTYPE_T2262477586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityCompressionType
struct  SecurityCompressionType_t2262477586 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityCompressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCompressionType_t2262477586, ___value___1)); }
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
#endif // SECURITYCOMPRESSIONTYPE_T2262477586_H
#ifndef HANDSHAKESTATE_T1411615463_H
#define HANDSHAKESTATE_T1411615463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HandshakeState
struct  HandshakeState_t1411615463 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HandshakeState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeState_t1411615463, ___value___1)); }
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
#endif // HANDSHAKESTATE_T1411615463_H
#ifndef CONFIDENCEFACTOR_T1759892059_H
#define CONFIDENCEFACTOR_T1759892059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1759892059 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1759892059, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T1759892059_H
#ifndef HASHALGORITHMTYPE_T2246765184_H
#define HASHALGORITHMTYPE_T2246765184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HashAlgorithmType
struct  HashAlgorithmType_t2246765184 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HashAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HashAlgorithmType_t2246765184, ___value___1)); }
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
#endif // HASHALGORITHMTYPE_T2246765184_H
#ifndef SIGN_T1256686126_H
#define SIGN_T1256686126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t1256686126 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t1256686126, ___value___1)); }
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
#endif // SIGN_T1256686126_H
#ifndef CONTENTTYPE_T3379782506_H
#define CONTENTTYPE_T3379782506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ContentType
struct  ContentType_t3379782506 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.ContentType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t3379782506, ___value___1)); }
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
#endif // CONTENTTYPE_T3379782506_H
#ifndef EXCHANGEALGORITHMTYPE_T3464404925_H
#define EXCHANGEALGORITHMTYPE_T3464404925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
struct  ExchangeAlgorithmType_t3464404925 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ExchangeAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExchangeAlgorithmType_t3464404925, ___value___1)); }
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
#endif // EXCHANGEALGORITHMTYPE_T3464404925_H
#ifndef SSLCLIENTSTREAM_T4011342834_H
#define SSLCLIENTSTREAM_T4011342834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t4011342834  : public SslStreamBase_t2585837672
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t616406451 * ___ServerCertValidation_16;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t2948715132 * ___ClientCertSelection_17;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t1399203287 * ___PrivateKeySelection_18;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t3069778819 * ___ServerCertValidation2_19;

public:
	inline static int32_t get_offset_of_ServerCertValidation_16() { return static_cast<int32_t>(offsetof(SslClientStream_t4011342834, ___ServerCertValidation_16)); }
	inline CertificateValidationCallback_t616406451 * get_ServerCertValidation_16() const { return ___ServerCertValidation_16; }
	inline CertificateValidationCallback_t616406451 ** get_address_of_ServerCertValidation_16() { return &___ServerCertValidation_16; }
	inline void set_ServerCertValidation_16(CertificateValidationCallback_t616406451 * value)
	{
		___ServerCertValidation_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation_16), value);
	}

	inline static int32_t get_offset_of_ClientCertSelection_17() { return static_cast<int32_t>(offsetof(SslClientStream_t4011342834, ___ClientCertSelection_17)); }
	inline CertificateSelectionCallback_t2948715132 * get_ClientCertSelection_17() const { return ___ClientCertSelection_17; }
	inline CertificateSelectionCallback_t2948715132 ** get_address_of_ClientCertSelection_17() { return &___ClientCertSelection_17; }
	inline void set_ClientCertSelection_17(CertificateSelectionCallback_t2948715132 * value)
	{
		___ClientCertSelection_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClientCertSelection_17), value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_18() { return static_cast<int32_t>(offsetof(SslClientStream_t4011342834, ___PrivateKeySelection_18)); }
	inline PrivateKeySelectionCallback_t1399203287 * get_PrivateKeySelection_18() const { return ___PrivateKeySelection_18; }
	inline PrivateKeySelectionCallback_t1399203287 ** get_address_of_PrivateKeySelection_18() { return &___PrivateKeySelection_18; }
	inline void set_PrivateKeySelection_18(PrivateKeySelectionCallback_t1399203287 * value)
	{
		___PrivateKeySelection_18 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateKeySelection_18), value);
	}

	inline static int32_t get_offset_of_ServerCertValidation2_19() { return static_cast<int32_t>(offsetof(SslClientStream_t4011342834, ___ServerCertValidation2_19)); }
	inline CertificateValidationCallback2_t3069778819 * get_ServerCertValidation2_19() const { return ___ServerCertValidation2_19; }
	inline CertificateValidationCallback2_t3069778819 ** get_address_of_ServerCertValidation2_19() { return &___ServerCertValidation2_19; }
	inline void set_ServerCertValidation2_19(CertificateValidationCallback2_t3069778819 * value)
	{
		___ServerCertValidation2_19 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation2_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLCLIENTSTREAM_T4011342834_H
#ifndef CONTEXT_T673919819_H
#define CONTEXT_T673919819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t673919819  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_0;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t22176289* ___sessionId_1;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_2;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t2999875930 * ___serverSettings_3;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t2225982385 * ___clientSettings_4;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t3031907067 * ___current_5;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t3031907067 * ___negotiating_6;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t3031907067 * ___read_7;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t3031907067 * ___write_8;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t2214665083 * ___supportedCiphers_9;
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
	ByteU5BU5D_t22176289* ___clientRandom_18;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t22176289* ___serverRandom_19;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t22176289* ___randomCS_20;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t22176289* ___randomSC_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t22176289* ___masterSecret_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t22176289* ___clientWriteKey_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t22176289* ___serverWriteKey_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t22176289* ___clientWriteIV_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t22176289* ___serverWriteIV_26;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t2523717948 * ___handshakeMessages_27;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t786850696 * ___random_28;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t534984332 * ___recordProtocol_29;

public:
	inline static int32_t get_offset_of_securityProtocol_0() { return static_cast<int32_t>(offsetof(Context_t673919819, ___securityProtocol_0)); }
	inline int32_t get_securityProtocol_0() const { return ___securityProtocol_0; }
	inline int32_t* get_address_of_securityProtocol_0() { return &___securityProtocol_0; }
	inline void set_securityProtocol_0(int32_t value)
	{
		___securityProtocol_0 = value;
	}

	inline static int32_t get_offset_of_sessionId_1() { return static_cast<int32_t>(offsetof(Context_t673919819, ___sessionId_1)); }
	inline ByteU5BU5D_t22176289* get_sessionId_1() const { return ___sessionId_1; }
	inline ByteU5BU5D_t22176289** get_address_of_sessionId_1() { return &___sessionId_1; }
	inline void set_sessionId_1(ByteU5BU5D_t22176289* value)
	{
		___sessionId_1 = value;
		Il2CppCodeGenWriteBarrier((&___sessionId_1), value);
	}

	inline static int32_t get_offset_of_compressionMethod_2() { return static_cast<int32_t>(offsetof(Context_t673919819, ___compressionMethod_2)); }
	inline int32_t get_compressionMethod_2() const { return ___compressionMethod_2; }
	inline int32_t* get_address_of_compressionMethod_2() { return &___compressionMethod_2; }
	inline void set_compressionMethod_2(int32_t value)
	{
		___compressionMethod_2 = value;
	}

	inline static int32_t get_offset_of_serverSettings_3() { return static_cast<int32_t>(offsetof(Context_t673919819, ___serverSettings_3)); }
	inline TlsServerSettings_t2999875930 * get_serverSettings_3() const { return ___serverSettings_3; }
	inline TlsServerSettings_t2999875930 ** get_address_of_serverSettings_3() { return &___serverSettings_3; }
	inline void set_serverSettings_3(TlsServerSettings_t2999875930 * value)
	{
		___serverSettings_3 = value;
		Il2CppCodeGenWriteBarrier((&___serverSettings_3), value);
	}

	inline static int32_t get_offset_of_clientSettings_4() { return static_cast<int32_t>(offsetof(Context_t673919819, ___clientSettings_4)); }
	inline TlsClientSettings_t2225982385 * get_clientSettings_4() const { return ___clientSettings_4; }
	inline TlsClientSettings_t2225982385 ** get_address_of_clientSettings_4() { return &___clientSettings_4; }
	inline void set_clientSettings_4(TlsClientSettings_t2225982385 * value)
	{
		___clientSettings_4 = value;
		Il2CppCodeGenWriteBarrier((&___clientSettings_4), value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(Context_t673919819, ___current_5)); }
	inline SecurityParameters_t3031907067 * get_current_5() const { return ___current_5; }
	inline SecurityParameters_t3031907067 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(SecurityParameters_t3031907067 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_negotiating_6() { return static_cast<int32_t>(offsetof(Context_t673919819, ___negotiating_6)); }
	inline SecurityParameters_t3031907067 * get_negotiating_6() const { return ___negotiating_6; }
	inline SecurityParameters_t3031907067 ** get_address_of_negotiating_6() { return &___negotiating_6; }
	inline void set_negotiating_6(SecurityParameters_t3031907067 * value)
	{
		___negotiating_6 = value;
		Il2CppCodeGenWriteBarrier((&___negotiating_6), value);
	}

	inline static int32_t get_offset_of_read_7() { return static_cast<int32_t>(offsetof(Context_t673919819, ___read_7)); }
	inline SecurityParameters_t3031907067 * get_read_7() const { return ___read_7; }
	inline SecurityParameters_t3031907067 ** get_address_of_read_7() { return &___read_7; }
	inline void set_read_7(SecurityParameters_t3031907067 * value)
	{
		___read_7 = value;
		Il2CppCodeGenWriteBarrier((&___read_7), value);
	}

	inline static int32_t get_offset_of_write_8() { return static_cast<int32_t>(offsetof(Context_t673919819, ___write_8)); }
	inline SecurityParameters_t3031907067 * get_write_8() const { return ___write_8; }
	inline SecurityParameters_t3031907067 ** get_address_of_write_8() { return &___write_8; }
	inline void set_write_8(SecurityParameters_t3031907067 * value)
	{
		___write_8 = value;
		Il2CppCodeGenWriteBarrier((&___write_8), value);
	}

	inline static int32_t get_offset_of_supportedCiphers_9() { return static_cast<int32_t>(offsetof(Context_t673919819, ___supportedCiphers_9)); }
	inline CipherSuiteCollection_t2214665083 * get_supportedCiphers_9() const { return ___supportedCiphers_9; }
	inline CipherSuiteCollection_t2214665083 ** get_address_of_supportedCiphers_9() { return &___supportedCiphers_9; }
	inline void set_supportedCiphers_9(CipherSuiteCollection_t2214665083 * value)
	{
		___supportedCiphers_9 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCiphers_9), value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_10() { return static_cast<int32_t>(offsetof(Context_t673919819, ___lastHandshakeMsg_10)); }
	inline uint8_t get_lastHandshakeMsg_10() const { return ___lastHandshakeMsg_10; }
	inline uint8_t* get_address_of_lastHandshakeMsg_10() { return &___lastHandshakeMsg_10; }
	inline void set_lastHandshakeMsg_10(uint8_t value)
	{
		___lastHandshakeMsg_10 = value;
	}

	inline static int32_t get_offset_of_handshakeState_11() { return static_cast<int32_t>(offsetof(Context_t673919819, ___handshakeState_11)); }
	inline int32_t get_handshakeState_11() const { return ___handshakeState_11; }
	inline int32_t* get_address_of_handshakeState_11() { return &___handshakeState_11; }
	inline void set_handshakeState_11(int32_t value)
	{
		___handshakeState_11 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_12() { return static_cast<int32_t>(offsetof(Context_t673919819, ___abbreviatedHandshake_12)); }
	inline bool get_abbreviatedHandshake_12() const { return ___abbreviatedHandshake_12; }
	inline bool* get_address_of_abbreviatedHandshake_12() { return &___abbreviatedHandshake_12; }
	inline void set_abbreviatedHandshake_12(bool value)
	{
		___abbreviatedHandshake_12 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_13() { return static_cast<int32_t>(offsetof(Context_t673919819, ___receivedConnectionEnd_13)); }
	inline bool get_receivedConnectionEnd_13() const { return ___receivedConnectionEnd_13; }
	inline bool* get_address_of_receivedConnectionEnd_13() { return &___receivedConnectionEnd_13; }
	inline void set_receivedConnectionEnd_13(bool value)
	{
		___receivedConnectionEnd_13 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_14() { return static_cast<int32_t>(offsetof(Context_t673919819, ___sentConnectionEnd_14)); }
	inline bool get_sentConnectionEnd_14() const { return ___sentConnectionEnd_14; }
	inline bool* get_address_of_sentConnectionEnd_14() { return &___sentConnectionEnd_14; }
	inline void set_sentConnectionEnd_14(bool value)
	{
		___sentConnectionEnd_14 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_15() { return static_cast<int32_t>(offsetof(Context_t673919819, ___protocolNegotiated_15)); }
	inline bool get_protocolNegotiated_15() const { return ___protocolNegotiated_15; }
	inline bool* get_address_of_protocolNegotiated_15() { return &___protocolNegotiated_15; }
	inline void set_protocolNegotiated_15(bool value)
	{
		___protocolNegotiated_15 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_16() { return static_cast<int32_t>(offsetof(Context_t673919819, ___writeSequenceNumber_16)); }
	inline uint64_t get_writeSequenceNumber_16() const { return ___writeSequenceNumber_16; }
	inline uint64_t* get_address_of_writeSequenceNumber_16() { return &___writeSequenceNumber_16; }
	inline void set_writeSequenceNumber_16(uint64_t value)
	{
		___writeSequenceNumber_16 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_17() { return static_cast<int32_t>(offsetof(Context_t673919819, ___readSequenceNumber_17)); }
	inline uint64_t get_readSequenceNumber_17() const { return ___readSequenceNumber_17; }
	inline uint64_t* get_address_of_readSequenceNumber_17() { return &___readSequenceNumber_17; }
	inline void set_readSequenceNumber_17(uint64_t value)
	{
		___readSequenceNumber_17 = value;
	}

	inline static int32_t get_offset_of_clientRandom_18() { return static_cast<int32_t>(offsetof(Context_t673919819, ___clientRandom_18)); }
	inline ByteU5BU5D_t22176289* get_clientRandom_18() const { return ___clientRandom_18; }
	inline ByteU5BU5D_t22176289** get_address_of_clientRandom_18() { return &___clientRandom_18; }
	inline void set_clientRandom_18(ByteU5BU5D_t22176289* value)
	{
		___clientRandom_18 = value;
		Il2CppCodeGenWriteBarrier((&___clientRandom_18), value);
	}

	inline static int32_t get_offset_of_serverRandom_19() { return static_cast<int32_t>(offsetof(Context_t673919819, ___serverRandom_19)); }
	inline ByteU5BU5D_t22176289* get_serverRandom_19() const { return ___serverRandom_19; }
	inline ByteU5BU5D_t22176289** get_address_of_serverRandom_19() { return &___serverRandom_19; }
	inline void set_serverRandom_19(ByteU5BU5D_t22176289* value)
	{
		___serverRandom_19 = value;
		Il2CppCodeGenWriteBarrier((&___serverRandom_19), value);
	}

	inline static int32_t get_offset_of_randomCS_20() { return static_cast<int32_t>(offsetof(Context_t673919819, ___randomCS_20)); }
	inline ByteU5BU5D_t22176289* get_randomCS_20() const { return ___randomCS_20; }
	inline ByteU5BU5D_t22176289** get_address_of_randomCS_20() { return &___randomCS_20; }
	inline void set_randomCS_20(ByteU5BU5D_t22176289* value)
	{
		___randomCS_20 = value;
		Il2CppCodeGenWriteBarrier((&___randomCS_20), value);
	}

	inline static int32_t get_offset_of_randomSC_21() { return static_cast<int32_t>(offsetof(Context_t673919819, ___randomSC_21)); }
	inline ByteU5BU5D_t22176289* get_randomSC_21() const { return ___randomSC_21; }
	inline ByteU5BU5D_t22176289** get_address_of_randomSC_21() { return &___randomSC_21; }
	inline void set_randomSC_21(ByteU5BU5D_t22176289* value)
	{
		___randomSC_21 = value;
		Il2CppCodeGenWriteBarrier((&___randomSC_21), value);
	}

	inline static int32_t get_offset_of_masterSecret_22() { return static_cast<int32_t>(offsetof(Context_t673919819, ___masterSecret_22)); }
	inline ByteU5BU5D_t22176289* get_masterSecret_22() const { return ___masterSecret_22; }
	inline ByteU5BU5D_t22176289** get_address_of_masterSecret_22() { return &___masterSecret_22; }
	inline void set_masterSecret_22(ByteU5BU5D_t22176289* value)
	{
		___masterSecret_22 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_22), value);
	}

	inline static int32_t get_offset_of_clientWriteKey_23() { return static_cast<int32_t>(offsetof(Context_t673919819, ___clientWriteKey_23)); }
	inline ByteU5BU5D_t22176289* get_clientWriteKey_23() const { return ___clientWriteKey_23; }
	inline ByteU5BU5D_t22176289** get_address_of_clientWriteKey_23() { return &___clientWriteKey_23; }
	inline void set_clientWriteKey_23(ByteU5BU5D_t22176289* value)
	{
		___clientWriteKey_23 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteKey_23), value);
	}

	inline static int32_t get_offset_of_serverWriteKey_24() { return static_cast<int32_t>(offsetof(Context_t673919819, ___serverWriteKey_24)); }
	inline ByteU5BU5D_t22176289* get_serverWriteKey_24() const { return ___serverWriteKey_24; }
	inline ByteU5BU5D_t22176289** get_address_of_serverWriteKey_24() { return &___serverWriteKey_24; }
	inline void set_serverWriteKey_24(ByteU5BU5D_t22176289* value)
	{
		___serverWriteKey_24 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteKey_24), value);
	}

	inline static int32_t get_offset_of_clientWriteIV_25() { return static_cast<int32_t>(offsetof(Context_t673919819, ___clientWriteIV_25)); }
	inline ByteU5BU5D_t22176289* get_clientWriteIV_25() const { return ___clientWriteIV_25; }
	inline ByteU5BU5D_t22176289** get_address_of_clientWriteIV_25() { return &___clientWriteIV_25; }
	inline void set_clientWriteIV_25(ByteU5BU5D_t22176289* value)
	{
		___clientWriteIV_25 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteIV_25), value);
	}

	inline static int32_t get_offset_of_serverWriteIV_26() { return static_cast<int32_t>(offsetof(Context_t673919819, ___serverWriteIV_26)); }
	inline ByteU5BU5D_t22176289* get_serverWriteIV_26() const { return ___serverWriteIV_26; }
	inline ByteU5BU5D_t22176289** get_address_of_serverWriteIV_26() { return &___serverWriteIV_26; }
	inline void set_serverWriteIV_26(ByteU5BU5D_t22176289* value)
	{
		___serverWriteIV_26 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteIV_26), value);
	}

	inline static int32_t get_offset_of_handshakeMessages_27() { return static_cast<int32_t>(offsetof(Context_t673919819, ___handshakeMessages_27)); }
	inline TlsStream_t2523717948 * get_handshakeMessages_27() const { return ___handshakeMessages_27; }
	inline TlsStream_t2523717948 ** get_address_of_handshakeMessages_27() { return &___handshakeMessages_27; }
	inline void set_handshakeMessages_27(TlsStream_t2523717948 * value)
	{
		___handshakeMessages_27 = value;
		Il2CppCodeGenWriteBarrier((&___handshakeMessages_27), value);
	}

	inline static int32_t get_offset_of_random_28() { return static_cast<int32_t>(offsetof(Context_t673919819, ___random_28)); }
	inline RandomNumberGenerator_t786850696 * get_random_28() const { return ___random_28; }
	inline RandomNumberGenerator_t786850696 ** get_address_of_random_28() { return &___random_28; }
	inline void set_random_28(RandomNumberGenerator_t786850696 * value)
	{
		___random_28 = value;
		Il2CppCodeGenWriteBarrier((&___random_28), value);
	}

	inline static int32_t get_offset_of_recordProtocol_29() { return static_cast<int32_t>(offsetof(Context_t673919819, ___recordProtocol_29)); }
	inline RecordProtocol_t534984332 * get_recordProtocol_29() const { return ___recordProtocol_29; }
	inline RecordProtocol_t534984332 ** get_address_of_recordProtocol_29() { return &___recordProtocol_29; }
	inline void set_recordProtocol_29(RecordProtocol_t534984332 * value)
	{
		___recordProtocol_29 = value;
		Il2CppCodeGenWriteBarrier((&___recordProtocol_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T673919819_H
#ifndef CIPHERSUITECOLLECTION_T2214665083_H
#define CIPHERSUITECOLLECTION_T2214665083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t2214665083  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t282437244 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;

public:
	inline static int32_t get_offset_of_cipherSuites_0() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2214665083, ___cipherSuites_0)); }
	inline ArrayList_t282437244 * get_cipherSuites_0() const { return ___cipherSuites_0; }
	inline ArrayList_t282437244 ** get_address_of_cipherSuites_0() { return &___cipherSuites_0; }
	inline void set_cipherSuites_0(ArrayList_t282437244 * value)
	{
		___cipherSuites_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherSuites_0), value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t2214665083, ___protocol_1)); }
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
#endif // CIPHERSUITECOLLECTION_T2214665083_H
#ifndef X509CHAIN_T1396886779_H
#define X509CHAIN_T1396886779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t1396886779  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t2143654083 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t2143654083 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t3536964630 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t2143654083 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t1396886779, ___roots_0)); }
	inline X509CertificateCollection_t2143654083 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t2143654083 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t2143654083 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t1396886779, ___certs_1)); }
	inline X509CertificateCollection_t2143654083 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t2143654083 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t2143654083 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t1396886779, ____root_2)); }
	inline X509Certificate_t3536964630 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t3536964630 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t3536964630 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t1396886779, ____chain_3)); }
	inline X509CertificateCollection_t2143654083 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t2143654083 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t2143654083 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t1396886779, ____status_4)); }
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
#endif // X509CHAIN_T1396886779_H
#ifndef MULTICASTDELEGATE_T1059367039_H
#define MULTICASTDELEGATE_T1059367039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1059367039  : public Delegate_t837825617
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1059367039 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1059367039 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1059367039, ___prev_9)); }
	inline MulticastDelegate_t1059367039 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1059367039 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1059367039 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1059367039, ___kpm_next_10)); }
	inline MulticastDelegate_t1059367039 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1059367039 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1059367039 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1059367039_H
#ifndef SYMMETRICALGORITHM_T2491034487_H
#define SYMMETRICALGORITHM_T2491034487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2491034487  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t22176289* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t22176289* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t47321469* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t47321469* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___IVValue_1)); }
	inline ByteU5BU5D_t22176289* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t22176289** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t22176289* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___KeyValue_3)); }
	inline ByteU5BU5D_t22176289* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t22176289** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t22176289* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t47321469* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t47321469** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t47321469* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t47321469* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t47321469** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t47321469* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2491034487, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T2491034487_H
#ifndef CIPHERSUITE_T1664440709_H
#define CIPHERSUITE_T1664440709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuite
struct  CipherSuite_t1664440709  : public RuntimeObject
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
	Context_t673919819 * ___context_14;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::encryptionAlgorithm
	SymmetricAlgorithm_t2491034487 * ___encryptionAlgorithm_15;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::encryptionCipher
	RuntimeObject* ___encryptionCipher_16;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::decryptionAlgorithm
	SymmetricAlgorithm_t2491034487 * ___decryptionAlgorithm_17;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::decryptionCipher
	RuntimeObject* ___decryptionCipher_18;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::clientHMAC
	KeyedHashAlgorithm_t2788561272 * ___clientHMAC_19;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::serverHMAC
	KeyedHashAlgorithm_t2788561272 * ___serverHMAC_20;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_cipherAlgorithmType_3() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___cipherAlgorithmType_3)); }
	inline int32_t get_cipherAlgorithmType_3() const { return ___cipherAlgorithmType_3; }
	inline int32_t* get_address_of_cipherAlgorithmType_3() { return &___cipherAlgorithmType_3; }
	inline void set_cipherAlgorithmType_3(int32_t value)
	{
		___cipherAlgorithmType_3 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithmType_4() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___hashAlgorithmType_4)); }
	inline int32_t get_hashAlgorithmType_4() const { return ___hashAlgorithmType_4; }
	inline int32_t* get_address_of_hashAlgorithmType_4() { return &___hashAlgorithmType_4; }
	inline void set_hashAlgorithmType_4(int32_t value)
	{
		___hashAlgorithmType_4 = value;
	}

	inline static int32_t get_offset_of_exchangeAlgorithmType_5() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___exchangeAlgorithmType_5)); }
	inline int32_t get_exchangeAlgorithmType_5() const { return ___exchangeAlgorithmType_5; }
	inline int32_t* get_address_of_exchangeAlgorithmType_5() { return &___exchangeAlgorithmType_5; }
	inline void set_exchangeAlgorithmType_5(int32_t value)
	{
		___exchangeAlgorithmType_5 = value;
	}

	inline static int32_t get_offset_of_isExportable_6() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___isExportable_6)); }
	inline bool get_isExportable_6() const { return ___isExportable_6; }
	inline bool* get_address_of_isExportable_6() { return &___isExportable_6; }
	inline void set_isExportable_6(bool value)
	{
		___isExportable_6 = value;
	}

	inline static int32_t get_offset_of_cipherMode_7() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___cipherMode_7)); }
	inline int32_t get_cipherMode_7() const { return ___cipherMode_7; }
	inline int32_t* get_address_of_cipherMode_7() { return &___cipherMode_7; }
	inline void set_cipherMode_7(int32_t value)
	{
		___cipherMode_7 = value;
	}

	inline static int32_t get_offset_of_keyMaterialSize_8() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___keyMaterialSize_8)); }
	inline uint8_t get_keyMaterialSize_8() const { return ___keyMaterialSize_8; }
	inline uint8_t* get_address_of_keyMaterialSize_8() { return &___keyMaterialSize_8; }
	inline void set_keyMaterialSize_8(uint8_t value)
	{
		___keyMaterialSize_8 = value;
	}

	inline static int32_t get_offset_of_keyBlockSize_9() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___keyBlockSize_9)); }
	inline int32_t get_keyBlockSize_9() const { return ___keyBlockSize_9; }
	inline int32_t* get_address_of_keyBlockSize_9() { return &___keyBlockSize_9; }
	inline void set_keyBlockSize_9(int32_t value)
	{
		___keyBlockSize_9 = value;
	}

	inline static int32_t get_offset_of_expandedKeyMaterialSize_10() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___expandedKeyMaterialSize_10)); }
	inline uint8_t get_expandedKeyMaterialSize_10() const { return ___expandedKeyMaterialSize_10; }
	inline uint8_t* get_address_of_expandedKeyMaterialSize_10() { return &___expandedKeyMaterialSize_10; }
	inline void set_expandedKeyMaterialSize_10(uint8_t value)
	{
		___expandedKeyMaterialSize_10 = value;
	}

	inline static int32_t get_offset_of_effectiveKeyBits_11() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___effectiveKeyBits_11)); }
	inline int16_t get_effectiveKeyBits_11() const { return ___effectiveKeyBits_11; }
	inline int16_t* get_address_of_effectiveKeyBits_11() { return &___effectiveKeyBits_11; }
	inline void set_effectiveKeyBits_11(int16_t value)
	{
		___effectiveKeyBits_11 = value;
	}

	inline static int32_t get_offset_of_ivSize_12() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___ivSize_12)); }
	inline uint8_t get_ivSize_12() const { return ___ivSize_12; }
	inline uint8_t* get_address_of_ivSize_12() { return &___ivSize_12; }
	inline void set_ivSize_12(uint8_t value)
	{
		___ivSize_12 = value;
	}

	inline static int32_t get_offset_of_blockSize_13() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___blockSize_13)); }
	inline uint8_t get_blockSize_13() const { return ___blockSize_13; }
	inline uint8_t* get_address_of_blockSize_13() { return &___blockSize_13; }
	inline void set_blockSize_13(uint8_t value)
	{
		___blockSize_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___context_14)); }
	inline Context_t673919819 * get_context_14() const { return ___context_14; }
	inline Context_t673919819 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(Context_t673919819 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier((&___context_14), value);
	}

	inline static int32_t get_offset_of_encryptionAlgorithm_15() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___encryptionAlgorithm_15)); }
	inline SymmetricAlgorithm_t2491034487 * get_encryptionAlgorithm_15() const { return ___encryptionAlgorithm_15; }
	inline SymmetricAlgorithm_t2491034487 ** get_address_of_encryptionAlgorithm_15() { return &___encryptionAlgorithm_15; }
	inline void set_encryptionAlgorithm_15(SymmetricAlgorithm_t2491034487 * value)
	{
		___encryptionAlgorithm_15 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionAlgorithm_15), value);
	}

	inline static int32_t get_offset_of_encryptionCipher_16() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___encryptionCipher_16)); }
	inline RuntimeObject* get_encryptionCipher_16() const { return ___encryptionCipher_16; }
	inline RuntimeObject** get_address_of_encryptionCipher_16() { return &___encryptionCipher_16; }
	inline void set_encryptionCipher_16(RuntimeObject* value)
	{
		___encryptionCipher_16 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionCipher_16), value);
	}

	inline static int32_t get_offset_of_decryptionAlgorithm_17() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___decryptionAlgorithm_17)); }
	inline SymmetricAlgorithm_t2491034487 * get_decryptionAlgorithm_17() const { return ___decryptionAlgorithm_17; }
	inline SymmetricAlgorithm_t2491034487 ** get_address_of_decryptionAlgorithm_17() { return &___decryptionAlgorithm_17; }
	inline void set_decryptionAlgorithm_17(SymmetricAlgorithm_t2491034487 * value)
	{
		___decryptionAlgorithm_17 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionAlgorithm_17), value);
	}

	inline static int32_t get_offset_of_decryptionCipher_18() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___decryptionCipher_18)); }
	inline RuntimeObject* get_decryptionCipher_18() const { return ___decryptionCipher_18; }
	inline RuntimeObject** get_address_of_decryptionCipher_18() { return &___decryptionCipher_18; }
	inline void set_decryptionCipher_18(RuntimeObject* value)
	{
		___decryptionCipher_18 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionCipher_18), value);
	}

	inline static int32_t get_offset_of_clientHMAC_19() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___clientHMAC_19)); }
	inline KeyedHashAlgorithm_t2788561272 * get_clientHMAC_19() const { return ___clientHMAC_19; }
	inline KeyedHashAlgorithm_t2788561272 ** get_address_of_clientHMAC_19() { return &___clientHMAC_19; }
	inline void set_clientHMAC_19(KeyedHashAlgorithm_t2788561272 * value)
	{
		___clientHMAC_19 = value;
		Il2CppCodeGenWriteBarrier((&___clientHMAC_19), value);
	}

	inline static int32_t get_offset_of_serverHMAC_20() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709, ___serverHMAC_20)); }
	inline KeyedHashAlgorithm_t2788561272 * get_serverHMAC_20() const { return ___serverHMAC_20; }
	inline KeyedHashAlgorithm_t2788561272 ** get_address_of_serverHMAC_20() { return &___serverHMAC_20; }
	inline void set_serverHMAC_20(KeyedHashAlgorithm_t2788561272 * value)
	{
		___serverHMAC_20 = value;
		Il2CppCodeGenWriteBarrier((&___serverHMAC_20), value);
	}
};

struct CipherSuite_t1664440709_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EmptyArray
	ByteU5BU5D_t22176289* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(CipherSuite_t1664440709_StaticFields, ___EmptyArray_0)); }
	inline ByteU5BU5D_t22176289* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline ByteU5BU5D_t22176289** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(ByteU5BU5D_t22176289* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITE_T1664440709_H
#ifndef ALERT_T4053077015_H
#define ALERT_T4053077015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Alert
struct  Alert_t4053077015  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t4053077015, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t4053077015, ___description_1)); }
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
#endif // ALERT_T4053077015_H
#ifndef DATETIME_T2614872056_H
#define DATETIME_T2614872056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2614872056 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1283285318  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2614872056, ___ticks_0)); }
	inline TimeSpan_t1283285318  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1283285318 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1283285318  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2614872056, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2614872056_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2614872056  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2614872056  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1613568946* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1613568946* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1613568946* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1613568946* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1613568946* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1613568946* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1613568946* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1730202116* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1730202116* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2614872056  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2614872056 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2614872056  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___MinValue_3)); }
	inline DateTime_t2614872056  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2614872056 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2614872056  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1613568946* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1613568946** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1613568946* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1613568946* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1613568946** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1613568946* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1613568946* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1613568946** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1613568946* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1613568946* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1613568946** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1613568946* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1613568946* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1613568946** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1613568946* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1613568946* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1613568946** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1613568946* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1613568946* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1613568946** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1613568946* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1730202116* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1730202116** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1730202116* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1730202116* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1730202116** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1730202116* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2614872056_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T2614872056_H
#ifndef CLIENTSESSIONINFO_T2235055212_H
#define CLIENTSESSIONINFO_T2235055212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct  ClientSessionInfo_t2235055212  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::disposed
	bool ___disposed_1;
	// System.DateTime Mono.Security.Protocol.Tls.ClientSessionInfo::validuntil
	DateTime_t2614872056  ___validuntil_2;
	// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::host
	String_t* ___host_3;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::sid
	ByteU5BU5D_t22176289* ___sid_4;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::masterSecret
	ByteU5BU5D_t22176289* ___masterSecret_5;

public:
	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_validuntil_2() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212, ___validuntil_2)); }
	inline DateTime_t2614872056  get_validuntil_2() const { return ___validuntil_2; }
	inline DateTime_t2614872056 * get_address_of_validuntil_2() { return &___validuntil_2; }
	inline void set_validuntil_2(DateTime_t2614872056  value)
	{
		___validuntil_2 = value;
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_sid_4() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212, ___sid_4)); }
	inline ByteU5BU5D_t22176289* get_sid_4() const { return ___sid_4; }
	inline ByteU5BU5D_t22176289** get_address_of_sid_4() { return &___sid_4; }
	inline void set_sid_4(ByteU5BU5D_t22176289* value)
	{
		___sid_4 = value;
		Il2CppCodeGenWriteBarrier((&___sid_4), value);
	}

	inline static int32_t get_offset_of_masterSecret_5() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212, ___masterSecret_5)); }
	inline ByteU5BU5D_t22176289* get_masterSecret_5() const { return ___masterSecret_5; }
	inline ByteU5BU5D_t22176289** get_address_of_masterSecret_5() { return &___masterSecret_5; }
	inline void set_masterSecret_5(ByteU5BU5D_t22176289* value)
	{
		___masterSecret_5 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_5), value);
	}
};

struct ClientSessionInfo_t2235055212_StaticFields
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ClientSessionInfo::ValidityInterval
	int32_t ___ValidityInterval_0;

public:
	inline static int32_t get_offset_of_ValidityInterval_0() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t2235055212_StaticFields, ___ValidityInterval_0)); }
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
#endif // CLIENTSESSIONINFO_T2235055212_H
#ifndef X509CRL_T3598601567_H
#define X509CRL_T3598601567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t3598601567  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t2614872056  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t2614872056  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t282437244 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t22176289* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t240528379 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t22176289* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t22176289* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___thisUpdate_2)); }
	inline DateTime_t2614872056  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t2614872056 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t2614872056  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___nextUpdate_3)); }
	inline DateTime_t2614872056  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t2614872056 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t2614872056  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___entries_4)); }
	inline ArrayList_t282437244 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t282437244 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t282437244 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___signature_6)); }
	inline ByteU5BU5D_t22176289* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t22176289** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t22176289* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___extensions_7)); }
	inline X509ExtensionCollection_t240528379 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t240528379 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t240528379 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___encoded_8)); }
	inline ByteU5BU5D_t22176289* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t22176289** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t22176289* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567, ___hash_value_9)); }
	inline ByteU5BU5D_t22176289* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t22176289** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t22176289* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t3598601567_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(X509Crl_t3598601567_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T3598601567_H
#ifndef RC4_T4190441827_H
#define RC4_T4190441827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t4190441827  : public SymmetricAlgorithm_t2491034487
{
public:

public:
};

struct RC4_t4190441827_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t47321469* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t47321469* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t4190441827_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t47321469* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t47321469** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t47321469* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t4190441827_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t47321469* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t47321469** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t47321469* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T4190441827_H
#ifndef SERVERCONTEXT_T1175688556_H
#define SERVERCONTEXT_T1175688556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ServerContext
struct  ServerContext_t1175688556  : public Context_t673919819
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXT_T1175688556_H
#ifndef X509CERTIFICATE_T3536964630_H
#define X509CERTIFICATE_T3536964630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t3536964630  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t1895422298 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t22176289* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t2614872056  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t2614872056  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t1895422298 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t22176289* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t1895422298 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t22176289* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t22176289* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t22176289* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t22176289* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t796103846 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t1804690054 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t22176289* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t22176289* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t22176289* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t240528379 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___decoder_0)); }
	inline ASN1_t1895422298 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t1895422298 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t1895422298 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t22176289* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t22176289** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t22176289* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_from_2)); }
	inline DateTime_t2614872056  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t2614872056 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t2614872056  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_until_3)); }
	inline DateTime_t2614872056  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t2614872056 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t2614872056  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___issuer_4)); }
	inline ASN1_t1895422298 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t1895422298 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t1895422298 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t22176289* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t22176289** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t22176289* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___subject_8)); }
	inline ASN1_t1895422298 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t1895422298 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t1895422298 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_publickey_10)); }
	inline ByteU5BU5D_t22176289* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t22176289** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t22176289* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___signature_11)); }
	inline ByteU5BU5D_t22176289* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t22176289** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t22176289* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t22176289* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t22176289** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t22176289* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___certhash_14)); }
	inline ByteU5BU5D_t22176289* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t22176289** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t22176289* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ____rsa_15)); }
	inline RSA_t796103846 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t796103846 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t796103846 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ____dsa_16)); }
	inline DSA_t1804690054 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t1804690054 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t1804690054 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___serialnumber_18)); }
	inline ByteU5BU5D_t22176289* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t22176289** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t22176289* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t22176289* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t22176289** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t22176289* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t22176289* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t22176289** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t22176289* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630, ___extensions_21)); }
	inline X509ExtensionCollection_t240528379 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t240528379 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t240528379 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t3536964630_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t4107098295 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t3536964630_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t4107098295 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t4107098295 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t4107098295 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T3536964630_H
#ifndef KEYGENERATEDEVENTHANDLER_T164953791_H
#define KEYGENERATEDEVENTHANDLER_T164953791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t164953791  : public MulticastDelegate_t1059367039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T164953791_H
#ifndef CLIENTCONTEXT_T2702348397_H
#define CLIENTCONTEXT_T2702348397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t2702348397  : public Context_t673919819
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t4011342834 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;

public:
	inline static int32_t get_offset_of_sslStream_30() { return static_cast<int32_t>(offsetof(ClientContext_t2702348397, ___sslStream_30)); }
	inline SslClientStream_t4011342834 * get_sslStream_30() const { return ___sslStream_30; }
	inline SslClientStream_t4011342834 ** get_address_of_sslStream_30() { return &___sslStream_30; }
	inline void set_sslStream_30(SslClientStream_t4011342834 * value)
	{
		___sslStream_30 = value;
		Il2CppCodeGenWriteBarrier((&___sslStream_30), value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_31() { return static_cast<int32_t>(offsetof(ClientContext_t2702348397, ___clientHelloProtocol_31)); }
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
#endif // CLIENTCONTEXT_T2702348397_H
#ifndef HTTPSCLIENTSTREAM_T1769506666_H
#define HTTPSCLIENTSTREAM_T1769506666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t1769506666  : public SslClientStream_t4011342834
{
public:
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t963293399 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;

public:
	inline static int32_t get_offset_of__request_20() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1769506666, ____request_20)); }
	inline HttpWebRequest_t963293399 * get__request_20() const { return ____request_20; }
	inline HttpWebRequest_t963293399 ** get_address_of__request_20() { return &____request_20; }
	inline void set__request_20(HttpWebRequest_t963293399 * value)
	{
		____request_20 = value;
		Il2CppCodeGenWriteBarrier((&____request_20), value);
	}

	inline static int32_t get_offset_of__status_21() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1769506666, ____status_21)); }
	inline int32_t get__status_21() const { return ____status_21; }
	inline int32_t* get_address_of__status_21() { return &____status_21; }
	inline void set__status_21(int32_t value)
	{
		____status_21 = value;
	}
};

struct HttpsClientStream_t1769506666_StaticFields
{
public:
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t2948715132 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t1399203287 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1769506666_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline CertificateSelectionCallback_t2948715132 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline CertificateSelectionCallback_t2948715132 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(CertificateSelectionCallback_t2948715132 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1769506666_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline PrivateKeySelectionCallback_t1399203287 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline PrivateKeySelectionCallback_t1399203287 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(PrivateKeySelectionCallback_t1399203287 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSCLIENTSTREAM_T1769506666_H
#ifndef X509CRLENTRY_T830424329_H
#define X509CRLENTRY_T830424329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t830424329  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t22176289* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t2614872056  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t240528379 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t830424329, ___sn_0)); }
	inline ByteU5BU5D_t22176289* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t22176289** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t22176289* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t830424329, ___revocationDate_1)); }
	inline DateTime_t2614872056  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t2614872056 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t2614872056  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t830424329, ___extensions_2)); }
	inline X509ExtensionCollection_t240528379 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t240528379 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t240528379 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T830424329_H
#ifndef ARC4MANAGED_T1399062937_H
#define ARC4MANAGED_T1399062937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t1399062937  : public RC4_t4190441827
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t22176289* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t22176289* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t1399062937, ___key_12)); }
	inline ByteU5BU5D_t22176289* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t22176289** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t22176289* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t1399062937, ___state_13)); }
	inline ByteU5BU5D_t22176289* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t22176289** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t22176289* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t1399062937, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t1399062937, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t1399062937, ___m_disposed_16)); }
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
#endif // ARC4MANAGED_T1399062937_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (U24ArrayTypeU2448_t1594430670)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t1594430670 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (U24ArrayTypeU2464_t568690016)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t568690016 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (U24ArrayTypeU2412_t1110086352)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1110086352 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (U24ArrayTypeU24136_t2498413296)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2498413296 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (U24ArrayTypeU248_t1111398537)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1111398537 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (U24ArrayTypeU2472_t3427006904)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3427006904 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (U24ArrayTypeU24124_t405112971)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t405112971 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (U24ArrayTypeU2496_t1632160102)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1632160102 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (U24ArrayTypeU242048_t1722976098)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t1722976098 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (U24ArrayTypeU24256_t1998025346)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t1998025346 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (U24ArrayTypeU241024_t1536125364)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t1536125364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (U24ArrayTypeU24640_t2167601484)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2167601484 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (U24ArrayTypeU24128_t1025484945)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t1025484945 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (U24ArrayTypeU2452_t915692018)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t915692018 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (__Il2CppComDelegate_t3661718252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (U3CModuleU3E_t2841851831), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (Locale_t2192383796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (BigInteger_t3528660265), -1, sizeof(BigInteger_t3528660265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	BigInteger_t3528660265::get_offset_of_length_0(),
	BigInteger_t3528660265::get_offset_of_data_1(),
	BigInteger_t3528660265_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t3528660265_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (Sign_t1256686126)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable919[4] = 
{
	Sign_t1256686126::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (ModulusRing_t898791483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable920[2] = 
{
	ModulusRing_t898791483::get_offset_of_mod_0(),
	ModulusRing_t898791483::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (Kernel_t4207544835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (ConfidenceFactor_t1759892059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable922[7] = 
{
	ConfidenceFactor_t1759892059::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (PrimalityTests_t3296763986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (PrimeGeneratorBase_t4234036235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (SequentialSearchPrimeGeneratorBase_t3564433575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (ASN1_t1895422298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	ASN1_t1895422298::get_offset_of_m_nTag_0(),
	ASN1_t1895422298::get_offset_of_m_aValue_1(),
	ASN1_t1895422298::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ASN1Convert_t1772191266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (BitConverterLE_t2629256147), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (PKCS7_t215409737), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (ContentInfo_t3024017160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable930[2] = 
{
	ContentInfo_t3024017160::get_offset_of_contentType_0(),
	ContentInfo_t3024017160::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (EncryptedData_t2349895116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[4] = 
{
	EncryptedData_t2349895116::get_offset_of__version_0(),
	EncryptedData_t2349895116::get_offset_of__content_1(),
	EncryptedData_t2349895116::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t2349895116::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (ARC4Managed_t1399062937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[5] = 
{
	ARC4Managed_t1399062937::get_offset_of_key_12(),
	ARC4Managed_t1399062937::get_offset_of_state_13(),
	ARC4Managed_t1399062937::get_offset_of_x_14(),
	ARC4Managed_t1399062937::get_offset_of_y_15(),
	ARC4Managed_t1399062937::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CryptoConvert_t3418947473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (KeyBuilder_t2083437291), -1, sizeof(KeyBuilder_t2083437291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable934[1] = 
{
	KeyBuilder_t2083437291_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (MD2_t3779100628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (MD2Managed_t3876801464), -1, sizeof(MD2Managed_t3876801464_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable936[6] = 
{
	MD2Managed_t3876801464::get_offset_of_state_4(),
	MD2Managed_t3876801464::get_offset_of_checksum_5(),
	MD2Managed_t3876801464::get_offset_of_buffer_6(),
	MD2Managed_t3876801464::get_offset_of_count_7(),
	MD2Managed_t3876801464::get_offset_of_x_8(),
	MD2Managed_t3876801464_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (MD4_t3547796601), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (MD4Managed_t2304410549), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[5] = 
{
	MD4Managed_t2304410549::get_offset_of_state_4(),
	MD4Managed_t2304410549::get_offset_of_buffer_5(),
	MD4Managed_t2304410549::get_offset_of_count_6(),
	MD4Managed_t2304410549::get_offset_of_x_7(),
	MD4Managed_t2304410549::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (PKCS1_t3339104953), -1, sizeof(PKCS1_t3339104953_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable939[4] = 
{
	PKCS1_t3339104953_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3339104953_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3339104953_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3339104953_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (PKCS8_t3712993187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (PrivateKeyInfo_t2557172927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable941[4] = 
{
	PrivateKeyInfo_t2557172927::get_offset_of__version_0(),
	PrivateKeyInfo_t2557172927::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t2557172927::get_offset_of__key_2(),
	PrivateKeyInfo_t2557172927::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (EncryptedPrivateKeyInfo_t3711317605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable942[4] = 
{
	EncryptedPrivateKeyInfo_t3711317605::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t3711317605::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t3711317605::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t3711317605::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (RC4_t4190441827), -1, sizeof(RC4_t4190441827_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable943[2] = 
{
	RC4_t4190441827_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t4190441827_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (RSAManaged_t3925001951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[13] = 
{
	RSAManaged_t3925001951::get_offset_of_isCRTpossible_2(),
	RSAManaged_t3925001951::get_offset_of_keyBlinding_3(),
	RSAManaged_t3925001951::get_offset_of_keypairGenerated_4(),
	RSAManaged_t3925001951::get_offset_of_m_disposed_5(),
	RSAManaged_t3925001951::get_offset_of_d_6(),
	RSAManaged_t3925001951::get_offset_of_p_7(),
	RSAManaged_t3925001951::get_offset_of_q_8(),
	RSAManaged_t3925001951::get_offset_of_dp_9(),
	RSAManaged_t3925001951::get_offset_of_dq_10(),
	RSAManaged_t3925001951::get_offset_of_qInv_11(),
	RSAManaged_t3925001951::get_offset_of_n_12(),
	RSAManaged_t3925001951::get_offset_of_e_13(),
	RSAManaged_t3925001951::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (KeyGeneratedEventHandler_t164953791), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (SafeBag_t2848421663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[2] = 
{
	SafeBag_t2848421663::get_offset_of__bagOID_0(),
	SafeBag_t2848421663::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (PKCS12_t2371731250), -1, sizeof(PKCS12_t2371731250_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable947[17] = 
{
	PKCS12_t2371731250_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t2371731250::get_offset_of__password_1(),
	PKCS12_t2371731250::get_offset_of__keyBags_2(),
	PKCS12_t2371731250::get_offset_of__secretBags_3(),
	PKCS12_t2371731250::get_offset_of__certs_4(),
	PKCS12_t2371731250::get_offset_of__keyBagsChanged_5(),
	PKCS12_t2371731250::get_offset_of__secretBagsChanged_6(),
	PKCS12_t2371731250::get_offset_of__certsChanged_7(),
	PKCS12_t2371731250::get_offset_of__iterations_8(),
	PKCS12_t2371731250::get_offset_of__safeBags_9(),
	PKCS12_t2371731250::get_offset_of__rng_10(),
	PKCS12_t2371731250_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t2371731250_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_12(),
	PKCS12_t2371731250_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_13(),
	PKCS12_t2371731250_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_14(),
	PKCS12_t2371731250_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_15(),
	PKCS12_t2371731250_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (DeriveBytes_t3285098245), -1, sizeof(DeriveBytes_t3285098245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable948[7] = 
{
	DeriveBytes_t3285098245_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t3285098245_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t3285098245_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t3285098245::get_offset_of__hashName_3(),
	DeriveBytes_t3285098245::get_offset_of__iterations_4(),
	DeriveBytes_t3285098245::get_offset_of__password_5(),
	DeriveBytes_t3285098245::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (X501_t2825093531), -1, sizeof(X501_t2825093531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable949[15] = 
{
	X501_t2825093531_StaticFields::get_offset_of_countryName_0(),
	X501_t2825093531_StaticFields::get_offset_of_organizationName_1(),
	X501_t2825093531_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t2825093531_StaticFields::get_offset_of_commonName_3(),
	X501_t2825093531_StaticFields::get_offset_of_localityName_4(),
	X501_t2825093531_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t2825093531_StaticFields::get_offset_of_streetAddress_6(),
	X501_t2825093531_StaticFields::get_offset_of_domainComponent_7(),
	X501_t2825093531_StaticFields::get_offset_of_userid_8(),
	X501_t2825093531_StaticFields::get_offset_of_email_9(),
	X501_t2825093531_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t2825093531_StaticFields::get_offset_of_title_11(),
	X501_t2825093531_StaticFields::get_offset_of_surname_12(),
	X501_t2825093531_StaticFields::get_offset_of_givenName_13(),
	X501_t2825093531_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (X509Certificate_t3536964630), -1, sizeof(X509Certificate_t3536964630_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable950[26] = 
{
	X509Certificate_t3536964630::get_offset_of_decoder_0(),
	X509Certificate_t3536964630::get_offset_of_m_encodedcert_1(),
	X509Certificate_t3536964630::get_offset_of_m_from_2(),
	X509Certificate_t3536964630::get_offset_of_m_until_3(),
	X509Certificate_t3536964630::get_offset_of_issuer_4(),
	X509Certificate_t3536964630::get_offset_of_m_issuername_5(),
	X509Certificate_t3536964630::get_offset_of_m_keyalgo_6(),
	X509Certificate_t3536964630::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t3536964630::get_offset_of_subject_8(),
	X509Certificate_t3536964630::get_offset_of_m_subject_9(),
	X509Certificate_t3536964630::get_offset_of_m_publickey_10(),
	X509Certificate_t3536964630::get_offset_of_signature_11(),
	X509Certificate_t3536964630::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t3536964630::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t3536964630::get_offset_of_certhash_14(),
	X509Certificate_t3536964630::get_offset_of__rsa_15(),
	X509Certificate_t3536964630::get_offset_of__dsa_16(),
	X509Certificate_t3536964630::get_offset_of_version_17(),
	X509Certificate_t3536964630::get_offset_of_serialnumber_18(),
	X509Certificate_t3536964630::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t3536964630::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t3536964630::get_offset_of_extensions_21(),
	X509Certificate_t3536964630_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t3536964630_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t3536964630_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t3536964630_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (X509CertificateCollection_t2143654083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (X509CertificateEnumerator_t1173023546), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable952[1] = 
{
	X509CertificateEnumerator_t1173023546::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (X509Chain_t1396886779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable953[5] = 
{
	X509Chain_t1396886779::get_offset_of_roots_0(),
	X509Chain_t1396886779::get_offset_of_certs_1(),
	X509Chain_t1396886779::get_offset_of__root_2(),
	X509Chain_t1396886779::get_offset_of__chain_3(),
	X509Chain_t1396886779::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (X509ChainStatusFlags_t1339478564)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable954[8] = 
{
	X509ChainStatusFlags_t1339478564::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (X509Crl_t3598601567), -1, sizeof(X509Crl_t3598601567_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable955[11] = 
{
	X509Crl_t3598601567::get_offset_of_issuer_0(),
	X509Crl_t3598601567::get_offset_of_version_1(),
	X509Crl_t3598601567::get_offset_of_thisUpdate_2(),
	X509Crl_t3598601567::get_offset_of_nextUpdate_3(),
	X509Crl_t3598601567::get_offset_of_entries_4(),
	X509Crl_t3598601567::get_offset_of_signatureOID_5(),
	X509Crl_t3598601567::get_offset_of_signature_6(),
	X509Crl_t3598601567::get_offset_of_extensions_7(),
	X509Crl_t3598601567::get_offset_of_encoded_8(),
	X509Crl_t3598601567::get_offset_of_hash_value_9(),
	X509Crl_t3598601567_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (X509CrlEntry_t830424329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[3] = 
{
	X509CrlEntry_t830424329::get_offset_of_sn_0(),
	X509CrlEntry_t830424329::get_offset_of_revocationDate_1(),
	X509CrlEntry_t830424329::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (X509Extension_t1990379981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable957[3] = 
{
	X509Extension_t1990379981::get_offset_of_extnOid_0(),
	X509Extension_t1990379981::get_offset_of_extnCritical_1(),
	X509Extension_t1990379981::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (X509ExtensionCollection_t240528379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[1] = 
{
	X509ExtensionCollection_t240528379::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (X509Store_t1744674200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable959[4] = 
{
	X509Store_t1744674200::get_offset_of__storePath_0(),
	X509Store_t1744674200::get_offset_of__certificates_1(),
	X509Store_t1744674200::get_offset_of__crls_2(),
	X509Store_t1744674200::get_offset_of__crl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (X509StoreManager_t3376514574), -1, sizeof(X509StoreManager_t3376514574_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable960[2] = 
{
	X509StoreManager_t3376514574_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t3376514574_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (X509Stores_t4017516434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable961[2] = 
{
	X509Stores_t4017516434::get_offset_of__storePath_0(),
	X509Stores_t4017516434::get_offset_of__trusted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (AuthorityKeyIdentifierExtension_t3942472451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable962[1] = 
{
	AuthorityKeyIdentifierExtension_t3942472451::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (BasicConstraintsExtension_t3710154000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[2] = 
{
	BasicConstraintsExtension_t3710154000::get_offset_of_cA_3(),
	BasicConstraintsExtension_t3710154000::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (ExtendedKeyUsageExtension_t1520518353), -1, sizeof(ExtendedKeyUsageExtension_t1520518353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable964[2] = 
{
	ExtendedKeyUsageExtension_t1520518353::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t1520518353_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (GeneralNames_t3709814340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[5] = 
{
	GeneralNames_t3709814340::get_offset_of_rfc822Name_0(),
	GeneralNames_t3709814340::get_offset_of_dnsName_1(),
	GeneralNames_t3709814340::get_offset_of_directoryNames_2(),
	GeneralNames_t3709814340::get_offset_of_uris_3(),
	GeneralNames_t3709814340::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (KeyUsages_t822446981)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable966[11] = 
{
	KeyUsages_t822446981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (KeyUsageExtension_t2482828357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[1] = 
{
	KeyUsageExtension_t2482828357::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (NetscapeCertTypeExtension_t603270548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[1] = 
{
	NetscapeCertTypeExtension_t603270548::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (CertTypes_t926167726)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable969[8] = 
{
	CertTypes_t926167726::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (SubjectAltNameExtension_t4158849583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable970[1] = 
{
	SubjectAltNameExtension_t4158849583::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (HMAC_t1963779386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[4] = 
{
	HMAC_t1963779386::get_offset_of_hash_5(),
	HMAC_t1963779386::get_offset_of_hashing_6(),
	HMAC_t1963779386::get_offset_of_innerPad_7(),
	HMAC_t1963779386::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (MD5SHA1_t1326937077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable972[3] = 
{
	MD5SHA1_t1326937077::get_offset_of_md5_4(),
	MD5SHA1_t1326937077::get_offset_of_sha_5(),
	MD5SHA1_t1326937077::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (AlertLevel_t684116482)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable973[3] = 
{
	AlertLevel_t684116482::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (AlertDescription_t2084337145)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable974[25] = 
{
	AlertDescription_t2084337145::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (Alert_t4053077015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[2] = 
{
	Alert_t4053077015::get_offset_of_level_0(),
	Alert_t4053077015::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (CipherAlgorithmType_t2716994716)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable976[8] = 
{
	CipherAlgorithmType_t2716994716::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (CipherSuite_t1664440709), -1, sizeof(CipherSuite_t1664440709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[21] = 
{
	CipherSuite_t1664440709_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t1664440709::get_offset_of_code_1(),
	CipherSuite_t1664440709::get_offset_of_name_2(),
	CipherSuite_t1664440709::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t1664440709::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t1664440709::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t1664440709::get_offset_of_isExportable_6(),
	CipherSuite_t1664440709::get_offset_of_cipherMode_7(),
	CipherSuite_t1664440709::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t1664440709::get_offset_of_keyBlockSize_9(),
	CipherSuite_t1664440709::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t1664440709::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t1664440709::get_offset_of_ivSize_12(),
	CipherSuite_t1664440709::get_offset_of_blockSize_13(),
	CipherSuite_t1664440709::get_offset_of_context_14(),
	CipherSuite_t1664440709::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t1664440709::get_offset_of_encryptionCipher_16(),
	CipherSuite_t1664440709::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t1664440709::get_offset_of_decryptionCipher_18(),
	CipherSuite_t1664440709::get_offset_of_clientHMAC_19(),
	CipherSuite_t1664440709::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (CipherSuiteCollection_t2214665083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable978[2] = 
{
	CipherSuiteCollection_t2214665083::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t2214665083::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (CipherSuiteFactory_t1147383721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (ClientContext_t2702348397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[2] = 
{
	ClientContext_t2702348397::get_offset_of_sslStream_30(),
	ClientContext_t2702348397::get_offset_of_clientHelloProtocol_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (ClientRecordProtocol_t3198872354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (ClientSessionInfo_t2235055212), -1, sizeof(ClientSessionInfo_t2235055212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable982[6] = 
{
	ClientSessionInfo_t2235055212_StaticFields::get_offset_of_ValidityInterval_0(),
	ClientSessionInfo_t2235055212::get_offset_of_disposed_1(),
	ClientSessionInfo_t2235055212::get_offset_of_validuntil_2(),
	ClientSessionInfo_t2235055212::get_offset_of_host_3(),
	ClientSessionInfo_t2235055212::get_offset_of_sid_4(),
	ClientSessionInfo_t2235055212::get_offset_of_masterSecret_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (ClientSessionCache_t2184021598), -1, sizeof(ClientSessionCache_t2184021598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable983[2] = 
{
	ClientSessionCache_t2184021598_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t2184021598_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (ContentType_t3379782506)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable984[5] = 
{
	ContentType_t3379782506::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (Context_t673919819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[30] = 
{
	Context_t673919819::get_offset_of_securityProtocol_0(),
	Context_t673919819::get_offset_of_sessionId_1(),
	Context_t673919819::get_offset_of_compressionMethod_2(),
	Context_t673919819::get_offset_of_serverSettings_3(),
	Context_t673919819::get_offset_of_clientSettings_4(),
	Context_t673919819::get_offset_of_current_5(),
	Context_t673919819::get_offset_of_negotiating_6(),
	Context_t673919819::get_offset_of_read_7(),
	Context_t673919819::get_offset_of_write_8(),
	Context_t673919819::get_offset_of_supportedCiphers_9(),
	Context_t673919819::get_offset_of_lastHandshakeMsg_10(),
	Context_t673919819::get_offset_of_handshakeState_11(),
	Context_t673919819::get_offset_of_abbreviatedHandshake_12(),
	Context_t673919819::get_offset_of_receivedConnectionEnd_13(),
	Context_t673919819::get_offset_of_sentConnectionEnd_14(),
	Context_t673919819::get_offset_of_protocolNegotiated_15(),
	Context_t673919819::get_offset_of_writeSequenceNumber_16(),
	Context_t673919819::get_offset_of_readSequenceNumber_17(),
	Context_t673919819::get_offset_of_clientRandom_18(),
	Context_t673919819::get_offset_of_serverRandom_19(),
	Context_t673919819::get_offset_of_randomCS_20(),
	Context_t673919819::get_offset_of_randomSC_21(),
	Context_t673919819::get_offset_of_masterSecret_22(),
	Context_t673919819::get_offset_of_clientWriteKey_23(),
	Context_t673919819::get_offset_of_serverWriteKey_24(),
	Context_t673919819::get_offset_of_clientWriteIV_25(),
	Context_t673919819::get_offset_of_serverWriteIV_26(),
	Context_t673919819::get_offset_of_handshakeMessages_27(),
	Context_t673919819::get_offset_of_random_28(),
	Context_t673919819::get_offset_of_recordProtocol_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ExchangeAlgorithmType_t3464404925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable986[6] = 
{
	ExchangeAlgorithmType_t3464404925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (HandshakeState_t1411615463)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable987[4] = 
{
	HandshakeState_t1411615463::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (HashAlgorithmType_t2246765184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable988[4] = 
{
	HashAlgorithmType_t2246765184::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (HttpsClientStream_t1769506666), -1, sizeof(HttpsClientStream_t1769506666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable989[4] = 
{
	HttpsClientStream_t1769506666::get_offset_of__request_20(),
	HttpsClientStream_t1769506666::get_offset_of__status_21(),
	HttpsClientStream_t1769506666_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_22(),
	HttpsClientStream_t1769506666_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (RecordProtocol_t534984332), -1, sizeof(RecordProtocol_t534984332_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable990[3] = 
{
	RecordProtocol_t534984332_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t534984332::get_offset_of_innerStream_1(),
	RecordProtocol_t534984332::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (ReceiveRecordAsyncResult_t3088436779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[9] = 
{
	ReceiveRecordAsyncResult_t3088436779::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t3088436779::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (SendRecordAsyncResult_t2804567747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[7] = 
{
	SendRecordAsyncResult_t2804567747::get_offset_of_locker_0(),
	SendRecordAsyncResult_t2804567747::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t2804567747::get_offset_of__userState_2(),
	SendRecordAsyncResult_t2804567747::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t2804567747::get_offset_of_handle_4(),
	SendRecordAsyncResult_t2804567747::get_offset_of__message_5(),
	SendRecordAsyncResult_t2804567747::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (RSASslSignatureDeformatter_t3243368733), -1, sizeof(RSASslSignatureDeformatter_t3243368733_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[3] = 
{
	RSASslSignatureDeformatter_t3243368733::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t3243368733::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t3243368733_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (RSASslSignatureFormatter_t2048686253), -1, sizeof(RSASslSignatureFormatter_t2048686253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable994[3] = 
{
	RSASslSignatureFormatter_t2048686253::get_offset_of_key_0(),
	RSASslSignatureFormatter_t2048686253::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t2048686253_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (SecurityCompressionType_t2262477586)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable995[3] = 
{
	SecurityCompressionType_t2262477586::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (SecurityParameters_t3031907067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[3] = 
{
	SecurityParameters_t3031907067::get_offset_of_cipher_0(),
	SecurityParameters_t3031907067::get_offset_of_clientWriteMAC_1(),
	SecurityParameters_t3031907067::get_offset_of_serverWriteMAC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (SecurityProtocolType_t2351365639)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	SecurityProtocolType_t2351365639::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (ServerContext_t1175688556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (ValidationResult_t3528151005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[3] = 
{
	ValidationResult_t3528151005::get_offset_of_trusted_0(),
	ValidationResult_t3528151005::get_offset_of_user_denied_1(),
	ValidationResult_t3528151005::get_offset_of_error_code_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
