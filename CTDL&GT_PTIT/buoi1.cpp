#include <bits/stdc++.h>
#include<iostream> // thư viện vào ra stream : dòng dữ liệu , vào ra bàn phím màn hình
#include<windows.h> // tìm cách để cpp tương thích vs môi trường window
#include<fstream> // thư viện tương tác với file
using namespace std; // vùng làm việc chuẩn
// IBM clean room technology
// IBM Kỹ nghệ phòng sạch(clean room)
// 1. Phòng rỗng thì sạch
// 2. Mỗi lần chỉ nạp 1 lệnh 
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

const char *fn = "NUM.INP";
// Triangle numbers(Số tam giác) 
// 1 3 6 10 15 -> YES
// 2 4 7 8 -> NO
// Reques : Cho x in ra số tam giác thứ mấy
int Triangle(int x){ // Tìm n để T(n) = x
	int xx = x + x; // 2x
	float n = (int)sqrt(xx);
	return (n*(n + 1) == xx) ? (int)n : -1;
}

// Tái sử dụng Reusing

// hàm chờ đợi
void Go(){
	cout << " ? " << endl;
	if(cin.get() == '.')
		exit(0);
}
// Phương án 1 : input from key board
void Run(){
	int x , n;
	while(true){
		cout << "x = ";
		cin >> x;
		if(x < 0) break;
		n = Triangle(x);
		if(n >= 0)
			cout << x << " la so tam giac thu " << n << endl;
		else cout <<  x << " khong phai la so tam giac" << endl;
	}
}

void Run3(string s){
	stringstream ss;
	ss << s;
	int x , n;
	while(true){
		ss >> x;
		if(x < 0) break;
		n = Triangle(x);
		cout << "\n " << x;
		if(n >= 0) cout << " la so tam giac thu " << n;
		else cout << " khong phai so tam giac";
	}
}

// input data from file
void Run4(){
	cout << "Phuong phap doc tu file" << endl;
	ifstream f(fn); // mở file fn để đọc
	if(f.fail()){
		cerr << "\n Khong mo dc input file " << fn;
		exit(1); // dừng chương trình nhưng có lỗi
	}
}

/* HOME_WORK
Số ngữ giác P(n) = n(3n - 1)/2
Số lục giác P(n) = n(2n - 1)
*/

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	Run3("1 2 4 6 8 10 499500 -23");
	Run4();
	Go();
}
