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
// acess_specify : private -> đảm bảo tính chất đóng gói của oop(encapsulation)
// overloading : nạp chồng hàm , nạp chồng toán tử
// overriding : ghi đè
// Giả sử có 1 hàm cùng tên , cùng kiểu trả về , cùng danh sách tham số ở lớp cha 
// và lớp con khi đó ta đa ghi đè hàm này (function overriding)

// Quan hệ : is - a : relationship
class Person{
	private :
		string name , birth;
	public :
		Person(string name , string birth){
			this->name = name;
			this->birth = birth;
		}
		void in(){
			cout << name << " " << birth << " ";
		}
		string getName(){
			return this->name;
		}
		string getBirth(){
			return this->birth;
		}
};

class Student : public Person{
	private :
		double gpa;
	public : 
		Student(string name , string birth , double gpa) : Person(name , birth){
			this->gpa = gpa; 
		}
		void in(){
			Person::in();
			cout << fixed << setprecision(2) << gpa << endl;
		}
		string getName(){ // bị ghi đè
			return "Phung Duc Giang";
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Student s("Luong Van Huy" , "22/07/2022" , 3.4);
	s.in();
	cout << s.getName() << endl;
	cout << s.getBirth() << endl;
}
