#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to reverse a string.
    string s;
    cin>>s;
    int b = 0;
    int e = s.length() - 1;
    while(b<e){
        char tmp = s[b];
        s[b] = s[e];
        s[e] = tmp;
        b++;
        e--;
    }
    cout<<s;
    return 0;
}