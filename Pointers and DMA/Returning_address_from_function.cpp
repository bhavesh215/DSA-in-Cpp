#include<bits/stdc++.h>
int*fun(int *p,int *q){
    return *p>*q?p:q;
}
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int *p=fun(&a,&b);
    cout<<*p<<endl;
    return 0;
}
