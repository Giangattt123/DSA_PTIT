/*
M?t s? du?c g?i l� �l?c ph�t� n?u ch? c� c�c ch? s? 0,6,8. Nh?p v�o m?t s? nguy�n h�y ki?m tra xem d� c� ph?i s? l?c ph�t hay kh�ng. N?u d�ng in ra 1, sai in ra 0.
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
