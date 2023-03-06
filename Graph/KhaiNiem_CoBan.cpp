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

// G = <V , E> -> V : tập đỉnh , E : tập đỉnh
// G : Graph , V : Vertice(đỉnh) , E : Edge(Cạnh)
// Đồ thị nếu chia theo hướng  -> vô hướng và có hướng
// Đồ thị nếu chia theo số cạnh giữa 2 đỉnh -> đơn đồ thị và đa đồ thị
// Cạnh mà nối 1 đỉnh với chính nó gọi là khuyên
// Cạnh mà có hướng gọi là cung
// 2 đỉnh được gọi là kề nhau nếu tồn tại 1 cạnh nối trực tiếp giữa 2 đỉnh chứ không phải đường đi
// Cạnh nối giữa 2 đỉnh kề nhau được gọi là cạnh liên thuộc
// Một đồ thị được gọi là vô hướng nền khi đồ thị có hướng được bỏ hướng đi

/*
Đồ thị đầy đủ
	1. Đồ thị vô hướng được gọi là đầy đủ, nếu mỗi cặp đỉnh đều có cạnh nối giữa chúng
	2. Đồ thị có hướng được gọi là đầy đủ , nếu mỗi cặp đỉnh có cung nối giữa chúng
*/
/* Bậc của đỉnh trên đồ thị vô hướng, có hướng
	1. Với đồ thị vô hướng
		Bậc của đỉnh u trên đồ thị vô hướng là số cạnh liên thuộc với đỉnh u đó, kí hiệu deg(u)
		Bậc có đỉnh 0 được gọi là đỉnh cô lập
		Bậc có đỉnh 1 được gọi là đỉnh treo
		Định lí : Đồ thị G = <V, E> là đồ thị vô hướng có m cạnh, khi đó tổng bậc các đỉnh của đồ thị 
			được tính bằng 2 lần số cạnh của đồ thi(hay 2*m)
			
	2. Với đồ thị có hướng: bán bậc ra, bán bậc vào
		Bán bậc ra của đồ thị có hướng : bán bậc ra của đỉnh u là số lượng cạnh(cung) đi ra khỏi đỉnh u(deg+u)
		Bán bậc vào của đồ thị có hướng : bán bậc vào của đỉnh u là số lượng cạnh(cung) đi ra vào đỉnh u(deg-u)
		Định lí : Trên đồ thị có hướng -> tổng bbr = tổng bbv = số lượng cạnh
		Bán bậc ra(deg+) : là những cạnh có đỉnh đầu là đỉnh u
		Bán bậc vào(deg-) : là những cạnh có đỉnh cuối là đỉnh u
*/

/* Đường đi : đường đi đơn , đường đi bình thường 
	Đường đi có độ dài n từ u đến v của G là dãy các đỉnh từ x0 , x1 , x2 , x3 , .. , xn với x0 = u, xn = v
	Đường đi đơn : cũng tính là một đường đi nhưng các đỉnh trên đường đi nó phải phân biệt
	Đường đi gọi là đường đi sơ cấp, nếu đi qua các đỉnh không quá một lần, ngoại trừ đỉnh đầu và cuối
*/

/* Chu trình: Là đường đi bao gồm các cạnh phân biệt, trong đó điểm đầu trùng điểm cuối
	Chu trình đơn : Ngoại trừ đỉnh đầu với đỉnh cuối trùng nhau không còn hai đỉnh nào giống nhau
*/

/*+Liên thông đối với đồ thị vô hướng: Đồ thị vô hướng được gọi là liên thông nếu luôn tìm được đường đi 
	giữa hai đỉnh bất kì của đồ thị
	Có những đồ thị được chia thành các mảnh liên thông hay những thành phần liên thông
	-> Quan tâm đến đồi thị vô hướng có liên thông hay không, và bn thành phần liên thông
	
  +Liên thông đối với đồ thị có hướng: liên thông mạnh , liên thông yếu
   Liên thông mạnh với đồ thị có hướng: nếu giữa 2 đỉnh bất kì u , v luôn tồn tại đường đi tư u -> v
   Liên thông yếu với đồ thị có hướng: nếu đồ thị vô hướng tương ứng của nó liên thông
*/

/* Các cách biểu diễn đồ thị
	1. Ma trận kề với đồ thị vô hướng: n đỉnh là ma trận vuông cỡ n * n các phần tử nhận 0 hoặc 1
	( A[i][j] = {0 ,1} : nếu có cạnh nối giữa i đến j thì la 1 và ngược lại )
	Tính chất : là ma trận đối xứng, tổng các phần tử trên ma trận = 2 lần số cạnh
		tổng các phần tử trên hàng or cột u là bậc của u
	2. Ma trận kề với đồ thị có hướng: 
	Tính chất : có thể không đối xứng
				tổng các phần tử của ma trận bằng số cạnh của ma trận
				tổng các phần tử trên hàng thứ u là bán bậc ra của đỉnh u
				tổng các phần tử trên cột thứ u là bán bậc vào của đỉnh u
	3. Danh sách cạnh(input chính của một bài toán đồ thị): biểu diễn khi đồ thị thưa, 
		-> để lưu danh sách cạnh của 1 đồ thị -> dùng pair lưu first và second
	4. Danh sách kề
	5. Biểu diễn đồ thị với ma trận liên thuộc
*/
// Một đồ thị vô hướng gọi là liên thông -> Tồn tại đường đi giữa 2 đỉnh bất kì

/* Một đồ thị vô hướng G ko liên thông -> hợp của các thành phần con liên thông->
ko có các đỉnh chung -> các thành phần liên thông */

// Một đồ thị vô hướng G liên thông -> Số thplt là 1

/* Thuật toán kiểm tra tính liên thông của đồ thị vô hướng G
Mặc định : 1 -> lt , 2 -> nlt.
B1 : Thực hiện bfs(1)/dfs(1).
B2 : Đếm k là số lượng các đỉnh được duyệt.
B3 : Nếu k == n -> 1 , k < n -> 0
*/

/* Thành phần liên thông của đồ thị vô hướng
- Cho đồ thị G=<V , E> 
Output : + Số k là số các thành phần liên thông của G
		 + Số thứ tự các thành phần liên thông chứa u của mọi đỉnh u
*/

/* Đỉnh trụ(đỉnh khớp hay đỉnh cắt) là khi ta xóa đỉnh đó và xóa các cạnh liên thuộc của đỉnh đó
ta được một đồ thị mới {G}/u chứa nhiều thành phần liên thông hơn
*/

/* Cạnh e = (u , v) là cạnh cầu( hay cạnh cắt) là khi ta xóa cạnh đó ta cũng sẽ được đồ thị mới
{G}/e chứa nhiều thành phần liên thông hơn(xóa cạnh không xóa đỉnh)
*/		


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
