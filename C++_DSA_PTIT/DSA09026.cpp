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
// Ðu?ng di trên d? th? có hu?ng b?ng thu?t toán bfs
const int maxn = 1005;
vector<int> ke[maxn];
bool visited[maxn];
int parent[maxn];
int n, m, s, t;
void nhap() {
	cin >> n >> m >> s >> t;
	for(int i = 0 ; i < m ; i++) {
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}
void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int s = Q.front();
		Q.pop();
		for(int x : ke[s]){
			if(!visited[x]){
				parent[x] = s;
				Q.push(x);
				visited[x] = true;
			}
		}
	}
}
void solve() {
	bfs(s);
	if(!visited[t]) cout << -1 << endl;
	else {
		vector<int> res;
		while(t != s) {
			res.push_back(t);
			t = parent[t];
		}
		res.push_back(s);
		reverse(res.begin(), res.end());
		for(int x : res)
			cout << x << " ";
		cout << endl;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		memset(visited, false, sizeof(visited));
		memset(parent, 0, sizeof(parent));
		memset(ke, 0, sizeof(ke));
		nhap();
		solve();
	}
}
