// This is structures
#include <iostream>
using namespace std;

    struct rect{
    int width;
    int height;
    char x;
    };

int main()
{
    rect r1;
    r1.width = 5;
    cout << r1.width <<endl;
    printf("%d\n", sizeof(r1));
}
