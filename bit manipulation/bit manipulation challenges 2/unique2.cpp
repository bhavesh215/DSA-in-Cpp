/*#include<bits/stdc++.h>
using namespace std;
int unique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum^=a[i];
    }
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit= xorsum & 1;
        pos++;
        xorsum=xorsum>>1;    
    }
    for()
}
int main(){
    
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos){
    return ((n&(1<<pos)) !=0);
}
void twounique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int tempxor=xorsum;
    int setbit=0,pos=0;
    while(setbit!=1){
        setbit= xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(getBit(a[i],pos-1)){
            newxor=newxor^a[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
    return ;
}
int main(){
    int a[]={1,4,8,2,9,8,4,1};
    twounique(a,8);
    return 0;
}