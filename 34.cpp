#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find max dif betw mat(c, d) and mat(a, b) where c>a and d>b in O(mn) time and using extra space.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int ans = INT_MIN;
    int dp[m][n];
    dp[m-1][n-1] = arr[m-1][n-1];
    int mv = arr[m-1][n-1];
    for(int i=n-2;i>=0;i--){
        mv = max(mv, arr[m-1][i]);
        dp[m-1][i] = mv;
    }
    for(int i=m-2;i>=0;i--){
        mv = max(mv, arr[i][n-1]);
        dp[i][n-1] = mv;
    }
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;i>=0;j--){
            ans = max(ans, dp[i+1][j+1] - arr[i][j]);
            dp[i][j] = max(arr[i][j], max(arr[i+1][j], arr[i][j+1]));
        }
    }
    cout<<ans<<endl;
    return 0;
}