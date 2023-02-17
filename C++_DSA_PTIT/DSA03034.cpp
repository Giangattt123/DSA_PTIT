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
// Dãy con chung
void solve(){
	int n , m , k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m), c(k);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    for (int &i : c) cin >> i;
    int i = 0, j = 0, h = 0, check = 0;
    while(i < n && j < m && h < k) {
        if(a[i] == b[j] && a[i] == c[h]) {
            cout << a[i] << " ";
            i++, j++, h++, check = 1;
            continue;
        }
        if (a[i] < b[j]) i++;
        else if (b[j] < c[h]) j++;
        else h++;
    }
    if (!check) cout << "NO";
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
