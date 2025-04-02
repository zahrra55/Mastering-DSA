// These are recursion types

#include <stdlib.h>
#include <stdio.h>

void indirect_B(int n);

void TailRec(int n)
{
    if(n > 0)
    {
        printf("%d", n);
        TailRec(n - 1);
    }
}

void HeadRec(int n)
{
    if(n > 0)
    {
        HeadRec(n - 1);
        printf("%d", n);
    }
}
void treeRec(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        treeRec(n - 1);
        treeRec(n - 1);
    }
}
void indirect_A(int n)
{
    if(n > 0)
    {
        printf("%d", n);
        indirect_B(n - 1);
    }
}

// 4. indirect recursion
void indirect_B(int n)
{
    if(n > 1)
    {
        printf("%d", n);
        indirect_A(n / 2);
    }
}

int NestedRec(int n)
{
    if (n > 100)
        return n - 10;
    else
        return NestedRec(NestedRec(n + 11));
}
int main()
{
    int x = 3;

    printf("This is Tail recursion: "); TailRec(x); printf("\n");
    printf("This is Head recursion: "); HeadRec(x); printf("\n");
    printf("This is Tree recursion: "); treeRec(x); printf("\n");
    printf("This is indirect recursion: "); indirect_A(20); printf("\n");
    printf("This is Nested recursion: %d \n", NestedRec(95));

}

/*
Output:

This is Tail recursion: 321
This is Head recursion: 123
This is Tree recursion: 3211211
This is indirect recursion: 201998431
This is Nested recursion: 91

*/
