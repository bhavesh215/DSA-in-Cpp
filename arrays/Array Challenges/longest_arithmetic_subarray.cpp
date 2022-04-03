#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int currl=2,maxl=INT_MIN;
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]==pd){
            currl++;
        }
        else{
            currl=2;
            pd=a[i]-a[i-1];
        }
        maxl=max(maxl,currl);
    }
    cout<<maxl;
    return 0;
}