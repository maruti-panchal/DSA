// arr=[2,3,5,20,1]
// find the sum
#include <iostream>
using namespace std;
void calculateSum(int *arr, int idx, int size, int sum)
{
    if (idx == size)
    {
        cout << sum;
        return;
    }
    sum = sum + arr[idx];
    calculateSum(arr, idx + 1, size, sum);
}
int main()
{
    int arr[] = {2, 3, 5, 20, 1};
    int size = 5, sum = 0;
    calculateSum(arr, 0, size, sum);
    return 0;
}