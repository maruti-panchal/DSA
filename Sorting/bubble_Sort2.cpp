// This more optimized sorting way here we reduce the number of passes
// best case O(n)
// Here we will check near by sorted array

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4, 5, 2, 6, 72, 7};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j];
    }
    return 0;
}