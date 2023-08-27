#include<iostream>
using namespace std;
void add(int c,int d){
    cout<<c+d;
}
void add(int a,int b,int c){
    cout<<a+b+c;
}
void add(float a,float b){
    cout<<a+b;
}
int main(){
    int a=10,b=20,c=30;
    add(a,b);
    add(a,b,c);

    return 0;
}