#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // This will rotae in-place it wion't take any extra space
    int vec;
    cout << "Enter Inittial Vector Size :- ";
    cin >> vec;
    vector<int> v(vec);
    cout << "Enter Array Elements :-" << endl;
    for (int &v1 : v)
    {
        cin >> v1;
    }
    int k;
    k = k % v.size();
    cout << "Enter K'th Value :- " << endl;
    cin >> k;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    for (int vec : v)
    {
        cout << vec;
    }
    cout << endl;

    int arr[10], size, k;
    cout << "Enter Array Size :- " << endl;
    cin >> size;
    cout << "Enter Array Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the K'th Value :-  " << endl;
    cin >> k;
    int arrRotation[10]; // This will take Extra Space
    // k can be greater then size
    k = k % size;
    int j = 0;
    // Inserting last k element in new array
    for (int i = size - k; i < size; i++)
    {
        arrRotation[j] = arr[i];
        j++;
    }
    // Inserting first n-k elements in new array
    for (int i = 0; i <= k; i++)
    {
        arrRotation[j] = arr[i];
        j++;
    }
    // int kthRotate = arrayRotate(arr, size, k);
    cout << "After Roatation Array is :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arrRotation[i];
    }

    return 0;
}