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
	int t;
	cin >> t;
	while(t--){
		string s;
	    cin >> s;
	    vector<int> v;
	    int min_val = 1, posI = 0;
	    if (s[0] == 'I') {
	        v.push_back(1);
	        v.push_back(2);
	        posI = 1;
	    }
	    else {
	        v.push_back(2);
	        v.push_back(1);
	        posI = 0;
	    }
	    min_val = 3;
	
	    for (int i = 1; i < s.length(); ++i) {
	        if (s[i] == 'I') {
	            v.push_back(min_val);
	            posI = i + 1;
	        }
	        else {
	            v.push_back(v[i]);
	            for (int j = posI; j <= i; ++j) {
	                v[j]++;
	            }
	        }
	        min_val++;
	    }
	    for (auto x : v) cout << x;
	    cout << endl;
	}
}
