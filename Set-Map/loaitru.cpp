#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n , m;
	cin >> n >> m;
	set<int> s1 , s2;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		s1.insert(x);
	}
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		s2.insert(x);
	}
	for(auto x:s1){
		if(s2.count(x) == 0){
			cout << x << " ";
		}
	}
}
