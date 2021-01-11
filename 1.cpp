/* hello.cpp */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    //basic program to reverse array or string using swapping.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n/2;i++){
        int end = n - 1 - i;
        if(i<end){
            int tmp = arr[end];
            arr[end] = arr[i];
            arr[i] = tmp;
        }
    }
    // arr is now reversed.
    return 0;

}