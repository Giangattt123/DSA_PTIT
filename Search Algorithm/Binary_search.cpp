#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Binary Search : mang da dx sap xep tang dan
// Time complexity : O(log2(N))
bool bs(int a[] , int n , int x){
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x) return true;
		else if(a[mid] > x){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return false;
}
// Code Binary_Search : Recursion
bool bs2(int a[] , int l , int r , int x){
	if(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x) return true;
		else if(a[mid] < x) return bs2(a,mid+1,r,x);
		else return bs2(a,l,mid-1,x);
	}
	else{ //l > r
		return false;
	}
}
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(binary_search(a,a+n,x)) cout <<"FOUND\n";
	else cout << "NOT FOUND\n";
	
}
