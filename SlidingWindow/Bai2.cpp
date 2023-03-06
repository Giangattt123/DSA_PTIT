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
const int maxn = 1e6;
int n , k;
int a[maxn];
// S? nh? hon k
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int cnt = 0;
		for(int i = 0 ; i < n ; i++){ 
			cin >> a[i];
			if(a[i] <= k) ++cnt;
		}
		int ans = 0;
		int res = 0;
		for(int i = 0 ; i < cnt ; i++){
			res += a[i] <= k;
		}
		// 
		ans = res;
		for(int i = 1 ; i <= n - cnt ; i++){
			if(a[i - 1] <= k) --res;
			if(a[i + cnt - 1] <= k) ++res;
			ans = max(ans , res);
		}
		cout << cnt - ans << endl;
	}
	return 0;
}
