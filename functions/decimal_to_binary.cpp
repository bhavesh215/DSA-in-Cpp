#include<bits/stdc++.h>
using namespace std;
int decitobin(int n){
    int x=1,ans=0;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int r=n/x;
        ans=ans*10+r;
        n-=r*x;
        x/=2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number which you want to convert from decimal to binary: ";
    cin>>n;
    cout<<decitobin(n);
    return 0;
}