#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<int,int> mp;
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mp[a[i]]!=0){
			cout << a[i] << " ";
			mp[a[i]]=0;
		}
	}
}