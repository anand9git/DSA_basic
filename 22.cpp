#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find longest increasing subsequence.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            int j = arr[i]+1;
            while(s.find(j)!=s.end()){
                j++;
            }
            ans = max(ans, j-arr[i]);
        }
    }
    cout<<ans;
    return 0;
}