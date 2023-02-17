#include<bits/stdc++.h>
using ll = long long;
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
int main(){
	string s;
	cin >> s;
	ll sum = 0 , res = 0;
	for(int i = 0 ; i < s.size() ; i++){
		if(isdigit(s[i])){
			res = res * 10 + s[i] - '0';
		}
		else{
			sum += res;
			res = 0;
		}
	}
	sum += res;
	cout << sum;
}