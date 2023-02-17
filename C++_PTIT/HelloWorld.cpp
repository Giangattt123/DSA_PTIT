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
	for(int i = 1 ; i < s.size() ; i++)
		s[i] = tolower(s[i]);
}

void chuanHoaName(string &s){
	stringstream ss(s);
	string tmp = "";
	vector<string> v;
	while(ss >> tmp){
		chuanHoa(tmp);
		v.push_back(tmp);
	}
	string s_change = "";
	for(string val : v){
		s_change = s_change + val + " ";
	}
	s = s_change;
	s.pop_back();
}
int number = 1;

class SinhVien{
	public :
		string msv , name , class_name , date;
		float gpa;
	friend istream &operator >> (istream &in , SinhVien &a){
		getline(in , a.name);
		cin >> a.class_name >> a.date >> a.gpa;
		if(a.date[1] == '/') a.date = '0' + a.date;
		if(a.date[4] == '/') a.date.insert(3,"0");
		string s_msv = to_string(number++);
	    while(s_msv.length() < 3)
	        s_msv = '0' + s_msv;
	    a.msv = "B20DCCN" + s_msv;
	    chuanHoaName(a.name);
		return in;
	}
	friend ostream &operator << (ostream &out , SinhVien a){
		out << a.msv << " " <<  a.name << " " << a.class_name << " " << a.date << " ";
		out << fixed << setprecision(2)  << a.gpa << endl;
		return out;
	}
};

bool cmp(SinhVien a , SinhVien b){
	return a.gpa > b.gpa;
}

int main(){
	int n;
	cin >> n;
    SinhVien a[n];
    for(int i = 0 ; i < n ; i++){
    	cin.ignore();
    	cin >> a[i];
    }
    sort(a , a + n , cmp);
    for(int i = 0 ; i < n ; i++){
    	cout << a[i];
    }
}

