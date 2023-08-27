#include<iostream>
using namespace std;
int main(){
    int ele,ans,arr[10];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched : - ";
    cin>>ele;
    for(int i=0;i<size;i++){
        if(ele==arr[i]){
            cout<<i;
        }else{
            cout<<-1;
        }
    }
    return 0;
}