#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	ll a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	int u , v;
	cin >> u >> v;
	for(int i=0;i<n;i++){
		swap(a[i][u-1],a[i][v-1]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

