#include<iostream>
using namespace std;
void printPrime(int a,int b){
    for(int n=a;n<=b;n++){
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if(i==n){
            cout<<n<<" ";
        }
    }
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    
    printPrime(a,b);
    return 0;
}