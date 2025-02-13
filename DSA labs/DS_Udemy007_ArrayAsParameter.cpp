// This is Arrays as passing parameters:
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void fun2(int A[ ] , int n)
{
for(int i=0; i<n ; i++)
    printf("%d ", A[i]);
}

int* fun(int n)
{
    int *p;
    p = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
        p[i] = i + 1;
    return p;
}

int main()
{
    int *A;
    A = fun(5);
    //int A[]={1,5,7,8,9};
    for (int i= 0; i < 5; i++)
    cout << A[i] << endl;
    fun2(A, 5);
    delete[] A;
}
