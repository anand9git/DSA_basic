#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find common element in all rows of matrix in O(mn) time (one traversal).
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[arr[0][i]] = 1;
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            if(mp[arr[i][j]]==i){
                mp[arr[i][j]] = i + 1;
                if(i==m-1){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }
    cout<<endl;
    return 0;
}