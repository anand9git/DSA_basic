#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find kth smallest element in row wise sorted matrix.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int k;
    cin>>k;
    int sm = INT_MAX, bg = INT_MIN;
    for(int i=0;i<m;i++){
        sm = min(sm, arr[i][0]);
        bg = max(bg, arr[i][n-1]);
    }
    int req = k;
    while(sm<bg){
        int mid = (sm + bg)/2;
        int x = 0;
        for(int i=0;i<m;i++){
            x += upper_bound(arr[i], arr[i] + n, mid) - arr[i];
        }
        if(x<req)sm = mid + 1;
        else bg = mid;
    }
    cout<<sm;
    return 0;
}