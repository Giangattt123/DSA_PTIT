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
		int n, m, k;
	    cin >> n >> m >> k;
	    int a[n][m];
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < m; ++j) {
	            cin >> a[i][j];
	        }
	    }
	    vector<int> v;
	    int d = 0;
	    int up = 0, down = n - 1;
	    int left = 0, right = m - 1;
	    while (1) {
	        for (int i = left; i <= right; ++i) {
	            v.push_back(a[up][i]);
	            d++;
	        }
	        up++;
	        if (d == n * m) break;
	
	        for (int i = up; i <= down; ++i) {
	            v.push_back(a[i][right]);
	            d++;
	        }
	        right--;
	        if (d == n * m) break;
	
	        for (int i = right; i >= left; --i) {
	            v.push_back(a[down][i]);
	            d++;
	        }
	        down--;
	        if (d == n * m) break;
	
	        for (int i = down; i >= up; --i) {
	            v.push_back(a[i][left]);
	            d++;
	        }
	        left++;
	        if (d == n * m) break;
	    }
	    cout << v[k-1] << endl;
	}
}
