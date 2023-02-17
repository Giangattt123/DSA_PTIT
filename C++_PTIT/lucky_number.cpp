#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(ll n){
	while(n){
		int k = n % 10;
		if(k != 0 && k != 6 && k != 8)return false;
		n /= 10;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}
