#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,S;
    cin>>n>>S;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,st=-1,en=-1,cursum=0;
    while(j<n && cursum+a[j]<=S){
        cursum+=a[j];
        j++;
    }
    if(S==cursum){
        cout<<i+1<<" "<<j;
        return 0;
    }
    cursum+=a[j];
    while(cursum>S){
        cursum-=a[i];
        i++;
    }
    if(cursum==S){
        st=i+1;
        en=j+1;
    }
    cout<<st<<" "<<en;
    return 0;
}