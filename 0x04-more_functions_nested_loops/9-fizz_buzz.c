#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	while (a <= 100)
	{
		if (a < 100)
		{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ");
		}
		else
		{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d");
		}
		a++;
	}
	printf("\n");
	return (0);
}
