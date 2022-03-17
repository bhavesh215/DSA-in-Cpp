#include<iostream>
using namespace std;
int main(){
    
    int pocketmoney;
    cout<<"Enter your pocketmoney: ";
    cin>>pocketmoney;

    for(int i=1;i<=31;i++){
        
        // Continue Statement : Used to skip to next iteration of loop
        if(i%2==0){
            continue;
        }
        pocketmoney-=500;

        //Break Statement : Used to get out from a loop or to terminate the loop
        if(pocketmoney<=0){
            break;
        }
        cout<<"Today is "<<i<<" So you can go out today"<<endl;
    }

    return 0;
}