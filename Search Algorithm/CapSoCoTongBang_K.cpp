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
//// C1 : => Sử dụng map
//int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	while(t--){
//		int n, k;
//		cin >> n >> k;
//		map<int , int> mp;
//		long long a[n];
//		for(int i = 0 ; i < n ; i++){
//			cin >> a[i];
//			mp[a[i]]++;
//		}
//		ll ans = 0;
//		for(int i = 0 ; i < n ; i++){
//			ans += mp[k - a[i]];
//			if(a[i] *2 == k)
//				ans -= 1;
//		}
//		cout << ans / 2 << endl;
//	}
//}


// C2 => Sử dụng tìm kiếm nhị phân -> sort
int firstPos(int a[] , int l , int r , int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return res;
}
int lastPos(int a[] , int l , int r , int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return res;
}
int main(void){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a , a + n);
		ll ans = 0;
		for(int i = 0 ; i < n - 1; i++){
			// a[i] -> k - a[i];
			int l = firstPos(a , i + 1 , n - 1 ,k - a[i]);
			int r = lastPos(a , i + 1 , n - 1 , k - a[i]);
			if(l != -1)
				ans += r - l + 1;
		}
		cout << ans << endl;
	}
}