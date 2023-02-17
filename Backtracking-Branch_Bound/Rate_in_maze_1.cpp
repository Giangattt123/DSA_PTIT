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
#define ppb pop_back
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

int n , check;
int a[100][100];
string s = "";
void nhap(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++)
			cin >> a[i][j];
	}
}

void Try(int i , int j){
	if(i == n && j == n){
		check = 1;
		cout << s << " ";
	}
	if(i + 1 <= n && a[i + 1][j] == 1){ 
		s += "D";
		a[i + 1][j] = 0;
		Try(i + 1 , j);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		s += "R";
		a[i][j + 1] = 0;
		Try(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		nhap();
		check = 0;
		Try(1 , 1);
		if(check) cout << endl;
		else cout << "-1" << endl;
	}
}
