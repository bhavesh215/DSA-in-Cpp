#include<bits/stdc++.h>
using namespace std;
int decitooct(int n){
    int x=1,ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int r=n/x;
        ans=ans*10+r;
        n-=r*x;
        x/=8;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number which you want to convert from decimal to octal: ";
    cin>>n;
    cout<<decitooct(n);
    return 0;
}