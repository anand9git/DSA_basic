#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int median(int arr[], int n) { 
    if (n%2 == 0) 
        return (arr[n/2] + arr[n/2-1])/2; 
    else
        return arr[n/2]; 
} 
int med(int arr[], int arr2[], int n){
    if (n == 1) 
        return (arr[0] + arr2[0])/2; 
    if (n == 2) 
        return (max(arr[0], arr2[0]) + min(arr[1], arr2[1])) / 2;

    int m1 = median(arr, n);
    int m2 = median(arr2, n);

    if(m1==m2) return m1;
    else if(m1<m2){
        if(n%2==0) return med(arr + n/2 -1, arr2, n/2 + 1);
        else return med(arr + n/2, arr2, n/2);
    }else{
        if(n%2==0) return med(arr, arr2 + n/2 - 1, n/2 + 1);
        else return med(arr, arr2 + n/2, n/2);
    }
}
int main(){
    //program to find median of two sorted arrays.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++)cin>>arr2[i];
    cout<<med(arr, arr2, n);
    return 0;
}
    