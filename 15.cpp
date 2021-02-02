#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int l, int h){
    int ans = 0;
    int m = ((l+h)/2) + 1;
    int i = l;
    int j = m;
    int k = l;
    while(i<=m-1 && j<=h){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            ans += (m - i);
        }
    }
    while(i<=m-1){
        temp[k++] = arr[i++];
    }
    while(j<=h){
        temp[k++] = arr[j++];
    }
    for(int i=l;i<=h;i++){
        arr[i] = temp[i];
    }
    return ans;
}

int f(int arr[], int temp[], int l, int h){
    int m, ans = 0;
    if(h>l){
        int m = (l+h)/2;
        ans += f(arr, temp, l, m);
        ans += f(arr, temp, m+1, h);
        ans += merge(arr, temp, l, h);
    }
    return ans;
}

int inversion(int arr[], int n){
    int temp[n];
    return f(arr, temp, 0, n-1);
}


int main(){
    //program to find inversion count.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<inversion(arr, n);
    return 0;
}