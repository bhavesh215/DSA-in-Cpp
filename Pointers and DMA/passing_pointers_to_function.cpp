#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    return 0;
}