#include<iostream>
using namespace std;
int main(){

    int n=3;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3*n;j++){
            int p=i+j;
            if(p%4==0 || (p%2==0 && i==2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}