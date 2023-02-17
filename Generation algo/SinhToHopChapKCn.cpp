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
 - Sinh tổ hợp : là tập con có k phần tử của n phần tử ban đầu , không có sự phân biệt về thứ tự
 - Ví dụ tổ hợp chập 3 từ {1 , 2 , 3 , 4} -> {1,2,3} , {1,2,4} , {1,3,4} , {2,3,4}
 - Cấu hình đầu tiên ( cấu hình khởi tạo ) -> k phần tử nhỏ nhất {1,2,3,..,k} , cấu hình kết thúc
	là {n - k + 1 , n - k + 2 , .. , n} -> các cấu hình tạo thành dãy tăng dần
 - Mỗi giá trị ở 1 vị trí đều có 1 giá trị cận trên(giá trị lớn nhất có thể nhận được) , giá trị max
 	thứ i sẽ là n - k + i , hay x[i] = x[n-k+i] , giới hạn dưới x[i] = x[i-1] + 1;
*/
/* Tóm tắt lại
	- Tìm từ cuối lên đầu cho đến khi gặp đc phần tử x[i] chưa đạt giới hạn trên n - k + i
	- Tăng x[i] lên một
	- Đưa các phần tử sau x[i] về giới hạn dưới
*/
int n , k , a[100] , ok;
void ktao(){
	// Cấu hình đầu tiên
	for(int i = 1 ; i <= k ; i++) a[i] = i;
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = 0;
	else {
		a[i]++;
		for(int j = i + 1 ; j <= k ; j++)
			a[j] = a[j - 1] + 1;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ok = 1;
	cin >> n >> k;
	ktao();
	while(ok){
		for(int i = 1 ; i <= k ; i++)
			cout << a[i] << " ";
		cout << endl;
		sinh();
	}
	
}
