#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    
    switch(ch)
    {
        case 'A':
            cout<<ch<<" is vowel";
            break;

        case 'E':
            cout<<ch<<" is vowel";
            break;

        case 'I':
            cout<<ch<<" is vowel";
            break;

        case 'O':
            cout<<ch<<" is vowel";
            break;

        case 'U':
            cout<<ch<<" is vowel";
            break;

        default:
            cout<<ch<<" is consonant";
            break;
    }

    return 0;

}