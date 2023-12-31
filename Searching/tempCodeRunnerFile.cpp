#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[4][6] = {{0, 0, 0, 0, 1, 1}, {0, 0, 0, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {0, 1, 1, 1, 1, 1}};
    int row = 4;
    int col = 6;
    int ht = 0;
    for (int i = 0; i < row; i++)
    {
        int low = 0;
        int high = col - 1;
        int first = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[i][mid] == 1)
            {
                first = mid;
                high = mid - 1;
            }
            else if (arr[i][mid] > 1)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        int highCount = col - first + 1;
        if (highCount < first)
        {
            highCount = first;
        }
        ht = highCount;
    }
    cout << ht;
    return 0;
}