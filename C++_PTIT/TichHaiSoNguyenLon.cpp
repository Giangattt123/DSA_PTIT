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

string Sum(string a, string b){
    if (a.length() < b.length()) a.insert(0, b.length() - a.length(), '0');
    else b.insert(0, a.length() - b.length(), '0');
    string res = "";
    int temp = 0;
    
    for (int i = a.length() - 1; i >= 0; i--) {
        temp = (a[i] - '0') + (b[i] - '0') + temp;
        res.insert(0, 1 , temp % 10 + '0');
        temp /= 10;
    }

    if (temp > 0)
        res.insert(0, 1, temp + '0');
    return res;
}

string Mul(char a, string b){
    string res = "";
    int temp = 0;
    for (int i = b.length() - 1; i >= 0; --i) {
        temp = (a - '0') * (b[i] - '0') + temp;
        res.insert(0, 1, temp % 10 + '0');
        temp /= 10;
    }
    if (temp > 0)
        res.insert(0, 1, temp + '0');
    return res;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string a , b;
		cin >> a >> b;
		int l = a.length();
		string s;
		string ans = "";
		for(int i = l - 1 ; i >= 0 ; --i){
			s = Mul(a[i] , b);
			s.insert(s.length() , l - i - 1 , '0');
			ans = Sum(ans , s);
		}
		cout << ans << endl;
	}
}
