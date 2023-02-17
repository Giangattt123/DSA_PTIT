#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	for(int i=1;i<=n;i++){
		int c1 = 0 , c0 = 0;
		for(int j=1;j<=3;j++){
			int val;
			cin >> val;
			if(val == 1) c1++;
			else c0++;
		}
		if(c1 >= 2) cnt++;
	}
	cout << cnt;
}

