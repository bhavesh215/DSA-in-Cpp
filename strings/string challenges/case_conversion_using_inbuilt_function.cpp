#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<" ";
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;
    return 0;
}