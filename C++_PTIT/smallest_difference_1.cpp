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
		ll a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		ll minarr = 1e9 + 1;
		for(ll i=1;i<n;i++){
			minarr = min(minarr ,a[i] - a[i-1]);
		}
		cout << minarr << endl;
	}

}

