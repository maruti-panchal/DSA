
// O(logn)

#include <iostream>
using namespace std;
int pow(int x, int y)
{
    int ans;
    if (y == 1)
        return x;
    if (y % 2 == 0)
    {
        ans = pow(x, y / 2);
    }
    else
    {
        ans = pow(x, y / 2) * x;
    }
    return ans * ans;
}
int main()
{
    cout << pow(3, 8);
    return 0;
}