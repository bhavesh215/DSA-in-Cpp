#include<iostream>
using namespace std;
void fibonnaci(int n){
    int t1=0,t2=1;
    int tn;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        tn=t1+t2;
        t1=t2;
        t2=tn;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fibonnaci(n);
}