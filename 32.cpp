#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find first row with max no of 1s if all rows are sorted and contain only 0 and 1 in O(m+n) time.
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int ans = 0;
    int j = n-1;
    for(int i=0;i<m;i++){
        while(j>=0 && arr[i][j]==1){
            j--;
            ans = i;
        }
    }
    if(arr[ans][j+1]==0) cout<<-1;
    cout<<ans<<endl;
    return 0;
}

