#include <iostream>
using namespace std;
/*

 // # Pass by Value

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "Before swap"
         << "x=" << x << " "
         << "y=" << y << endl;
    swap(x, y);
    cout << "After swap"
         << "x=" << x << " "
         << "y=" << y << endl;
    return 0;
}

*/
/*
output :- Not swapped cuz we passes the value in function so chages done in copy variable.
10 20
Before swap x=10 y=20
After swap x=10 y=20
*/

/*
// Pass by Refference

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "Before swap"
         << "x=" << x << " "
         << "y=" << y << endl;
    swap(x, y);
    cout << "After swap"
         << "x=" << x << " "
         << "y=" << y << endl;
    return 0;
}
*/
/*
Swapping Done cuz we have passes its refference .changes made in original values.
10 20
Before swapx=10 y=20
After swapx=20 y=10
*/

// Pass by refference by using pointer
void swap(int *x, int *y)
{
    int *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
}
int main()
{
    int x, y;
    cin >> x >> y;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    cout << "Before swap"
         << "x=" << *ptr1 << " "
         << "y=" << *ptr2 << endl;
    swap(ptr1, ptr2);
    cout << "After swap"
         << "x=" << *ptr1 << " "
         << "y=" << *ptr2 << endl;
    return 0;
}

/*
 Swapping done
10 20
Before swapx=10 y=20
After swapx=20 y=10*/