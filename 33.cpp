#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find median in row wise sorted matrix.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int mn = INT_MAX, mx = INT_MIN;
    for(int i=0;i<m;i++){
        mn = min(mn, arr[i][0]);
        mx = max(mx, arr[i][n-1]);
    }
    int req = (m * n + 1) / 2; 
    while(mn<mx){
        int mid = (mx + mn)/2;
        int p = 0;
        for(int i=0;i<m;i++){
            p += upper_bound(arr[i], arr[i] + n, mid) - arr[i];
        }
        if(p<req) mn = mid + 1;
        else mx = mid;
    }
    cout<<mn<<endl;
    return 0;
}