#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int revNumber=0;

    while(n>0){
        int r=n%10;
        n/=10;
        revNumber=revNumber*10+r;
    }
    cout<<revNumber;
    return 0;
}