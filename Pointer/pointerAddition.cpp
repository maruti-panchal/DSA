#include <iostream>
using namespace std;
int main()
{
    int x, y, result;
    cin >> x >> y;
    int *ptr1 = &x, *ptr2 = &y, *ptrResult = &result;
    *ptrResult = *ptr1 + *ptr2;
    cout << *ptrResult;
}