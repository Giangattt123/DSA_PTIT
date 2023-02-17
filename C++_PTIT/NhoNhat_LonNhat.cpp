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

string min_val(int n, int s)
{
    string r(n, '0');
    r[0] = '1', s -= 1;
    for (int i = n - 1; i >= 0; --i) {
        int d = r[i] - '0';
        if (s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;
}

string max_val(int n, int s)
{
    string r(n, '0');
    for (int i = 0; i < n; ++i) {
        int d = r[i] - '0';
        if (s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, s;
    cin >> n >> s;
    if (s <= 0 || s > 9 * n)
        cout << "-1 -1\n";
    else
        cout << min_val(n, s) << " " << max_val(n, s) << endl;
}
