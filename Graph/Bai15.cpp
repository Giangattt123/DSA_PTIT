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
int n , m , s , t;
vector<int> adj[1004];
bool visited[1005];
int parent[1000];
void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int v = Q.front();
		Q.pop();
		for(int x : adj[v]){
			if(!visited[x]){
				Q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}
void Path(int s , int t){
	memset(visited , false , sizeof(visited));
	memset(parent , false , sizeof(parent));
	bfs(s);
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

//10 8 1 7
//1 2
//2 3
//2 4
//3 6
//3 7
//6 7
//5 8
//8 9
// Output in ra 1 3 6 7
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
