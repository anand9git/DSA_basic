#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //program to find union and intersection of two arrays.
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[m];
    for(int i=0;i<m;i++)cin>>arr2[i];
    int s = n + m;
    int a[s], ans=0;
    for(int i=0;i<n;i++){
        a[i] = arr[i];
    }
    for(int i=0;i<m;i++){
        a[i+n] = arr2[i];
    }
    sort(a, a+s);
    for(int i=0;i<s;i++){
        while(i+1<n+m && a[i]==a[i+1]){
            i++;
        }
        ans++;
    }
    cout<<"Union is "<<ans<<endl;
    ans = 0;
    set<int> hs;
    for(int i=0;i<n;i++){
        hs.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        if(hs.find(arr2[i])!=hs.end())ans++;
    }
    cout<<"Intersection is "<<ans<<endl;
    return 0;
}