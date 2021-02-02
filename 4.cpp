#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int arr[], int n){
    int s = 0, e = n-1, i = 0;
    while(i<=e){
        if(arr[i]==1){
            i++;
            continue;
        }
        if(arr[i]==0){
            swap(&arr[s++], &arr[i++]);
            continue;
        }
        if(arr[i]==2){
            swap(&arr[e--], &arr[i]);
            continue;
        }
    }
}

int main(){
    //program to sort 0, 1, 2 in On time.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr, n);
    return 0;
}