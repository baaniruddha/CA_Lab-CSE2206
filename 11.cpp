//Program: 11. Implement the Quick Sort algorithm

#include<bits/stdc++.h>
using namespace std;
int Quick (int a[], int start, int end)
{
    int pivot = a[end];
    int pvi = start;
    int i, t;
    for (i = start; i < end; i++) {
        if (a[i] <= pivot) {
            t = a[i];
            a[i] = a[pvi];
            a[pvi] = t;
            pvi++;
        }
    }
    t = a[end];
    a[end] = a[pvi];
    a[pvi] = t;
    return pvi;
}
void Quicksort (int a[], int start, int end)
{
    if (start < end) {
        int pvi = Quick (a, start, end);
        Quicksort (a, start, pvi - 1);
        Quicksort (a, pvi + 1, end);
    }
}
int main()
{
    int n, a[100], i;
    cout << "Size of array = ";
    cin >> n;
    cout << "\n" << n << " Array elements for sorting = " << "\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "\nElements = ";
    for (i = 0; i < n; i++) {
        cout << "\t" << a[i];
    }
    Quicksort (a, 0, n - 1);
    cout << "\nSorted array =  ";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    return 0;
}
