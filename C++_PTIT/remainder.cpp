#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int chiadu(int a , int m){
	// a * x % m == 1
	for(int i=1;i<m;i++){
		if((a * i) % m == 1) return i;
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a , m;
		cin >> a >> m;
		cout << chiadu(a,m) << endl;
	}
}

