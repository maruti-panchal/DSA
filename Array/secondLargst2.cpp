#include <iostream>
#include <limits.h>
using namespace std;
// O(n) Approach
int secondSmallest(int arr[], int size)
{
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] > smallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int size, arr[10];
    cout << "Enter Array SIze :- ";
    cin >> size;
    cout << "Enter Array Elements :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int slargest = secondLargest(arr, size);
    int sSmallest = secondSmallest(arr, size);
    cout << "Second Smallest :- " << sSmallest;
    cout << "Second Largest is :- " << slargest;
    return 0;
}