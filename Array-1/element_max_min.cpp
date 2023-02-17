#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	// Tim gia tri nho nhat : gan cho no 1 gia tri lon nhat
	// Tuong tu vs tim gia tri lon nhat : gan no cho gia tri nho nhat
	int min_val = INT_MAX;// max of data type : int
	for(int i=0;i<n;i++){
		min_val = min(min_val,a[i]);
	}
	cout << min_val;
}
