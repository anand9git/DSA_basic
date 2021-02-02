#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find min difference when k is added or subtracted from every element.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];
    int mx = arr[n-1] - k;
    int mn = arr[0] + k;
    if(mn>mx) swap(mx, mn);
    for(int i=1;i<n-1;i++){
        int ad = arr[i] + k;
        int su = arr[i] - k;
        if(ad<mx || su>mn) continue;
        if(ad-mn<mx-su){
            mx = ad;
        }else{
            mn = su;
        }
    }
    cout<<min(ans, mx - mn)<<endl;
    return 0;
}