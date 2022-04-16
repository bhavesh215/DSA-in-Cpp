#include<bits/stdc++.h>
using namespace std;
int setBit(int n,int pos){
    return (n | (1<<pos));
}
int main(){
    int n,position;
    cin>>n>>position;
    cout<<setBit(n,position);
    return 0;
}