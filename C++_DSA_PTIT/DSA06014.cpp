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
inline ll gcd(ll a,ll b) {
	ll r;
	while(b) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
inline ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}
// Cặp số nguyên tố đầu tiên có tổng bằng n
const int maxn = (int)1e7;
int prime[maxn + 1];
void sang() {
	for(int i = 0 ; i <= maxn ; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= sqrt(maxn) ; i++) {
		if(prime[i]) {
			for(int j = i * i ; j <= maxn ; j += i)
				prime[j] = 0;
		}
	}
}

void solve() {
	int n;
	cin >> n;
	for(int i = 2 ; i <= n / 2 ; i++) {
		if(prime[i] && prime[n - i]) {
			cout << i << " " << n - i << endl;
			return;
		}
	}
	cout << -1 << endl;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
