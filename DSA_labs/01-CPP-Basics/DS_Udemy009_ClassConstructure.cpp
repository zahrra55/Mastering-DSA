// This is how to use constructor and destructor in a class.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:

Rectangle() {length = breadth = 1;}
Rectangle(int l, int b);
int area();
int permitere();
int getlength() {return length;}
void setlength(int l) {length = l;}
~Rectangle(); // destructor
};
// Assigning a constructor
Rectangle :: Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle :: area()
{
    return length * breadth;
}

int Rectangle :: permitere()
{
    return 2 * (length + breadth);
}
Rectangle ::~Rectangle()
{
    cout << "~Rectangle is done.\n";
}
int main()
{
    Rectangle r(5, 10);
    cout << "r.area() = " << r.area() << endl;
    cout << "r.permitere() = " << r.permitere() << endl;
    r.setlength(10);
    printf("getlength = %d\n",r.getlength());
    // ~Rectangle is called automatically here.
}
