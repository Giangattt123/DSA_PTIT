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
// Chu trình : Cycle
// Kiểm tra một đồ thị vó tồn tại chu trình đối với đồ thị có hướng
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
//		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(color , 0 , sizeof(color));
}
// 0: white , 1: gray , 2:black
bool dfs(int u, int par) {
//	visited[u] = true;
	color[u] = 1;
	for(int v : adj[u]) {
		if(color[v] == 0) {
			if(dfs(v, u))
				return true;
		} else if(color[v] == 1)
			return true;
	}
	color[u] = 2;
	return false;
}

bool bfs(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		for(int x : adj[v]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = v;
			} else if(x != parent[v]) {
				return true;
			}
		}
	}
	return false;
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
		bool ok = false;
		for(int i = 1 ; i <= n ; i++) {
			if(!color[i] && dfs(i, 0)) {
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
