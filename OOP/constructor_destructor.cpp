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

class student{
	private:
		string id , name , birth;
		float gpa;
	public:
		student(){
			cout << "Day la ham tao mac dinh" << endl;
			id = "giangpd";
			name = "Phung Duc Giang";
			birth = "06/03/2003";
			gpa = 2.8;
		}
		student(string msv , string ten, string ngaysinh , float diem){
			id = msv;
			name = ten;
			birth = ngaysinh;
			gpa = diem;
		}
		void in();
//		void in(){
//			cout << id << " " << name << " " <<  birth << " " << gpa << endl;
//		}
};
void student::in(){
	cout << id << " " << name << " " <<  birth << " " << gpa << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	student s;
	s.in();
	student a("cntt" , "Nguyen Van Nam" , "08/23/2222" , 3.5);
	a.in();
}
