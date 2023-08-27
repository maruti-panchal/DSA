#include<iostream>
using namespace std;
int main(){
    int digits[5];
    int sum=0;
    int size=sizeof(digits)/sizeof(digits[0]);
    cout<<size;
    for(int i=1;i<=size;i++){
        cin>>digits[i];
    }
    for(int i=1;i<=size;i++){
        sum=sum+digits[i];
    }
    cout<<"Total Sum= "<<sum;
    return 0;
}