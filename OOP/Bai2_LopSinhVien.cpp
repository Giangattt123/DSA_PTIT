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

class ThiSinh{
	private:
		string name;
		string ngaysinh;
		double dm1 , dm2 , dm3;
	public:
		ThiSinh(string name , string ngaysinh , double dm1 , double dm2 , double dm3){
			this->name = name;
			this->ngaysinh = ngaysinh;
			this->dm1 = dm1;
			this->dm2 = dm2;
			this->dm3 = dm3;
		}
		void nhap(){
			getline(cin , name);
			getline(cin , ngaysinh);
			cin >> dm1 >> dm2 >> dm3;
		}
		void in(){
			cout << name << " " << ngaysinh << " " << fixed << setprecision(1) << dm1 + dm2 + dm3 << endl;
		}
		string getName(){
			return this->name;
		}
		void setName(string newName){
			this->name = newName;
		}
		friend void intt(ThiSinh x){
			cout << x.name << " " << x.ngaysinh << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ThiSinh x("Phung Duc Giang" , "06/03/2003" , 7 , 8, 9);
//	x.nhap();
//	x.in();
	cout << x.getName() << endl;
	x.setName("Ngo Ba Kha");
	cout << x.getName() << endl;
	intt(x);
}
