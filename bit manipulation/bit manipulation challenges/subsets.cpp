#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(getBit(i,j)==1){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    return 0;
}