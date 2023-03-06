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
//#define mp make_pair

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
Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự
trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.
Ví dụ với xâu ABCCBC xóa đi 2 kí tự thì F(s)_min = 6

-> Tư tưởng thuật toán : Ở mỗi bước giảm đi 1 kí tự với kí tự đang có số lần
xuất hiện nhiều nhất trong xâu
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		map<char, int> mp;
		for(char x : s)
			mp[x]++;
		priority_queue<int> Q;
		for(pair<char, int> it : mp)
			Q.push(it.second);
		while(k--){
			int tmp = Q.top();
			Q.pop();
			--tmp;
			Q.push(max(tmp , 0));
		}
		long long f_sum = 0;
		while(!Q.empty()){
			f_sum += Q.top() * Q.top();
			Q.pop();
		}
		cout << f_sum << endl;
	}
}
