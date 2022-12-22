#include "main.h"
/**
 * _strncat - returns concatenated string
 * @dest: first string
 * @src: second string
 * @n: size in bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src,int n)
{
	int a = 0;
	int b = 0;

	while (a >= 0)
	{
		if (*(dest + a) != '\0')
		{
			a++;
		}
		else
			break;
	}
	while (b >= 0)
	{
		n = n*8;
		if (b <= n)
		{
		*(dest + a) = *(src + b);
		b++;
		a++;
		}
		else
			break;
	}
	return (dest);
}
