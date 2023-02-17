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
// Hop va giao cua hai day so 1
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		int a[n] , b[m];
		set<int> se;
		set<int> se1;
		set<int> se2;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			se.insert(a[i]);
			se1.insert(a[i]);
		}
		for(int i = 0 ; i < m ; i++){
			cin >> b[i];
			se.insert(b[i]);
			se2.insert(b[i]);
		}
		for(int x : se){
			cout << x << " ";
		}
		cout << endl;
		for(int x : se1){
			if(se2.count(x) == 1)
				cout << x << " ";
		}
		cout << endl;
	}
}