// This is Templates 

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

template <class T>
class arithmatic
{
    T a, b;
public:
    arithmatic(T a, T b);
    T add();
    T sub();
};

template <class T>
arithmatic<T> :: arithmatic(T a, T b){
this -> a = a;
this -> b = b;
}

template <class T>
T arithmatic<T> :: add(){
return a + b;
}
template <class T>
T arithmatic<T> :: sub(){
return a - b;
}
int main()
{
    arithmatic <int> ar(10, 5);
    arithmatic <float> ar1(1.5, 2.5);
    arithmatic <char> ar2('A', 'B');
    printf("int add = %d\n",ar.add());
    printf("float add = %f\n",ar1.add());
    printf("char add = %c\n",ar2.add());


}
