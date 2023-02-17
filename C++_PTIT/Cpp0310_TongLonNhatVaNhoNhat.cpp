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
ll sum_max(string a , string b);
ll sum_max(string a , string b){
	for(int i = 0 ; i < a.length() ; i++){
		if(a[i] == '5') a[i] = '6';
	}
	for(int i = 0 ; i < b.length() ; i++){
		if(b[i] == '5') b[i] = '6';
	}
	ll suma = stoll(a);
	ll sumb = stoll(b);
	return suma + sumb;
}

ll sum_min(string a , string b);
ll sum_min(string a , string b){
	for(int i = 0 ; i < a.length() ; i++){
		if(a[i] == '6') a[i] = '5';
	}
	for(int i = 0 ; i < b.length() ; i++){
		if(b[i] == '6') b[i] = '5';
	}
	ll suma = stoll(a);
	ll sumb = stoll(b);
	return suma + sumb;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string a , b;
		cin >> a >> b;
		cout << sum_min(a,b) << " " << sum_max(a , b) << endl;
	}
}
