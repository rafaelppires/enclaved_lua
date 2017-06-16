#ifndef ENCLAVEDLUA_U_H__
#define ENCLAVEDLUA_U_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include <string.h>
#include "sgx_edger8r.h" /* for sgx_satus_t etc. */


#include <stdlib.h> /* for size_t */

#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif

void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_print, (const char* str));
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_outresult, (const char* e, size_t len));

sgx_status_t ecall_luainit(sgx_enclave_id_t eid);
sgx_status_t ecall_luaclose(sgx_enclave_id_t eid);
sgx_status_t ecall_execfunc(sgx_enclave_id_t eid, size_t* retval, const char* code, size_t csz, const char* data, size_t dsz, char* buff, size_t len);
sgx_status_t ecall_add_execution(sgx_enclave_id_t eid, const char* fname, const char* e, size_t len);
sgx_status_t ecall_execute(sgx_enclave_id_t eid, const char* fname, const char* e, size_t len);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
