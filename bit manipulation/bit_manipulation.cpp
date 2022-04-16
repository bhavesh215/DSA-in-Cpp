#include<bits/stdc++.h>
using namespace std;
int updateBit(int n,int pos,int value){
    int p=~(1<<pos);
    n=n&p;
    return (n | (value<<pos));
}
int main(){
    int n,position,value;
    cin>>n>>position>>value;
    cout<<updateBit(n,position,value);
    return 0;
}