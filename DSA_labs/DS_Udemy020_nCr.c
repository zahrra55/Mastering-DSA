// This is nCr program using recursion
// The nCr Formula is n!/(r!(n-r)!)
#include<stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

int iterative_C(int n, int r)
{
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n - r);
    return t1 / (t2 * t3);
}

int main()
{
    int n, r;
    while (1)
    {
        printf("Enter n and r: ");
        scanf("%d %d", &n, &r);
        printf("nCr of %d and %d is: %d\n\n", n, r, iterative_C(n, r));
    }
    return 0;
}