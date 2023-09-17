#include <iostream>
using namespace std;
int gcdRecursion(int x, int y)
{
    if (y == 0)
        return x;
    return gcdRecursion(y, x % y);
}
int main()
{
    int result = gcdRecursion(15, 24);
    cout << result;
    return 0;
}