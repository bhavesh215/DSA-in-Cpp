// Pointers are variables that stores the address of other variables
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *aptr=&a;
    cout<<&a<<endl;
    cout<<*aptr<<endl;
    *aptr=*aptr*2;
    cout<<a<<endl;
    return 0;
}