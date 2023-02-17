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
const int maxn = 1005;
vector<int> ke[1001];
bool visited[1005];
void dfs(int u){
	cout << u << " ";
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v])
			dfs(v);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
	    int n , m , s ; 
		cin >> n >> m >> s;
		memset(ke , false , sizeof(ke));
	    for(int i = 1 ; i <= m ; i++){
	        int a , b ; 
			cin >> a >> b;
	        ke[a].push_back(b);
//	        ke[b].push_back(a);
	    }
	    memset(visited , false , sizeof(visited));
	    for(int i = 1 ; i <= n ;i++)
	        sort(ke[i].begin(), ke[i].end());
	    dfs(s);
	    cout << endl;
	    
	}
}

