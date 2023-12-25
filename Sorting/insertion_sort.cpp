#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 2, 9, 3, 6, 1};
    int n = 6;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    for (int i = 1; i < n; i++)
    {
        int j = i;
        // while (j >= 1)
        // {
        //     if (arr[j] >= arr[j - 1])
        //         break;
        //     else
        //         swap(arr[j], arr[j - 1]);
        //     j--;
        // }

        // Another way to write optimized code
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}