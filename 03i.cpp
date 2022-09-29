//Program: 3(i). Implement the recursive algorithm to find the factorial n

#include<bits/stdc++.h>
using namespace std;

int Fact (int n)
{
    if (n == 0)
        return 1;
    else
        return (n * Fact (n - 1));
}

int main()
{
    int a, n;
    cout << "n = ";
    cin >> n;
    a = Fact (n);
    cout <<"factorial("<< n <<") = "<< a <<"\n";
    return 0;
}
