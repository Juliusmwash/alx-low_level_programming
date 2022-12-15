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
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0 && a != 100)
			printf("Buzz ");
		else if (a % 5 == 0 && a == 100)
			printf("Buzz");
		else
			printf("%d ");
		a++;
	}
	return (0);
}
