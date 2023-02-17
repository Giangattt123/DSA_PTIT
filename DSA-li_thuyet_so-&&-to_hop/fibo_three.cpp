// in ra so fibo nho nhat lon hon hoac bang n
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
const int mod = 1e9 + 7;
ll F[1000005];
void init(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i<= 1000000 ;i++){
		F[i] = (F[i-1] ) + (F[i-2]);
	}
}

void check(ll n){
	for(int i=0;i<=100;i++){
		if( F[i] >= n){
			cout << F[i] << endl;
			break;
		}
	}
}
int main(){
	init();
	ll n;
	cin >> n;
	check(n);
}
