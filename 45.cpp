#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find longest plaindromic substring in O(n2) time.
    string s;
    cin>>s;
    int si = 0;
    int m = 1;
    int low = 0, hi = 0;
    for(int i=1;i<s.length();i++){
        low = i-1;
        hi = i;
        while(low>=0 && hi<s.length() && s[low]==s[hi]){
            if(hi - low + 1 > m){
                m = hi - low + 1;
                si = low;
            }
            low--;
            hi--;

        }
        low = i-1;
        hi = i+1;
        while(low>=0 && hi<s.length() && s[low]==s[hi]){
            if(hi - low + 1 > m){
                m = hi - low + 1;
                si = low;
            }
            low--;
            hi--;
        }
    }
    for(int i=si;i<si+m-1;i++){
        cout<<s[i];
    }
    return 0;
}