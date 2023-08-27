#include <iostream>
using namespace std;
int main()
{
    int n, x, arr[10], pairs = 0;
    cout << "Enter the array size :- ";
    cin >> n;
    cout << "Enter the array Elements :- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the the number to find the pair :- ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }
    cout << "No of Pairs are :- " << pairs;

    return 0;
}