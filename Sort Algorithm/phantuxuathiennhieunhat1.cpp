#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	int res = 1, cnt = 1 , ans = a[0];
	for(int i=1;i<n;i++){
		if(a[i] == a[i-1]) ++cnt;
		else{ // a[i] != a[i-1]
			if(cnt >= res){
				res = cnt;
				ans = a[i-1];
			}
			cnt = 1;
		}
	}
	if(cnt >= res){
		res = cnt;
		ans = a[n-1];
	}
	cout << ans << " " << res;
}
