#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int lastPos(int a[] , int n , int x){
	int left = 0 , right = n - 1 , res = -1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			left = mid + 1;
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return res;
}
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	cout << lastPos(a,n,x);
}
