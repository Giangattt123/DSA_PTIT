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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
    set<string> s1, s2;
    ifstream fi1, fi2;

    fi1.open("DATA1.in");
    while (fi1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s1.insert(s);
    }
    fi1.close();
    
    fi2.open("DATA2.in");
    while (fi2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s2.insert(s);
    }
    fi2.close();

    map<string, int> mp;
    for (auto x : s1) mp[x]++;
    for (auto val : s2) mp[val]++;
    
    for (auto val : mp) cout << val.first << " ";
    cout << endl;

    for (auto val: mp) {
        if (val.second > 1)
            cout << val.first << " ";
	}
}
