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
/*
- Chu trình euler là chu trình đi qua mỗi cạnh của đồ thị đúng một lần, đồ thị mà có chu 
	trình euler được gọi là một đồ thị euler.
- Đường đi euler là đường đi qua mỗi cạnh đúng 1 lần, đồ thị có đường đi euler được gọi là 
	đồ thị nửa euler, đồ thị euler sẽ là đồ thị nửa euler nhưng ngc lại chưa chắc đúng.
*/
int n , m;
int degree[1005];
set<int> adj[1005];
void nhap(){
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].insert(y);
		adj[y].insert(x);
		degree[x]++;
		degree[y]++;
	}
}
void euler(int v){
	stack<int> st;
	vector<int> EC;
	st.push(v);
	while(!st.empty()){
		int x = st.top();
		if(adj[x].size() != 0){
			int y = *adj[x].begin();
			st.push(y);
			adj[x].erase(y);
			adj[y].erase(x);
		}
		else{
			st.pop();
			EC.push_back(x);
		}
	}
	reverse(begin(EC) , end(EC));
	for(int x : EC) cout << x << " ";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	nhap();
	euler(1);
}
/* Test Case:
6 6
1 2
2 3
2 5
2 6
5 6
4 3
=> 1 2 5 6 2 3 4
*/

