#include "function_pointers.h"

/**
 * print_name - prints the name passed as an argument
 * @name: name to print
 * @f: pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
