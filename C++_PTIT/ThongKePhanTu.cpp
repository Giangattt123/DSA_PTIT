#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int a; 
	vector<int> v; 
	map<int,int> mp; 
	while(cin >> a){ 
		v.push_back(a); 
	} 
	for(auto x:v) mp[x]++; 
	for(auto it : v){ 
		if(mp[it]!=0){ 
			cout << it << " " << mp[it]; 
			mp[it] = 0; 
			cout << endl; 
		} 
	} 
}