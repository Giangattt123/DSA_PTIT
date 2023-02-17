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
inline ll gcd(ll a,ll b) {
	ll r;
	while(b) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
inline ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}
// S?p x?p theo s? l?n xu?t hi?n
bool cmp(pair<int , int> a , pair<int , int> b) {
	if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int, int> mp;
		for(int i = 0 ; i < n ; i++) {
			int x;
			cin >> x;
			mp[x]++;
		}
		vector<pair<int, int>> a(mp.begin(), mp.end());
		sort(a.begin(), a.end(), cmp);
		for(auto i : a) {
			for(int j = 1; j <= i.second; ++j) {
				cout << i.first << " ";
			}
		}
		cout << endl;
	}
}
