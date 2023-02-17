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

class PhanSo {
	private:
	    long long tu, mau;
	public:
	    PhanSo(long long tu = 0, long long mau = 1) {
	        this->tu = tu;
	        this->mau  = mau;
	    }
	    void rutgon() {
	        long long ucln = __gcd(tu, mau);
	        tu /= ucln;
	        mau /= ucln;
	    }
	
	    friend istream &operator >> (istream &in, PhanSo &a) {
	        return in >> a.tu >> a.mau;
	    }
	
	    friend ostream &operator << (ostream &out, PhanSo a) {
	        return out << a.tu << "/" << a.mau;
	    }
	
	    PhanSo operator + (PhanSo b) {
	        PhanSo a;
	        a.tu = tu * b.mau + b.tu * mau;
	        a.mau = mau * b.mau;
	        a.rutgon();
	        return a;
	    }
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
