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
// lomoto partition và hoare partition
int partition(int a[] , int l , int r){
	int i = l - 1;
	int pivot = a[r];
	for(int j = l; j <= r - 1; j++){
		if(a[j] < pivot){
			++i;
			swap(a[i] , a[j]);
		}
	}
	++i;
	swap(a[r] , a[i]);
	return i; // trả về chỉ số để gọi đệ quy ở 2 nửa
}
void quicksort(int a[] , int l , int r){
	if(l < r){
		int pos = partition(a , l , r);
		quicksort(a , l , pos - 1);
		quicksort(a , pos + 1 , r);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	quicksort(a , 0 , n - 1);
//	partition(a , 0 , n - 1);
	for(int x : a) cout << x << " ";
}
