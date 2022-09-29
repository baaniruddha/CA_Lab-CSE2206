//Program: 1. Calculate the sum of the series 1^2+3^2+5^2+…...+(2n+1)^2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, s;
    cin >> n;
    s = 0;
    for (i = 1; i <= n; i = i + 2) {
        s = s + i * i;
    }
    cout << s << "\n";
    return 0;
}
