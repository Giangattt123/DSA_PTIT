#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll C[105][105];

void init(){
	for(int i=0;i<=100;i++){
		for(int j=0;j<=i;j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			}
			else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	init();
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}
