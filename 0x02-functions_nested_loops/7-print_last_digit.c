#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number which its last digit is printed
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s < 0)
		s *= -1;
	_putchar(s + '0');
	return (s);
}
