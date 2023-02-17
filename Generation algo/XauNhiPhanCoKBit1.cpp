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
/*
Cho số nguyên dương N và K, nhiệm vụ của bạn là liệt kê các xâu nhị phân có độ dài N 
và có K bit 1 theo thứ tự từ điển tăng dần. Sau đó tiếp tục liệt kê các xâu nhị phân 
mà chỉ có duy nhất K bit 1 liên tiếp.
VD : 3 2
011 101 110
011 110 
*/
int a[1000] , n , k , ok;
void ktao(){
	for(int i = 1 ; i <= n ; i++)
		a[i] = 0;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}

bool check(){
	int cnt = 0 , res = 0;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == 1) cnt++;
		else cnt = 0;
		if(cnt > res) res = cnt;
		else if(cnt == res && res == k) return false;
	}
	return res == k;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	ok = 1;
	ktao();
	vector<string> v1 , v2;
	while(ok){
		string s = "" , v = "";
		int sum = 0;
		for(int i = 1 ; i <= n ; i++){
			sum += a[i];
			s += to_string(a[i]);
			v += to_string(a[i]);
		} 
		if(sum == k) v1.push_back(s);
		if(check()) v2.push_back(v);
		sinh();
	}
	sort(v1.begin() , v1.end());
	for(auto x : v1) cout << x << " ";
	cout << endl;
	for(auto x : v2) cout << x << " ";
	return 0;
	
}
