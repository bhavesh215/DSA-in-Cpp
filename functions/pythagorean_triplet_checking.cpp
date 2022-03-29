#include<bits/stdc++.h>
using namespace std;
void checkpythagorean(int a,int b,int c){
    int p,q,r;
    if(a>b && a>c){
        p=a;
        q=b;
        r=c;
    }
    else if(b>a && b>c){
        p=b;
        q=a;
        r=c;
    }
    else{
        p=c;
        q=a;
        r=b;
    }
    if(p*p==q*q+r*r){
        cout<<"Pythagorean triplet";
        return;
    }
    cout<<"Not";
    return;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    checkpythagorean(a,b,c);
}