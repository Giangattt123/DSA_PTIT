#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class GameThu{
private:
	string username, password, acc_name;
	string timein , timeout;
public:
	void nhap(){
		getline(cin , username);
		getline(cin , password);
		getline(cin , acc_name);
		getline(cin , timein);
		getline(cin , timeout);
	}
	int getTime(){
		int h1 = stoi(timein.substr(0, 2));
		int m1 = stoi(timein.substr(3, 2));
		int h2 = stoi(timeout.substr(0, 2));
		int m2 = stoi(timeout.substr(0, 2));
		return h2 * 60 + m2 - (h1 * 60 + m1);
	}
	void in(){
		int min = getTime();
		cout << username << " " << password << " " << acc_name << " ";
		int h = min / 60;
		int m = min % 60;
		cout << h << " gio " << m << " phut" << endl;
	}
	string getUsername(){
		return username;
	}
};

bool cmp(GameThu a , GameThu b){
	int time1 = a.getTime();
	int time2 = a.getTime();
	if(time1 != time2)
		return time1 > time2;
	else
		return a.getUsername() < b.getUsername();
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	GameThu a[n];
	for(int i = 0 ; i < n ; i++)
		a[i].nhap();
	sort(a , a + n , cmp);
	for(int i = 0 ; i < n ; i++)
		a[i].in();
}