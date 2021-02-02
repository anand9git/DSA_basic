#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool dicti(string s, vector<string> dict){
    for(int i=0;i<dict.size();i++){
        if(s==dict[i]){
            return true;
        }
    }
    return false;
}

bool sol(string s, vector<string> dict){
    int len = s.length();
    if(len == 0)  return true; 
    for(int i=1;i<=len;i++){
        if(dicti(s.substr(0, i), dict) && sol(s.substr(i, len - i), dict)) return true;
    }
    return false;
}

int main(){
    //word break problem.
    string s;
    cin>>s;
    vector<string> dict;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        dict.push_back(t);
    }
    cout<<sol(s, dict)<<endl;
    return 0;
}