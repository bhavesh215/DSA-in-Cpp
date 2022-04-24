#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int nmax=max(a,b),nmin=min(a,b);
    while(nmax%nmin!=0){
        int temp=nmax%nmin;
        nmax=nmin;
        nmin=temp;
    }
    return nmin;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}