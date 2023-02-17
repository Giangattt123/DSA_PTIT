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
// Xâu nhị phân kế tiếp có độ dài n
// Nếu là xâu cuối cùng in lại được xâu đầu tiên(xâu chứa toàn các bit 0)
string s;
void sinh(){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if(i == -1){
        int l = s.length();
        int k = 1;
        string u = "";
        while(k <= l){
        	u = "0" + u;
        	++k;
		}
		cout << u;
		// cout << string(s.lenght() , '0');
    }
    else{
        s[i] = '1';
        cout << s;
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		sinh();
		cout << endl;
	}
	
}
