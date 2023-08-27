#include <iostream>
using namespace std;
int main()
{
    int size, tripletPair = 0, n, arr[10];
    cout << "Enter the size of array :- ";
    cin >> size;
    cout << "Enter the Array Elements :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to find triplate pair :- ";
    cin >> n;
    int triplet[10];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    tripletPair++;
                    triplet[i] = arr[i];
                    triplet[i] = arr[j];
                    triplet[i] = arr[k];
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << triplet[i] << endl;
    }
    cout << "Triplet Pair is :- " << tripletPair;
    return 0;
}
