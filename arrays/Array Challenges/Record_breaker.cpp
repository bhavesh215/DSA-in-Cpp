#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=-1;
    int mx=INT_MIN,rbd=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            rbd++;
        }
        mx=max(mx,a[i]);
    }
    cout<<"Number of Record Breaking Days are "<<rbd;
    return 0;
}