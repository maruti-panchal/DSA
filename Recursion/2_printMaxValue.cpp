#include <iostream>
using namespace std;
int maxx = 0;
void maxValue(int *arr, int idx, int size)
{

    if (idx == size)
    {
        cout << maxx;
        return;
    }

    if (arr[idx] > maxx)
        maxx = arr[idx];
    maxValue(arr, idx + 1, size);
}
int main()
{
    int arr[] = {3, 10, 3, 2, 100};
    int size = 6;
    maxValue(arr, 0, size);
    return 0;
}