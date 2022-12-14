#include <ctype>

/**	
 * _isalpha - checks whether a letter is a lower case or 
 * not
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	char a;

	if (islower(a) > 0)
		return (1);
	else
		return (0);
}

