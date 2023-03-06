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
// Giao c?a ba dãy s?
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n , m , k;
		cin >> n >> m >> k;
		int a[n] , b[m] , c[k];
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		for(int &x : c) cin >> x;
		vector<int> res;
		int i = 0 , j = 0 , l = 0;
		while(i < n && j < m && l < k){
			if(a[i] == b[j] && b[j] == c[l]){
				res.push_back(a[i]);
				++i;
				++j;
				++l;
			}
			else if(a[i] <= b[j] && a[i] <= c[l])
				++i;
			else if(b[j] <= a[i] && b[j] <= c[l])
				++j;
			else 
				++l;
		}
		if(res.size() == 0)
			cout << "-1" << endl;
		else{
			for(int x : res)
				cout << x << " ";
			cout << endl;
		}
	}
}
