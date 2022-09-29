//Program: 7(i). Calculate the series m^2+(m+1)^2+…...+(n-1)^2 + n^2 by using going-up recursive algorithm

#include<bits/stdc++.h>
using namespace std;

int sqsum (int m, int n)
{
    if (m < n) {
        return (m * m + sqsum (m + 1, n));
    }
    else
        return (m * m);
}

int main()
{
    int a, m, n;
    cout << "Values of m & n = ";
    cin >> m >> n;
    a = sqsum (m, n);
    cout << "Sum = " << a << "\n";
    return 0;
}
