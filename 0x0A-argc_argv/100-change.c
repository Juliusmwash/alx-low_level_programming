#include <stdio.h>
#include <stdlib.h>

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
	long long i, k, n;

	k = atoi(argv[1]);
	printf("%s\n", argv[argc]);
	if(argc == 2)
	{
		if (k > 0)
		{
		for (i = 0; i < 5; i++)
		{
			if (!(k % arr[i]))
			{
				n = k / arr[i];
				printf("%lld\n", n);
				break;
			}
		}
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
