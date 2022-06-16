#include<bits/stdc++.h>
using namespace std;
void numberofones(int n){
    int count=0,noi=0;
    while(n>0){
        n = n &n-1;
        count++;
        noi++;
    }
    cout<<count<<" "<<noi<<"\n";
    return;
}
int main(){
    int n;
    cin>>n;

    numberofones(n);
    return 0;
}