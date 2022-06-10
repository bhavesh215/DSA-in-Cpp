#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cursum=0,maxSum=INT_MIN;
    int i=0;
    while(i<n){
        cursum+=a[i];
        if(cursum<0){
            cursum=0;
        }
        maxSum=max(cursum,maxSum);
        i++;
    }
    cout<<maxSum<<endl;
    return 0;
}