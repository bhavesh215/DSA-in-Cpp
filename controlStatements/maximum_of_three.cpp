#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    cout<<"Enter your third number: ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"maximum among a,b and c is a = "<<a<<endl;
        }
        else{
            cout<<"maximum among a,b and c is c = "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"maximum among a,b and c is b = "<<b<<endl;
        }
        else{
            cout<<"maximum among a,b and c is c = "<<c<<endl;
        }
    }
    return 0;
}