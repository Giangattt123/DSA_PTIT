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
		ll n;
		cin >> n;
		ll a[n];
		ll min = INT_MAX;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i] - a[j]) <= min) min = abs(a[i] - a[j]);
			}
		}
		cout << min << endl;
	}
}

