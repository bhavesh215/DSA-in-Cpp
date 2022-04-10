#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};
    int *ptr[5];
    for(int i=0;i<5;i++){
        ptr[i]=&a[i];
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr[i]<<" ";
    }
    return 0;
}