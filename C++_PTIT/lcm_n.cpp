#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll check(ll n){
	ll m  = 1;
	for(ll i=n/2+1;i<=n;i++){
		m = i * (m / __gcd(i,m));
	}
	return m;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << check(n) << endl;
	}
}

