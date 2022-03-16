#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for which you want to write it's multiplication table: ";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}