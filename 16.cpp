#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find max profit if array represents stock prices on each day.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int buy = INT_MAX;
    int ans = 0;
    for(int i=0;i<n;i++){
        buy = min(buy, arr[i]);
        ans = max(ans, arr[i] - buy);
    }
    cout<<ans<<endl;
    return 0;
}