#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int p[10000001];
void sang(){
	for(int i=0;i<=10000000;i++){
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(int i=2;i<=sqrt(10000000);i++){
		if(p[i]==1){
			for(int j=i*i;j<=10000000;j+=i){
				p[j] = 0;
			}
		}
	}
}

bool last_number(int n){
	int last = n % 10;
	while(n){
		if(n % 10 > last) return false;
		n /= 10;
	}
	return true;
}
int main(){
	sang();
	int n,  cnt = 0;
	cin >> n;
	for(int i=2;i<=n;i++){
		if(p[i] && last_number(i)){
			cout << i << " ";
			cnt++;
		}
	}
	cout << "\n";
	cout << cnt;
}
