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

string email(string s){
	for(char &x : s)  x = tolower(x);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	string res = v.back();
	for(int i = 0 ; i <= v.size() - 2 ; i++){
		res += v[i][0];
	}
	res += "@ptit.edu.vn";
	return res;
}
int main(){  
	ifstream in;
	ofstream out;
	in.open("SinhVien.txt");
	out.open("Email.txt");
	if(in.is_open()){
		string name;
		while(getline(in , name)){
			string date;
			getline(in , date);
			out << email(name) << endl;
			stringstream ss(date);
			string tmp;
			while(getline(ss , tmp , '/')){
				int val = stoi(tmp);
				out << val;
			}
			out << endl;
		}
	}
	in.close();
	out.close();
}
