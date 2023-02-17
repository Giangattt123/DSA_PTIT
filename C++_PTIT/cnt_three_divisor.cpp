#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(ll n){
	if(n < 2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n,cnt = 0;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++){
			if(check(i)) cnt++;
		}
		cout << cnt << endl;
	}
}

