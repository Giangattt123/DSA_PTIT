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
	ll tu , mau;
};
void rutgon(PhanSo &A){
	ll ucln = __gcd(A.tu , A.mau);
	A.tu /= ucln;
	A.mau /= ucln;
}
PhanSo total(PhanSo A , PhanSo B){
	PhanSo C;
	ll ucln = __gcd(A.mau , B.mau);
	ll mc = A.mau * B.mau / ucln;
	C.tu = A.tu * mc/A.mau + B.tu * mc/B.mau;
	C.mau = mc;
	rutgon(C);
	return C;
}

PhanSo multiply(PhanSo A , PhanSo B){
	PhanSo C;
	C.tu =  A.tu * B.tu;
	C.mau = A.mau * B.mau;
	rutgon(C);
	return C;
}

void process(PhanSo A , PhanSo B){
	PhanSo C = multiply(total(A , B) , total(A , B));
	PhanSo D = multiply(multiply(A , B) , C);
	cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
