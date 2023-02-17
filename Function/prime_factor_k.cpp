#include<bits/stdc++.h>
using ll = long long;
using namespace std;
long long solve(long long n , long long k){
	int cnt = 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			while(n % i == 0){
				++cnt;
				n /= i;
				if(cnt == k) return i;
			}
		}
	}
	if(n != 1) ++cnt;
	if(cnt == k) return n;
	else return -1;
}
int main(){ 
	long long n , k;
	cin >> n >> k;
	cout << solve(n,k);

}
