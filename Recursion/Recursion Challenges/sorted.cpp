#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n){
    if(n==1){
        return 1;
    }
    return a[0]<a[1] && sorted(a+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sorted(a,n)<<"\n";
    return 0;
}