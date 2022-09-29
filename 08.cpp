//Program: 8. Implement the Insertion Sort algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size, arr_sort[100], i, j, a, t;
    cout << "Size of array = ";
    cin >> size;
    cout << "\n" << size << " Array elements for sorting = " << "\n";
    for (i = 0; i < size; i++)
        cin >> arr_sort[i];
    cout << "\nElements = ";
    for (i = 0; i < size; i++) {
        cout << "\t" << arr_sort[i];
    }
    for (i = 1; i < size; i++) {
        t = arr_sort[i];
        j = i - 1;
        while (j >= 0 && arr_sort[j] > t) {
            arr_sort[j + 1] = arr_sort[j];
            j = j - 1;
        }
        arr_sort[j + 1] = t;
        cout << "\nSwap : " << i << " = ";
        for (a = 0; a < size; a++) {
            cout << "\t" << arr_sort[a];
        }
    }
    cout << "\n\nSorted   = ";
    for (i = 0; i < size; i++) {
        cout << "\t" << arr_sort[i];
    }
    return 0;
}
