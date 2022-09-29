//Program: 9. Implement the Selection Sort algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size, arr_sort[100], i, j, a, t, p;
    cout << "Size of array = ";
    cin >> size;
    cout << "\n" << size << " Array elements for sorting = " << "\n";
    for (i = 0; i < size; i++)
        cin >> arr_sort[i];
    cout << "\nElements = ";
    for (i = 0; i < size; i++) {
        cout << "\t" << arr_sort[i];
    }
    for (i = 0; i < size; i++) {
        p = i;
        for (j = i; j < size; j++) {
            if (arr_sort[p] > arr_sort[j])
                p = j;
        }
        if (p != 1) {
            t = arr_sort[i];
            arr_sort[i] = arr_sort[p];
            arr_sort[p] = t;
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
