#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibbonacci(n-1)+fibbonacci(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fibbonacci(n);
    return 0;
}