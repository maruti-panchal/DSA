#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = 9;
    int low = 0;
    bool flag = false;
    int target = 5;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 5)
        {
            flag = true;
            cout << arr[mid];
            break;
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
    if (flag == false)
    {
        cout << arr[low];
    }
    return 0;
}