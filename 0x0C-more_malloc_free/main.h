#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
unsigned int len1(char *s1);
unsigned int len2(char *s2);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
char *_memset(char *s, char b, unsigned int n);

#endif
