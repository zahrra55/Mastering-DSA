#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Example of accessing elements inside an array
    int A[5] = {2, 4, 6, 8};
    for (int i = 0; i < 5; i++)
    {
        printf("A[i]: %d\n", A[i]);
        printf("A[2]: %d\n", A[2]);
        printf("2[A]: %d\n", 2[A]);
        printf("*(A + 2): %d\n", *(A + 2));
    }

    // Increasing the size of an array
    int *p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    int *q = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
        printf("q[%d]: %d\n", i, q[i]);
    }

    free(p); // Free the original memory allocated to p
    p = q;   // Reassign p to point to q
    q = NULL; // Set q to NULL to avoid accidental use

    for (int i = 0; i < 10; i++)
    {
        printf("p[%d]: %d\n", i, p[i]);
    }

    printf("q: %p\n p: %p\n", (void *)q, (void *)p);

    free(p); // Free the memory allocated to q (now pointed to by p)
    p = NULL;

    return 0;
}