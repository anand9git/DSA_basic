#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find min number of swaps to bring elements <= k together.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int cnt = 0;
    for(int i=0;i<n;i++){if(arr[i]<=k)cnt++;}
    int b = 0;
    for(int i=0;i<cnt;i++){if(arr[i]>k)b++;}
    int ans = b;
    for(int i=0, j=cnt;j<n;i++, j++){
        if(arr[i]>k)b--;
        if(arr[j]>k)b++;
        ans = min(ans, b);
    }
    cout<<ans<<endl;
    return 0;
}
    