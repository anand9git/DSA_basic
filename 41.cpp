#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to check if one string is rotation of other or not.
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    
    string sn = s + s;
    if (sn.find(s2) != string::npos) {
        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
    return 0;
}