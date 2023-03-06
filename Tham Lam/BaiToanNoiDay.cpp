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
// Sử dụng priority_queue<int> -> built CTDL Max-heap
// Đỉnh hàng đợi luôn là phần tử lớn nhất trong mảng
// Khi khai báo mặc định hàng đợi ưu tiên -> Max_heap
// Để thay đổi -> Min_heap -> Syntax: priority_queue<int , vector<int> , greater<int>> Q
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	priority_queue<int , vector<int> , greater<int>> Q;
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		int x;
		cin >> x;
		Q.push(x);
	}
	int ans = 0;
	while(Q.size() > 1){
		int x = Q.top();
		Q.pop();
		int y = Q.top();
		Q.pop();
		ans += (x + y);
		Q.push(x + y);
	}
	cout << ans << endl;
}
