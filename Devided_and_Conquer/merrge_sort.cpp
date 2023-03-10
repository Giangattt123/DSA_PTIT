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
void merge(int a[] , int l , int m , int r){
	vector<int> a1(a + l , a + m + 1);
	vector<int> a2(a + m + 1 , a + r + 1);
	int i = 0 , j = 0;
	while(i < a1.size() && j < a2.size()){
		if(a1[i] <= a2[j]){
			a[l++] = a1[i++];
		}else{
			a[l++] = a2[j++];
		}
	}
	while(i < a1.size()) a[l++] = a1[i++];
	while(j < a2.size()) a[l++] = a2[j++];
}
void merge_sort(int a[] , int l , int r){
	if(l < r){
		int mid = (l + r)/2;
		merge_sort(a , l , mid);
		merge_sort(a , mid + 1 , r);
		merge(a , l , mid , r);
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
	merge_sort(a , 0 , n - 1);
	for(int x : a) cout << x << " ";
}
