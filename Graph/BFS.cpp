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
// bfs : breatch first search -> tìm kiếm theo chiều rộng (hàng đợi)
/*
bfs(u){
	Q = rong // hàng đợi rỗng
	Q.push(u)
	visited[u] = true
	while(Q != rỗng){
		<lấy đỉnh hàng đợi : u>
		<Thăm đỉnh u>
		<Duyệt các đỉnh kề u> gọi là đỉnh v {
			if< v chưa đc thăm>{
				Q.push(v);
				visited[v] = true;
			}
		}
	}
}
*/
bool visited[1001];
vector<int> ke[1001];
void bfs(int u){
	queue<int> Q;
	Q.push(u);
	visited[u] = true;
	while(!Q.empty()){
		int u  = Q.front();
		Q.pop();
		cout << u << " " ;
		for(int v : ke[u]){
			if(!visited[v]){
				Q.push(v);
				visited[v] = true;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m; cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited , false , sizeof(visited));
	bfs(1);
}
