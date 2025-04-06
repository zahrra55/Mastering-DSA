// The Recursion final Quize 

#include<stdio.h>

// Q1- what's the return value of Q1_fun(1)?
int Q1_fun(int n)
{
    static int i = 0;
    if (n >= 5)
        return n;
    n += i;
    i++;
    return Q1_fun(n);
    // The final result will be: 7
}

// Q2- what's the return value of Q2_fun(2048, 0)?
int Q2_fun(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0)
        return n;
    k = n % 10;
    j = n / 10;
    sum += k;
    Q2_fun(j, sum);
    printf("%d ", k); 
}
int main()
{
    int a = 2048, sum = 0;
    Q1_fun(1);
    Q2_fun(a, sum);
    printf("%d", sum);
    // The final result of Q2_fun will be: 
    return 0;
}
