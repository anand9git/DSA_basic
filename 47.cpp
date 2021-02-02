#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find longest repeating subsequence.
    string s;
    cin>>s;
    int n = s.length();
    int arr[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++) arr[i][j] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i-1]==s[j-1] && i!=j){
                arr[i][j] = 1 + arr[i-1][j-1];
            }else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }
    cout<<arr[n][n]<<endl;
    return 0;
}