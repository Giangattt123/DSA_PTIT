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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int tmp[n];
	for(int i = 0 ; i < n ; i++) tmp[i] = a[i];
	sort(a , a + n);
	
	int min_val = INT_MAX;
	int pos;
	for(int i = 0 ; i < n - m + 1 ; i++){
		if(a[i + m - 1] - a[i] <= min_val){
			min_val = a[i + m - 1] - a[i];
			pos = i;
		}
	}
	
	int cnt[1000] = {0};
	for(int i = pos ; i <= pos + m - 1 ; i++)
		cnt[a[i]]++;
		
	for(int i = 0 ; i < n ; i++){
		if(cnt[tmp[i]]){
			cout << tmp[i] << " ";
			cnt[tmp[i]]--;
		}
	}
	
}
