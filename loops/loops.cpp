#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int sum=0;

    // for loop
    /* for(int i=1;i<=n;i++){
        sum+=i;
    } */

    // while loop
    /* int i=0;
    while(i<=n){
        sum+=i;
        i++;
    } */

    // do while loop
    int i=0;
    do{
        sum+=i;
        i++;
    }
    while(i<=n);


    cout<<"Sum of natural number till "<< n<<" is "<<sum;
    return 0;
}