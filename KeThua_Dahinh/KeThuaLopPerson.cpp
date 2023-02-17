#include <bits/stdc++.h>
#include<iomanip>
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

class Person{
	private :
		string name , birth , address;
	public :
		Person(){
			name = "";
			birth = "";
			address = "";
		}
		Person(string name , string birth , string address){
			this->name = name;
			this->birth = birth;
			this->address = address;
		}
		void toString(){
			string res = name + " " + birth + " " + address;
			cout << res << " ";
		}
		void chuanHoa(){
			string res = "";
			stringstream ss(name);
			string tmp;
			while(ss >> tmp){
				res += toupper(tmp[0]);
				for(int i = 1 ; i < tmp.length() ; i++){
					res += tolower(tmp[i]);
				}
				res += " ";
			}
			res.pop_back();
			this->name = res;
			if(this->birth[1] == '/') this->birth  = '0' + this->birth;
			if(this->birth[4] == '/') this->birth.insert(3 , "0");
		}
};

class Student : public Person{
	private :
		string msv , className;
		float gpa;
	public :
		Student(string name , string birth , string address , int msv , double gpa , string className) : Person(name , birth , address){
			this->msv = to_string(msv);
			while(this->msv.size() < 4)
				this->msv = "0" + this->msv;
			this->gpa = gpa;
			this->className = className;
		}
		void toString(){
			cout << this->msv << " ";
			Person::toString();
			cout << this->className << " " << fixed << setprecision(2) << this->gpa << endl;
		}
};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin.ignore();
		string name;getline(cin , name);
		string s;getline(cin , s);
		string birth = "" , address = "";
		int j = 0;
		while(!isalpha(s[j])){
			birth += s[j];
			j++;
		}
		while(j < s.size()){
			address += s[j];
			j++;
		}
		string className;
		getline(cin , className);
		float gpa;
		cin >> gpa;
		Student st(name , birth , address , i + 1 , gpa , className);
		st.chuanHoa();
		st.toString();
	}
}
