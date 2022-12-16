#include <stdio.h>
#include <math.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main() {
    int a;
    double b = 2;
    double n = 200;
    int e = 2;
    int f;
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
            printf("%d", f);
            break;
        }
    }
    return (0);
}
