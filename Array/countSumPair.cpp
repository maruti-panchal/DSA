#include <iostream>
using namespace std;
int countTargetSumPairs(int arr[], int x, int size)
{
    int cnt = 0;
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            cnt++;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return cnt;
}
int main()
{
    int arr[] = {-1, -1, 0, 1, 3, 4, 6, 8, 11, 12};
    int x = 12;
    int size = 10;
    int count = countTargetSumPairs(arr, x, size);
    cout << count;
    return 0;
}