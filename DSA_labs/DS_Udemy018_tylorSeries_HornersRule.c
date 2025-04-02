#include <stdlib.h>
#include <stdio.h>
// Taylor Series using Horner's rule.

double e(int x, int n)
{
    static double s = 1;
    if(n == 0)
        return s;
    s = 1 + x * s/ n ;
    //s = 1 + x / n * s;
    return e(x, n - 1);
}

double e_2(int x, int n)
{
    double s = 1;
    for(; n > 0; n--)
    s = 1 + x * s/ n ;
    return s;
}

double e_iterative(int x, int n)
{
    double s=1, num = 1, den = 1;
    for(int i = 1; i <= n; i++)
     {
         num *= x;
         den *= i;
         s += num / den;
        }
    return s;
}

int main()
{
    printf("%lf \n", e(2, 10));
    printf("%lf \n", e_iterative(2, 10));
    printf("%lf \n", e_2(2, 10));
    
    return 0;
}
