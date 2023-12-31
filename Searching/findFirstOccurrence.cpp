// Find first occurence of X. If not found return -1;

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 6, 6};
    int size = 24;
    int target = 4;

    /*
        // Linear Search
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                cout << i;
                break;
            }
        }
        cout << "Not found";
         */

    // Binary Search
    int low = 0;
    int high = size - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            if (arr[mid - 1] != target)
            {
                flag = true;
                cout << mid;
                break;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }
}

#include <vector>
class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int target)
    {
        int length = arr.size();
        int low = 0;
        int high = length - 1;
        bool flag = false;
        vector<int> v;

        // for first Occurence

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
            {
                if (arr[mid - 1] != target)
                {
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                else
                {
                    high = mid - 1;
                }
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
            v.push_back(-1);
        }

        // for Last occurrenc

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
            {
                if (arr[mid + 1] != target)
                {
                    flag = true;
                    v.push_back(mid);
                    break;
                }
                else
                {
                    low = mid + 1;
                }
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
            v.push_back(-1);
        }
    }
};