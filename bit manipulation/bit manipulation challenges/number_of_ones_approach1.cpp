#include<bits/stdc++.h>
using namespace std;
int countones(int n){
    int count=0;
    while(n>0){
        int temp=(n&1);
        if(temp==1)
        count++;
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countones(n);
    return 0;
}