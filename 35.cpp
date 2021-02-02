#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to rotate matrix by 90deg without extra space.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][j];
        }
    }
    return 0;
}