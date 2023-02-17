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
#define mp make_pairk

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

void merge(int a[] , int l , int m , int r){
	int n1 = m - l + 1;
	int n2 = r - m;
	int x[n1] , y[n2];
	for(int j = l ; j <= m ; j++) x[j - l] = a[j];
	for(int j = m + 1 ; j <= r ; j++) y[j - m - 1] = a[j];
	int i = 0 , j = 0 , cnt = l;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			a[cnt++] = x[i++];
		}else{
			a[cnt++] = y[j++];
		}
	}
	while(i < n1) a[cnt++] = x[i++];
	while(j < n2) a[cnt++] = y[j++];
}
void mergeSort(int a[] , int l , int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a , l , m);
		mergeSort(a , m + 1, r);
		merge(a , l , m , r);
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	int t;
//	cin >> t;
//	while(t--){
//		int n , m;
//		cin >> n >> m;
//		vector<int> v(n + m);
//		for(auto &x : v) cin >> x;
//		sort(v.begin() , v.end());
//		for(auto x : v) cout << x << " ";
//		cout << endl;
//	}
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	mergeSort(a , 0 , n - 1);
	for(auto x : a) cout << x << " ";
	cout << endl;
}
