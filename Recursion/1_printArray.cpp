#include <iostream>
using namespace std;
void printArr(int *arr, int indx, int size)
{
    if (indx == size)
        return;
    cout << arr[indx] << endl;
    printArr(arr, indx + 1, size);
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    printArr(arr, 0, n);
    return 0;
}