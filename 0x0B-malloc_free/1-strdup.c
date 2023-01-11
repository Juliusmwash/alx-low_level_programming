#include "main.h"

/**
 * _strdup - returns a copy of the string given as a parameter
 * @str: string passed as a parameter
 *
 * Return: Pointer to a copy of str
 */
char *_strdup(char *str)
{
	char *s;
	int i, k;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
		i++;
	s = (char *)malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		*(s + k) = *(str + k);
	return (s);
}
