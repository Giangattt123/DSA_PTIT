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
// 1 tập có n phần tử sinh ra 2^n tập con
// Ứng dụng sinh xâu nhị phân để làm 
// Ví dụ : n = 4 : 1 2 3 4
// 0000 -> xâu rỗng {}
// 0001 -> 4
// 0010 -> 3
// 0011 -> 3 4
int ok = 1;
int a[100];
int n = 4;
int x[] = {0 , 1 , 2 , 3 , 4};
void khoitao(){
	for(int i = 1 ; i <= 4 ; i++){
		a[i] = 0;
	}
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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	while(ok){
		for(int i = 1 ; i <= n ; i++){
			if(a[i] == 1) cout << x[i] << " ";
		}
		cout << endl;
		sinh();
	}
}
