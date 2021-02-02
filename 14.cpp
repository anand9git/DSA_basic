#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find next permutation.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind = -1;
    for(int i=n-1;i>=0;i--){
        if(i-1>=0 && arr[i-1]<arr[i]){
            ind = i-1;
            break;
        }
    }
    if(ind>=0){
        for(int i=n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i], arr[ind]);
                break;
            }
        }
    }
    int j = n-1, i=ind+1;
    while(i<j){
        swap(arr[i], arr[j]);
        j--;
        i++;
    }
    return 0;
}