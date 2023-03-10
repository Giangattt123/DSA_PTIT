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
inline ll gcd(ll a,ll b) {
	ll r;
	while(b) {
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
inline ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}

void insertion_sort(int a[] , int n) {
	for(int i = 0; i < n; ++i) {
		int j = i;
		while(j > 0 && a[j] < a[j - 1]) {
			swap(a[j], a[j - 1]);
			j--;
		}
		cout << "Buoc " + to_string(i) + ": ";
		for (int j = 0; j <= i; ++j) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	insertion_sort(a, n);
}
