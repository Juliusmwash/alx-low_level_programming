#include <ctype>

/**	
 * _islower - checks whether a letter is a lower case
 * letter or not
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}

