#include <stdio.h>
#include <stdlib.h>

// Function to compute factorial, including for negative numbers
int exponent(int m, int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return exponent(m, n - 1) * m;
}

int exponent_fast(int m, int n)
{

    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return exponent_fast(m * m, n / 2);
    else
        return m * exponent_fast(m * m, (n - 1) / 2);
}
int main()
{
    int x,y;
    while(1){
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a power: ");
    scanf("%d", &y);
    printf("%d^%d is: %d\n", x, y, exponent(x,y));
    printf("%d^%d (fast) is: %d\n\n", x, y, exponent_fast(x,y));
    }


    return 0;
}
