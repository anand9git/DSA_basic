#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find common elements in 3 arrays if arrays are sorted.
    int n1;
    cin>>n1;
    int arr[n1];
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int n3;
    cin>>n3;
    int arr3[n1];
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    int i=0, j=0, k=0;
    vector<int> ans;
    while(i<n1 && j<n2 && k<n3){
        if(arr[i]==arr2[j] && arr2[j]==arr3[k]){
            ans.push_back(arr[i]);
            i++;j++;k++;
        }else if(arr[i]<arr2[j]){
            i++;
        }else if(arr[j]<arr3[k]){
            j++;
        }else{
            k++;
        }
    }
    return 0;
}