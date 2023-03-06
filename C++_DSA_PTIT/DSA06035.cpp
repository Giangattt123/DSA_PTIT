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
// Dãy tam giác dài nhất
void solve(){
	int n; cin >> n;
    int a[100005], l[100005] = {}, r[100005] = {};
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i) {
        if (a[i] > a[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
    }
    for(int i = n; i >= 1; --i) {
        if (a[i] > a[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i) 
        ans = max(ans, l[i] + r[i] - 1);
    cout << ans;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
