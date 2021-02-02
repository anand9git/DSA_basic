#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find duplicate number when elements lie in the range (1, n) and only one can be repating.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }else{
            cout<<abs(arr[i])<<endl;
            break;
        }
    }
    return 0;
}