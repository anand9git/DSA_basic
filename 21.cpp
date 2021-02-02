#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find max product subarray.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    int mx = arr[0];
    int mn = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(mx, mn);
        }
        mx =  max(arr[i], arr[i]*mx);
        mn = min(arr[i], arr[i]*mn);
        ans = max(ans, mx);
    }
    cout<<ans;
    return 0;
}