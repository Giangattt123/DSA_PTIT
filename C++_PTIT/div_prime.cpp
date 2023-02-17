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
		ll n;
		cin >> n;
		for(ll i=2;i<=sqrt(n);i++){
			if(n % i == 0){
				while(n % i == 0){
					cout << i << " ";
					n /= i;
				}
				if(n == 1) break;
			}
		}
		if(n > 1) cout << n;
		cout << endl;
	}
}

