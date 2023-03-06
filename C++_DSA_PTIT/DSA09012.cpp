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
// Liệt kê đỉnh trụ
int n , m;
bool visited[1005];
vector<int> adj[1005];
vector<int> res;
void nhap(){
	cin >> n >> m;
	for(int i = 1 ; i <= m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited , false , sizeof(visited));
//	memset(adj , 0 , sizeof(adj));
}

void dfs(int u){
	visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v])
            dfs(v);
    }    
}
void articulation_point(){
	int cnt_tplt = 0;
	for(int i = 1 ; i <= n ; i++){
		if(!visited[i]){
			++cnt_tplt;
			dfs(i);
		}
	}
	for(int i = 1 ; i <= n ; i++){
		memset(visited , false , sizeof(visited));
		visited[i] = true;
		int cnt = 0;
		for(int j = 1 ; j <= n ; j++){
			if(!visited[j]){
				++cnt;
				dfs(j);
			}
		}
		if(cnt > cnt_tplt)
			cout << i << " ";
	}
//	for(int x : res)
//		cout << x << " ";
//	cout << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		memset(adj , 0 , sizeof(adj));
		nhap();
		articulation_point();
		cout << endl;
	}
}
