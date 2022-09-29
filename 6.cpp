//Program: 6(i). Implement the Pizza Cutting algorithm by using recursive algorithm

#include<bits/stdc++.h>
using namespace std;

int pizza (int n)
{
    if (n == 1)
        return 2;
    else if (n > 1)
        return pizza (n - 1) + n;
}

int main()
{
    int n;
    cout << "Cut = ";
    cin >> n;
    cout << "Piece = " << pizza (n) << "\n";
    return 0;
} 
