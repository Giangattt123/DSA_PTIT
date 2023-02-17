#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
// Sinh to hop chap k cua n phan tu
int a[100] , n , k , ok;
void ktao(){
	for(int i = 1 ; i <= k ; i++)
		a[i] = i;
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1 ; j <= n ; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	ok = 1;
	ktao();
	while(ok){
		for(int i = 1 ; i <= k ; i++){
			cout << a[i] << "";
		}
		cout << endl;
		sinh();
	}
}
