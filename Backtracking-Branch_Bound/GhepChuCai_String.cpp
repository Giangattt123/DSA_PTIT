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

string s = "";
int n;
char c;
bool used[1000];
bool isvowel(char c){
	return c == 'A' || c == 'E';
}

bool check(string s){
	for(int i = 1 ; i <= s.size() - 2 ; i++){
		if(!isvowel(s[i - 1]) && isvowel(s[i + 1]) && isvowel(s[i]))
			return false;
	}
	return true;
}

void inkq(){
	cout << s << endl;
}

void Try(){
	for(int j = 'A' ; j <= c ; j++){
		if(used[j] == false){
			s += j;
			used[j] = true;
			if(s.size() == n){
				if(check(s))
					inkq();
			}
			else 
				Try(i + 1);
			s.pop_back();
			used[j] = false;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c;
	n = c - 'A' + 1;
	Try();
}
