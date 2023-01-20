/*
 * File: 0-print_name.c
 * Auth: Julius Mwangi
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
