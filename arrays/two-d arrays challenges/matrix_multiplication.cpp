#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter order of first matrix: ";
    cin>>n1>>n2;
    int a[n1][n2];
    cout<<"Enter elements of first matrix"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a[i][j];
        }
    }
    int n3,n4;
    cout<<"Enter order of second matrix: ";
    cin>>n3>>n4;
    int b[n3][n4];
    cout<<"Enter elements of second matrix"<<endl;
    for(int i=0;i<n3;i++){
        for(int j=0;j<n4;j++){
            cin>>b[i][j];
        }
    }
    if(n2==n3){
        int c[n1][n4];
        for(int i=0;i<n1;i++){
            for(int j=0;j<n4;j++){
                c[i][j]=0;
            }
        }
        for(int i=0;i<n1;i++){
            for(int k=0;k<n4;k++){
                for(int j=0;j<n2;j++){
                    c[i][k]+=a[i][j]*b[j][k];
                }
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<n4;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    else{
        cout<<"multipication is not possible";
        return 0;
    }
    return 0;
}