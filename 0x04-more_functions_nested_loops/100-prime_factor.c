#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    int a;
    double b = 2;
    double n = 200;
    int e = 2;
    int f;
    int g;
    printf("Enter a number : ");
    scanf("%lf",&n);
    printf("Prime factors of %0.0lf are :\n",n);
    while (e > 0)
    {
        if (remainder(n,b) == 0 && e != 1)
        {
            n = n/b;
            e = n;
            g = b;
            printf("%d ",g);
        }
        else
        {
            b+=1;
        }
        if (e == 1)
        {
            f = b;
            printf("\nThe greatest factor is : %d",f);
            break;
        }
    }
    return 0;
