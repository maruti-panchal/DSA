// Print N to 1 using Recursion

#include <iostream>
using namespace std;
void print_N_To_One(int n)
{
    // Base Condition
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print_N_To_One(n - 1);
}
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    print_N_To_One(n);
    return 0;
}