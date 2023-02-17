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

struct NhanVien {
	string mnv , name , gender , date , add , tax_code , khd;
};

string stt(int i){
	string r = to_string(i);
    while (r.length() < 5)
        r = '0' + r;
    return r;
}
   
void inds(NhanVien ds[], int N){
	for (int i = 0; i < N; ++i) {
        cout << stt(i + 1) << " ";
        cout << ds[i].name << " " << ds[i].gender << " " << ds[i].date << " " << ds[i].add << " " << ds[i].tax_code << " " << ds[i].khd << endl;
    }
}

void nhap(NhanVien &a){
	scanf("\n");
	getline(cin , a.name);
	getline(cin , a.gender);
	getline(cin , a.date);
	getline(cin , a.add);
	getline(cin , a.tax_code);
	getline(cin , a.khd);
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
