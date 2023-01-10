#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * check_for_num - check whether a given argument is a pure number
 * @c: pointer to the given argument
 * Return: 0 (Success) 1 (Error)
 */

int check_for_num(char *c)
{
	int i, t;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (isdigit(*(c + i)))
		{
			t = 0;
		}
		else
		{
			t = 1;
			break;
		}
		i++;
	}
	return (t);
}

/**
 * main - prints sum of numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return : 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc > 1)
	{
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		j = check_for_num(argv[i]);
		if (j == 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}