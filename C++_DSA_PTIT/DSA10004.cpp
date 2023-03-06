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
int n , m;
int degree[1005];
vector<int> adj[1005];
void nhap(){
	cin >> n >> m;
	memset(adj , 0 , sizeof(adj));
	memset(degree , 0 , sizeof(degree));
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		degree[x]++;
		degree[y]++;
	}
	int cnt = 0;
	int even_deg = 0;
	for(int i = 1 ; i <= n ; i++){
		if(degree[i] % 2 == 1) ++cnt; 
		else even_deg++;
	}
	if(cnt == 0 && even_deg == n) cout << 2 << endl;
	else if(cnt == 2) cout << 1 << endl;
	else cout << 0 << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		nhap();
	}
}
