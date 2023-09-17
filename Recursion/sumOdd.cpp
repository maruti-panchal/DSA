#include <iostream>
using namespace std;
int sum = 0;
void sumOddAtoB(int a, int b)
{

    if (a > b)
    {
        cout << sum;
        return;
    }

    if (a % 2 != 0)
    {
        // cout<<"hi";
        sum += a;
    }
    sumOddAtoB(a + 1, b);
}
int main()
{
    sumOddAtoB(1, 10);
    return 0;
}
