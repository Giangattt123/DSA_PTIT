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

// Quản lí sinh viên : msv , tên , ngày sinh , gpa . Hành động : đi lại , ăn uống
// đóng gói(Encapsulation) : cố gắng che dấu dữ liệu
// access_specifier : quyền truy cập -> public, protected, private
// public : truy cập đc ở mọi nơi
// private : truy cập đc ở trong phạm vi của class chứa nó --> 
// protected : inherit(kế thừa)
// Atrribute : để private để đảm bảo tính chât đóng gói(encapsulation)
// Method : để public
// Khi ko khai báo acess_specifier --> private default
class SinhVien{
	// Atrribute : các thuộc tính
	private:
		string msv;
		string ten;
		string ngaysinh;
		double gpa;
	// Method : phương thức
	public:
//		void dilai(){
//			cout << "Sinh vien co the di lai" << endl;
//		}
		void dilai();
		SinhVien(){
			cout << "Ham khoi tao mac dinh duoc goi!" << endl;
		}
		SinhVien(string id , string name , string birth , double diem){
			cout << "Ham khoi tao co tham so truyen vao" << endl;
			msv = id;
			ten = name;
			ngaysinh = birth;
			gpa = diem;
		}
		~SinhVien(){
			cout << "Ham huy duoc goi !" << endl;
		}
		void nhap(){
			getline(cin , msv);
			getline(cin , ten);
			getline(cin , ngaysinh);
			cin >> gpa;
		}
		void in(){
			cout << msv << " " << ten << " " << ngaysinh << " " << fixed << setprecision(2) << gpa << endl; 
		}
};

// implement --> use range operator 
void SinhVien::dilai(){
	cout << "Sinh vien co the di lai" << endl;
}

// Hàm tạo : constructor
// Hàm hủy : destructor
// Funtion overloading : nạp chồng hàm
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	SinhVien x;
//	x.dilai();
	// Mảng đối tượng
//	SinhVien a[100];
	// Vector đối tượng
//	vector<SinhVien> v;
//	SinhVien y("CNTT1" ,"Phung Duc Giang" , "06/03/2003" , 3.6);
	// Public -> CNTT1 Phung Duc Giang 06/03/2003 3.6
//	cout << y.msv << " " << y.ten << " " << y.ngaysinh << " " << y.gpa;
	x.nhap();
	x.in();
}
