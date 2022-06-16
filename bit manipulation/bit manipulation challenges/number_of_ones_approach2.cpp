#include<bits/stdc++.h>
using namespace std;

int countones(int n){
    int count=0;
    while(n>0){
        if(n& (1<<0)!=0){
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