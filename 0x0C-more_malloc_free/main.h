#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int len1(char *s1);
unsigned int len2(char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_memset(char *s, char b, unsigned int n);

#endif
