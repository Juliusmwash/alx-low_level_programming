#include <stdio.h>
#include <stdlib.h>

/**
 * power - finds the power of a number
 * @a: first number
 * @b: second number
 * Return: power of a
 */

unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i, pw;

	i = 0;
	pw = 1;
	while (i < b)
	{
		pw *= a;
		i++;
	}
	return (pw);
}

/**
 * _strlen - finds the length of a string
 * @s: string to find length
 * Return: length of the string
 */

unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - converts binary to decimal number
 * @b: binary string
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum;

	if (b == NULL)
		return (0);
	i = _strlen(b) - 1;
	j = 0;
	sum = 0;
	while (b[j] != '\0')
	{
		if (b[j] == '1' || b[j] == '0')
		{
			if (b[j] == '1')
				sum += power(2, i);
		}
		else
			return (0);
		i--;
		j++;
	}
	return (sum);
}
