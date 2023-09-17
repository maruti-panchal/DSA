

// this is Iterartive approach

#include <iostream>
using namespace std;
int greatestCommonFactor(int x, int y)
{
    while (x % y != 0)
    {
        int rem = x % y;
        x = y;
        y = rem;
    }
    return y;
}
int main()
{
    cout << greatestCommonFactor(7, 11);
    return 0;
}