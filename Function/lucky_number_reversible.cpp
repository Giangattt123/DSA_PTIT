#include<bits/stdc++.h>
using ll = long long;
using namespace std;
long long reversible_number(int n){
	int lat = 0;
	int m  = n;
	while(n){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	if(lat == m) return 1;
	else return 0;
}

int tong(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(sum % 10 == 8) return 1;
	else return 0;
}

int check_digit_6(int n){
	int flag = 1;
	while(n){
		int k = n % 10;
		if(k == 6) flag = 0;
		n /= 10;
	}
	if(flag == 0) return 1;
	else return 0;
}

int main(){
	int a,b;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(reversible_number(i) && tong(i) && check_digit_6(i)) cout << i << " ";
	}
	
}
