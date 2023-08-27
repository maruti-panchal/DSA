#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int size = v.size();
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int x;
    cout << "Enter the number to find the Occurrence :- ";
    cin >> x;
    int occ = -1;
    // Searching from start to end
    for (int i = 0; i <= v.size(); i++)
    {
        if (v[i] == x)
        {
            occ = i;
        }
    }
    // Searchin from end to start
    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i] == x)
        {
            occ = i;
            break;
        }
    }
    cout << occ << endl;
    return 0;
}