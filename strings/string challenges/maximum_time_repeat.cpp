/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int maxl=INT_MIN;
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<s.size();i++){
        a[s[i]-'A']++;
        
    }
    char ans;
    for(int i=0;i<26;i++){
        if(a[i]>maxl){
            maxl=a[i];
            ans=i+'A';
        }
    }

    cout<<maxl<<" "<<ans;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<str.size();i++){
        a[str[i]-'a']++;
    }
    
    char ans='a';
    int maxF=0;

    for(int i=0;i<26;i++){
        if(a[i]>maxF){
            maxF=a[i];
            ans=i+'a';
        }
    }

    cout<<maxF<<" "<<ans;
    return 0;
}