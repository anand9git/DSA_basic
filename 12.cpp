#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to merge two arrays in ascending order without extra space.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++) cin>>arr2[i];

    int x = n-1;
    int y = 0;
    for(;x>=0 && y<m;x--, y++){
        if(arr[x]>arr2[y]){
            swap(arr[x], arr2[y]);
        }
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
    return 0;
}