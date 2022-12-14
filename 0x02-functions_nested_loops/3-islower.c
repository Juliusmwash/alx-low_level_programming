#include "main.h"
/**	
 * _islower - checks whether a letter is a lower case or not
 * @c:letter for test
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

