#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch=='a' || ch=='A'){
        cout<<"Character is a vowel";
    }
    else if(ch=='e' || ch=='E'){
        cout<<"Character is a vowel";
    }
    else if(ch=='i' || ch=='I'){
        cout<<"Character is a vowel";
    }
    else if(ch=='o' || ch=='O'){
        cout<<"Character is a vowel";
    }
    else if(ch=='u' || ch=='U'){
        cout<<"Character is a vowel";
    }
    else{
        cout<<"Character is a consonant";
    }
    return 0;
}