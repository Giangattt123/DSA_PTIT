#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n , k;
		cin >> n >> k;
		ll sum = 0;
		for(ll i=1;i<=n;i++){
			sum += i % k;
		}
		cout << (sum == k) << endl;
	}
}

