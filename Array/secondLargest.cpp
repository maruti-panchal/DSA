#include <iostream>
#include <limits.h>
using namespace std;

// O(n^2) Approach
int largestElementIndex(int arr[], int size)
{
    int max = INT_MIN;
    int idx = -1;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // This will return the value of that index
            idx = i;      // This will return the indxe number
        }
    }
    return idx;
}
int main()
{
    int arr[10], size;
    cout << "Enter Array Size :- ";
    cin >> size;
    cout << "Enter Array elements : -";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int largestElementIdx = largestElementIndex(arr, size);
    // arr[largestElementIdx] = -1; // This will largest element with - 1 but it will gives wrong output when there are multiple same elements
    int largestElement = largestElementIdx;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largestElement)
        {
            arr[i] = -1;
        }
    }
    int secondLargestElementIdx = largestElementIndex(arr, size);
    cout << "Second largest Element is :- " << secondLargestElementIdx;

    return 0;
}