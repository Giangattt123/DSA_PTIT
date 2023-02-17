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
// Dãy con có tổng bằng k
int n , k ,a[100] , X[100] ,ans = 0;
void nhap(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	sort(a + 1 , a + n + 1);
}
void Try(int sum , int i , int pos){
	if(sum == k){
		cout << "[";
		for(int j = 1 ; j < i ; j++){
			cout << X[j];
			if(j == i - 1) cout << "] ";
			else cout << " ";
		}
		ans = 1;
		return;
	}
	for(int j = pos ; j <= n ; j++){
		if(sum + a[j] <= k){
			X[i] = a[j];
			Try(sum + a[j] , i + 1 , j + 1);
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t; 
    while (t--) { 
        nhap();
        ans = 0;
        Try(0 , 1 , 1);
        if(!ans) cout << -1 << endl;
        else cout << endl;
    } 
}
