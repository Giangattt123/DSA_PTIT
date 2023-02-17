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
ll tohop(int n , int k){
	ll res = 1;
	for(int i=1;i<=k;i++){
		res *= (n-i+1);
		res /= i;
		res %= MOD;
	}
	return res;
}

ll a[1000][1000];
ll rCn(int r , int n){
	if(r > n - r) r = n - r;
	if(r == 0) a[r][n] = 1;
	if(a[r][n] != 0) return a[r][n];
	else if(r == 1) a[r][n] = n;
	else a[r][n] = rCn(r - 1 , n - 1) + rCn(r , n - 1);
	a[r][n] %= MOD;
	return a[r][n];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n , r;
		cin >> n >> r;
		cout << rCn(r , n) << endl;
	}
}