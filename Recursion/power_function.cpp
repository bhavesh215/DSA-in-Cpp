#include<bits/stdc++.h>
using namespace std;
int power(int p,int q){
    if(q==0){
        return 1;
    }
    return p*power(p,q-1);
    
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
}