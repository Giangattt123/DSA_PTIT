#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// ma tran a[n][m] , b[m][p] --> tich cua 2 ma tran
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m , p;
	cin >> n >> m >> p;
	
	ll a[n][m] , b[m][p];;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			cin >> b[i][j];
		}
	}
	
	ll c[n][p];
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			c[i][j] = 0;
			for(int k=0;k<m;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

