// This is parameter passing
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
// If we use pass by value the actual values (inside main())
// are not going to change
void ChangeLength(Rectangle *x, int l)
{
    (*x).length = l;
    // Or: x -> length = l;
}

// Creating an object in heap
struct Rectangle* funny()
{
    struct Rectangle *p;
    //p = new Rectangle;
    p = (Rectangle*)malloc(sizeof(Rectangle));
    (*p).length = 15;
    (*p).breadth = 7;
    return p;
};

int main()
{
    Rectangle r = {10, 20};
    printf("r.length = %d\n", r.length);
    ChangeLength(&r, 90);
    printf("r.length = %d\n\n", r.length);
    Rectangle *ptr = funny();
    printf("ptr.length = %d\nptr.breadth = %d\n\n", (*ptr).length, (*ptr).breadth);
 //or//printf("ptr.length = %d\nptr.breadth = %d\n\n", ptr->length, ptr->breadth);

free(ptr);
}
