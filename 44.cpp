#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string countandsay(int n){
    if(n==1)return "1";
    string ans=countandsay(n-1),temp="";
    for(int i=0;i<ans.length();i++){
        int count=1;
        while( i+1<ans.length() && ans[i]==ans[i+1]){i++;count++;}
        temp+=count+'0';
        temp+=ans[i];
    }
    return temp;
}
int main(){
    //program to solve count and say problem.
    int n;
    cin>>n;
    string s = countandsay(n);
    cout<<s<<endl;
    return 0;
}