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
	int n, m, val;
    set<int> s1, s2;
    ifstream fi;
    fi.open("DATA.in");
    fi >> n >> m;
    for (int i = 0; i < n; ++i) {
        fi >> val;
        s1.insert(val); // 1 2 3 4 5
    }
    for (int i = 0; i < m; ++i) {
        fi >> val;
        s2.insert(val); // 2 3 4 5 6
    }
    
    map<int, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto x : s2) mp[x]++;

    for (auto x: mp) {
        if (x.second == 2)
            cout << x.first << " ";
    }
}
