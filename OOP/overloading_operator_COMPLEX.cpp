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

class SoPhuc{
	private:
		int thuc , ao;
	public:
		SoPhuc(){};
		SoPhuc(int thuc , int ao){
			this->thuc = thuc;
			this->ao = ao;
		}
		// nạp chồng toán tử + giữa 2 số phức
		SoPhuc operator + (const SoPhuc b){
			SoPhuc res;
			res.thuc = this->thuc + b.thuc;
			res.ao = this->ao + b.ao;
			return res; 
		}
		// nạp chồng toán tử bằng để so sánh 2 lớp số phức
		bool operator == (const SoPhuc b){
			return this->thuc == b.thuc && this->ao == b.ao;
		}
		// nạp chồng toán tử bằng hàm bạn
		friend SoPhuc operator + (SoPhuc a , SoPhuc b){
			SoPhuc res;
			res.thuc = a.thuc + b.thuc;
			res.ao = a.ao + b.ao;
			return res; 
		}
		void in(){
			cout << this->thuc << " " << this->ao << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	SoPhuc a(10 , 3) , b(7,6);
	SoPhuc c = a + b;
	c.in();
	cout << (a == b) << endl;
}
