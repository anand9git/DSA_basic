#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int multiply(vector<int>& arr, int m, int s){
    int carry = 0;
    for(int i=0;i<s;i++){
        long long int p = (arr[i]*m) + carry;
        arr[i] = p%10;
        carry = p/10;
    }
    while(carry){
        arr.push_back(carry%10);
        carry /= 10;
        s++;
    }
    return s;
}

int main() {
	//program to find factorial of numbers above 10.
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    arr.push_back(1);
	    int s = 1;
	    for(int i=2;i<=n;i++){
	        s = multiply(arr, i, s);
	    }
	    for(int i=s-1;i>=0;i--){
	        cout<<arr[i];
	    }
	    cout<<endl;
	    arr.clear();
	}
	return 0;
}