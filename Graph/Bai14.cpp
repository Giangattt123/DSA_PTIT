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
// tìm đường đi giữa 2 đỉnh bất kì, nếu tồn tại đường đi thì in ra chu trình đường đi, nếu ko có đường đi thì in -1
// code tương tự nhưng thêm 1 mảng để truy vết đường đi
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


bool visited[1005];
int n , m , s , t;
vector<int> adj[1001];
int parent[1001];
void dfs(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]){
			// ghi nhận cha của v là u
			parent[v] = u;
			dfs(v);
		}
	}
}

void Path(int s , int t){
	memset(visited , false , sizeof(visited));
	memset(parent , false , sizeof(parent));
	dfs(s);
	if(!visited[t]){
		cout << "-1" << endl;
	}
	else{
		// truy vet duong di
		vector<int> path;
		// bat dau tu dinh t
		while(t != s){
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin() , path.end());
		for(int x : path){
			cout << x << " ";
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> s >> t;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	Path(s , t);
}
