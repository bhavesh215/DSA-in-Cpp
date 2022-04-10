#include<bits/stdc++.h>
using namespace std;
int main(){
    int p=14;
    int *ptr=&p;
    cout<<ptr<<endl;

    int **q=&ptr;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}