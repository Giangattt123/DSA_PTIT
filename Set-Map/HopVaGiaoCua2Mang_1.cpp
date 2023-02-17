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
5 6
1 2 1 2 7
1 2 3 4 5 6
*/
// Mang co cac phan tu rieng biet : 1 2 7
// Mang co cac phan tu rieng biet : 1 2 3 4 5 6
/*
	mp1	1 2
		2 2
		7 1
	mp2 1 1
		2 1
		3 1
		4 1
		5 1
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	int a[n] , b[m];
	map<int , int> mp1 , mp2;
	int Max = -MOD , Min = MOD;
	for(int &x : a){
		cin >> x;
		mp1[x]++;
		Max = max(x , Max);
		Min = min(x , Min);
	}
	for(int &x : b){
		cin >> x;
		mp2[x]++;
		Max = max(x , Max);
		Min = min(x , Min);
	}
	for(int i = Min ; i <= Max ; i++){
		if(mp1[i] > 0 && mp2[i] > 0) cout << i << " ";
	}
	cout << endl;
	for(int i = Min ; i <= Max ; i++){
		if(mp1[i] > 0 || mp2[i] > 0) cout << i << " ";
	}
}
