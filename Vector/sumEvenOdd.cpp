// WAP to find the Difference between the sum of element at even index and sum of element at odd index
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }
    int difference = evenSum - oddSum;
    cout << "Total Difference is :- " << difference;

    // We are usine for each loop and each loop work on element not on index so result are getting on elements.
    // for (int &ele : v)
    // {
    //     cin >> ele;
    // }
    // int evenSum = 0;
    // int oddSum = 0;
    // int oddNum = 0;
    // int evenNum = 0;
    // for (int ele : v)
    // {
    //     if (ele % 2 == 0)
    //     {
    //         evenSum++;
    //         evenNum += ele;
    //     }
    //     else
    //     {
    //         oddSum++;
    //         oddNum += ele;
    //     }
    // }
    // int difference = evenNum - oddNum;
    // cout << "Total Even Numbers :- " << evenSum << endl;
    // cout << "Total Odd Numbers :- " << oddSum << endl;
    // cout << "Total Even Sum :- " << evenNum << endl;
    // cout << "Total Odd Sum :- " << oddNum << endl;
    // cout << "Difference is : -" << difference << endl;

    // for loop by calculating index

    return 0;
}