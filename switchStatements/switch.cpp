#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter a character:  ";
    cin>>ch;

    switch (ch)
    {
    case 'A':
        cout<<"Hello Bhavesh ";
        break;
    
    case 'B':
        cout<<"नमस्ते भावेश ";
        break;
    
    case 'C':
        cout<<"Hola Bhavesh ";
        break;
    
    case 'D':
        cout<<"Ciao Bhavesh ";
        break;
    
    case 'E':
        cout<<"Salute Bhavesh ";
        break;
    
    default:
        cout<<"I am still learning more ";
        break;
    }
    return 0;
}