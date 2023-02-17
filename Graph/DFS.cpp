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

// DFS : deaph first search -> thuật toán tìm kiếm thwo chiều sâu
/* Pseudo code 
bool visited[1001] : check xem đã đi qua cái đỉnh đó chưa
DFS(){
	<thăm đỉnh u>
	visited[u] = true ; đánh dấu đã thăm cái đỉnh này rồi
	<Duyệt các đỉnh kề với đỉnh u>{
		if(đỉnh kề chưa đc thăm){
			DFS()
		}
	}
}
*/
// tạo danh sách kề từ danh sách cạnh

bool visited[1001];
vector<int> ke[1001];

void DFS(int u){
	cout << u << " ";
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v])
			DFS(v);
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
	DFS(1);
}
// Ứng dụng đầu tiên : kiếm tra xem đồ thị có liên thông không
