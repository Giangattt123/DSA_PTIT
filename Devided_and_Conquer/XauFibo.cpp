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
//const int MOD = 1e9 + 7;
ll F[94];
ll n , k;
void Fibo(){
    F[0] = 0 ; F[1] = 1;
    for(int i = 2 ; i <= 93 ; i++)
        F[i] = F[i - 1] + F[i - 2];
}
char solve(int n , ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n - 2])
		return solve(n - 2, k);
	else
		return solve(n - 1 , k - F[n - 2]);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	long long k;
	cin >> n >> k;
	Fibo();
	cout << solve(n , k);
}
