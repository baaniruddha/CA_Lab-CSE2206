//Program: 4(i). Implement the recursive algorithm to find the nth Fibonacci series

#include<bits/stdc++.h>
using namespace std;

int Fib (int x)
{
    int f;
    if (x == 1)
        return (0);
    else if (x == 2)
        return (1);
    else
        f = Fib (x - 1) + Fib (x - 2);
    return (f);
}
int main()
{
    int Fib (int) ;
    int x, y, n;
    cout << "n = ";
    cin >> n;
    for (x = 1; x <= n; x++) {
        y = Fib (x);
        cout << y << "\t";
    }
    return 0;
}
