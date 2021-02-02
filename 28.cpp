#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find smallest subarray with given sum in On time.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int s = 0, e = 0;
    int sum = 0;
    int ans = INT_MIN;
    while(e<n){
        while(sum<=x && e<n){
            sum += arr[e];
            e++;
        }
        while(sum>x){
            ans = min(ans, e - s);
            sum -= arr[s];
            s++;
        }
    }
    cout<<ans;
    return 0;
}