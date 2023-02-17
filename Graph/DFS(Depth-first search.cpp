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
// có thể thực hiện thuật toán theo đệ quy hoặc khử đệ quy bằng stack
// dfs : depth first search : tìm kiếm đồ thị theo chiều sâu
// -> đây là thuật toán đi thăm các đỉnh trên đồ thị , mỗi đỉnh chỉ đc thăm 1 lần
// dfs sử dụng thuật toán ngăn xếp
/* MÃ GIẢ
DFS(u){
	<thăm đỉnh u>
	visited[u] = true; // đánh dấu là đã thăm
	<Duyệt các đỉnh kề với đỉnh u>{
		<Nếu đỉnh v chưa được thăm>{
			DFS(v)
		}
	}
}
*/

int n , m; // đỉnh và cạnh của đồ thị
vector<int> ke[1001];
bool visited[1005];
void dfs(int u){
	cout << u << " ";
	visited[u] = true;
	// ke[u] : danh sách các đỉnh kề với đỉnh u
	for(int v : ke[u]){
		if(!visited[v])
			dfs(v);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited , false , sizeof(visited));
	dfs(1);
}
