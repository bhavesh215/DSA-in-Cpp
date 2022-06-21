#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int a[],int n,int i,int k){
    if(i==n){
        return -1;
    }
    if(a[i]==k){
        return i;
    }
    return firstoccurence(a,n,i+1,k);

}
/*int lastoccurence(int a[],int n,int i,int k){
    if(i<0){
        return -1;
    }
    if(a[i]==k){
        return i;
    }
    return lastoccurence(a,n,i-1,k);
}*/
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<firstoccurence(a,n,0,k);
    return 0;
}