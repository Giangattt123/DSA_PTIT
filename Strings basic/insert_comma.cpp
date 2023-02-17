#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	int count = 0;
	string t = "";
	for(int i=s.size()-1;i>=0;i--){
		++count;
		t += s[i];
		if(count % 3 == 0 && i != 0){
			t += ',';
		}
	}
	reverse(t.begin(),t.end());
	cout << t << endl;
}