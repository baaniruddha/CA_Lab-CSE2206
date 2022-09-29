//Program: 7(ii). Calculate the series m^2+(m+1)^2+…...+(n-1)^2 + n^2 by using going-down recursive algorithm

#include<bits/stdc++.h>
using namespace std;

int sqsum (int m, int n)
{
    if (m < n) {
        return (sqsum (m, n - 1) + n * n);
    }
    else
        return (n * n);
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
