#include <unistd.h>

void print(char c)
{
	char arr [8] = {"_putchar"};
	for (int i = 0; i < 8; i++)
	{
		write(1, &arr[i], 1);
	}
	write(1, &c, 1);
}
