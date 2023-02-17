#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool bs(ll a[] , ll n , ll x){
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
int main(){
	ll n , q;
	cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	cin >> q;
	while(q--){
		ll x;
		cin >> x;
		if(bs(a,n,x)) cout << "YES\n";
		else cout << "NO\n";
	}
}
