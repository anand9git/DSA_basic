#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to largest sum of contiguous array. (Kadane's Algo)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    int y = arr[0];
    for(int i=1;i<n;i++){
        y = max(y + arr[i], arr[i]);
        ans = max(ans, y);
    }
    cout<<ans;
    return 0;
}