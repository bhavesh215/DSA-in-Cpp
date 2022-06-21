#include<bits/stdc++.h>
using namespace std;
int lastoccurence(int a[],int n,int i,int k,int index){
    if(i==n){
        return index;
    }
    if(a[i]==k){
        index=max(index,i);
    }
    return lastoccurence(a,n,i+1,k,index);
}
int main(){
    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<lastoccurence(a,n,0,k,INT_MIN);
    return 0;
}