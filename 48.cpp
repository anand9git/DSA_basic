#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void write(string s, int n){
    int i=0;
    while(n>0){
        if(n&1){
            cout<<s[i];
        }else{
            cout<<"";
        }
        i++;
        n = n>>1;
    }
    return;
}


int main(){
    //program to print all subsequence of a string.
    string s;
    cin>>s;
    int n = s.length();
    int r = (1<<n);
    for(int i=0;i<r;i++){
        write(s, i);
        cout<<endl;
    }    
    return 0;
}

