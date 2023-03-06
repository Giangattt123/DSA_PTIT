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
- Disjoint set union (DSU) là một cấu trúc dữ liệu cho phép quản lý tập hợp các phần tử được chia thành các nhóm không giao nhau. 
  DSU được sử dụng rất phổ biến trong các bài toán tìm kiếm, 
  liên quan đến việc kiểm tra tính liên thông của đồ thị hoặc tìm các thành phần liên thông của đồ thị.

- Các thao tác cơ bản của DSU bao gồm:
 + Khởi tạo: Mỗi phần tử ban đầu được xem như là một tập hợp độc lập.
 + Find: Tìm kiếm đại diện của một tập hợp.
 + Union: Gộp hai tập hợp lại với nhau.
Cấu trúc dữ liệu DSU được triển khai bằng cách sử dụng một mảng để lưu trữ cha của mỗi phần tử. 
Mỗi tập hợp được đại diện bởi một phần tử trong tập hợp, được gọi là cha. 
Nếu hai phần tử có cùng cha, nghĩa là chúng thuộc cùng một tập hợp. 
Việc gộp hai tập hợp lại với nhau được thực hiện bằng cách gán cha của một trong hai phần tử vào cha của phần tử còn lại.

- Một số phương pháp cải tiến được sử dụng để tối ưu hóa hiệu suất của DSU, bao gồm:

 + Path compression: khi tìm kiếm đại diện của một tập hợp, ta sẽ gán cha của tất cả các phần tử trên đường từ phần tử đó đến đại diện của tập hợp vào đại diện của tập hợp. 
   Điều này giúp giảm chi phí tìm kiếm đại diện của một tập hợp -> nén đường
 + Union by rank: khi gộp hai tập hợp lại với nhau, ta sẽ đưa tập hợp có rank nhỏ hơn vào tập hợp có rank lớn hơn.
   Điều này giúp giảm độ phức tạp của cây cha.
*/
const int maxn = 1e5 + 5;
int parent[maxn];
// Return parent
int size[maxn];
void ktao(){
	for(int i = 1 ; i <= maxn ; i++){
		parent[i] = i;
		size[i] = 1;
	}
}
int Find(int u){
	while(u != parent[u])
		u = parent[u];
	return u;
}
int Path_compression(int u){
	if(u == parent[u]) 
		return u;
	else
		return parent[u] = Find(parent[u]);
}
bool Union(int x , int y){
	x = Find(x);
	y = Find(y);
	if(x == y) return false;
//	if(x < y) parent[y] = x;
//	else parenr[x] = y;
	if(size[x] < size[y]){
		size[y] += size[x];
		parent[x] = y;
	}else{
		parent[y] = x;
		size[x] += size[y];
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		
	}
}
