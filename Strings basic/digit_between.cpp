#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
	string n;
	cin >> n;
	if(n.length() % 2 == 0){
		cout << "NT FOUND";
	}
	else {
		cout << n[n.length() / 2];
	}
}