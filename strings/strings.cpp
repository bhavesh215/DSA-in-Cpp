#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string str;
    
    string s1= "fam";
    string s2="ily";

    /*s1.append(s2)
    cout<<s1<<endl;*/
    cout<<s1<<" "<<s2<<" "<<s1+s2<<endl;

    cout<<s1[1]<<"\n";

    string abc="bhosdike";
    abc.clear();
    cout<<abc<<endl;
    cout<<s1.compare(s2)<<endl;
    cout<<s1.empty();

    string s3="xwvutsrqponml";
    sort(s3.begin(),s3.end());

    cout<<s3;
    return 0;
}