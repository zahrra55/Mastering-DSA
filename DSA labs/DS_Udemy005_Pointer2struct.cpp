// This is Pointer to structure
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    cout << "The following is inside the stack:\n\n";

    rectangle r = {10, 5};
    cout << "r.length = " << r.length << endl;
    cout << "r.breadth = " << r.breadth << "\n\n";

    rectangle *p = &r;
    cout << "(*p).breadth = " << (*p).breadth << endl;
    cout << "p -> length = " << p -> length << "\n\n";

    cout << "The following is inside the Heap:\n\n";

    rectangle *p2 = &r;
    // We can use this for C++
    p2 = new rectangle;
    // Or this for C
    p2 = (rectangle*)malloc(sizeof(rectangle));
    (*p2).breadth = 44;
    p2 -> length = 77;
    cout << "(*p2).breadth = " << (*p2).breadth << endl;
    cout << "p2 -> length = " << p2 -> length << endl;

    delete p2;
    free(p2);

    return 0;
}
