#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int setBit(int n,int pos){
    return n|(1<<pos);
}
void unique(int a[],int n){
    int freq[64];
    int result=0;
    for(int i=0;i<64;i++){
        freq[i]=0;
    }
    for(int i=0;i<64;i++){
        for(int j=0;j<n;j++){
            if(getBit(a[j],i)){
                freq[i]+=1;
            }
        }
        if(freq[i]%3!=0){
            result=setBit(result,i);
        }
    }
    
    cout<<result<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unique(a,n);

    return 0;
}