#include <stdio.h>
#include <math.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main() {
    int a;
    long double b = 2;
    long double n = 612852475143;
    long int e = 2;
    long int f;
    int g;

    while (e > 0)
    {
        if (remainder(n,b) == 0 && e != 1)
        {
            n = n / b;
            e = n;
            g = b;
        }
        else
        {
            b += 1;
        }
        if (e == 1)
        {
            f = b;
            printf("%lu", f);
            break;
        }
    }
    return (0);
}
