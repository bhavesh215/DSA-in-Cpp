#include<bits/stdc++.h>
using namespace std;
void printnumbers(int n){
    if(n<=0){
        return;
    }
    cout<<n<<endl;
    printnumbers(n-1);
}
int main(){
    int n;
    cin>>n;
    printnumbers(n);
    return 0;
}