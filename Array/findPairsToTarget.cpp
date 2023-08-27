#include <iostream>
using namespace std;

// This approach will give complexity O(n^2)
// int findPairToTarget(int arr1[], int n, int x)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr1[i] + arr1[j] == x)
//             {
//                 return 1;
//             }
//         }
//     }

//     return 0;
// }

// This will take O(n) time
int findPairToTarget(int arr[], int x, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            return 1;
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
    return 0;
}
int main()
{
    int arr1[] = {-1, 0, 1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int x;
    cout << "Enter number to compare :";
    cin >> x;
    int result = findPairToTarget(arr1, x, n);
    if (result == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}