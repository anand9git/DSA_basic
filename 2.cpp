#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find the min ele and max ele in the least number of comparisons
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int gmax, gmin;
    if(n%2){
        gmax = arr[0];
        gmin = arr[0];
        for(int i=1;i<n;i+=2){
            if(i+1<n){
                int mx = max(arr[i], arr[i+1]);
                int mn = min(arr[i], arr[i+1]);
                if(mx>gmax) gmax = mx;
                if(mn<gmin) gmin = mn;
            }
        }
    }else{
        gmax = max(arr[0], arr[1]);
        gmin = min(arr[0], arr[1]);
        for(int i=2;i<n;i+=2){
            if(i+1<n){
                int mx = max(arr[i], arr[i+1]);
                int mn = min(arr[i], arr[i+1]);
                if(mx>gmax) gmax = mx;
                if(mn<gmin) gmin = mn;
            }
        }
    }
    cout<<gmax<<" "<<gmin;
    return 0;
}