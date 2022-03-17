#include<iostream>
using namespace std;
int main(){

    float a,b;
    char op;

    cin>>a>>op>>b;

    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    
    case '-':
        cout<<a-b;
        break;

    case '*':
        cout<<a*b;
        break;

    case '/':
        cout<<a/b;
        break;
    
    case '%':
        cout<<(a*b)/100;
        break;
        
    default:
        cout<<"I am still learning more!";
        break;
    }
    
    return 0;
}