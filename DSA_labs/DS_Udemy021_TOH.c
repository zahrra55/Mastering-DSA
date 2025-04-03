// This is Tower of Hanoi using recursion
// This is a classic problem in recursion.

#include<stdio.h>

int TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("(%d, %d) \n", A, C);
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    TOH(n, 1, 2, 3);
    return 0;
}