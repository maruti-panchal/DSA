// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    int size = 13;
    int low = 0;
    int high = size - 1;
    int cnt = 0;
    int first = -1;
    int target = 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << size - first;
} // namespace std;
