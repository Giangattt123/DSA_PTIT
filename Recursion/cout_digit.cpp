#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// in tu phai qua trai
void right_left(ll n){
	if(n < 10) cout << n;
	else{
		cout << n % 10 << " ";
		right_left(n/10);
	}
}

void left_right(ll n){
	if(n < 10) cout << n << " ";
	else{
		left_right(n/10);
		cout << n % 10 <<  " ";
	}
}
int main(){
	ll n;
	cin >> n;
	left_right(n);
	cout << endl;
	right_left(n);
}

