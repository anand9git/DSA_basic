#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r){
    int x = arr[r], j = l;
    for(int i=l;i<=r-1;i++){
        if(arr[i]<x){
            swap(&arr[i], &arr[j]);
            j++;
        }
    }
    swap(&arr[j], &arr[r]);
    return j;
}

int randompivot(int arr[], int l, int r){
    int n = r-l+1;
    int piv = rand()%n;
    swap(&arr[l+piv], &arr[r]);
    return partition(arr, l, r);
}

int ksmall(int arr[], int l, int r, int k){
    if(k>0 && k <= r-l+1){
        int pos = randompivot(arr, l, r);
        
        if(pos-l==k-1) return arr[pos];

        else if(pos-l>k-1) return ksmall(arr, l, pos-1, k);

        else return ksmall(arr, pos+1, r, k - (pos-l+1));
    }
    return INT_MAX;
}

int main(){
    //program to find the kth smallest element in On time.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int l, r;
    cin>>l>>r;
    cout<<ksmall(arr, l, r, k);
    return 0;
    
}