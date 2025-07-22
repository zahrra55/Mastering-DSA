// These are recursion types

#include <stdlib.h>
#include <stdio.h>

void indirect_B(int n);

// 1. Tail Recursion: When the call happens at the last statement of the function.
void TailRecursion(int n)
{
    if(n > 0)
    {
        printf("%d", n);
        TailRecursion(n - 1); // Nothing comes after it.
    }
}

// 2. Head Recursion: When the call happens at the First statement of the function.
void HeadRecursion(int n)
{
    if(n > 0)
    {
        HeadRecursion(n - 1); // Nothing comes before it.
        printf("%d", n);
    }
}

// 3. tree Recursion: A recursive function that calls itself more than once.
void treeRecursion(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

// 4. Indirect Recursion is when two or more functions (or methods) call each other in a cycle (Sequence)
void indirect_A(int n)
{
    if(n > 0)
    {
        printf("%d", n);
        indirect_B(n - 1);
    }
}

void indirect_B(int n)
{
    if(n > 1)
    {
        printf("%d", n);
        indirect_A(n / 2);
    }
}

// Nested Recursion is when a function calls itself with a recursive call as an argument.
int NestedRecursion(int n)
{
    if (n > 100)
        return n - 10;
    else
        return NestedRecursion(NestedRecursion(n + 11));
}
int main()
{
    int x = 3;

    printf("This is Tail recursion: "); TailRecursion(x); printf("\n");
    printf("This is Head recursion: "); HeadRecursion(x); printf("\n");
    printf("This is Tree recursion: "); treeRecursion(x); printf("\n");
    printf("This is indirect recursion: "); indirect_A(20); printf("\n");
    printf("This is Nested recursion: %d \n", NestedRecursion(95));

}

/*
Output:

This is Tail recursion: 321
This is Head recursion: 123
This is Tree recursion: 3211211
This is indirect recursion: 201998431
This is Nested recursion: 91

*/
