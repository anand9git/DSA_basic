#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to traverse matrix spirally.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    vector<int> ans;
    int x = 0, y = 0;
    while(x<m && y<n){
        for(int i=y;i<n;i++) ans.push_back(arr[x][i]); x++;
        for(int i=x;i<m;i++) ans.push_back(arr[i][n-1]); n--;
        if(x<m){
            for(int i=n-1;i>=y;i--) ans.push_back(arr[m-1][i]);
            m--;
        }
        if(y<n){
            for(int i=m-1;i>=x;i--) ans.push_back(arr[i][y]);
            y++;
        }
    }
    return 0;
}