#include<iostream>
using namespace std;
int main(){
    
    // Printing numbers from 1 to 100 which are not divisible by 3
    for(int i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<" ";
    }

    return 0;
}