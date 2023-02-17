#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(int a[] ,int n , int x){
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x) return true;
		else if(a[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if(check(a,n,x)) cout << "YES\n";
		else cout << "NO\n";
	}
}