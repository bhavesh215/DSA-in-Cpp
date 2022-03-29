#include<bits/stdc++.h>
using namespace std;
void bintodeci(int n){
    int deci=0;
    int x=1;
    while(n>0){
        int r=n%10;
        deci+=x*r;
        x*=2;
        n/=10;
    }
    cout<<deci;
    return;
}
int main(){
    int n;
    cout<<"Enter the number which you want to convert from binary to decimal : ";
    cin>>n;
    bintodeci(n);
    return 0;
}