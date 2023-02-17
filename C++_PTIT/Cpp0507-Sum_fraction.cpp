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

struct PhanSo{
	ll tuso , mauso;
};

void nhap(PhanSo &a){
	cin >> a.tuso >> a.mauso;
}

void rutgon(PhanSo &a){
	ll uc = __gcd(a.tuso , a.mauso);
	a.tuso /= uc;
	a.mauso /= uc;
}
PhanSo tong(PhanSo p , PhanSo q){
	PhanSo t;
	ll ucln = __gcd(p.mauso,q.mauso);
	ll mc = p.mauso / ucln * q.mauso;
	t.tuso = mc / p.mauso * p.tuso + mc / q.mauso * q.tuso;
	t.mauso = mc;
	rutgon(t);
	return t;
}

void in(PhanSo t){
	cout << t.tuso << "/" << t.mauso;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
