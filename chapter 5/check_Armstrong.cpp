#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int duplicate=n,arms=0;

    while(n>0){
        int r=n%10;
        arms +=r*r*r;
        n/=10;
       
    }

    if(arms==duplicate){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not";
    }
    return 0;
}