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
// Mảng thực chất là 1 hằng con trỏ 
// Giá trị của mảng là địa chỉ của phần tử đầu tiên trong mảng
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a[] = {1, 2, 3, 4, 5};
	cout << "Value a array is : " << endl;
	cout << a << endl;
	cout << &a[0] << endl;
	cout << "Address elements of a array is : " << endl;
	for(int i = 0; i < 5; i++){
		cout << &a[i] << " ";
	}
	cout << endl;
	cout << "Value elements of a array is : " << endl;
	for(int i = 0; i < 5; i++) cout << *(a + i) << " ";
	cout << endl;
	// Nhập các phần tử của mảng dùng con trỏ
	int c[5];
	for(int i = 0; i < 5; i++) cin >> *(c + i);
	for(int i = 0; i < 5; i++){
		cout << *(c + i) << " ";
	}
	cout << endl;
	int q;
	cin >> q;
	int p[q];
	cout << "Cho con tro tro vao phan tu dau tien cau mang : " << endl;
	int *b = p; // gán 2 con trỏ
	for(int i = 0; i < q; i++) cin >> b[i];
	for(int i = 0; i < q; i++) cout << b[i] << " ";
	cout << endl;
	cout << "Pointer and operator : " << endl;
	int d[] = {1, 2, 4, 5, 6, 9, 8, 7};
	int *ptr = d;
	++ptr;
	cout << *ptr << endl;
	for(int *x = d; x != (d + 8); ++x)
		cout << *x << " ";
}
