// Print 1 to N using Recursion with extra parameter

/*
#include <iostream>
using namespace std;
void print_One_To_N(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    print_One_To_N(i + 1, n);
}
int main()
{
    int n, i = 1;
    cout << "Enter number" << endl;
    cin >> n;
    print_One_To_N(i, n);
    return 0;
}
*/

// Print 1 to N using Recursion without extra parameter

/*
#include <iostream>
using namespace std;
int i = 1;
void print_One_To_N(int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    i++;
    print_One_To_N(n);
}
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    print_One_To_N(n);

} // namespace std;

*/

// Print 1 to N using Recursion without extra parameter

#include <iostream>
using namespace std;
void print_One_To_N(int n)
{
    if (n == 0)
    {
        return;
    }
    print_One_To_N(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    print_One_To_N(n);

} // namespace std;
