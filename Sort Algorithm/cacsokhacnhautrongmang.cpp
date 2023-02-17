#include<bits/stdc++.h>
#include<algorithm>
using ll = long long;
using namespace std;
int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int cnt = 1;
	for(ll i=1;i<n;i++){
		if(a[i] != a[i-1]) cnt++;
	}
	cout << cnt;
}
