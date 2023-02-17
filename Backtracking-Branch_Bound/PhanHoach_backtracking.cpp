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

int n , a[100];
vector<string> v;
void inkq(int x){
	string res = "";
	for(int i = 1; i<= x; i++){
		res += to_string(a[i]);
		if(i != x) res += "+";
	}
	v.push_back(res);
}

void Try(int i , int start , int sum){
	for(int j = start ; j >= 1 ; j--){
		if(sum + j <= n){
			a[i] = j;
			if(sum + j == n) inkq(i);
			else Try(i + 1, j , sum + j);	
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1 , n , 0);
	for(string x : v) cout << x << endl;
}
