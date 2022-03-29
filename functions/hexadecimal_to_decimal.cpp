#include<bits/stdc++.h>
using namespace std;
int hextodeci(string n){
    int l=n.length();
    int x=1,ans=0;
    for(int i=l-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string n;
    cin>>n;
    cout<<hextodeci(n);
    return 0;
}
