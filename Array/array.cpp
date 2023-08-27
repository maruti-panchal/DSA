#include<iostream>
using namespace std;
int main(){
    // Integer Size
    // int a;
    // int arr[]={1,2,3,4,5};
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    // // Empty array store garbage values

    // int arr2[5];
    // cout<<arr2[0];
    // cout<<arr2[1];
    // cout<<arr2[2];
    // cout<<arr2[3];
    // cout<<arr2[4];

    // // Char Size
    // char ch;
    // char chaar[5];
    // cout<<sizeof(ch)<<endl;
    // cout<<sizeof(chaar)<<endl;
    // cout<<sizeof(chaar)/sizeof(chaar[0])<<endl;
    
    // // float Size
    // float f;
    // float f1[20];
    // cout<<sizeof(f)<<endl;
    // cout<<sizeof(f1)<<endl;
    // cout<<sizeof(f1)/sizeof(f1[0])<<endl;

    // //Array loops

    // //for loop
    // char chh[5];
    // int size=sizeof(chh)/sizeof(chh[0]);
    // for(int i=0;i<size;i++){
    //     cin>>chh[i];
    // }
    // cout<<"****************************************"<<endl;
    // for(int i=0;i<size;i++){
    //     cout<<chh[i]<<endl;
    // }

    // Each loop
    int num[10];
    int size=sizeof(num)/sizeof(num[0]);
    for(int &element:num){
        cin>>element;
    }
    cout<<"88888888888888888888888888";
    for(int &element:num){
        cout<<element;
    }

    
}