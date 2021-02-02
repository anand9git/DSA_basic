#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortneg(int arr[], int n){
    int i=0, j=0;
    for(;i<n;i++){
        if(arr[i]<0){
            swap(&arr[i], &arr[j]);
            j++;
        }
    }
}

int main(){
    //program to separate positive and negative.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortneg(arr, n);
    return 0;
}