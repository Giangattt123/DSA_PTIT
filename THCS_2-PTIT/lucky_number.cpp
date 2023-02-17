/*
M?t s? du?c g?i là “l?c phát” n?u ch? có các ch? s? 0,6,8. Nh?p vào m?t s? nguyên hãy ki?m tra xem dó có ph?i s? l?c phát hay không. N?u dúng in ra 1, sai in ra 0.
*/
#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
ll check(ll n){
	while(n){
		int k = n % 10;
		if((k!=0 && k!=6 && k!=8)) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	ll n;
	cin>>n;
	if(check(n)) cout<<"1";
	else cout<<"0";
}
