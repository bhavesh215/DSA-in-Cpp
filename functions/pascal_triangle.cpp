#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number of rows in pascal triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int ncr=factorial(i-1)/(factorial(j-1)*factorial(i-j));
            cout<<ncr<<" ";
        }
        cout<<endl;
    }
    return 0;
}