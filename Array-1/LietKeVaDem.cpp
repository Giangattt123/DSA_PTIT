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

bool check_skg(ll n){
	int last = n % 10;
	n /= 10;
	while(n){
		if(last < n % 10) return false;
		last = n % 10;
		n /= 10;
	}
	return true;
}

bool solve_skg(string s){
	for(int i = 1 ; i < s.size() ; i++){
		if(s[i] < s[i - 1])
			return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<string , int> mp;
	string s; 
	// read input interface
	while(cin >> s){
		if(solve_skg(s))
			mp[s]++;
	}
	vector<pair<string , int>> v;
	for(auto x : mp)
		v.push_back(x);
	sort(begin(v) , end(v) , []( pair<string , int> a , pair<string , int> b) -> bool {
		if(a.second != b.second)
			return a.second > b.second;
		else
			return stoll(a.first) < stoll(b.first);
	});
	for(auto it : v) cout << it.first << " " << it.second << endl;
}
