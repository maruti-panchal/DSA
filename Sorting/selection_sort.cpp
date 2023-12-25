/*
-->Insertion Sort first find the minimum element in the array and select that element and put it in it's        appropriate position.
-->Best case O(n^2)
-->Average case O(n^2)
-->Worst case O(n^2)

*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v{5, 4, 1, 0, 3, 6};
    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                mindx = j;
            }
        }
        swap(v[i], v[mindx]);
    }
    for (int ele : v)
    {
        cout << ele << " ";
    }
    return 0;
}