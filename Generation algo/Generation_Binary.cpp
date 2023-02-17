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

// Sinh nhị phân
// Xâu nhị phân có n bit -> có 2^n xâu nhị phân
// Miền giá trị sẽ là 0 -> 2^n - 1
/*
	while(chưa phải cấu hình cuối cùng){
		in ra cấu hình hiện tại
		sinh ra cấu hình kế tiếp = giải thuật sinh
	}
*/

int n;// độ dài xâu nhị phân ( xâu nhị phân có n bit )
int a[100];// lưu trữ các bit nhị phân
int ok = 1; // biến check cấu hình cuối cùng
void khoitao(){ // xây dựng lên cấu hình đầu tiên
	for(int i = 1 ; i <= n ; i++)
		a[i] = 0;
}

//bool final(){ // kiểm tra có phải là cấu hình cuối cùng hay không
//	for(int i = 1 ; i <= n ; i++){
//		if(a[i] == 0) 
//			return false; // chưa phải cấu hình cuối cùng
//	}
//	return true;
//}

void sinh(){ // sinh ra cấu hình kế tiếp
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	khoitao();// khởi tạo cấu hình đầu tiên gồm toàn bit 0
	while(ok){ // chưa phải cấu hình cuối cùng
		// in ra cấu hình hiện tại
		for(int i  = 1 ; i <= n ; i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
//	for(int i = 1 ; i <= n ; i++) cout << a[i];
}
