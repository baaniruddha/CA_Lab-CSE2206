//Program: 4(ii). Implement the iterative algorithm to find the nth Fibonacci series

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a = 0, b = 1, s = 0;
    cout << "n = ";
    cin >> n;
    cout << a << "\t" << b << "\t";
    for (i = 2; i < n; ++i) {
        s = a + b;
        a = b;
        b = s;
        cout << s << "\t";
    }
    return 0;
} 
