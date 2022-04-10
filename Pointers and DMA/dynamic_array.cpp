#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ptr;
    ptr=new int[n];
    for(int i=0;i<n;i++){
        cin>>*ptr;
        ptr++;
    }
    ptr-=n;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    delete ptr;
    return 0;
}