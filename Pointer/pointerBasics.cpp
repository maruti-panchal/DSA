#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 20.20;
    cout << &x << " " << &y << endl;
    int *ptr;
    ptr = &x;
    cout << ptr << endl;
    float *ptr2 = &y;
    cout << ptr2 << endl;
    return 0;
}
