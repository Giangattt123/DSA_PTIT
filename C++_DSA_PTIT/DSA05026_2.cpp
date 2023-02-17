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
void solve() {
    int c, n, w;
    cin >> c >> n;
    int f[c + 1] = {};
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        cin >> w;
        for (int j = c; j >= w; --j) {
            if (f[j] == 0 && f[j - w] == 1) {
                f[j] = 1;
            }
        }
    }
    for (int i = c; i >= 0; --i) {
        if (f[i] == 1) {
            cout << i;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
        solve();
        cout << endl;
    return 0;
}