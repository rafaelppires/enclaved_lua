#ifndef ENCLAVEDLUA_T_H__
#define ENCLAVEDLUA_T_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include "sgx_edger8r.h" /* for sgx_ocall etc. */


#include <stdlib.h> /* for size_t */

#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif


void ecall_luainit();
void ecall_luaclose();
size_t ecall_execfunc(const char* code, size_t csz, const char* data, size_t dsz, char* buff, size_t len);
void ecall_add_execution(const char* fname, const char* e, size_t len);
void ecall_execute(const char* fname, const char* e, size_t len);

sgx_status_t SGX_CDECL ocall_print(const char* str);
sgx_status_t SGX_CDECL ocall_outresult(const char* e, size_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
