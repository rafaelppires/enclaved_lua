#ifndef _FILE_MOCK_H_DEFINED_
#define _FILE_MOCK_H_DEFINED_

#ifdef __cplusplus
extern "C" {
#endif

void file_mock( const char *buff, size_t len, const char *fname );
FILE* fmock_open( const char *fname );
int fmock_feof(FILE *f);
int fmock_getc(FILE *f);
size_t fmock_fread(void *ptr, size_t size, size_t nmemb, FILE *f);
int fmock_close(FILE *f);

#ifdef __cplusplus
}
#endif

#endif

