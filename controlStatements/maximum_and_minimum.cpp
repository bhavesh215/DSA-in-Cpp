#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    if(a>b){
        cout<<"Maximum among a and b is "<<a<<endl;
        cout<<"Minimum among a and b is "<<b<<endl;
    }
    else{
        cout<<"Maximum among a and b is "<<b<<endl;
        cout<<"Minimum among a and b is "<<a<<endl;
    }
    return 0;
}