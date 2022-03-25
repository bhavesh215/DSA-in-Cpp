// Functions : Function are formed and used to perform a specific task 

#include<iostream>
using namespace std;
int add(int a ,int b){
    int sumof=a+b;
    return sumof;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int sum=add(n1,n2);
    cout<<sum+add(0,n2)<<endl;
    return 0;
}