#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return Sum(n-1)+n;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}