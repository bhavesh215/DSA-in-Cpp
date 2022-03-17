#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is composite";
            break;
        }
    }

    if(i==n){
        cout<<n<<" is prime";
    }

    return 0;
}