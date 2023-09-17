// Factorial using Iterative

#include <iostream>
using namespace std;
void fact1(int n)
{
    int result = 1;
    for (int i = 1; i < n + 1; i++)
    {

        result = result * i;
    }
    cout << result;
}
int main()
{
    fact1(5);
    return 0;
}