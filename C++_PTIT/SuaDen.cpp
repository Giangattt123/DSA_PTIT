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
	int n, k, b;
    cin >> n >> k >> b;
    bool check[n + 5] = {0};
    for (int i = 1; i <= b; ++i) {
        int x;
        cin >> x;
        check[x] = 1;
    }

    int ans = 1e9;
    queue<int> qu;
    for (int i = 1; i <= n; ++i) {
        if(check[i])
            qu.push(i);
        if(!qu.empty() && qu.front() + k - 1 < i)
            qu.pop();
        if(i >= k)
            ans = min(ans, (int)qu.size());
    }
    cout << ans;
}
