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
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
// Đếm số thành phần liên thông
const int maxn = 1005;
int n, m;
bool visited[maxn];
vector<int> adj[maxn];
void nhap(){
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void dfs(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v])
			dfs(v);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int cnt_tplt = 0;
		memset(visited , false , sizeof(visited));
		memset(adj , 0 , sizeof(adj));
		nhap();
		for(int i = 1 ; i <= n ; i++){
			if(visited[i] == false){
				++cnt_tplt;
				dfs(i);
			}
		}
		cout << cnt_tplt << endl;
	}
}
