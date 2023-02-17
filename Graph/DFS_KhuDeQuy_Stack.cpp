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

// G : đồ thị cho dưới dạng ma trận kề
// vs[] : đánh dấu 1 đỉnh đã được thăm hay chưa
// e[v] -> s : cạnh nối s với v(cạnh từ s đến v được sử dụng)

const int maxn = 105;
int a[maxn][maxn] , n , u , e[maxn] , vs[maxn] , s[maxn];
void dfs_stack(int u){
	int top = 1;
	s[top] = u;
	vs[u] = 1;
	while(top > 0){
		int v = s[top];
		int ok = 1;  
		for(int i = 1; i <= n ; i++){
			if(vs[i] == 0 && a[v][i] == 1){
				vs[i] = 1;
				e[i] = v;
				ok = 0;
			}
			if(ok == 1) top--;
		}
	}
}
void nhap(){
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= n ; j++)
			cin >> a[i][j];
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	
}
