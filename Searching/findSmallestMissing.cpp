// find smallest missing element

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 4, 5, 6, 9, 12};
    int size = 8;

    //  Liner Search

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] != i)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }

    //  Binary Search
    int low = 0;
    int high = size - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == mid)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans;
}

// namespace std;
