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
// Ki?m tra tính liên thông m?nh
int n, m;
bool visited[1005];
vector<int> ke[1005];
void dfs(int u) {
	visited[u] = true;
	for(auto x : ke[u]) {
		if(!visited[x]) {
			dfs(x);
		}
	}
}
void input() {
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) {
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
//		ke[y].push_back(x);
	}
	for(int i = 1 ; i <= n ; i++)
		sort(ke[i].begin(), ke[i].end());
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		memset(visited, false, sizeof(visited));
		memset(ke, false, sizeof(ke));
		input();
		int flag = 1;
		for(int i = 1 ; i <= n ; i++) {
			memset(visited, false, sizeof(visited));
			dfs(i);
			for(int j = 1 ; j <= n ; j++) {
				if(visited[j] == false) 
					flag = 0;
			}
		}
		if(!flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
