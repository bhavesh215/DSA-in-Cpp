#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}
int addBinary(int a,int b){
    int ans=0;
    int previousCarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+previousCarry;
            previousCarry=0;
        }
        else if((a%2==0 && b%2!=0)|| (a%2!=0 && b%2==0)){
            if(previousCarry==1){
                ans=ans*10+0;
                previousCarry=1;
            }
            else{
                ans=ans*10+1;
                previousCarry=0;
            }
        }
        else{
            ans=ans*10+previousCarry;
            previousCarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(previousCarry==1){
            if(a%2==0){
                ans=ans*10+1;
                previousCarry=0;
            }
            else{
                ans=ans*10+0;
                previousCarry=1;
            }
        }
        else{
            ans=ans*10+a%2;
        }
        a/=10;
    }
    while(b>0){
        if(previousCarry==1){
            if(b%2==0){
                ans=ans*10+1;
                previousCarry=0;
            }
            else{
                ans=ans*10+0;
                previousCarry=1;
            }
        }
        else{
            ans=ans*10+b%2;
        }
        b/=10;
    }
    if(previousCarry==1){
        ans=ans*10+1;
    }
    ans= reverse(ans) ;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b);
    return 0;
}