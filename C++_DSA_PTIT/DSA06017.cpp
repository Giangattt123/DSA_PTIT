#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + m);
	for (int i = 0; i < n + m; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i : a) cout << i << " ";
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}