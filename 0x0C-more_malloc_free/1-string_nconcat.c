#include "main.h"

/**
 * string_nconcat - concatenates string s1 with n bytes of string s2
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, lens1, lens2, count;
	char *s;

	i = 0;
	lens1 = 0;
	lens2 = 0;
	while (*(s1 + i) != '\0')
	{
		lens1 += 1;
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		lens2 += 1;
		i++;
	}
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
	{
		while (i < lens2)
		{
			s[j] = s2[i];
			j++;
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			s[j] = s2[i];
			j++;
			i++;
		}
	}
	s[j] = '\0';
	return (s);
}
