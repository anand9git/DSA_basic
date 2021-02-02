#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to check if a string is palindrome or not.
    string s;
    cin>>s;
    int b = 0;
    int e = s.length() - 1;
    int f = 0;
    while(b<e){
        if(s[b]==s[e]){
            b++;
            e--;
        }else{
            f = 1;
            break;
        }
    }
    if(f==1) cout<<"NO"<<endl;
    cout<<"YES"<<endl;
    return 0;
}
