#include "main.h"
/**
 * print_numbers - prints numbers form 1 to 9
 * 
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar(10);
}
