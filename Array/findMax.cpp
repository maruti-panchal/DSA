#include<iostream>
using namespace std;
int main(){
    int max[10];
    int size=sizeof(max)/sizeof(max[0]);
    for(int i=0;i<size;i++){
        cin>>max[i];
    }
    int largest=-1;
    for(int i=0;i<size;i++){
        if(max[i]>largest){
            largest=max[i];
        }
    }
    cout<<"Maximum value is = "<<largest<<endl;
    return 0;
}