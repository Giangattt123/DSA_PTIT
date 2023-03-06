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
// B? ba s? pytago
void solve(){
	int n; 
	cin >> n;
    vector<long long> a(n);
    for (auto &i : a) 
		cin >> i;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            long long C = pow(a[i], 2) + pow(a[j], 2);
            long long c = sqrt(C);
            if (c * c == C && binary_search(a.begin() + j + 1, a.end(), c)) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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
