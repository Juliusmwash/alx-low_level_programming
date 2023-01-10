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
	int coin[] = {25, 10, 5, 2, 1};
	int i, k, n;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (argc == 2)
	{
		if (k > 0)
		{
		n = 0;
		while (k != 0)
		{
		for (i = 0; i < 5; i++)
		{
		if (k >= coin[i])
		{
		k = k - coin[i];
		n += 1;
		break;
		}
		}
		}
		printf("%d\n", n);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	return (0);
}
