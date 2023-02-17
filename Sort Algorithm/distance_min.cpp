#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	int res = INT_MAX;
	for(int i=1;i<n;i++){
		res = min(res,a[i] - a[i-1]);
	}
	cout << res << endl;
	vector<int> v(n); // v co n phan tu
	pair<int,int> a;
	cin >> a.first >> a.second ;
	cout << a.first << " " << a.second << endl;
	int left = 0, right = n - 1, mid = (left+right) / 2;
	while(left <= 2*mid - right){
		
	}
}
