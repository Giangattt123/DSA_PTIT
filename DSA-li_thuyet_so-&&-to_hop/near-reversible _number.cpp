#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool solve(string a ){
	int first = (char)a[0] -'0', last = (char)a[a.size() - 1] - '0';
	if(!(first == 2 * last || last == 2 * first)) return false;
	int l = 1 , r = a.size() - 2;
	while(l <= r){
		if(a[l] != a[r]) return false;
		++l;
		--r;
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	if(solve(s)) cout << "YES" << endl;
	else cout << "NO" << endl;

}
