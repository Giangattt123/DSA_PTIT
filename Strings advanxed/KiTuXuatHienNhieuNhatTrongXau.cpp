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
	string s;
	cin >> s;
	int a[256] = {0};
	for(int i = 0 ; i < s.length() ; i++) a[s[i]]++;
	int Max = 0 , Min = 1e5 + 1;
	for(int i = 0 ; i < 256 ; i++){
		if(a[i] != 0){
			Max = max(a[i] , Max);
			Min = min(a[i] , Min);
		}
	}
	for(int i = 256 ; i >= 0 ; i--){
		if(a[i] == Max){
			cout << (char)i << " " << a[i];
			break;
		}
	}
	cout << endl;
	for(int i = 256 ; i >= 0 ; i--){
		if(a[i] == Min ){
			cout << (char)i << " " << a[i];
			break; 
		}
	}
}
