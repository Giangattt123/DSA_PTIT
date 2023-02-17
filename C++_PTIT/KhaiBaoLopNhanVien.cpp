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

class NhanVien {
	public:
	    string mnv, name, gender, date, addr, tax, day;
	
	    friend istream &operator >> (istream &in, NhanVien &a) {
	        a.mnv = "00001";
	        getline(in, a.name);
	        in >> a.gender >> a.date;
	        in.ignore();
	        getline(in, a.addr);
	        in >> a.tax >> a.day;
	        return in;
	    }
	
	    friend ostream &operator << (ostream &out, NhanVien &a) {
	        out << a.mnv << " " << a.name << " " << a.gender << " " << a.date << " " << a.addr << " " << a.tax << " " << a.day;
	        return out;
	    }
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
