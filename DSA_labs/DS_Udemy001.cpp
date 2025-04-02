#include <iostream>
using namespace std;

// Arrays
int main()
{

//This is the 1st lecture:
    int n;
    cout << "enter size..";
    cin >> n;
    int a[n ] = {1, 2, 3, 4, 5};
    for (int x:a)
    {
        cout << x << endl;
        //printf("%d\n",a[x-1]);
    }
// for dynamic assignments
//    for(int i = 0; i < 5; i++)
//    {
//        //a[i] = i;
//        printf("%d\n",a[i]);
    }


}
