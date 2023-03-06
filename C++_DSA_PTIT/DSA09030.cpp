#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b) {
	ll r;
	while(b) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
inline ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}
// Đồ thị hai phía
int n, m;
vector<int> adj[1000];
bool visited[1000];
int parent[1000];
int color[1000];
void inp() {
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(color, 0, sizeof(color));
}
// 1 : red , 2 : green
bool dfs(int u, int par) {
	color[u] = 3 - color[par];
	for(int v : adj[u]) {
		if(color[v] == 0) {
			if(!dfs(v, u))
				return false;
		} else if(color[u] == color[v])
			return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		memset(adj, 0, sizeof(adj));
		inp();
		bool ok = true;
		color[0] = 2;
		for(int i = 1 ; i <= n ; i++) {
			if(color[i] == 0) {
				if(!dfs(i, 0)) {
					ok = false;
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
