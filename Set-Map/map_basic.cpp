#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// đếm số lần xuất hiện của các phần tử trong mảng
	map<int,int>mp;
	// int a[] = {1,1,2,2,2,2,1,3,4,1};
	// for(int x:a){
	// 	mp[x]++;
	// }
	// for(auto it : mp){
	// 	cout << it.first << " " << it.second << endl;
	// }
	// map<int, int> mp;

	// mp[1]++; mp[1]++; mp[1]++;
	// mp[2] = 3;
	// mp[2] = 4;
	// for(auto it : mp){
	// 	cout << it.first << ' ' << it.second << endl;
	// }
	
	// mp.insert({1,2});
	// mp.insert({1,3});
	// mp.insert({1,4});
	// mp[2] = 3;mp[3] = 4;mp[3]++;
	// auto it = mp.find(3);
	// --it;
	// cout << (*it).first << " " << (*it).second << endl;

	int a[] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 5, 1};
	for(int x : a){
	mp[x]++;
	}
	for(auto it : mp){
		cout << it.first << ' ' << it.second << endl;
	}

}