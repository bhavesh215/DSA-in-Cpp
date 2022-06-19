#include<bits/stdc++.h>
using namespace std;
string lowercase(string s){
    for(int i=0;i<s.size();i++){
        int p=s[i];
        if(p>=65 && p<=90){
            s[i]+=32;
        }
        else{
            continue;
        }
    }
    return s;
}
string uppercase(string s){
    for(int i=0;i<s.size();i++){
        int p=s[i];
        if(p>=97 && p<=122){
            s[i]-=32;
        }
        else{
            continue;
        }
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    cout<<lowercase(s)<<endl;
    cout<<uppercase(s);
    return 0;
}