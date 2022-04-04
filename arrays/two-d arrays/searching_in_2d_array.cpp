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
    int key;
    cin>>key;
    for(int p=0;p<m;p++){
        for(int q=0;q<n;q++){
            if(key==a[p][q]){
                cout<<"key is present at "<<p<<"th row and "<<q<<"th column";
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}