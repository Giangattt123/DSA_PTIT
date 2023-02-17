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

int n  = 8, column[100] , x[100] , cheo_nguoc[100] , cheo_xuoi[100];
int ans = 0;
int a[100][100];

void Try(int i){
	for(int j = 1 ; j <= n ; j++){
		if(column[j] == 0 && cheo_xuoi[i + j - 1] == 0 && cheo_nguoc[n + i - j] == 0){
			x[i] = j;
			column[j] = cheo_xuoi[i + j - 1] = cheo_nguoc[n + i - j] = 1;
			if(i == n){
				int sum = 0;
				for(int k = 1 ; k <= n ; k++) sum += a[k][x[k]];
				ans = max(ans , sum);
			}
			else 
				Try(i + 1);
			column[j] = cheo_xuoi[i + j - 1] = cheo_nguoc[n + i - j] = 0;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++)
			cin >> a[i][j];
	}
	Try(1);
	cout << ans;
}
