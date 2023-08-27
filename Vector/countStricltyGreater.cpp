#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(10);
    for (int &ele : v)
    {
        cin >> ele;
    }
    int x;
    cout << "Enter the the number to find Greater values :- ";
    cin >> x;
    int cnt = 0;
    for (int ele : v)
    {
        if (ele > x)
        {
            cnt++;
        }
    }
    cout << "Total Count the number is Greater than  " << x << "  is :- " << cnt;
    return 0;
}