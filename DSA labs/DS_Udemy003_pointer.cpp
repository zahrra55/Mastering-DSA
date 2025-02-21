// This is Pointers

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int* p;
    // This is how to use pointers in C:
    p = (int*)malloc(5 * sizeof(int));
    for (int i = 0;i < 5; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }
        printf("%d\n%d\n", *p, p);

    // In C++ you can do this instead:
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

/* 
Output: 
0
1
2
3
4
0
8197984
0
1
2
3
4
*/
