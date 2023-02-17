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

void reverse(int a[] , int n){
	int l = 0 , r = n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;
		--r;
	}
}

void add(string s , string t){
	int n1 = s.length();
	int n2 = t.length();
	int n = 0;
	int x[n1] , y[n1] , z[n1 + 1];
	for(int i = 0 ; i < n1 ; i++) x[i] = s[i] - '0';  
	for(int i = 0 ; i < n2 ; i++) y[i] = t[i] - '0'; 
	reverse(x , n1);
	reverse(y , n2); 
	for(int i = n2 ; i < n1 ; i++) y[i] = 0;
	int carry = 0;
	for(int i = 0 ; i < n1 ; i++){
		int tmp = x[i] - y[i] - carry;
		if(tmp < 0){
			carry = 1;
			z[n++] = 10 + tmp;// x[i] + 10 - y[i] - carry;
		}else{
			z[n++] = tmp;
			carry = 0;
		}
	}
	for(int i = n - 1 ; i >= 0 ; i--) cout << z[i];	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s , t;
		cin >> s >> t;
		if(s.length() >= t.length()) add(s , t);
		else add(t , s);
		cout << endl;
	}
}
