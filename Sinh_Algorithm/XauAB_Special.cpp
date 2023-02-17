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
// Xâu AB có n kí tự và có chỉ có duy nhất k kí tự A liên tiếp
int a[1005] , n , k , ok;
void ktao(){
	for(int i = 1 ; i <= n ; i++)
		a[i] = 0;
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
bool check(){
	int dem = 0 , res = 0;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == 0) dem++;
		else dem = 0;
		if(dem > k) return false;
		if(dem == k) ++res;
	}
	return res == 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok = 1;
		ktao();
		while(ok){
			if(check()){
				for(int i = 1 ; i <= n ; i++){
					if(a[i]) cout << "B";
					else cout << "A";
				}
				cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
}
