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
// Sử dụng thuật toán dfs -> kiểm tra 
// Đồ thị cho bởi ma trận kề -> danh sách kề
const int maxn = 1005;
int a[maxn][maxn];
bool visited[maxn];
vector<int> ke[maxn];
int n;
int k = 1;
void nhap(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++)
			cin >> a[i][j];
	}
}
void dfs(int u){
	visited[u] = true;
	for(auto x : ke[u]){
		if(!visited[x]){
			visited[x] = true; 
			++k;
			dfs(x);
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(a[i][j] == 1){
				ke[i].push_back(j);
				ke[j].push_back(i);
			}
		}
	}
	dfs(1);
	cout << k << endl;
	if(k == n) cout << "Liên thông" << endl;
	else cout << "Không liên thông" << endl;
}
