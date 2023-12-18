// This will sort the array and it also check the all the passes but here we will descrese the size of the passes.
// O(n^2)  but  ex:- it will execute 1000/2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {4, 5, 2, 6, 72, 7};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size - 1 - i; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j];
    }
    return 0;
}