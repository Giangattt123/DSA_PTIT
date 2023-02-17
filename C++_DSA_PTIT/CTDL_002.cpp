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
// Tổng dãy con bằng k
const int maxn = 1005;
int n , k , ok = 1;
int a[maxn] , b[maxn];
void ktao(){
	for(int i = 1 ; i <= n ; i++)
		a[i] = 0;
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	ktao();
	for(int i = 1 ; i <= n ; i++) cin >> b[i];
	int count = 0;
	while(ok){
		vector<int> v;
		int sum = 0;
		for(int i = 1 ; i <= n ; i++){
			if(a[i] == 1){
				sum += b[i];
				v.push_back(b[i]);
			}
		}
		if(sum == k){
			++count;
			for(int x : v) cout << x << " ";
			cout << endl; 
		}
		sinh();
	}
	cout << count << endl;
}
