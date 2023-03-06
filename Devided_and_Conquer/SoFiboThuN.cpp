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
int mod = 1e9 + 7;
// S? fibonnaci th? n
//ll F[100];
struct matrix{
	ll a[2][2];
	matrix operator * (matrix khac){
		matrix res;
		for(int i = 0 ; i < 2 ; i++){
			for(int j = 0 ; j < 2 ; j++){
				res.a[i][j] = 0;
				for(int k = 0 ; k < 2 ; k++){
					res.a[i][j] += a[i][k] * khac.a[k][j];
					res.a[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
matrix powMod(matrix a , ll n){
	if(n == 1)
		return a;
	matrix tmp = powMod(a , n / 2);
	if(n % 2 == 1)
		return tmp * tmp * a;
	else
		return tmp * tmp;
}
// 0 1 1 2 3 5 8
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	matrix res;
	res.a[0][0] = 1;
	res.a[0][1] = 1;
	res.a[1][0] = 1;
	res.a[1][1] = 0;
	matrix ans = powMod(res , n - 1);
	cout << ans.a[0][1] << endl;
}
