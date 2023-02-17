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

ll crossSum(int a[] , int l , int m , int r){
	ll left = LLONG_MIN;
	ll sum = 0;
	for(int i = m ; i >= l ; i--){
		sum += a[i];
		if(sum > left)
			left = sum;
	}
	ll right = LLONG_MIN;
	sum = 0;
	for(int i = m + 1 ; i <= r ; i++){
		sum += a[i];
		if(sum > right)
			right = sum;
	}
	return max({left , right , left + right});
}

ll solve(int a[] , int l , int r){
	if(l > r) return LLONG_MIN;
	if(l == r) return a[l];
	int m = (l + r)/2;
	return max({solve(a , l , m) , solve(a , m + 1 , r) , crossSum(a , l , m , r)});
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	cout << solve(a , 0 , n - 1) << endl;
}
