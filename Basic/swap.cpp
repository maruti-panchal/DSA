#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter two numbers to swap"<<endl;
    cin>>x>>y;
    cout<<"Before Cout"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"After Swap"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}