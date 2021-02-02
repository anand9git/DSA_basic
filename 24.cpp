#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find triplet that sums to given value.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int f = 0;
    sort(arr, arr+n);
    for(int i=0;i<n-2;i++){
        int j = i+1;
        int k=n-1;
        while(j<k){
            int s = arr[i] + arr[j] + arr[k];
            if(s==x) {
                f = 1;
                cout<<true<<endl;
                break;
            }else if(s>x){
                k--;
            }else{
                j++;
            }
        }
        if(f==1) break;
    }
    if(f==0)cout<<false<<endl;
    return 0;
}