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
// HAHAHA
// Sinh xâu nh? phân v?i 1 = "A" , 0 = "H"
/*
Yêu c?u :
	+ Kí t? d?u tiên ph?i là H , kí t? cu?i cùng là A
	+ Không có ch? H nào d?ng c?nh nhau
*/
// -> bài toán dua v? li?t kê các xâu nh? phân th?a mãn không có 2 s? 1 nào d?ng c?nh nhau
const int maxn = 1005;
int a[maxn], n , ok;
void ktao() {
	for(int i = 1 ; i <= n ; i++)
		a[i] = 0;
}
void sinh() {
	int i = n;
	while(i >= 0 && a[i] == 1) {
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
bool checked() {
	for(int i = 1 ; i < n ; i++) {
		if(a[i] == 1 && a[i + 1] == 1)
			return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		ktao();
		ok = 1;
		while(ok) {
			sinh();
			if(checked() && a[1] == 1 && a[n] == 0) {
				for(int i = 1 ; i <= n ; i++) {
					if(a[i] == 1) cout << "H";
					else cout << "A";
				}
				cout << endl;
			}
		}
	}
}
