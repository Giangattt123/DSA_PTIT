#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int prime_max(int n){
	int tmp;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			while(n % i == 0){
				tmp = i;
				n /= i;
			}
		}
	}
	if( n != 1) tmp = n;
	return tmp;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << prime_max(n) << endl;
	}
}
