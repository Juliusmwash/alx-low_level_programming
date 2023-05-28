#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "julius";
	char *str2 = "lwass";

	int check = strcmp(str, str2);
	printf("check: %d\n", check);
	return (0);
}
