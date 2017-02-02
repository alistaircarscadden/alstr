/**
  * alstring.c
  * Al's string.h rewrite
  *
  * Start: February 1, 2017 8:46 PM
  * End:
  *
  * Purpose:
  *    to create a less efficient string library
  *    with my young adept mind
  */

#include <stdlib.h>

void* almemchr(const void* str, int c, size_t n) {
    char* ptr = str;
    while(ptr - (char*)str < n) {
        if(*ptr == c)
            return ptr;
        ptr++;
    }
    return NULL;
}

int almemcmp(const void* str1, const void* str2, size_t n) {
    /* incompleto */
    return 0;
}

void* almemcpy(void* dest, const void* src, size_t n) {
    /* incompleto */
    return 0;
}

void* almemmove(void* dest, const void* src, size_t n) {
    /* incompleto */
    return 0;
}

void* almemset(void* str, int c, size_t n) {
    /* incompleto */
    return 0;
}

char* alstrcat(char* dest, const char* src) {
    size_t destlen = strlen(dest);
    char* ptr = src;
    
    while(*ptr != '\0')
        dest[destlen + ptr - src] = *ptr++;
    
    return dest;
}

char* alstrncat(char* dest, const char* src, size_t n) {
    size_t destlen = strlen(dest);
    char* ptr = src;
    
    while(*ptr != '\0' && ptr - src < n)
        dest[destlen + ptr - src] = *ptr++;
    
    return dest;
}

char* alstrchr(const char* str, int c) {
    char* ptr = str;
    
    while(*ptr != '\0') {
        if(*ptr == c)
            return ptr;
        ptr++;
    }
    
    return NULL;
}

int alstrcmp(const char* str1, const char* str2) {
    /* incompleto */
    return 0;
}

int alstrncmp(const char* str1, const char* str2, size_t n) {
    /* incompleto */
    return 0;
}

int alstrcoll(const char* str1, const char* str2) {
    /* incompleto */
    return 0;
}

char* alstrcpy(char* dest, const char* src) {
    char* ptr = src;
    
    while(*ptr != '\0')
        dest[ptr - src] = *ptr++;
    
    return dest;
}

char* alstrncpy(char* dest, const char* src, size_t n) {
    char* ptr = src;
    
    while(*ptr != '\0' && ptr - src < n)
        dest[ptr - src] = *ptr++;
    
    return dest;
    return 0;
}

size_t alstrcspn(const char* str1, const char* str2) {
    /* incompleto */
    return 0;
}

char* alstrerror(int errnum) {
    /* incompleto */
    return 0;
}

size_t alstrlen(const char* str) {
    char* ptr = str;
    int len = 0;
    
    while(*ptr++ != '\0')
        len++;
    
    return len;
}

char* alstrpbrk(const char* str1, const char* str2) {
    /* incompleto */
    return 0;
}

char* alstrrchr(const char* str, int c) {
    char* ptr = str;
    char* last = NULL;
    
    while(*ptr != '\0') {
        if(*ptr == c)
            last = ptr;
        ptr++;
    }
    
    return last;
}

size_t alstrspn(const char* str1, const char* str2) {
    /* incompleto */
    return 0;
}

char* alstrstr(const char* haystack, const char* needle) {
    size_t haystacklen = alstrlen(haystack);
    size_t needlen = alstrlen(needle);
    
    char* haystackptr = haystack;
    
    while(*haystackptr != '\0' && haystackptr - haystack < haystacklen - needlen) {
        char* needleptr = haystackptr;
        
        while(*needleptr == needle[needleptr - haystackptr] && needleptr < haystack + haystacklen) {
            if(needleptr - haystackptr == needlen - 1)
                return haystackptr;
            
            needleptr++;
        }
        
        haystackptr++;
    }

    return NULL;
}

char* alstrtok(char* str, const char* delim) {
    /* incompleto */
    return 0;
}

size_t alstrxfrm(char* dest, const char* src, size_t n) {
    /* incompleto */
    return 0;
}