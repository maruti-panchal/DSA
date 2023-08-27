#include<iostream>
using namespace std;
// void print1(int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void print2(int n,int m){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1 || j==1 || i==n || j==m){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// void print3(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=1;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void print4(int n){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// void print5(int n){
//     for(int i=0;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// void print6(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)<=n){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

// void print6(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             sum++;
//             cout<<sum;
//         }
//         cout<<endl;
//     }
// }

// void print7(int n){
//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// void print8(int n){
//     for(int i=1;i<=n;i++){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void print9(int n){
//     for(int i=n;i>=1;i--){
//         for(int space=1;space<=n-i;space++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void print10(int n,int m){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1||j==1||i==n||j==m){
//                 cout<<j;
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// void print11(int n,int m){
//     for(int i=0;i<=n;i++){
//         int temp=1;
//         for(int j=1;j<=m;j++){
//             if(temp==1){
//                 cout<<"1";
//                 temp=0;
//             }else{
//                 cout<<"2";
//                 temp=1;
//             }
//         }
//         cout<<endl;
//     }
// }

// void print12(int n,int m){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if((i+j)%2==0){
//                 cout<<"1";
//             }else{
//                 cout<<"2";
//             }
//         }
//         cout<<endl;
//     }
// }

void print13(int n){
    for(int i=1;i<=n;i++){
        if(n%2<=i){
            for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

        }
}
    
int main(){
    int n;
    cin>>n;
    // print1(n,m);
    //print2(n,m);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
    // print10(n,m);
    // print11(n,m);
    // print12(n,m);
    print13(n);
    return 0;
}