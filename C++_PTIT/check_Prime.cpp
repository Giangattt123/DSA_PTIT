#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(ll n){
	if(n < 2) return false;
	for(ll i=2;i<=sqrt(n);i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
}

