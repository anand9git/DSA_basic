#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find element that appears more than n/k times.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    map<int, int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(m[arr[i]]>=(n/k))ans++;
    }
    cout<<ans;
    return 0;
}