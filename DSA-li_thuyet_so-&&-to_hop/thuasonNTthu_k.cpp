#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// dua ra thua so nguyen to thu k , neu ko cos in ra -1
int check(int n, int k){
	int cnt = 0;
	for(int i=2;i<=sqrt(n);i++){
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
	else return 0;
}
int main(){
	int n,k;
	cin >> n >> k;
	cout << check(n,k);
}
