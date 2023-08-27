#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(10);
    cout << "Enter the Vector Elements :- ";
    for (int i = 0; i < 10; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int x;
    cout << "Enter the number to be count the no of Occurrences :- ";
    cin >> x;
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            cnt++;
        }
    }
    cout << "Total Count of Occurrenc of  " << x << "  is :- " << cnt;
    return 0;
}