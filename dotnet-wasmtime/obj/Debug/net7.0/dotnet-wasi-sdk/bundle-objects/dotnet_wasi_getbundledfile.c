#include <string.h>

int mono_wasm_add_assembly(const char* name, const unsigned char* data, unsigned int size);

extern const unsigned char dotnet_wasmtime_dll_7240BF9B[];
extern const int dotnet_wasmtime_dll_7240BF9B_len;
extern const unsigned char System_Console_dll_B362F7C4[];
extern const int System_Console_dll_B362F7C4_len;
extern const unsigned char System_Memory_dll_F1A16A20[];
extern const int System_Memory_dll_F1A16A20_len;
extern const unsigned char System_Private_CoreLib_dll_194BF524[];
extern const int System_Private_CoreLib_dll_194BF524_len;
extern const unsigned char System_Private_Runtime_InteropServices_JavaScript_dll_78061A38[];
extern const int System_Private_Runtime_InteropServices_JavaScript_dll_78061A38_len;
extern const unsigned char System_Threading_dll_BDBF2DE2[];
extern const int System_Threading_dll_BDBF2DE2_len;
extern const unsigned char System_Collections_dll_9CC1EBAB[];
extern const int System_Collections_dll_9CC1EBAB_len;
extern const unsigned char System_Runtime_InteropServices_dll_33F41B27[];
extern const int System_Runtime_InteropServices_dll_33F41B27_len;
extern const unsigned char System_Runtime_dll_BE9AF637[];
extern const int System_Runtime_dll_BE9AF637_len;
extern const unsigned char System_Private_Uri_dll_CA0E9746[];
extern const int System_Private_Uri_dll_CA0E9746_len;

const unsigned char* dotnet_wasi_getbundledfile(const char* name, int* out_length) {
  return NULL;
}

void dotnet_wasi_registerbundledassemblies() {
  mono_wasm_add_assembly ("dotnet-wasmtime.dll", dotnet_wasmtime_dll_7240BF9B, dotnet_wasmtime_dll_7240BF9B_len);
  mono_wasm_add_assembly ("System.Console.dll", System_Console_dll_B362F7C4, System_Console_dll_B362F7C4_len);
  mono_wasm_add_assembly ("System.Memory.dll", System_Memory_dll_F1A16A20, System_Memory_dll_F1A16A20_len);
  mono_wasm_add_assembly ("System.Private.CoreLib.dll", System_Private_CoreLib_dll_194BF524, System_Private_CoreLib_dll_194BF524_len);
  mono_wasm_add_assembly ("System.Private.Runtime.InteropServices.JavaScript.dll", System_Private_Runtime_InteropServices_JavaScript_dll_78061A38, System_Private_Runtime_InteropServices_JavaScript_dll_78061A38_len);
  mono_wasm_add_assembly ("System.Threading.dll", System_Threading_dll_BDBF2DE2, System_Threading_dll_BDBF2DE2_len);
  mono_wasm_add_assembly ("System.Collections.dll", System_Collections_dll_9CC1EBAB, System_Collections_dll_9CC1EBAB_len);
  mono_wasm_add_assembly ("System.Runtime.InteropServices.dll", System_Runtime_InteropServices_dll_33F41B27, System_Runtime_InteropServices_dll_33F41B27_len);
  mono_wasm_add_assembly ("System.Runtime.dll", System_Runtime_dll_BE9AF637, System_Runtime_dll_BE9AF637_len);
  mono_wasm_add_assembly ("System.Private.Uri.dll", System_Private_Uri_dll_CA0E9746, System_Private_Uri_dll_CA0E9746_len);
}

