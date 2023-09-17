#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    int y = 16;
    int greater;
    for (int i = x; i > 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            greater = i;
            break;
        }
    }
    cout << greater << endl;
    return 0;
}