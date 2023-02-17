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
// Tìm đường đi trên đồ thị vô hướng bằng DFS
// Nếu tồn tại đường đi in ra chu trình đường đi , còn nếu khong tồn tại thì in ra -1
// Cho ta danh sách cạnh -> đưa về danh sách kề
vector<int> ke[1005]; // ke[i] : những đỉnh kề với đỉnh i
bool visited[1005] = {0};
int parent[1005]; // parent[i] :  cha của đỉnh i
int n , m , s , t;
void nhap(){
	cin >> n >> m >> s >> t;
	for(int i  = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1 ; i <= n ; i++)
		sort(ke[i].begin() , ke[i].end());
	memset(visited , false , sizeof(visited));
}
void dfs(int u){
	visited[u] = true;
	for(int x : ke[u]){
		if(!visited[x]){
			dfs(x);
			parent[x] = u;
		}
	}
}
void solve(){
	dfs(s);
	if(!visited[t]) cout << -1 << endl;
	else{
		vector<int> res;
		while(t != s){
			res.push_back(t);
			t = parent[t];
		}
		res.push_back(s);
		reverse(res.begin() , res.end());
		for(int x : res)
			cout << x << " ";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	solve();
}
