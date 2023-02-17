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

struct NhanVien{
	int stt;
	string msv, name , class_name , email , company;
	void input(){
		getline(cin , msv);
		getline(cin , name);
		getline(cin , class_name);
		getline(cin , email);
		getline(cin , company);
	}
	void output(){
		cout << stt << " " << msv << " " << name << " " << class_name << " " << email << " " << company << endl;
	}
};

bool cmp(NhanVien a , NhanVien b){
	return a.msv < b.msv;
}

void solve(NhanVien a[] , int n){
	string s;
	cin >> s;
	for(int i = 0 ; i < n ; i++){
		if(a[i].company == s)
			a[i].output();
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cin.ignore();
	NhanVien a[n];
	for(int i = 0 ; i < n ; i++){
		a[i].stt = i + 1;
		a[i].input();
	}
	sort(a , a + n , cmp);
	int q;
	cin >> q;
	while(q--){
		solve(a , n);
	}
}
