#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int number = 1;
class NhanVien{
	public:
		string mnv , name , gender , ns , addr , code , day;
	public:
		friend istream &operator >> (istream &in , NhanVien &a){
			getline(cin , a.name);
			getline(cin , a.gender);
			getline(cin , a.ns);
			getline(cin , a.addr);
			getline(cin , a.code);
			getline(cin , a.day);
			string s_mnv = to_string(number++);
	    	while(s_mnv.length() < 5)
	        	s_mnv = '0' + s_mnv;
	    	a.mnv = s_mnv;
	    	return in;
		}
		friend ostream &operator << (ostream &out , NhanVien a){
			cout << a.mnv << " " << a.name << " " << a.gender << " " << a.ns << " ";
			cout << a.addr << " " << a.code << " " <<  a.day << endl;
			return out;
		}

};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;cin >> n;
	cin.ignore();
	NhanVien a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++) cout << a[i];
} 