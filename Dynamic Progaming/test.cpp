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

// day con co k pahn tu lien tiep co tong lon nhat
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n; i++) cin >> a[i];
	int sum = 0;
	for(int i = 0 ; i < k ; i++) sum += a[i]; // tổng của k phần tử đầu tiên
	int res = sum , pos = 0;
	for(int i = 1 ; i <= n - k ; i++){
		sum = sum - a[i - 1] + a[i + k - 1];
		if(sum > res){
			res = sum;
			pos = i;
		}
	}
	cout << res << endl;
	for(int i = 0 ; i < k ; i++) cout << a[pos + i] << endl;
	
}
