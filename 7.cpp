#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to cyclically rotate an array.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    arr[0] = arr[n-1];
    for(int i=1;i<n;i++){
        int ntemp = arr[i];
        arr[i] = temp;
        temp = ntemp;
    }
    return 0;
}