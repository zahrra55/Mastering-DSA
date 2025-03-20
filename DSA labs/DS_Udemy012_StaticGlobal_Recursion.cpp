// This is Static and Global variables Recursion
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}
int fun2(int n)
{
    static int x = 0;
    if(n > 0)
    {
        x++;
        return fun2(n - 1) + x;
    }
    return 0;
}
int main()
{
    int x = 5;
    cout << fun1(x) << endl;
    cout << fun2(x) << endl;
    // The value of x is going to continue incrementing using the last value it reached
    cout << fun2(x) << endl;
}

/* The output will be:
15  -> n starts as 5
25  -> x starts as 0
50  -> x starts as 25

*/
