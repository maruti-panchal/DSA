// WAP to find vowel and consonent

// #include<iostream>
// using namespace std;
// int main(){
//     char alphabet;
//     cout<<"Enter character :-"<<alphabet;
//     cin>>alphabet;
//     switch(alphabet){
//         case 'a':
//         cout<<"It is vowel"<<endl;
//         break;
//          case 'e':
//         cout<<"It is vowel"<<endl;
//         break;
//          case 'i':
//         cout<<"It is vowel"<<endl;
//         break;
//          case 'o':
//         cout<<"It is vowel"<<endl;
//         break;
//          case 'u':
//         cout<<"It is vowel"<<endl;
//         break;
//         default:
//         cout<<"It is a Consonent"<<endl;
//         break;

        
//     }
//     return 0;
// }


// WAP to make a calculator

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,result;
//     cout<<"Enter two numbers :- "<<endl;
//     cin>>num1>>num2;
//     cout<<"Enter the Operator (+ , - , * , / ): "<<endl;
//     char op;
//     cin>>op;
//     switch (op)
//     {
//     case '+':
//         result=num1+num2;
//         cout<<"Result = "<<result;
//         break;
//     case '-':
//         result=num1-num2;
//         cout<<"Result = "<<result;
//         break;
//     case '*':
//         result=num1*num2;
//         cout<<"Result = "<<result;
//         break;
//     case '/':
//         result=num1/num2;
//         cout<<"Result = "<<result;
//         break;
    
//     default:
//         cout<<"Enter a valid Operator :"<<endl;
//         break;
//     }
//     return 0;
// }


// WAP to check a day

#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter character : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednusday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
    cout<<"Pkease Enter a Valid Day : ";
        break;
    }
    return 0;
}