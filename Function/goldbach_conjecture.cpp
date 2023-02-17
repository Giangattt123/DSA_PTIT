/*
The Goldbach conjecture is the claim that every double 
integer greater than 2 can be written as the 
sum of two prime numbers. 
It is one of the biggest mathematical problems that cannot be proved.
Theo Goldbach conjecture, m?t s? nguyên duong ch?n >=4 d?u có th? bi?u di?n du?i d?ng t?ng c?a 2 s? nguyên t?. 
Cho s? nguyên duong ch?n N >=4 . Hãy li?t kê các c?p s? nguyên t? p, q có t?ng dúng b?ng N. 
Ví d? N = 6 ta có 1 c?p s? nguyên t? là 3 + 3 = 6.
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool snt(int n){
	if(n < 2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n/2;i++){
			if(snt(i) && snt(n-i)) cout<<i<<" "<<n-i<<endl;
		}
	}
}
