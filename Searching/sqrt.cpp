// find square root of X.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 9, 16, 20, 25, 36};
    int size = 7;
    int target = 20;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == target)
        {
            cout << mid;
        }
        else if (mid * mid > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << high;
    return 0;
}