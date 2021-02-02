#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to check if one string is valid shuffle of two other or not.
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string sr;
    cin>>sr;
    int i = 0, j = 0;
    int f = 0;
    for(int k=0;k<sr.length();k++){
        if (i < s1.length() && s1[i] == sr[k])
            i++;
        else if (j < s2.length() && s2[j] == sr[k])
            j++;
        else {
            f = 1;
            cout<<"False"<<endl;
        }  
    }
    if(f==0) cout<<"True"<<endl;
    return 0;
}