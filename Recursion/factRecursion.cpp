// Factorial using Recursion

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * fact(n - 1);
}
int main()
{
    int result = fact(5);
    cout << result;
    return 0;
}