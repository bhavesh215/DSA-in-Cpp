#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    ptr=new int;
    cin>>*ptr;
    cout<<*ptr;
    delete ptr;
    return 0;
}