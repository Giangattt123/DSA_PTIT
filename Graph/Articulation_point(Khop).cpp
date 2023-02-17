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
/* Articulation Point : đỉnh trụ hay khớp
Trong đồ thị vô hướng, một đỉnh C được gọi là khớp, nếu như ta bỏ đi đỉnh C và các cạnh liên
thuộc với nó thì sẽ làm tăng số thành phần liên thông của đồ thị. Bài toán đặt ra là phải liệt kê hết
các khớp của đồ thị
*/
const int maxn = 1005;
bool visited[maxn];
vector<int> adj[maxn];
int n , m;
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
void articulation_point(){
	int ans = 0;
	int count_tplt = 0;
	memset(visited , false , sizeof(visited));
	for(int i = 1 ; i <= n ; i++){
		if(!visited[i])
			++count_tplt;
			dfs(i);
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
		if(cnt > count_tplt)
			++ans;
	}
	cout << ans << endl;
	cout << count_tplt << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	articulation_point();
}
