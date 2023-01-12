#include <stdlib.h>
#include "main.h"

/**
 * str_concat - return pointer to concatenated string
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{

	char *s;
	int i, j, k, l;

	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	j++;
	k = i + j;
	s = (char *)malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s[i] = "";
	}
	else
	{
	for (l = 0; l < i; l++)
	{
		s[l] = s1[l];
	}
	}
	if (s2 == NULL)
		s[l] = "";
	else
	{
	j = 0;
	for (l = i; l < k - 1; l++)
	{
		s[l] = s2[j];
		j++;
	}
	s[k - 1] = '\0';
	}
	return (s);
}
