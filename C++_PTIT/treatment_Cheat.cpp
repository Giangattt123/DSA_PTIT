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
	int n;
	cin >> n;
	map<string , pair<string , bool>> mp;
	cin.ignore();
	for(int i = 0 ; i < n ; i++){
		string s;
		getline(cin , s);
		vector<string> v;
		string tmp;
		stringstream ss(s);
		while(ss >> tmp)
			v.push_back(tmp);
		string msv = v[0], fullName = "";
		
		for(int i = 1 ; i < v.size() ; i++) fullName += v[i] + " ";
		fullName.pop_back();
		mp[msv].first = fullName;
		mp[msv].second = true;
	}
	int m;
	cin >> m;
	set<string> se;
	for(int i = 0 ; i < m ; i++){
		string x , y, z, t;
		cin >> x , y , z , t;
		if(t != "code.ptit.edu.vn")
			mp[z].second = false;
		if(t == "code.ptit.edu.vn")
			se.insert(z);
	}
	for(auto it : mp){
		cout << it.first << " " << it.second.first << " ";
		if(it.second.second == false || se.count(it.first) == 0){
			cout << "FAIL" << endl;
		}
		else{
			cout << "OK" << endl;
		}
	}
}
