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

bool visited[1001];
vector<int> ke[1001];
void DFS(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v])
			DFS(v);
	}
}
int n , m;
int demLT(int x){
	x = 1;
	for(int i = 1 ; i <= n; i++){
		if(!visited[i])
			x++;
	}
	return x;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x ,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	DFS(1);
	int x = 1;
	cout << demLT(x);
}
