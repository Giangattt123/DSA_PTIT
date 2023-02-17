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
		int n , q , l , r; 
		cin >> n >> q; 
		int a[n]; 
		for(int i=0;i<n;i++) cin >> a[i]; 
		while(q--) { 
			ll sum=0; 
			cin >> l >> r; 
			for(int i=l-1;i<r;i++)  sum += a[i]; 
			cout << sum << endl; 
		} 
	} 
}
