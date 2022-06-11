// This approach is only work when array is sorted
#include<bits/stdc++.h>
using namespace std;
bool pairsum(int a[],int n,int k){
    int low=0,high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<"\n";
            return true;
        }
        else if(a[low]+a[high]<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout<<pairsum(a,n,k);
}