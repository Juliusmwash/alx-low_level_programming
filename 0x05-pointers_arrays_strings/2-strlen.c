#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;
	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}

