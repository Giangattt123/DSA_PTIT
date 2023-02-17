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

class NhanVien{
	private:
		string ms , name , gender , ns , addr , code , day;
	public:
		NhanVien(string ms , string name , string gender , string ns , string addr , string code , string day){
			this->ms = ms;
			this->name = name;
			this->gender = gender;
			this->ns = ns;
			this->addr = addr;
			this->code = code;
			this->day = day;
		}
		string chuanHoa(string s){
			if(s[1] == '/') s = '0' + s;
			if(s[4] == '/') s.insert(3 , "0");
			return s;
		}
		string vietHoa(string s){
			s[0] = toupper(s[0]);
			for(int i = 1 ; i <= s.size() - 1 ; i++){
				s[i] = tolower(s[i]);
			}
			return s;
		}
		string chuanTen(string s){
			string name = "";
			stringstream ss(s);
			string tmp;
			while(ss >> tmp){
				name += vietHoa(tmp);
				name += " ";
			}
			return name;
		}
		void in(){
			cout << ms << " " << name << gender << " " << ns << " ";
			cout << addr << " " << code << " " << day << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string ms = "00001";
	string name , gender , ns , addr , tax_code , day_code;
	getline(cin , name);
	getline(cin , gender);
	getline(cin , ns);
	getline(cin , addr);
	getline(cin , tax_code);
	getline(cin , day_code);
	NhanVien x(ms , x.chuanTen(name) , gender , x.chuanHoa(ns) , addr , tax_code , x.chuanHoa(day_code));
	x.in();
}
