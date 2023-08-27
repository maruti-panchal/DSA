// WAP to Check Vector is sorted or not
#include <iostream>
#include <Vector>
using namespace std;
int main()
{
    vector<int> v(10);
    for (int &ele : v)
    {
        cin >> ele;
    }
    int greater = -1;
    int cnt = 0;

    for (int ele : v)
    {
        if (ele > greater) // or arr[i]>arr[i-1] we using for each so it will ierate all elements.to start index 1 we shoud use array
        {
            greater = ele;
            cnt++;
        }
    }
    if (cnt == v.size())
    {
        cout << "Array is sorted : " << endl;
    }
    else
    {
        cout << "Array is not Sorted " << endl;
    }

    return 0;
}