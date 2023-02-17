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
		int n , d;
		cin >> n >> d;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++) cout << a[(i + d) % n] << " ";
		cout << endl;
	}
}

