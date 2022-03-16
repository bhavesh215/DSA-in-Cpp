#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;

    while(n>0){
        sum+=n;
        cout<<"Enter another number: ";
        cin>>n;
    }
    
    cout<<sum;
    return 0;
}