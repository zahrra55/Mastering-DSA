// This is parameter passing
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int add(int x, int y) // Formal parameters
{
    return x+y;
}

void swapAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Swapping by reference is available in C++ (but not in C) 

void swapReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 15;
    int c = 20, f = 30;
    cout << "This is swap by Address:\n";
    printf("a = %d  b = %d\n", a, b);
    //printf("a + b = %d\n\n", add(a, b));
    //cout << "a + b = " << add(a,b);
    swapAddress(&a, &b);
    printf("a = %d  b = %d\n\n", a, b);

    cout << "This is swap by Reference:\n";
    printf("c = %d  f = %d\n", c, f);
    swapReference(c, f);
    printf("c = %d  f = %d\n", c, f);
}
