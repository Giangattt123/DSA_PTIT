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
	int n;
    cin >> n;
    int a[n * n], b[n][n];
    for (auto &x : a) cin >> x;
    sort(a, a + n * n);
    int row = n - 1, col = n - 1, id = 0, d = 0;
    while (d <= n / 2) {
        for (int i = d; i <= col; ++i)
            b[d][i] = a[id++];
        for (int i = d + 1; i <= row; ++i)
            b[i][col] = a[id++];
        for (int i = col - 1; i >= d; --i)
            b[row][i] = a[id++];
        for (int i = row - 1; i > d; --i)
            b[i][d] = a[id++];
        d++, row--, col--;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
