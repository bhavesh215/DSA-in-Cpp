#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"Enter Your Savings: ";
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha";
        }
        else{
            cout<<"Shopping with Neha";
        }
    }
    else if(savings>2000 && savings<5000){
        cout<<"You can go with Rashmi";
    }
    else{
        cout<<"You can go  with Friends";
    }


    return 0;
}