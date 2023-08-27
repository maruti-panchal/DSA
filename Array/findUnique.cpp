#include <iostream>
using namespace std;
int main()
{
    // There is another approach to solve by using XOR
    int arr[10], size;
    cout << "Enter array size :- ";
    cin >> size;
    cout << "Enter Array elements :-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 15; j <= size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << "Unique number is :- " << arr[i];
        }
    }
    return 0;
}