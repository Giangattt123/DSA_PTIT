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
// Phân tích một số n thành tổng của các số bé hơn
// 4 : (4) (3 1) (2 2) (2 1 1) (1 1 1 1)
// 5 -> tương tự
int n , a[1005] , ok , cnt;
void khoitao(){
	cnt = 1;
	a[1] = n;
}
void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0) ok = 0;
	else{
		a[i]--;
		int lack = cnt - i + 1;
		cnt = i;
		int q = lack / a[i];
		int r = lack % a[i];
		if(q){
			for(int j = 1 ; j <= q ; j++)
				a[++cnt] = a[i];
		}
		if(r){
			a[++cnt] = r;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		khoitao();
		while(ok){
			cout << "(";
			for(int i = 1 ; i <= cnt ; i++){
				cout << a[i];
				if(i == cnt) cout << ") ";
				else cout << " ";
			}
			sinh();
		}
		cout << endl;
	}
}
