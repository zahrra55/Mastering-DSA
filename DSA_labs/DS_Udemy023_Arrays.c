// Example of accessing elements inside an array

#include<stdio.h>

int main()
{
    int A[5] = {2,4,6,8};
    for(int i = 0; i < 5 ; i++)
    {
        printf("A[i]: %d\n", A[i] );
        printf("A[2]: %d\n", A[2] );
        printf("2[A]: %d\n", 2[A] );
        printf("*(A + 2 ): %d\n", *(A + 2 ) );
    }
}
