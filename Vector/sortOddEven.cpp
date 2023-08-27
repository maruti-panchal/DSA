#include <iostream>
#include <vector>
using namespace std;
void sort0And1(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] % 2 != 0 && v[j] % 2 == 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
        if (v[i] % 2 == 0)
        {
            i++;
        }
        if (v[j] % 2 != 0)
        {
            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sort0And1(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }

    return 0;
}