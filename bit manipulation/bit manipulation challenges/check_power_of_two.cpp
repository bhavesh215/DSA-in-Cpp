#include<bits/stdc++.h>
using namespace std;
bool poweroftwo(int n){
    return n && !(n & (n-1));
}
int main(){
    int n;
    cin>>n;
    if(poweroftwo(n)){
        cout<<"Yes "<<n<<" is a power of 2"<<endl;
        return 0;
    }
    else{
        cout<<"Not "<<endl;
        return 0;
    }
}