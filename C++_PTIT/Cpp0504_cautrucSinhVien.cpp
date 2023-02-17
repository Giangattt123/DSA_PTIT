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
struct SinhVien{
	string fullName , className , stu_Code , date;
	float gpa; 
};
void nhap(SinhVien &A){
	A.stu_Code = "B20DCCN001";
	getline(cin , A.fullName);
	cin >> A.className >> A.date >> A.gpa;
	if(A.date.size() == 8) 
		A.date = '0' + A.date.substr(0,2) + '0' + A.date.substr(2);
	else{
		if(A.date[1] == '/') 
			A.date = '0' + A.date;
		else{
			A.date = A.date.substr(0, 3) + '0' + A.date.substr(3);
		}
	}
}
void in(SinhVien A){
	cout << A.stu_Code << " " << A.fullName << " " << A.className << " " << A.date << " ";
	cout << fixed << setprecision(2) << A.gpa;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
    
}
