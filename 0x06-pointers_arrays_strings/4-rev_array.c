#include "main.h"
/**
 * reverse_array - reverses array
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int b, c, d;
	int arr[1];

	b = n / 2;
	n = n - 1;
	c = 0;
	for (c = 0; c < b; c++)
	{
		arr[0] = *(a + c);
		*(a + c) = *(a + n);
		*(a + n) = arr[0];
		c++;
		n--;
	}
}

