#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string code101 = "A B B A D C C A B D C C A B D";
	string code102 = "A C C A B C D D B B C D D B B";
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin,s);
		double sum = 0;
		if(n == 101){
			for(int i=0;i<s.size();i++){
				if(s[i] != ' ' && s[i] == code101[i]) sum += 2.0 / 3;
			}
		}
		else{
			for(int i=0;i<s.size();i++){
				if(s[i] != ' ' && s[i] == code102[i]) sum += 2.0 / 3;
			}
		}
		cout << fixed << setprecision(2) << sum << endl;
	}
}

