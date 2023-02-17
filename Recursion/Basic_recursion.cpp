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

/* Ngăn xếp(stack): là 1 cấu trúc dữ liệu có quan hệ mật thiết với cơ chế hoạt động của đệ quy
	Để hiểu đc cách hoạt động của đệ quy ta phải hiểu cách hoạt động của CTDL ngăn xếp
	Ngăn xếp là 1 cấu trúc dữ liệu hỗ trợ 2 thao tác push pop
	Trong đó push giúp thêm vào đỉnh của ngăn xếp , pop giúp xóa đi 1 pt khỏi đỉnh , tất cả đc
		thực hiện ở đỉnh của ngăn xếp
	Ngăn xếp hoạt động theo phương pháp LIFO(last in first out) : vào cuối ra đầu
	Stack Frame : kĩ thuật quản lí bộ nhớ , có nhiệm vụ tạo ra và loại bỏ các biến tạm thời
	 stack frame chỉ tồn tại trong quá trình thực thi , mỗi khi lời gọi hàm được gọi thì nó sẽ đóng
	 gói và đẩy vào bộ nhớ stack khi hàm đó kết thúc thì stack frame này đc loại bỏ khỏi bộ nhớ stack 
*/
/* Recursion: đệ quy -> Hàm đệ quy là 1 hàm gọi lại chính nó 
	Xây dựng hàm đệ quy cần chú ý về : công thức truy hồi và bài toán con nhỏ nhất
	  + Bài toán con nhỏ nhất : điểm dừng của hàm đệ quy
	  + Công thức truy hồi : xây dựng kết quả của bài toán lớn hơn thông qua bài toán con nhỏ hơn 
*/

// Viết hàm đệ quy tính tổng các số từ 1 đến n
int sum(int n){
	if(n == 0) 
		return n;
	else 
		return n + sum(n - 1);
}

// Viết hàm đệ quy tính n!
int giaithua(int n){
	if(n == 0) 
		return 1;
	else
		return n * giaithua(n - 1);
}

// Viết hàm đệ quy tính số Fibonacci
int fibo(int n){
	if(n == 0 || n == 1)
		return n;
	else 
		return fibo(n - 1) + fibo(n - 2);
}

// Viết hàm đệ quy tính tổ hợp chập k của n
int kCn(int n , int k){
	if(k == 0 || n == k)
		return 1;
	else 
		return kCn(n - 1, k - 1) + kCn(n - 1 , k);
}

// Viết hàm đệ quy tính tổng các chữ số của 1 số
int sum_digit(int n){
	if( n < 10 ) 
		return n;
	else 
		return n % 10  + sum_digit(n / 10);
}

// Viết hàm đệ quy chuyển đổi thập phân sang nhị phân
void convert(int n){
	if(n < 2)
		cout << n % 2;
	else{
		convert(n / 2);
		cout << n % 2;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int result = sum(3);
	cout << result << endl;
	int digit_total = sum_digit(1234);
	cout << digit_total << endl;
	convert(15);
}
