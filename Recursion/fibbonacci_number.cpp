/*#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibbonacci(n-1)+fibbonacci(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fibbonacci(n);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}