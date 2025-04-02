// Fibonacci

#include <stdio.h>

int iterative_fib(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if(n <= 1)
        return n;
    for(int i = 2; i <= n; i++)
    {
     s = t0 + t1;
     t0 = t1;
     t1 = s;
    }
    return s;
}

// Iterative but with O(2^n) !!
int recursive_fib(int n)
{
    if(n <= 1)
        return n;
    return recursive_fib(n - 2) + recursive_fib(n - 1);
}

// Using memorization to solve the excessive recursion
int F[10];

int memorization_fib(int n)
{
    if(n <= 1)
    {
     F[n] = n;
        return n;
     }
 else
    {
     if(F[n - 2] == -1)
        F[n - 2] = memorization_fib(n - 2);
     if(F[n - 1] == -1)
        F[n - 1] = memorization_fib(n - 1);
     F[n] = F[n - 2] + F[n - 1];
     return F[n - 2] + F[n - 1];
    }
}

int main()
{
    int n = 5;

    for(int i = 0; i < 10; i++)
    F[i] = -1;

    printf("Iterative Fibonacci = %d \n", iterative_fib(n));
    printf("recursive Fibonacci = %d \n", recursive_fib(n));
    printf("memorization Fibonacci = %d \n", memorization_fib(n));

    return 0;
}
