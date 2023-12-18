// Bubble sort is also used to check the given array is sorted or not through optimized way
// It wii take time complecxity is O(n)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {2, 3, 4, 6, 72};
    int size = 6;
    int cnt = 0;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cnt = 1;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "not sorted";
    }

    return 0;
}