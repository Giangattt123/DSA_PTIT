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

char numbers(char c){
	if(c >= 'A' && c <= 'C') return '2';
	if(c >= 'D' && c <= 'F') return '3';
	if(c >= 'G' && c <= 'I') return '4';
	if(c >= 'J' && c <= 'L') return '5';
	if(c >= 'M' && c <= 'O') return '6';
	if(c >= 'P' && c <= 'S') return '7';
	if(c >= 'T' && c <= 'V') return '8';
	if(c >= 'W' && c <= 'Z') return '9';
}

void chuanHoa(string &s){
	for(int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
}

bool tn(string s){
	int l = s.length();
	for(int i = 0 ; i <= l / 2 ; i++){
		if(s[i] != s[l - i - 1])
			return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		chuanHoa(s);
		string tmp = ""; 
		for(auto c : s) tmp.push_back(numbers(c));
		if(tn(tmp)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
