#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// For loop
ll tohop(int n , int k){
	ll res = 1;
	for(int i=1;i<=k;i++){
		res *= (n-i+1);
		res /= i;
	}
	return res;
}

// Dynamic Programming
// Tam giac Pascal va cong thuc Pascal
ll C[100][100];
void init(){
	for(int i=0;i<=20;i++){
		for(int j=0;j<=i;j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			}
			else C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
}

// Recursion
ll tohop2(int n , int k){
	if(k == 0 || n == k) return 1;
	else return tohop2(n-1,k-1) + tohop2(n-1,k);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin >> n >> k;
	cout << tohop(n,k) << endl;
	init();
	cout << C[n][k] << endl;
	cout << tohop2(n,k) << endl;
}

