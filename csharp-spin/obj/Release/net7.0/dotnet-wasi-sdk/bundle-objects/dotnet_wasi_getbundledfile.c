#include <string.h>

int mono_wasm_add_assembly(const char* name, const unsigned char* data, unsigned int size);

extern const unsigned char CsharpSpin_dll_380F3EE3[];
extern const int CsharpSpin_dll_380F3EE3_len;
extern const unsigned char System_Collections_dll_9CC1EBAB[];
extern const int System_Collections_dll_9CC1EBAB_len;
extern const unsigned char System_Private_CoreLib_dll_194BF524[];
extern const int System_Private_CoreLib_dll_194BF524_len;
extern const unsigned char System_Net_Primitives_dll_AD99662B[];
extern const int System_Net_Primitives_dll_AD99662B_len;
extern const unsigned char Microsoft_Win32_Primitives_dll_160942BA[];
extern const int Microsoft_Win32_Primitives_dll_160942BA_len;
extern const unsigned char System_Collections_NonGeneric_dll_0C77A572[];
extern const int System_Collections_NonGeneric_dll_0C77A572_len;
extern const unsigned char System_Threading_dll_BDBF2DE2[];
extern const int System_Threading_dll_BDBF2DE2_len;
extern const unsigned char System_Runtime_dll_BE9AF637[];
extern const int System_Runtime_dll_BE9AF637_len;
extern const unsigned char System_Private_Uri_dll_CA0E9746[];
extern const int System_Private_Uri_dll_CA0E9746_len;
extern const unsigned char System_Diagnostics_Tracing_dll_D231514D[];
extern const int System_Diagnostics_Tracing_dll_D231514D_len;
extern const unsigned char System_Memory_dll_F1A16A20[];
extern const int System_Memory_dll_F1A16A20_len;
extern const unsigned char System_Runtime_InteropServices_dll_33F41B27[];
extern const int System_Runtime_InteropServices_dll_33F41B27_len;
extern const unsigned char Fermyon_Spin_Sdk_dll_07722D5F[];
extern const int Fermyon_Spin_Sdk_dll_07722D5F_len;
extern const unsigned char System_Net_Http_dll_E23CB5D0[];
extern const int System_Net_Http_dll_E23CB5D0_len;
extern const unsigned char System_Private_Runtime_InteropServices_JavaScript_dll_78061A38[];
extern const int System_Private_Runtime_InteropServices_JavaScript_dll_78061A38_len;
extern const unsigned char System_Net_Security_dll_8A9E56A9[];
extern const int System_Net_Security_dll_8A9E56A9_len;
extern const unsigned char System_Security_Cryptography_dll_056A9DDF[];
extern const int System_Security_Cryptography_dll_056A9DDF_len;
extern const unsigned char System_Text_Encoding_Extensions_dll_21C76358[];
extern const int System_Text_Encoding_Extensions_dll_21C76358_len;
extern const unsigned char System_Collections_Concurrent_dll_E7B2FA43[];
extern const int System_Collections_Concurrent_dll_E7B2FA43_len;
extern const unsigned char System_Runtime_Numerics_dll_E2E3A453[];
extern const int System_Runtime_Numerics_dll_E2E3A453_len;
extern const unsigned char System_Formats_Asn1_dll_C0F141B9[];
extern const int System_Formats_Asn1_dll_C0F141B9_len;
extern const unsigned char System_Diagnostics_DiagnosticSource_dll_7BFFE36A[];
extern const int System_Diagnostics_DiagnosticSource_dll_7BFFE36A_len;
extern const unsigned char System_Threading_Thread_dll_5126CF3A[];
extern const int System_Threading_Thread_dll_5126CF3A_len;
extern const unsigned char System_Collections_Immutable_dll_F0C99866[];
extern const int System_Collections_Immutable_dll_F0C99866_len;
extern const unsigned char System_Linq_dll_37E6F7AC[];
extern const int System_Linq_dll_37E6F7AC_len;
extern const unsigned char System_Numerics_Vectors_dll_9A1074D0[];
extern const int System_Numerics_Vectors_dll_9A1074D0_len;

const unsigned char* dotnet_wasi_getbundledfile(const char* name, int* out_length) {
  return NULL;
}

void dotnet_wasi_registerbundledassemblies() {
  mono_wasm_add_assembly ("CsharpSpin.dll", CsharpSpin_dll_380F3EE3, CsharpSpin_dll_380F3EE3_len);
  mono_wasm_add_assembly ("System.Collections.dll", System_Collections_dll_9CC1EBAB, System_Collections_dll_9CC1EBAB_len);
  mono_wasm_add_assembly ("System.Private.CoreLib.dll", System_Private_CoreLib_dll_194BF524, System_Private_CoreLib_dll_194BF524_len);
  mono_wasm_add_assembly ("System.Net.Primitives.dll", System_Net_Primitives_dll_AD99662B, System_Net_Primitives_dll_AD99662B_len);
  mono_wasm_add_assembly ("Microsoft.Win32.Primitives.dll", Microsoft_Win32_Primitives_dll_160942BA, Microsoft_Win32_Primitives_dll_160942BA_len);
  mono_wasm_add_assembly ("System.Collections.NonGeneric.dll", System_Collections_NonGeneric_dll_0C77A572, System_Collections_NonGeneric_dll_0C77A572_len);
  mono_wasm_add_assembly ("System.Threading.dll", System_Threading_dll_BDBF2DE2, System_Threading_dll_BDBF2DE2_len);
  mono_wasm_add_assembly ("System.Runtime.dll", System_Runtime_dll_BE9AF637, System_Runtime_dll_BE9AF637_len);
  mono_wasm_add_assembly ("System.Private.Uri.dll", System_Private_Uri_dll_CA0E9746, System_Private_Uri_dll_CA0E9746_len);
  mono_wasm_add_assembly ("System.Diagnostics.Tracing.dll", System_Diagnostics_Tracing_dll_D231514D, System_Diagnostics_Tracing_dll_D231514D_len);
  mono_wasm_add_assembly ("System.Memory.dll", System_Memory_dll_F1A16A20, System_Memory_dll_F1A16A20_len);
  mono_wasm_add_assembly ("System.Runtime.InteropServices.dll", System_Runtime_InteropServices_dll_33F41B27, System_Runtime_InteropServices_dll_33F41B27_len);
  mono_wasm_add_assembly ("Fermyon.Spin.Sdk.dll", Fermyon_Spin_Sdk_dll_07722D5F, Fermyon_Spin_Sdk_dll_07722D5F_len);
  mono_wasm_add_assembly ("System.Net.Http.dll", System_Net_Http_dll_E23CB5D0, System_Net_Http_dll_E23CB5D0_len);
  mono_wasm_add_assembly ("System.Private.Runtime.InteropServices.JavaScript.dll", System_Private_Runtime_InteropServices_JavaScript_dll_78061A38, System_Private_Runtime_InteropServices_JavaScript_dll_78061A38_len);
  mono_wasm_add_assembly ("System.Net.Security.dll", System_Net_Security_dll_8A9E56A9, System_Net_Security_dll_8A9E56A9_len);
  mono_wasm_add_assembly ("System.Security.Cryptography.dll", System_Security_Cryptography_dll_056A9DDF, System_Security_Cryptography_dll_056A9DDF_len);
  mono_wasm_add_assembly ("System.Text.Encoding.Extensions.dll", System_Text_Encoding_Extensions_dll_21C76358, System_Text_Encoding_Extensions_dll_21C76358_len);
  mono_wasm_add_assembly ("System.Collections.Concurrent.dll", System_Collections_Concurrent_dll_E7B2FA43, System_Collections_Concurrent_dll_E7B2FA43_len);
  mono_wasm_add_assembly ("System.Runtime.Numerics.dll", System_Runtime_Numerics_dll_E2E3A453, System_Runtime_Numerics_dll_E2E3A453_len);
  mono_wasm_add_assembly ("System.Formats.Asn1.dll", System_Formats_Asn1_dll_C0F141B9, System_Formats_Asn1_dll_C0F141B9_len);
  mono_wasm_add_assembly ("System.Diagnostics.DiagnosticSource.dll", System_Diagnostics_DiagnosticSource_dll_7BFFE36A, System_Diagnostics_DiagnosticSource_dll_7BFFE36A_len);
  mono_wasm_add_assembly ("System.Threading.Thread.dll", System_Threading_Thread_dll_5126CF3A, System_Threading_Thread_dll_5126CF3A_len);
  mono_wasm_add_assembly ("System.Collections.Immutable.dll", System_Collections_Immutable_dll_F0C99866, System_Collections_Immutable_dll_F0C99866_len);
  mono_wasm_add_assembly ("System.Linq.dll", System_Linq_dll_37E6F7AC, System_Linq_dll_37E6F7AC_len);
  mono_wasm_add_assembly ("System.Numerics.Vectors.dll", System_Numerics_Vectors_dll_9A1074D0, System_Numerics_Vectors_dll_9A1074D0_len);
}

