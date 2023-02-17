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
		int n , x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int ok = 0;
		for(int i=0;i<n;i++){
			if(a[i] == x){
				cout << i + 1 << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << -1 << endl;
		
		
	}
}

