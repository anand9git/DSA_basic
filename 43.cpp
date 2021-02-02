#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to check if binary string can be split into substrings with equal 0 and 1's.
    string s;
    cin>>s;
    int cnt0 = 0, cnt1 = 0;
    int cnt = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            cnt0++;
        }else{
            cnt1++;
        }
        if(cnt0==cnt1)cnt++;
    }
    if(cnt0!=cnt1){
        cout<<"NO"<<endl;
    }else{
        cout<<cnt;
    }
    return 0;
}
