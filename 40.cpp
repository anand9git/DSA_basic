#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find all duplicates and their counts.
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++)a[i] = 0;
    for(int i=0;i<s.length();i++)a[s[i]-'a']++;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            char x = (char)('a' + i);
            cout<<x<<" "<<a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}