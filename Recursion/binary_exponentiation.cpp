#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long bin_pow(int a , int b){
	if(b == 0) return 1;
	long long x = bin_pow(a,b/2);
	if(b % 2 == 0) return x % mod * x % mod;
	else return x % mod * x % mod * a % mod;
}
int main(){
	long long a , b;
	cin >> a >> b;
	cout << bin_pow(a,b);
}
