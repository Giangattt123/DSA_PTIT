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
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++) cout << a[i] << " ";
		cout << endl;
	}
}

