#include <bits/stdc++.h>
using namespace std;

int n, m, Q, u, v, x, y;
vector<vector<int>> G;
vector<bool> vs;

void bfs(int start) {
	vs.clear();
	vs.resize(n + 1, 0);
	queue<int> q;
	q.push(start);
	vs[start] = true;

	while (!q.empty()) {
		u = q.front();
		q.pop();
		for(int v : G[u]) {
			if (vs[v] == false) {
				q.push(v);
				vs[v] = true;
			}
		}
	}
}

void solve() {
	cin >> n >> m;
	G.clear();
	G.resize(n + 1);
	for(int i = 1; i <= m; ++i) {
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	cin >> Q;
	while (Q--) {
		cin >> x >> y;
		bfs(x);
		cout << (vs[y] ? "YES" : "NO") << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
		cout << endl ;
	}
}
