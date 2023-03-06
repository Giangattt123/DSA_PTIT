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
// Sửa đèn
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	t = 1;
	while(t--){
		int n , k , b;
		cin >> n >> k >> b;
		int a[1000001] = {0};
		for(int i = 0 ; i < b ; i++){
			int x;
			cin >> x;
			a[x] = 1; // den chi so x bi hong
		}
		int cnt = 0;
		for(int i = 1 ; i <= k ; i++){
			if(a[i] == 1) ++cnt;
		}
		int ans = cnt;
		for(int i = k + 1 ; i <= n ; i++){
			cnt = cnt - a[i - k] + a[i];
			ans = min(ans , cnt);
		}
		cout << ans << endl;
	}
}
