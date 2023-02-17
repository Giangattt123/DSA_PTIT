#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		int cnt[26] = {0},dem = 0;
		for(int i=0;i<s.size()-1;i++){
			cnt[s[i] - 'a'] = 1;
		}
		for(int i=0;i<26;i++){
			if(cnt[i] == 0) dem++;
		}
		if(dem <= k) cout << "1" << endl;
		else cout << "0" << endl;
	}
}

