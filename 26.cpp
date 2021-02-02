#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find trapped water in array in heights of buildings are arr[i].
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int l[n];
    int r[n];
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        l[i] = max(m, arr[i]);
    }
    m = INT_MIN;
    for(int i=n-1;i>=0;i--){
        r[i] = max(m, arr[i]);
    }
    for(int i=0;i<n;i++){
        ans += min(l[i], r[i]) - arr[i];
    }
    cout<<ans<<endl;
    return 0;
}