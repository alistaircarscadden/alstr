#ifndef ALSTRING
#define ALSTRING

void *almemchr(const void *str, int c, size_t n);
int almemcmp(const void *str1, const void *str2, size_t n);
void *almemcpy(void *dest, const void *src, size_t n);
void *almemmove(void *dest, const void *src, size_t n);
void *almemset(void *str, int c, size_t n);
char *alstrcat(char *dest, const char *src);
char *alstrncat(char *dest, const char *src, size_t n);
char *alstrchr(const char *str, int c);
int alstrcmp(const char *str1, const char *str2);
int alstrncmp(const char *str1, const char *str2, size_t n);
int alstrcoll(const char *str1, const char *str2);
char *alstrcpy(char *dest, const char *src);
char *alstrncpy(char *dest, const char *src, size_t n);
size_t alstrcspn(const char *str1, const char *str2);
char *alstrerror(int errnum);
size_t alstrlen(const char *str);
char *alstrpbrk(const char *str1, const char *str2);
char *alstrrchr(const char *str, int c);
size_t alstrspn(const char *str1, const char *str2);
char *alstrstr(const char *haystack, const char *needle);
char *alstrtok(char *str, const char *delim);
size_t alstrxfrm(char *dest, const char *src, size_t n);

#endif