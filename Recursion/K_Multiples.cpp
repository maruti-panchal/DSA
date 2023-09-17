#include <iostream>
using namespace std;
void k_multi(int num, int k)
{
    // cout << "hello";
    int ans;
    if (k == 1)
    {
        cout << num * k << endl;
        return;
    }
    k_multi(num, k - 1);
    cout << num * k << endl;
}
int main()
{
    // cout << "hello";
    k_multi(12, 5);
    return 0;
}