#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,20,30};
    cout<<*a<<endl;

    // Using a new pointer variable 
    int *aptr=a;
    for(int i=0;i<3;i++){
        cout<<*aptr++<<" ";
    } 

    // Without using a new pointer variable
    for(int i=0;i<3;i++){
        cout<<*(a+i)<<" ";
    }
    return 0;
}