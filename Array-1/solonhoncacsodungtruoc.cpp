#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	cout << a[0] << " ";
	for(int i=1;i<n;i++){
		int ok = 1;
		for(int j=0;j<i;j++){
			if(a[i] <= a[j]){
				ok = 0;
				break;
			}
		}
		if(ok == 1) cout << a[i] << " ";
	}
}
