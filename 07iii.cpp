//Program: 7(iii). Calculate the series m^2+(m+1)^2+…...+(n-1)^2 + n^2  by using splitting-halves recursive algorithm

#include<bits/stdc++.h>
using namespace std;

int sqsum (int m, int n)
{
    int mid = (m + n) / 2;
    if (m == n) {
        return (m * m);
    }
    else
        return(sqsum (m, mid)+sqsum (mid+1,n));
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
