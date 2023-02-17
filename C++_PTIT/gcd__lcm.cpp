#include<bits/stdc++.h>
using ll = long long;
using namespace std;

ll lcm(ll a , ll b){
	return a / __gcd(a,b) * b;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a , b;
		cin >> a >> b;
		cout << lcm(a,b) << " " << __gcd(a,b) << endl;
	}
}

