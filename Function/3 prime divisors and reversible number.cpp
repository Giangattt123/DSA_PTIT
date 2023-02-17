#include<bits/stdc++.h>
using ll = long long;
#define FOR(i,a,b) for(i=(a);i<b;i++)
#define fastIO ios::sync_with_stdio(false) cin.tie(nullptr)
using namespace std;
long long reversible_number(int n){
	int lat = 0;
	int m  = n;
	while(n != 0){
		lat = lat * 10 + n % 10; 
		n /= 10; 
	}
	if(lat == m) return 1;
	else return 0;
}
	
bool pt(int n){
	int cnt = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i ==0){
			cnt++;
			while(n % i ==0){
				n /= i;
			}
		}
	}
	if(n > 1) cnt++;
	if(cnt >= 3) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a , b ,flag = 1;;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(reversible_number(i) && pt(i)) {
			cout << i << " ";
			flag = 0;
		}
	}
	if(flag == 1) cout <<"-1";
}
