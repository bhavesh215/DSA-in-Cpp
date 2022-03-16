#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"Enter the first side of triangle: ";
    cin>>s1;
    cout<<"Enter the second side of triangle: ";
    cin>>s2;
    cout<<"Enter the third side of triangle: ";
    cin>>s3;
    if(s1==s2 && s1==s3){
        cout<<"Triangle is equilateral";
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"Triangle is isoceles";
    }
    else{
        cout<<"Triangle is scalene";
    }
}