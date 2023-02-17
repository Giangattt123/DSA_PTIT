#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll check(ll n){
	ll res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	if(res >= 10) return check(res);
	return res;
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

