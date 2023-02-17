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

class PhanSo{
	private:
		ll tu , mau;
	public:
		PhanSo(ll a , ll b){
			this->tu = a;
			this->mau = b;
		}
		ll getTu(){
			return this->tu;
		}
		ll getMau(){
			return this->mau;
		}
		ll gcd(ll a , ll b){
			if(b == 0) return a;
			else return gcd(b , a % b);
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll a , b;
	cin >> a >> b;
	PhanSo x(a , b);
	cout << x.getTu()/x.gcd(a , b) << "/" << x.getMau()/x.gcd(a , b);
}
