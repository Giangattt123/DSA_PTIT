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
		int index;
		for(int i=1;i<=n;i++){
			int value;
			cin >> value;
			if(value == x) index = i;
		}
		cout << index << endl;
	}
}

