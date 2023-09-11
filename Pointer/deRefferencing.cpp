#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 20.20;
    int *ptr = &x;
    cout << ptr << endl; // gives address
    cout << *ptr << endl;
    ; // gives value present at that address
    *ptr = 30;
    cout << ptr << endl; // gives address
    cout << *ptr << endl;
    cout << ptr << endl;
    int valueAt = *ptr;
    cout << valueAt << endl;
    return 0;
}