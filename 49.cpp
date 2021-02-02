#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void permute(string s, int l, int r){
    if(l==r){cout<<s<<endl;}
    else{
        for(int i=l;i<=r;i++){
            swap(s[i], s[l]);
            permute(s, l+1, r);
            swap(s[i], s[l]);
        }
    }
}
int main(){
    //program to print all permutations of a string.
    string s;
    cin>>s;
    permute(s, 0, s.length()-1);
    return 0;
}