#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find if subarray exists with sum 0.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = false;
    map<int, int> m;
    m[0]++;
    int sum = arr[0];
    m[sum]++;
    for(int i=1;i<n;i++){
        sum += arr[i];
        if(m[sum]==1){ans = true; break;}
        m[sum]++;
    }
    cout<<ans;
    return 0;
}
