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
// topological_sort: chỉ áp dụng cho đồ thị có hướng và ko có chu trình -> sắp xếp topo
// Đối với e = (u , v) thì bắt buộc u phải đứng trước v
// DFS
// BFS(Kahn) -> thuật toán xóa dần đỉnh
int n , m;
vector<int> adj[1000];
bool visited[1000];
vector<int> topo;
int entry[1000];
void input(){
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		entry[y]++;
	}
	memset(visited , false , sizeof(visited));
}
void Kahn(){
	queue<int> q;
	for(int i = 1 ; i <= n ; i++){
		if(entry[i] == 0)
			q.push(i);
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(int v : adj[u]){
			entry[v]--;
			if(entry[v] == 0)
				q.push(v);
		}
	}
}
void dfs(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]) 
			dfs(v);
	}
	topo.push_back(u);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	input();
//	for(int i = 1 ; i <= n ; i++){
//		if(!visited[i])
//			dfs(i);
//	}
//	reverse(begin(topo) , end(topo));
//	for(int x : topo)
//		cout << x << " ";
	Kahn();
}
