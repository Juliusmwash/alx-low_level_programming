#include "main.h"
/**
 * _strncat - returns concatenated string
 * @dest: first string
 * @src: second string
 * @n: size in bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src,int n)
{
	int a = 0;
	int b = 0;
	int h = 0;
	int l = 0;

	while (a >= 0)
	{
		if (*(dest + a) != '\0')
		{
			a++;
		}
		else
			break;
	}
	n = n*8;
	while (b >= 0)
	{
		if (*(src+b)!='\0')
		b++;
		else
		{
			b++;
			break;
		}
	}
	if (b<n)
	{
		while (a<=n-2)
		{
			if (*(src+l)!='\0')
			{
				*(dest+a)=*(src+l);
				a++;
				l++;
			}
			else
			break;
			}
		}
	else
	{
		while(a<=n-1)
		{
			if (*(src+l)!='\0')
			{
	        		*(dest+a)=*(src+l);
	        		a++;
	        		l++;
	        	}
	        	else
			{
	            		break;
	        	}
		}
	}
	return (dest);
}
