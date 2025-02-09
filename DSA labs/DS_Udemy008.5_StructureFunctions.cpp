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

void initialize(struct Rectangle* r, int rlength, int rbreadth)
{
    r -> length = rlength;
    r -> breadth = rbreadth;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void ChangeLengrh(Rectangle* r, int l)
{
    r ->length = l;
}
int main()
{
    struct Rectangle r;
    initialize(&r,5, 5);
    printf("r.length = %d r.breadth = %d\n",r.length, r.breadth);
    cout << "Area = " << area(r) << endl;
    ChangeLengrh(&r, 50);
    printf("r.length = %d r.breadth = %d\n",r.length, r.breadth);
    cout << "Area = " << area(r) << endl;

}
