#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int rs=0,cs=0,re=m-1,ce=n-1;
    while(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++){
                cout<<a[rs][i]<<" ";
            }
            rs++;
            for(int j=rs;j<=re;j++){
                cout<<a[j][ce]<<" ";
            }
            ce--;
            for(int k=ce;k>=cs;k--){
                cout<<a[re][k]<<" ";
            }
            re--;
            for(int l=re;l>=rs;l--){
                cout<<a[l][cs]<<" ";
            }
            cs++;
    }
    return 0;
}