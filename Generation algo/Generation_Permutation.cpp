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

/* Generation_permutation : sinh hoán vị
	Cấu hình đầu tiên 1 2 3 ... n
	Cấu hình cuối cùng n n-1 n-2...1
	
	B1 : đi tìm vị trí a[i] < a[i+1]
	B2 : tìm từ chỉ số i + 1 -> n phần tử nhỏ nhất > a[i] để hoán vị
	B3 : sắp xếp theo thứ tự tăng dần i + 1 -> n
*/

int n , a[100] , ok;
void ktao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		--i;
	}
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i] , a[j]);
		reverse(a + i + 1 , a + n + 1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ok = 1;
	cin >> n;
	ktao();
	while(ok){
		for(int i = 1 ; i <= n ; i++)
			cout << a[i] << " ";
		cout << endl;
		sinh();
	}
	// sử dụng next_permutation đế sinh ra cấu hình kế tiếp(sinh hoán vị)
	int b[] = {1, 3, 2, 4};
	do{
		for(int x : b)
			cout << x << " ";
		cout << endl;
	}while(next_permutation(b , b + 4));
	// nếu sinh đc cấu hình kế tiếp -> sinh ra và trả về true
	// nếu là cấu hình cuối cùng thì nó sẽ là trả về false
	cout << endl;
	int c[] = {5,4,3,2,1};
	cout << next_permutation(c , c + 5) << endl;
	for(int x : c) cout << x << " "; // quay lại cấu hình đầu tiên
	cout << endl;
	// next_permutation áp dụng cho mảng , vector , string
	string s = "142759863";
	next_permutation(s.begin(), s.end());
	cout << s << endl;
	// prev_permutation
}
