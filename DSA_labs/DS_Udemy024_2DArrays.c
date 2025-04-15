// 2 dimensional arrays (arrays of arrays)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for an array of size 5
    int *p = malloc(5 * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed for p\n");
        return 1;
    }

    // Initialize the array
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // Allocate memory for a larger array of size 10
    int *q = malloc(10 * sizeof(int));
    if (q == NULL)
    {
        printf("Memory allocation failed for q\n");
        free(p);
        return 1;
    }

    // Copy elements from p to q
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // Free the original memory allocated to p
    free(p);

    // Reassign p to point to q and set q to NULL
    p = q;
    q = NULL;

    // Initialize the remaining elements of p
    for (int i = 5; i < 10; i++)
    {
        p[i] = 0;
    }

    // Print the elements of the new array
    for (int i = 0; i < 10; i++)
    {
        printf("p[%d]: %d\n", i, p[i]);
    }

    // Free the memory allocated to p
    free(p);
    p = NULL;

    return 0;
}