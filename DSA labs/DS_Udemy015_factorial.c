#include <stdio.h>
#include <stdlib.h>

// Function to compute factorial, including for negative numbers
double factorial(int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return factorial(n - 1) * n;
    else
    {
        // Using the formula: (-n)! = (-1)^n / (n!)
        return (n % 2 == 0 ? 1 : -1) * (1.0 / factorial(-n));
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    float result = factorial(x);
    printf("Factorial of %d is: %.3lf\n", x, result);

    return 0;
}
