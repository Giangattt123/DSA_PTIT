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
// T? h?p C(n , k)
ll c[1005][1005];

void nCk() {
    for(int i = 0; i <= 1000; ++i) {
        for(int j = 0; j <= i; ++j) {
            if(j == 0 || j == i)
                c[i][j] = 1;
            else if (j == 1 || j == i - 1)
                c[i][j] = i;
            else
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            c[i][j] %= MOD;
        }
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nCk();
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		cout << c[n][k] << endl;
	}
}
