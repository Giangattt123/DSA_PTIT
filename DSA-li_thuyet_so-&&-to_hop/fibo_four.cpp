// so la snt va tong cac cs la so fibo
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool nt(int n){
	if(n < 2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if( n % i == 0 ) return false;
	}
	return true;
}

ll F[105];
void fibo(){
	F[0] = 0;
	F[1] = 1;
	for(int i=2;i<=20;i++){
		F[i] = F[i - 1] + F[i - 2];
	}
}

bool solve( int n ){
	for(int i=0;i<=20;i++){
		if(n == F[i]) return true;
	}
	return false;
}

int sum(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	return solve(tong);
}

int main(){
	fibo();
	int n;
	cin >> n;
	for(int i=0;i<=n;i++){
		if(nt(i) && sum(i)) cout << i << " ";
	}
}
