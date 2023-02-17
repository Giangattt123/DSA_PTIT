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
vector<bool> v(1005 , 0);
void fibo(){
	v[0] = v[1] = 1;
    int f1 = 0, f2 = 1;
    for (int i = 2; f1 + f2 <= 1000; ++i){
    	int f = f1 + f2;
        v[f] = 1;
        f1 = f2;
        f2 = f;
	}
}
int F[100];
void fibo1(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2 ; i <= 92 ; i++){
		F[i] = F[i-1] + F[i-2];
	}
}

bool checkFibo(int n){
	for(int i=0;i<=92;i++){
		if(n == F[i]) return true;
	}
	return false;
}
int main(){
	fibo1();
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1 ; i <= n ; i++){
			int val;
			cin >> val;
			if(checkFibo(val)) cout << val << " ";
		}
		cout << endl;
	}
}
