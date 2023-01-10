#include <stdio.h>
#include "main.h"
/**
 * print_name - prints the new name of the program
 * @s: first argument
 */

void print_name(char *s)
{
	printf("%s\n", s);
}
int main(int argc, char *argv[])
{
	print_name(argv[0]);
	return (0);
}
