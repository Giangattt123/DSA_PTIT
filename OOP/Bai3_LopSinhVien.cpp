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

class SinhVien{
	private:
		string msv;
		string name;
		string lop;
		string date;
		float gpa;
	public: 
		void nhap(){
			msv = "SV001";
			getline(cin , name);
			cin >> lop >> date >> gpa;	
		}
		void chuanHoa(){
			if(date[1] == '/') date = '0' + date;
			if(date[4] == '/') date.insert(3,"0");
		}
		void in(){
			cout << msv << " " << name << " " << lop << " " << date << " " << fixed << setprecision(1) << gpa << endl;
		}
};

class SoPhuc{
	private: 
		int thuc , ao;
	public: 
		SoPhuc(){}
		SoPhuc(int thuc , int ao){
			this->thuc = thuc;
			this->ao = ao;
		}
		// nạp chồng toán tử
		SoPhuc operator + (const SoPhuc khac){ // nạp chồng toán tử +
			SoPhuc res(0,0);
			res.thuc = this->thuc + khac.thuc;
			res.ao = this->ao + khac.ao;
			return res;
		}
		friend SoPhuc operator + (const SoPhuc a , const SoPhuc b){
			SoPhuc res(0,0);
			res.thuc = a.thuc + b.thuc;
			res.ao = a.ao + b.ao;
			return res;
		}
		SoPhuc operator - (const SoPhuc khac){
			SoPhuc res(0,0);
			res.thuc = this->thuc - khac.thuc;
			res.ao = this->ao - khac.ao;
			return res;
		}
		void operator += (SoPhuc khac){ // nạp chồng toán tử +=
			this->thuc = this->thuc + khac.thuc;
			this->ao = this->ao + khac.ao;
		}
//		bool operator == (const SoPhuc khac){
//			return this->thuc == khac.thuc && this->ao == khac.ao;
//		}
		// dùng hàm bạn nạp chồng toán tử
		friend bool operator == (const SoPhuc a , const SoPhuc b){
			return a.thuc == b.thuc && a.ao == b.ao;
		}
		bool operator < (const SoPhuc khac){
			return this->thuc < khac.thuc && this->ao < khac.ao;
		}
		// nạp chồng toán tử nhập(>>) , xuất(<<)
		friend istream  & operator >> (istream &in , SoPhuc &a){
			in >> a.thuc >> a.ao;
			return in;
		}
		friend ostream & operator << (ostream &out , SoPhuc a){
			out << a.thuc << " " << a.ao;
			return out;
		}
		void in(){
			cout << thuc <<  " " << "+" << " " << ao << "i" << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	SinhVien x;
//	x.nhap();
//	x.chuanHoa();
//	x.in();
	SoPhuc a(10,2); 
	SoPhuc b(5,1);
//	SoPhuc c(2,2);
//	SoPhuc d = a + b + c;
//	d.in();
//	a = a + b;
//	a.in();
	cout << (a == b) << endl;
	cout << (b < a) << endl;
//	SoPhuc x[100];
//	sort(x , x + 100);
	SoPhuc x ;
	cin >> x;
	cout << x;
}
