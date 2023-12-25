// Find out lower bound of Given Targeted Value

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 8, 9, 10};
    int size = 9;
    int target = 5;
    int low = 0;
    int high = size - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            flag = true;
            cout << arr[mid - 1];
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
        cout << arr[high];
    }
    return 0;
}