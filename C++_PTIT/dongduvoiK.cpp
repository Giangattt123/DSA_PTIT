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
		int n;
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; ++i)
	        cin >> a[i];
		    sort(a, a + n);
		    int d = a[n - 1] - a[0];
		    vector<int> v;
		    for (int i = 1; i <= sqrt(d); ++i) {
		        if (d % i == 0) {
		            v.push_back(i);
		            if (i * i != d)
		                v.push_back(d / i);
		        }
		    }
		    int ans = 0;
		    for (int i = 0; i < v.size(); ++i) {
		        int temp = a[0] % v[i];
		        int j;
		        for (j = 1; j < n; ++j) {
		            if (a[j] % v[i] != temp)
		                break;
		        }
		        if (j == n)
		            ans++;
		    }
		    cout << ans << endl;
	}
}
