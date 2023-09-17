// find sum of n series number withe alternate sign
// ex :- 1,-2,3,-4,5,-6

#include <iostream>
using namespace std;
int seriesSumCalculate(int n)
{
    int sum;
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        sum = seriesSumCalculate(n - 1) - n;
    }
    else
    {
        sum = seriesSumCalculate(n - 1) + n;
    }
    return sum;
}
int main()
{
    cout << seriesSumCalculate(5);
    return 0;
}