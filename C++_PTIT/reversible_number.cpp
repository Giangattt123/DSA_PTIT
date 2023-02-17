#include<bits/stdc++.h>
using ll = long long;
using namespace std;

bool check(ll n){
	ll m = n;
	ll lat = 0;
	while(n){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	if(lat == m) return true;
	else return false;
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
		if(check(n)) cout << "YES"<< endl;
		else cout << "NO" << endl;
	}
}
