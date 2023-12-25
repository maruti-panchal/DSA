#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 10, 11, 13, 16, 17};
    int size = 17;
    int low = 0;
    int target = 16;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << "Element fund at index : " << mid;
            break;
        }
        else if (arr[mid] >= target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}