#include<bits/stdc++.h>
using namespace std;
string decitohex(int n){
    int x=1;
    string ans = "";
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int r=n/x;
        if(r<=9){
            ans+=to_string(r);
        }
        else if(r>=10 && r<=15){
            char c='A'+r-10;
            ans.push_back(c);
        }
        n-=r*x;
        x/=16;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the numer which you want to convert from decimal to hexadecimal: ";
    cin>>n;
    cout<<decitohex(n);
    return 0;
}