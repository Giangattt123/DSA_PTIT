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

string standardized_fullName(string s){
	string ans;
	string tmp = "";
	stringstream ss(s);
	while(ss >> ans){
		transform(ans.begin() , ans.end() , ans.begin() , ::tolower);
		ans[0] = toupper(ans[0]);
		tmp += ans + " ";
	}
	tmp.pop_back();
	return tmp;
}
class SinhVien{
	public :
		string msv , name , class_name , date;
		float gpa;
	friend istream &operator >> (istream &in , SinhVien &a){
		a.msv = "B20DCCN001";
		getline(in , a.name);
		cin >> a.class_name >> a.date >> a.gpa;
		a.name = standardized_fullName(a.name);
		if(a.date[1] == '/') a.date = '0' + a.date;
		if(a.date[4] == '/') a.date.insert(3,"0");
		return in;
	}
	friend ostream &operator << (ostream &out , SinhVien a){
		out << a.msv << " " <<  a.name << " " << a.class_name << " " << a.date << " ";
		out << fixed << setprecision(2)  << a.gpa;
		return out;
	}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	SinhVien a;
	cin >> a;
	cout << a;
}

