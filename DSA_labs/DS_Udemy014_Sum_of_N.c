// This is how to find the sum of N natural numbers in 3 different ways.

#include <stdlib.h>
#include <stdio.h>

int recSum(int n)
{
    if (n == 0)
        return 0;
    else
        return recSum(n - 1) + n;
}

int loopSum(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i++)
        sum += i;
    return sum;
}

int N_Sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int x = 5;

    printf("This is Sum with recursion: %d \n", recSum(x));
    printf("This is Sum with Loop: %d \n", loopSum(x));
    printf("This is sum casually: %d \n", N_Sum(x));

}

// Note: the output of all functions = 15, when the input = 5.
