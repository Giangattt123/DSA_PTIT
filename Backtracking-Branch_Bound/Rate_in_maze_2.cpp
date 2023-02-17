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
#define ppb pop_back
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

int n , ok = false;
int a[100][100];
string s = "";
void nhap(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i , int j){
	if(i == n && j == n){
		ok = true;
		cout << s << endl;
	}
	if(i + 1 <= n && a[i + 1][j] == 1){
		s += "D";
		a[i + 1][j] = 0;
		Try(i + 1 , j);
		s.ppb();
		a[i + 1][j] = 1;
	}
	if(j - 1 >= 1 && a[i][j - 1] == 1){
		s += "L";
		a[i][j - 1] = 0;
		Try(i , j - 1);
		s.ppb();
		a[i][j - 1] = 1;
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		s += "R";
		a[i][j + 1] = 0;
		Try(i , j + 1);
		s.ppb();
		a[i][j + 1] = 1;
	}
	if(i - 1 >= 1 && a[i - 1][j] == 1){
		s += "U";
		a[i - 1][j] = 0;
		Try(i - 1 , j);
		s.ppb();
		a[i - 1][j] = 1;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	if(a[1][1] == 1 && a[n][n] == 1){
		a[1][1] = 0;
		Try(1 , 1);
		if(!ok) cout << "-1" << endl;
	}else{
		cout << "-1" << endl;
	}
}
