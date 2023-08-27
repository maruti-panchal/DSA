#include <iostream>
using namespace std;
int absDifference(int arr[], int size, int x)
{
    int i = 0;
    int j = 1;
    while (i < size && j < size)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            return 1;
        }
        else if (arr[i] - arr[j] < x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
int main()
{
    int arr[20];
    int size;
    cout << "Enter Array Size :-" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    int x;
    cout << "Enter Difference Number:";
    cin >> x;
    int result = absDifference(arr, size, x);
    if (result == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
} // namespace std;
