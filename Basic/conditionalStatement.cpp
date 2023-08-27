// WAP to Find Profit and Loss

// #include<iostream>
// using namespace std;
// int main(){
//     int sp,cp;
//     cout<<"Enter selling price :- ";
//     cin>>sp;
//     cout<<"Enter cost price :- ";
//     cin>>cp;
//     if(sp>cp){
//         int profit=sp-cp;
//         cout<<"Your Profit is :- "<<profit;
//     }else if(cp>sp){
//         int loss=cp-sp;
//         cout<<"Your Loss is :- "<<loss;
//     }else{
//         cout<<"No Profit & No Loss"<<endl;
//     }
//     return 0;
// }

// Find MAX of 3 Number using if-else

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three Numbers :- ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"Greater value is :- "<<a;
        }else if(b>a){
            if(b>c){
                cout<<"Greater Value is :- "<<b;
            }
        }else{
            cout<<"Greater Value is :-  "<<c;
        }
    }
   

    // using if-else-if

    /* if(a>b&&a>c){
        cout<<"Greater Value is :- "<<a;
    }else if(b>a&&b>c){
        cout<<"Greater Value is :- "<<b;
    }else{
        cout<<"Greater Value is :- "<<c;
    }*/

    //Using Nested if-else

    
    return 0;
}