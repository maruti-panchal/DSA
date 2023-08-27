#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // Size()      :- It will calculate total values present in vector.
    // Capacity()  :- It will calculate total size of the vector.
    // push.back() :- It is used to insert the element at the end of the vector.
    // begin()     :- It will return the starting position of the vector.
    // end()       :- It will return the ending postion of the vector.
    // resize()    :- After resizing the vector the capacity and size of he vector became same as the resize value.

    // vector<int>v;
    // cout<<"Vector Size :- "<<v.size()<<endl;
    // cout<<"Vector Capacity :- "<<v.capacity()<<endl;

    // //Inserting the element at the end
    // v.push_back(1);
    // cout<<"Vector Size :- "<<v.size()<<endl;
    // cout<<"Vector Capacity : - "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Vector Size :- "<<v.size()<<endl;
    // cout<<"Vector Capacity :- "<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"Vector Size :- "<<v.size()<<endl;
    // cout<<"Vector Capacity :- "<<v.capacity()<<endl;

    // v.push_back(4);
    // cout<<"Vector size :- "<<v.size()<<endl;
    // cout<<"Vector Capacity : -"<<v.capacity()<<endl;

    // v.push_back(5);
    // cout<<"Vector Size : -"<<v.size()<<endl;
    // cout<<"Vector Capacity : - "<<v.capacity()<<endl;

    // cout<<v[3]<<endl;

    // //dleting the element from the vector
    // v.pop_back();
    // cout<<"After Deleted element Vector size :-"<<v.size()<<endl;
    // cout<<"After Deleted element Vector Capacity :-"<<v.capacity()<<endl;

    // v.pop_back();
    // cout<<"After Deleted element Vector size :-"<<v.size()<<endl;
    // cout<<"After Deleted element Vector capacity :-"<<v.capacity()<<endl;

    // v.pop_back();
    // cout<<"After Deleted element Vector size :-"<<v.size()<<endl;
    // cout<<"After Deleted element Vector capacity :-"<<v.capacity()<<endl;

    // // Before Resize vector
    // cout<<"Before resizing the vector size is :- "<<v.size()<<endl;;
    // cout<<"Befor resizing the vector capacity is :- "<<v.capacity()<<endl;

    // // Resizing the vector
    // v.resize(20);
    // // After Resizing the vector

    // cout<<"After reszing the vector Size is :- "<<v.size()<<endl;
    // cout<<"After resizing the vector the Capacity is :- "<<v.capacity()<<endl;
    // v.push_back(12);
    // cout<<"After pushing the element size is:- "<<v.size()<<endl;
    // cout<<"After pishing the element capacity is:- "<<v.capacity()<<endl;
    // v.push_back(13);
    // cout<<"After pushing the vector size is :- "<<v.size()<<endl;
    // cout<<"After pushing the vector size is :- "<<v.capacity()<<endl;

    // Loops in Vector

    // For loop
    //  vector<int>v;
    //  Accepting the values from the user in vector
    //  for(int i=0;i<=4;i++){
    //      int ele;
    //      cin>>ele;
    //      v.push_back(ele);

    //     // We can accept the value by using cin>>v[i]; for this we alredy must know the v size
    // }
    // Accessing the value form the vector
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // For Each Loop
    // vector<int> v2(5); // While accepting the values from user in vector we must know the size of the vector other Wise it will gives the error
    // for (int &element : v)
    // {
    //     cin >> element;
    // }
    // for (int ele : v)
    // {
    //     cout << ele << endl;
    // }
    vector<int> v3(5);
    int idx = 0;
    while (idx < v3.size())
    {
        cin >> v3[idx];
        idx++;
    }
    int n = 0;
    cout << "**************************************************" << endl;
    // while (n < v3.size())
    // {
    //     cout << v3[n] << endl;
    //     n++;
    // }
    // cout << "**************************************************" << endl;
    // // Inserting the element betewen the vector
    // v3.insert(v3.begin() + 2, 3);
    // for (int ele : v3)
    // {
    //     cout << ele << endl;
    // }

    // deleting the element from the vector
    v3.erase(v3.end() - 3);
    for (int ele : v3)
    {
        cout << ele << endl;
    }

    return 0;
}