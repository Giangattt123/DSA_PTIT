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

// T/c đồng dư: x % p = 1 thì x^2 % p = 1
//    Nhận thấy: x % p == 1 thì (x + p*i) % p == 1
//    Với mỗi x t/m, ta tìm last là số lớn nhất có dạng (x + p*i) còn t.m last % p == 1
//    Như vậy sẽ tính được số lượng số t/m trong đoạn [x, last]
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		long long b, p;
	    cin >> b >> p;
	    long long res = 0;
	    for(long long i = 1; i < p; ++i) {
	        if ((i * i) % p == 1) {
	            long long last = i + p * (b / p);
	            if (last > b)
	                last -= p;
	            res += (last - i) / p + 1;
	        }
	    }
	    cout << res << endl;
	}
}
