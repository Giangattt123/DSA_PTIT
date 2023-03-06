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
/* + Giải thuật tham lam (greedy algorithm) là một phương pháp tìm kiếm và 
	giải quyết vấn đề bằng cách chọn lựa lựa giải pháp tốt nhất trong số 
	các lựa chọn khả dĩ tại mỗi bước, mà không quay lại xem xét lại quá khứ 
	hoặc xem xét tất cả các lựa chọn trong tương lai.
   + Ý tưởng cơ bản của giải thuật tham lam là tại mỗi bước, 
	chọn lựa giải pháp tốt nhất trong số các lựa chọn khả dĩ. 
	Vì vậy, giải thuật này thường được sử dụng trong các bài toán tối ưu hóa, 
	trong đó ta cần tìm kiếm giải pháp
   + Đôi khi ta cảm thấy greedy -> constructive
   + Một số bài toán nổi tiếng của giải thuật tham lam là : đổi tiền , scheduling(sx công vc)
   + Nối dây, sắp xếp kí tự
   + Một sô bài tập đồ thị áp dụng tham lam -> luồng cực đại, bài toán prim, thật toán Dijkstra
   + Minimum product subset -> Tích của một tập con lớn nhất trong mảng
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
}

