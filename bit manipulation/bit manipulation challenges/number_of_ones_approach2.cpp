#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos){
    return ((n&(1<<pos)) !=0);
}
int countones(int n){
    int count=0;
    while(n>0){
        if((getBit(n,0))==1){
            count++;
        }
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