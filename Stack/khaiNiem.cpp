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
// Ngăn xếp(Stack) có hai thao tác chính đưa 1 phần tử vào ngăn xếp và đẩy 1 phần tử ra khỏi ngăn xếp
// Tất cả 2 vc đó đều thực hiện ở đỉnh của ngăn xếp
// Stack hoạt động theo nguyên tắc LIFO(LAST IN FIRST OUT) : vào cuối ra đầu
// Thư viện hỗ trợ trong C++ : include<stack>
// push : đẩy 1 phần tử vào ngăn xếp
// pop : xóa 1 phần tử ra khỏi ngăn xếp
// top : lấy ra 1 phần tử ở đỉnh của ngăn xếp
// empty : kiểm tra 1 ngăn xếp có rỗng hay không
// size : kích thước của ngăn xếp
// O(1)
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
	int n;
	cin >> n;
	stack<int> st;
	while(n != 0){
		st.push(n % 2);
		n /= 2;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	return 0;
}
