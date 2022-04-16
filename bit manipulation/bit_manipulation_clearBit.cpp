#include<bits/stdc++.h>
using namespace std;
int clearBit(int n,int position){
    int p=1<<position;
    return n & (~p);
}
int main(){
    int n,position;
    cin>>n>>position;
    cout<<clearBit(n,position);
    return 0;
}