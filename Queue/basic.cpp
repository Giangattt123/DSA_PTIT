#include <bits/stdc++.h>
using namespace std;
#include <queue>
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
// FIFO : first in first out
/*
Các hàm phổ biến trong hàng đợi đều có độ phức tạp là O(1)
push : đẩy 1 phần tử vào cuối hàng đợi
pop : lấy ra 1 phần tử ở đỉnh hàng đợi
empty : kiểm tra xem hàng đợi có rỗng hay không
size : trả về kích cỡ hiện tại của hàng đợi
front : truy cập đến phần tử đằng trc hàng đợi 
back : trả về phần tử cuối hàng đợi
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.back() << endl;
 }
