#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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

ll tohop(int n,int k){
	ll res  = 1;
	for(int i=1;i<=k;i++){
		res *= (n - i + 1);
		res /= i;
	}
	return res;
}

// Recursion 
ll tohop1(int n , int k){
	if(k == 0 || k == n) return 1;
	else return tohop1(n-1,k-1) + tohop1(n-1,k);
}

// ll C[100][100];
// void init(){
// 	for(int i=0;i<=20;i++){
// 		for(int j=0;j<=i;j++){
// 			if(j == 0 || j == i) C[i][j] = 1;
// 			else C[i][j] = C[i-1][j-1] + C[i-1][j];
// 		}
// 	}
// }

ll powMOD(ll a , ll b, ll c){
	ll res = 1;
	while(b){
		if(b % 2){
			res *= a;
			res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

ll C[1005][1005];// n , k len den 1000
ll init(int n , int k){
	for(int i=0;i<=n;i++){
 		for(int j=0;j<=i;j++){
			if(j == 0 || j == i) C[i][j] = 1;
			else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
 		}
 	}
 	return C[n][k];
}

ll inverse(ll a , ll m){
	// tinh nghich dao modun cua a duoi modun m
	// a * x % m = 1
	return powMOD(a, m - 2 , m);
}

ll F[1000001];// tinh giai thua
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	F[0] = 1;
	for(int i=1;i<=1000000;i++){
		F[i] = F[i-1] * i % MOD;
	}
	int n , k;
	cin >> n >> k;
	ll res = F[n];// n giai thua , n : tinh n giai thua 
	res *= inverse(F[k],MOD);
	res %= MOD;
	res *= inverse(F[n - k] , MOD);
	res %= MOD;
	cout << res << endl;
}
