#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(ch[i]!=ch[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palindrome "<<endl;
    }
    else{
        cout<<"Not";
    }
    return 0;
}