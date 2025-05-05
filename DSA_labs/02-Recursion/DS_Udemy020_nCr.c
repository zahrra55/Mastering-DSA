// This is nCr program using recursion

#include<stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

// The nCr Formula is n!/(r!(n-r)!)
int iterative_nCr(int n, int r)
{
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n - r);
    return t1 / (t2 * t3);
}

int recursive_nCr(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return recursive_nCr(n - 1, r - 1) + recursive_nCr(n - 1, r);
}

int main()
{
    int n, r;
    char choice;
    do
    {
        printf("Enter n and r: ");
        scanf("%d %d", &n, &r);
        printf("iterative nCr of %d and %d is: %d\n\n", n, r, iterative_nCr(n, r));
        printf("recursive nCr of %d and %d is: %d\n\n", n, r, recursive_nCr(n, r));
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}