#include<bits/stdc++.h>
#include<utility>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	pair<int , int> p = {100,300};
// Ban duoi C++ 11
	pair<int , int> p = make_pair(100,300);
//	pair<int , int> p{100,300};
	
//	p.first = 100;
//	p.second = 300;
	cout << p.first << ' ' << p.second << endl;
	// Gan 2 pair cho nhau
	pair<int , int> t = p;
	cout << t.first << t.second << endl;
	pair<int , pair<int , int>> a = make_pair(100,make_pair(200,300));
	cout << a.first <<endl;
	cout << a.second.first << endl;
	cout << a.second.second << endl;
}

