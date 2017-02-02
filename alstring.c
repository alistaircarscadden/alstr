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
#include <stdio.h>

void *almemchr(const void *str, int c, size_t n) {
    char* ptr = str;
    while(ptr - (char*)str < n) {
        if(*ptr == c)
            return ptr;
        ptr++;
    }
    return NULL;
}

int almemcmp(const void *str1, const void *str2, size_t n) {
    /* incompleto */
    return 0;
}

void *almemcpy(void *dest, const void *src, size_t n) {
    /* incompleto */
    return 0;
}

void *almemmove(void *dest, const void *src, size_t n) {
    /* incompleto */
    return 0;
}

void *almemset(void *str, int c, size_t n) {
    /* incompleto */
    return 0;
}

char *alstrcat(char *dest, const char *src) {
    /* incompleto */
    return 0;
}

char *alstrncat(char *dest, const char *src, size_t n) {
    /* incompleto */
    return 0;
}

char *alstrchr(const char *str, int c) {
    /* incompleto */
    return 0;
}

int alstrcmp(const char *str1, const char *str2) {
    /* incompleto */
    return 0;
}

int alstrncmp(const char *str1, const char *str2, size_t n) {
    /* incompleto */
    return 0;
}

int alstrcoll(const char *str1, const char *str2) {
    /* incompleto */
    return 0;
}

char *alstrcpy(char *dest, const char *src) {
    /* incompleto */
    return 0;
}

char *alstrncpy(char *dest, const char *src, size_t n) {
    /* incompleto */
    return 0;
}

size_t alstrcspn(const char *str1, const char *str2) {
    /* incompleto */
    return 0;
}

char *alstrerror(int errnum) {
    /* incompleto */
    return 0;
}

size_t alstrlen(const char *str) {
    /* incompleto */
    return 0;
}

char *alstrpbrk(const char *str1, const char *str2) {
    /* incompleto */
    return 0;
}

char *alstrrchr(const char *str, int c) {
    /* incompleto */
    return 0;
}

size_t alstrspn(const char *str1, const char *str2) {
    /* incompleto */
    return 0;
}

char *alstrstr(const char *haystack, const char *needle) {
    /* incompleto */
    return 0;
}

char *alstrtok(char *str, const char *delim) {
    /* incompleto */
    return 0;
}

size_t alstrxfrm(char *dest, const char *src, size_t n) {
    /* incompleto */
    return 0;
}