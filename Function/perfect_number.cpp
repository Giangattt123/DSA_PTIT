#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// khi p la snt va 2^p cung la snt --> 2^(p-1).(2^p - 1) la so hoan hao , pmax=32
int snt(int n){
	if(n < 2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

bool check_hh(long long n){
	for(int p=2;p<=32;p++){
		if(snt(p)){
			int tmp = (long long)pow(2,p) - 1;
			if(snt(tmp)){
				if(n == 1ll * pow(2,p-1) * tmp) return 1;
			}
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	if(check_hh(n)) cout << "YES";
	else cout << "NO";
}
