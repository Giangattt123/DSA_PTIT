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

bool check(long long s){
	string tmp = to_string(s);
	for(int i = 0 ; i < tmp.length() ; i++){
		tmp[i] = tmp[i] - '0';
		if((i + 1) % 2 == 0){
			if(tmp[i] % 2 == 1) return false;
		}
		else{
			if(tmp[i] % 2 == 0) return false;
		}
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		long long val = abs(stoll(s));
		if(check(val)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
