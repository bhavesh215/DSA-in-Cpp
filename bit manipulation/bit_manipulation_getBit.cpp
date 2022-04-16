#include<bits/stdc++.h>
using namespace std;
int getBit(int n , int position){
    return ((n & (1<<position)) !=0);
}
int main(){
    int n,position;
    cin>>n>>position;
    cout<<getBit(n,position);
    return 0;
}