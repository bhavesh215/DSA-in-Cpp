#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    char ch[n+1];
    
    cin.getline(ch,n);
    cin.ignore();

    int i=0;
    int currlen=0,maxlen=INT_MIN;

    while(1){
        if(ch[i]==' ' || ch[i]=='\0'){
            maxlen=max(currlen,maxlen);
            currlen=0;
        }
        else{
            currlen++;
        }
        
        if(ch[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<maxlen<<endl;
    return 0;
}