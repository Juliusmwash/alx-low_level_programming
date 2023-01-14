#include "main.h"

/**
 * len- function to get length of string
 * @s: string
 *
 * Return: length of string
 */

unsigned int len(char *s)
{
	unsigned int i, length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates string s1 with n bytes of string s2
 * @s1: first string
 * @s2: second string
 * @n: bytes of stringbs2 to copy
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1, lens2, count;
	char *s;

	lens1 = len(s1);
	lens2 = len(s2);
	if (n >= lens2)
		count = lens1 + lens2;
	else
		count = lens1 + n;
	s = malloc(sizeof(char) * count + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < lens1)
	{
		*(s + j) = *(s1 + j);
		j++;
	}
	if (n >= lens2)
		while (i < lens2)
		{
			s[j] = s2[i];
			j++;
			i++;
		}
	else
		while (i < n)
		{
			s[j] = s2[i];
			j++;
			i++;
		}
	[j] = '\0';
	return (s);
}
