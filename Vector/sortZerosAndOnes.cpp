#include <iostream>
#include <vector>
using namespace std;
// Another is a Two Pointer Approach

void sortZeroAndOne(vector<int> &v)
{
    // counting the total number of zero and travers the array till size and comapre with zero count if value is less than count value the put zero otherwise put 1.

    int cnt_zero = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == cnt_zero)
        {
            cnt_zero++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < cnt_zero)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortZeroAndOne(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;

} // namespace std;
