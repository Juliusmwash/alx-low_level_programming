#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to give change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};
	long i, k, n, l;

	l = argc;
	if (l < 2 || l > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (l == 2)
	{
		k = atoi(argv[1]);
		if (k > 0)
		{
		for (i = 0; i < 5; i++)
		{
			if (!(k % arr[i]))
			{
				n = k / arr[i];
				printf("%ld\n", n);
				break;
			}
		}
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	return (0);
}
