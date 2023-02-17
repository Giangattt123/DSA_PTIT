#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(auto &x : a) cin >> x;
	// C1 : Lam theo set
		// set<int> se(a,a+n);
		// cout << se.size();
	// C2 : Lam theo sap xep
	sort(a,a+n);
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(a[i] != a[i+1]) ++cnt;
	}
	cout << cnt;
	// C3 : Lam theo map
}