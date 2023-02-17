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
// inheritance syntax : class - l?p con : quy?n truy c?p - l?p cha {}

//class Person{
//	private :
//		string name , birth , address;
//	public :
//		void intt(){
//			cout << name " " << birth << " "  << address << endl;
//		}
//};
//
//class Student : public Person{
//	private :
//		string className;
//		double gpa;
//};


class Nguoi{
	private :
		string ten , ngaysinh;
	public :
		Nguoi(string ten , string ngaysinh) : ten(ten) , ngaysinh(ngaysinh){
			
		}
		void in(){
			cout << ten << " " << ngaysinh << " ";
		}
		string getTen(){
			return this->ten;
		}
		string getNgaySinh(){
			return this->ngaysinh;
		}
		string setTen(){
			this->ten = "Giang";
			return this->ten;
		}
};

class HocSinh : public Nguoi{
	private :
		double diem;
	public :
		HocSinh(string ten , string ngaysinh , double diem) : Nguoi(ten , ngaysinh){
			this->diem = diem;
		}
		void in(){
			Nguoi::in();
			cout << diem << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	HocSinh s("Phung Duc Giang" , "06/03/2003" , 3.5);
	s.in();
	cout << s.getNgaySinh() << endl;
	cout << s.getTen() << endl;
	s.setTen();
	cout << s.getTen() << endl;
	
	
}
