//Program: 5. Implement the Towers of Hanoi algorithm

#include<bits/stdc++.h>
using namespace std;

void TH (int, char, char, char);

int main()
{
    int n;
    cout << "Number of disk = ";
    cin >> n;
    TH (n, 'A', 'C', 'B');
}

void TH (int n, char x, char y, char z)
{
    if (n > 0) {
        TH (n - 1, x, z, y);
        cout << x << " => " << y << "\n";
        TH (n - 1, z, y, x);
    }
}
