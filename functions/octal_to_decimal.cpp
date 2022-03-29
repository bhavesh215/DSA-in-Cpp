#include<bits/stdc++.h>
using namespace std;
int octtodeci(int n){
    int deci=0,x=1;
    while(n>0){
        int y=n%10;
        deci+=x*y;
        x*=8;
        n/=10;
    }
    return deci;
}
int main(){
    int n;
    cout<<"Enter the number which you want to convert octal to decimal: ";
    cin>>n;
    cout<<octtodeci(n);
    return 0;
}