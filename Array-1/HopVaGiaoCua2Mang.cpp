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
	int n , m;
	cin >> n >> m;
	int a[n] , b[m];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < m ; i++) cin >> b[i];
	set<int> se;
	map<int , int> mp;
	for(int i = 0 ; i < n ; i++){
		se.insert(a[i]);
		mp[a[i]] = 1;
	}
	for(int i = 0 ; i < m ; i++){
		se.insert(b[i]);
		if(mp[b[i]] == 1) mp[b[i]] = 2;
	}
	cout << "Hop cua 2 mang la: " << endl;
	for(set<int>::iterator x = se.begin() ; x != se.end() ; x++){
		cout << *x << " ";
	}
	cout << endl;
	cout << "Giao cua 2 mang la: " << endl;
	for(auto x : mp){
		if(x.second == 2){
			cout << x.first << " ";
		}
	}

}
