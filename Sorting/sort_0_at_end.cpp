// Sort all 0's at End
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {4, 0, 1, 3, 0, 5, 0};
    int n = 7;
    bool flag = True;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
                flag = False;
            }
        }
    }
    for (int ele : arr)
        cout << ele << " ";
    return 0;
}