#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to merge intervals. 
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    sort(arr, arr + n);
    int b = arr[0][0];
    int e = arr[0][1];
    vector<vector<int>> ans;
    for(int i=1;i<n;i++){
        if(e>=arr[i][0]){
            e = max(arr[i][1], e);
        }else{
            vector<int> temp;
            temp.push_back(b);
            temp.push_back(e);
            ans.push_back(temp);
        }
    }
    vector<int> temp;
    temp.push_back(b);
    temp.push_back(e);
    ans.push_back(temp);
    return 0;
}