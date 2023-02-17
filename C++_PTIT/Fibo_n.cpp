#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll F[100];
void fibo(){
	F[0] = 0;
	F[1] = 1;
	for(int i=2;i<=93;i++){
		F[i] = F[i-1] + F[i-2];
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	fibo();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
}

