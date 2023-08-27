#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter the Number : -";
    cin>>n;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Total Sum :- "<<sum;
    return 0;
}