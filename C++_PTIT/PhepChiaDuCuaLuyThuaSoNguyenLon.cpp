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
ll mod(string s, ll m)
{
	// 555
    ll r = 0;
    for (auto x : s) {
        r = r * 10 + (x - '0');
        r %= m;
    }
    return r;
}

ll powMOD(ll a , ll b, ll c){
	ll res = 1;
	while(b){
		if(b % 2){
			res *= a;
			res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string a;
		int b , m;
		cin >> a >> b >> m;
		ll val = mod(a, m);
		cout << powMOD(val , b , m) << endl;
	}
}
