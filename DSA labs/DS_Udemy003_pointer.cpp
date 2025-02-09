// This is Pointer
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    //int a[5];
    int* p;
    //p = a;
    p = (int*)malloc(5 * sizeof(int));
    for (int i = 0;i < 5; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }
        printf("%d\n%d\n", *p, p);

    // In C++ you do the following:
    int *p2;
    p2 = new int[5];

    for (int i = 0;i < 5; i++)
    {
        p2[i] = i;
        printf("%d\n", p2[i]);
    }
    delete []p2;
    free(p);
}
