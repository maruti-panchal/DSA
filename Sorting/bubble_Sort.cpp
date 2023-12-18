// This will sort the array but it will check all the passes even if we got sorted array
// O(n^2)   ex :- it will execute 1000 time

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {4, 5, 2, 6, 72, 7};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}