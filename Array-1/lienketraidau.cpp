#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(1ll* a[0] * a[1] < 0) cout << a[0] << " ";
	for(int i=1;i<n-1;i++){
		if(1ll * a[i-1] * a[i] < 0 || 1ll * a[i] * a[i+1] < 0) cout << a[i] << " ";
	}
	if(1ll * a[n-1] * a[n-2] < 0) cout << a[n-1];
}
