#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool b_s(int a[] , int n , int x){
	int left = 0 , right = n - 1;
	while(left <= right){
		int mid = (left + right )/2;
		if(a[mid] == x) return true;
		else if(a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		if(b_s(a,n,x)) cout << 1 << endl;
		else cout << -1 << endl;
	}
}

