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

int X[100] , n , k;
void inkq(){
	for(int i = 1 ; i <= k ; i++){
		cout << X[i];
	}
	cout << endl;
}

void Try(int i){
	// X[i] = n - k + i; -> kh? nang th? m
	// X[i] = X[i - 1] + 1; -> kh? nang 1
	for(int j =  X[i - 1] + 1; j <= n - k + i ; j++){
		X[i] = j;
		if(i == k)
			inkq();
		else 
			Try(i + 1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	Try(1);
}
