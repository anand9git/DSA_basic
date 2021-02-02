#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find min number of jumps to reach end of array where each element represents max no. of jumps that can be made.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]==0) {cout<<-1; return 0;}
    int j = 1;
    int s = arr[0];
    int mxpos = arr[0];
    for(int i=1;i<n;i++){
        if(i==n-1){cout<<j; break;}
        s--;
        mxpos = max(mxpos, arr[i] + i);
        if(s==0){
            j++;
            if(i>=mxpos){
                cout<<-1;
                break;
            }
            s = mxpos - i;
        }
    }
    return 0;
}