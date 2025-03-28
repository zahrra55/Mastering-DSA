#include <stdio.h>
#include <stdlib.h>

// Function to compute factorial (for positive numbers)

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

int main()
{
    int x;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        printf("Factorial of %d is: %d\n\n", x, factorial(x));

    }

    return 0;
}
