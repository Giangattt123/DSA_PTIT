#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void pt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			while(n % i == 0){
				cout << i << " ";
				n /= i;
			}
		}
	}
	if(n > 1) cout << n << endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	pt(60);
}

