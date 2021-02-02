#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to get three way partition in the range (a, b)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a, b;
    cin>>a>>b;
    int i=0, s = 0, e = n-1;
    while(i<=e){
        if(arr[i]<a){
            swap(arr[i], arr[s]);
            i++;
            s++;
        }else if(arr[i]>b){
            swap(arr[i], arr[e]);
            e--;
        }else{
            i++;
        }
    }
    return 0;
}