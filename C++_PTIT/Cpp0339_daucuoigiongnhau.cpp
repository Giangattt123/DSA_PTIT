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
    	cin >> s;// abcab
    	int cnt = s.size();
    	for (int i = 0; i < s.size(); ++i)
    	{
	        char a = s[i];
	        int b = i + 1;
	        while (s.find(a, b) != -1)
	        {
	            b = s.find(a, b) + 1;
	            cnt++;
	        }
    	}
    	cout << cnt << endl;
	}	
}

