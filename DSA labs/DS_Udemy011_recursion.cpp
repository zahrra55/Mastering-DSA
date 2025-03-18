// This is Recursion
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void fun1(int x)
{
    if(x > 0)
    {
    printf("%d", x);
    fun1(x - 1);
    }
}
void fun2(int x)
{
    if(x > 0)
    {
        fun2(x - 1);
        printf("%d", x);
    }
}
int main()
{
    int x = 3;
    fun1(x);
    printf("\n");
    fun2(x);
}
