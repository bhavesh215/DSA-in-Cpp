/*#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum^=arr[i];
    }
    return xorsum;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<unique(a,n);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    return ans;
}
int main(){
    int a[7]={1,2,3,4,3,2,1};
    cout<<unique(a,7);
    return 0;
}