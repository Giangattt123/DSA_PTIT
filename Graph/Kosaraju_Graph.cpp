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
/* Thuật toán Kosaraju dùng để đếm các thành phần liên thông mạnh, 
kiểm tra một đồ thị có hương có liên thông mạnh hay không.
   Các bước chính của thuật toán Kosaraju
   + B1: Gọi DFS trên đồ thị ban đấu, duyệt xong đẩy vào 1 stack
   + B2: Tạo một đồ thị ngược từ đồ thị ban đầu(transpose grapj)
   + B3: Pop lần lượt các đỉnh khỏi stack và gọi DFS để in ra các 
   	     thành phân liên thông mạnh thực hiện được trên đồ thị ngc.
*/
int n , m;
vector<int> adj[1005];
vector<int> TG_adj[1005];
bool visited[1005];
stack<int> st;
void nhap(){
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int x , y;
		cin >> x >> y;
		adj[x].push_back(y);
		TG_adj[y].push_back(x);
	}
}
void DFS1(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v])
			DFS1(v);
	}
	st.push(u);
}
void DFS2(int u){
	cout << u << " ";
	visited[u] = true;
	for(int v : TG_adj[u]){
		if(!visited[v])
			DFS2(v);
	}
}
void kosaraju(){
	int cnt = 0;
	memset(visited , false , sizeof(visited));
	for(int i = 1 ; i <= n ; i++){
		if(!visited[i])
			DFS1(i);
	}
	memset(visited , false , sizeof(visited));
	while(!st.empty()){
		int u = st.top();
		st.pop();
		if(!visited[u]){
			++cnt;
			DFS2(u);
			cout << endl;
		}
	}
	if(cnt == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		nhap();
		kosaraju();
	}
}
// Test case
//1
//8 9
//2 1
//1 3
//3 2
//3 8
//8 4
//4 5
//5 6
//6 7
//7 4
/*
- Thuật toán Kosaraju được sử dụng để tìm thành phần liên thông mạnh trong một đồ thị có hướng. 
- Tư tưởng của thuật toán Kosaraju được miêu tả như sau:
+ Đầu tiên, đồ thị được duyệt theo chiều sâu và các đỉnh sẽ được đánh dấu theo thứ tự kết thúc của chúng trong quá trình duyệt.
+ Sau đó, đồ thị được đảo ngược, nghĩa là các cạnh sẽ được đổi chiều, và lại thực hiện duyệt theo chiều sâu.
+ Khi duyệt các đỉnh theo thứ tự kết thúc của chúng, các đỉnh này sẽ được gom vào các thành phần liên thông mạnh. 
  Các đỉnh này sẽ được xem như là một thành phần liên thông mạnh nếu chúng có thể đến được nhau theo các cạnh có hướng.

Tư tưởng của thuật toán Kosaraju là sử dụng hai lần duyệt đồ thị theo chiều sâu, 
một lần trên đồ thị gốc và một lần trên đồ thị đảo ngược, để tìm thành phần liên thông mạnh của đồ thị ban đầu. 
Thuật toán này cho phép tìm ra các thành phần liên thông mạnh một cách hiệu quả và chính xác.
*/
