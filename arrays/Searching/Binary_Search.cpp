#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int n,int k){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    cout<<BinarySearch(a,n,key);
    return 0;
}