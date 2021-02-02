#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find all pairs whose sum is equal to a given number.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    map<int, int> m;
    int ans = 0;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        ans += m[k-arr[i]];
        if(k-arr[i]==arr[i]){
            ans--;
        }
    }
    cout<<ans/2;
    return 0;
}
