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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> hop , giao1 , giao2;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			hop.insert(a[i]);
			giao1.insert(a[i]);
		}
		for(int i = 0 ; i < m ; i++){
			cin >> b[i];
			hop.insert(b[i]);
			giao2.insert(b[i]);
		}
		for(int x : hop) cout << x << " ";
		cout << endl;
		for(int x : giao1){
			if(giao2.find(x) != giao2.end())
				cout << x << " ";
		}
		cout << endl;
	}
}