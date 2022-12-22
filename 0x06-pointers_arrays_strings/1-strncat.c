#include "main.h"
/**
 * _strcat - returns concatenated string
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
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
		if (*(src + b) != '\0')
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
