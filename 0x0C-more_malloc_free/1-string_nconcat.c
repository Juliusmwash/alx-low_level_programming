#include "main.h"

/**
 * len1 - function to get length of s1
 * @s1: string
 *
 * Return: length of s1
 */

unsigned int len1(char *s1)
{
	unsigned int i, lens1;

	i = 0;
	lens1 = 0;
	while (s1[i] != '\0')
	{
		lens1 += 1;
		i++;
	}
	return (lens1);
}

/**
 * len2 - function to get length of s2
 * @s2: string
 *
 * Return: length of s2
 */

unsigned int len2(char *s2)
{
	unsigned int i, lens2;

	i = 0;
	lens2 = 0;
	while (s2[i] != '\0')
	{
		lens2 += 1;
		i++;
	}
	return (lens2);
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

	lens1 = len1(s1);
	lens2 = len2(s2);
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
	s[j] = '\0';
	return (s);
}
