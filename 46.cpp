#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find edit distance between two strings.
    string s;
    cin>>s;
    string t;
    cin>>t;
    int m = s.length();
    int n = t.length();
    int arr[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                arr[i][j] = j;
            }else if(j==0){
                arr[i][j] = i;
            }else if(s[i]==t[j]){
                arr[i][j] = arr[i-1][j-1];
            }
            else{
                arr[i][j] = min(arr[i-1][j-1], min(arr[i-1][j], arr[i][j-1]));
                arr[i][j] += 1;
            }
        }
    }
    cout<<arr[m][n]<<endl;
    return 0;
}