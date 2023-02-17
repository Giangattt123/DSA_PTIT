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


void chuanHoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1 ; i < s.length() ; i++)
		s[i] = tolower(s[i]);
}
struct SinhVien{
	string msv , name , class_name , date;
	double gpa;
};

string process(int i){
	string s = to_string(i);
	while(s.length() < 3)
		s = '0' + s;
	return "B20DCCN" + s;
}
void nhap(SinhVien ds[] , int N){
	for(int i = 1 ; i <= N ; i++){
		cin.ignore();
		ds[i].msv = process(i);
		getline(cin , ds[i].name);
		cin >> ds[i].class_name >> ds[i].date >> ds[i].gpa;
		if(ds[i].date[1] == '/') ds[i].date = "0" + ds[i].date;
		if(ds[i].date[4] == '/') ds[i].date.insert(3 , "0");
	}
}
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[] , int N){
	sort(ds + 1 , ds + N + 1, cmp);   
}
void in(SinhVien ds[] , int N){
	
	for(int i = 1 ; i <= N ; i++){
		stringstream ss(ds[i].name);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			chuanHoa(tmp);
			v.push_back(tmp);
		}
		cout << ds[i].msv << " ";
		for(auto x : v) cout << x << " ";
		cout << ds[i].class_name << " ";
		cout << ds[i].date << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
