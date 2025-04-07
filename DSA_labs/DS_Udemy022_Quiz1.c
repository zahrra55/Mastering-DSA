// The Recursion final Quize Answers

#include<stdio.h>

int Q1_fun(int n)
{
    static int i = 0;
    if (n >= 5)
        return n;
    n += i;
    i++;
    return Q1_fun(n);
    // The final result of Q1_fun(1) will be: 7
}

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
    // The final result of Q2_fun(2048, 0) will be: 20480
}

int Q3_fun(int &x, int c)
{
    c -= 1;
    if (c == 0)
        return 1;
    x += 1;
    return Q3_fun(x, c) * x;
    // The final result of Q5_fun(5, 5) will be: 9^4 = 6561
}

int Q4_fun(int n)
{
    int x = 1;
    if(n == 1)
        return x;
    for(int k = 1; k < n; ++k)
        x = x * x + Q4_fun(k) * Q4_fun(n - k);
    return x;
    // The final result of Q4_fun(5) will be: 51

}

int Q5_fun(int n)
{
    static int d = 1;
    printf("%d %d", n, d);
    d++;
    if (n > 0)
        Q5_fun(n - 1);
    printf("%d ", d);
    // The final result of Q5_fun(3) will be: 312213444
}
int main()
{
    int a = 2048, sum = 0, p = 5;

    printf("Q1 Output is: %d", Q1_fun(1));
    printf("Q2 Output is: %d", Q2_fun(a, sum));
    printf("Q3 Output is: %d", Q3_fun(p, p));
    printf("Q4 Output is: %d", Q4_fun(5));
    printf("Q5 Output is: %d", Q5_fun());
    
    return 0;
}
