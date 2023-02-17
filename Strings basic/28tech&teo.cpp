#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	string t = "28tech";
	string a = "";
	for(int i=0;i<s.size();i++){
		int ok = 0;
		for(int j=0;j<t.size();j++){
			if(s[i] == t[j]) ok = 1;
		}
		if(ok == 0) a += s[i];
	}
	if(a.size() == 0) cout << "EMPTY";
	else cout << a;
}
