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

    // Approach with top right element as a base element
    int i=0,j=n-1;
    while(i<m && j>0){
        if(a[i][j]==key){
            cout<<"yes the entered key is present in matrix";
            return 0;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    
    
    // Approach with bottom left element as base element
    int i=m-1,j=0;
    while(i>0 && j<n){
        if(a[i][j]==key){
            cout<<"yes the entered key is present in matrix";
            return 0;
        }
        else if(a[i][j]<key){
            //i++;
            j++;
        }
        else{
            //j--;
            i--;
        }
    }


    cout<<"No the entered key is not present in matrix ";
    return 0;
}