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
		int n, k;
	    cin >> n >> k;
	    vector<int> a(n);
	    for (int &x : a) cin >> x;
	    int sum = 0;
	    for (int i = 0; i < k; ++i) {
	        sum += a[i];
	    }
	    int l = 0, r = k - 1, max_val = sum;
	    for (int i = k; i < n; ++i) {
	        sum = sum - a[i - k] + a[i];
	        if (sum > max_val) {
	            max_val = sum;
	            l = i - k + 1, r = i;
	        }
	    }
	    for (int i = l; i <= r; ++i) {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
}
