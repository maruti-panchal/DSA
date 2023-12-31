// Find a row with maximumum 1's.

/*
--> Linear Search O(n^2)
--> Binary Search O(mlogn)
--> Another way satrt from last take O(m+n)
--> Another way satrt from last take O(n)
*/

// Binary Search
/*
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[4][6] = {{0, 0, 0, 0, 1, 1}, {0, 0, 0, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {0, 1, 1, 1, 1, 1}};
    int row = 4;
    int col = 6;
    int total = 0;
    int total_max = 0;
    int final_idx = -1;
    for (int i = 0; i < row; i++)
    {
        int low = 0;
        int high = col - 1;
        int first = -1;

        for (int j = 0; j < col; j++)
        {
            int mid = (low + high) / 2;
            if (arr[i][mid] == 1)
            {
                first = mid;
                high = mid - 1;
            }
            else if (arr[i][mid] > 1)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        total = col - first;
        if (total_max < total)
        {
            total_max = total;
            final_idx = i;
        }
    }
    cout << final_idx << " " << total_max;

    return 0;
}

*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[4][6] = {{0, 0, 0, 0, 1, 1}, {0, 0, 0, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {0, 1, 1, 1, 1, 1}};
    int rowSize = 4;
    int colSize = 6;
    int cnt = 0;
    int i = 0;
    int j = colSize - 1;
    while (i < rowSize && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            cnt++;
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << i << " " << cnt;
    return 0;
}