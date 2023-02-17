#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	set<int>se;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		se.insert(x);
	}
	int q;
	cin >> q;
	while(q--){
		int X;
		cin >> X;
		if(se.count(X)) cout << "YES\n";
		else cout << "NO\n";
	}
}