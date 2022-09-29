//Program: 3(ii). Implement the iterative algorithm to find the factorial n

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, i;
    cout << "n = ";
    cin >> n;
    {
        if (n == 0)
            cout << "factorial(" << n << ") = " << 1 << "\n";
        else {
            a = 1;
            for (i = 1; i <= n; i++)
                a *= i;
    cout <<"factorial("<< n <<") = "<< a <<"\n";
        }
    }
    return 0;
}
