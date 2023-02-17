#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	vector<int> a={1,1,3,3,3,4,6};
	auto it = lower_bound(a.begin(),a.end(),2);
	--it;
	cout << *it << endl;
}
