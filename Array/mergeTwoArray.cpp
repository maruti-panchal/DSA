// Merged two sorted Array

#include <iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[], int arr2[], int n, int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int n, m;
    cout << "Enter First Array Size: ";
    cin >> n;
    int arr1[n];
    cout << "Enter First Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter Second Array Size: ";
    cin >> m;
    int arr2[m];
    cout << "Enter Second Array Elements: ";
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    int sortedArray[n + m];
    mergeTwoSortedArray(arr1, arr2, n, m, sortedArray);

    cout << "Merged and Sorted Array: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << sortedArray[i] << " ";
    }

    return 0;
}
