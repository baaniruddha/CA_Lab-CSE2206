//Program: 2. Write a Program to calculate the CGPA of a semester

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    float b, c = 0, e = 0, s, g;
    string a, d;
    cout << "== CGPA Calculator ==" << "\n";
    cout << "Total Course(s) = " ;
    {
        cin >> t;
        while (t--) {
            cout << "Course Title = ";
            cin >> d ;
            cout << "Credit(s) = ";
            cin >> c;
            cout << "Marks = ";
            cin >> n;
            {
                if (n < 40)
                    a = "F", b = 0.00;
                if (n >= 40 && n <= 44)
                    a = "D", b = 2.00;
                if (n >= 45 && n <= 49)
                    a = "C", b = 2.25;
                if (n >= 50 && n <= 54)
                    a = "C+", b = 2.50;
                if (n >= 55 && n <= 59)
                    a = "B-", b = 2.75;
                if (n >= 60 && n <= 64)
                    a = "B", b = 3.00;
                if (n >= 65 && n <= 69)
                    a = "B+", b = 3.25;
                if (n >= 70 && n <= 74)
                    a = "A-", b = 3.50;
                if (n >= 75 && n <= 79)
                    a = "A", b = 3.75;
                if (n >= 80 && n <=100)
                    a = "A+", b = 4.00;
            }
            e += c * b;
            cout << d << " Course: " << "Latter Grade = " << a << " , " << "Grade Point = " << b << "\n";
            cout << "\n";
        }
    }
    cout << "Total Credits = ";
    cin >> s ;
    g = e / s;
    cout << "CGPA = " << fixed << setprecision (2) << g;
    return 0;
}
