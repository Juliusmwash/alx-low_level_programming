#include <unistd.h>
/**
 * _putchar - writes the character c to stdout 
 * @c: The character to print
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
