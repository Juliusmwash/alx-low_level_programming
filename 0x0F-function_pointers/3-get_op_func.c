#include "calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - pointer returning a pointer to function
 * @s: string for passing operator to the program
 *
 * Return: pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
	if (strcmp(ops[i].op,s) == 0)
		return (ops[i].f);
	i++;
	}
	printf("Error\n");
	return (NULL);
}
