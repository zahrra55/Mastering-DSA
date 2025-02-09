// This is Reference
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    int b = 50;
    r = b;
    cout << "a = " << a << "\nb = " << b << "\nr = " << r << endl;
}
