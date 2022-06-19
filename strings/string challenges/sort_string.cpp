#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    sort(s.begin() , s.end(), greater<int>());
    cout<<s<<endl;
}