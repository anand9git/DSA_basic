#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find if array is subset of another array.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)cin>>arr2[i];
    sort(arr, arr+n);
    sort(arr2, arr2+m);
    int i=0, j=0;
    while(i<n && j<m){
        if(arr[i]==arr2[j]){
            i++;
            j++;
        }else if(arr[i]<arr2[j]){
            i++;
        }else{
            break;
        }
    }
    if(j<m) cout<<"false"<<endl;
    else cout<<"true"<<endl;
    return 0;
}