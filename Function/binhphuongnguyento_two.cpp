/*
M?t s? du?c coi l� s? d?p khi n?u n� chia h?t cho m?t s? nguy�n t? n�o d� th� cung ph?i chia h?t cho b�nh phuong c?a s? nguy�n t? d�. Vi?t chuong tr�nh li?t k� c�c s? d?p nhu v?y trong do?n gi?a hai s? nguy�n duong cho tru?c

Input Format

2 s? nguy�n duong a, b

Constraints

1=a=b=10^6

Output Format

In ra c�c s? d?p trong do?n t? a t?i b

Sample Input 0

3 49
Sample Output 0

4 8 9 16 25 27 32 36 49
*/
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check_Prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n % i ==0){
			int cnt = 0;
			while(n % i == 0){
				++cnt;
				n /= i;
			}
			if(cnt < 2) return false;
		}
	}
	if(n > 1) return false;
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a , b;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(check_Prime(i)) cout << i << " ";
	}
	return 0;
}
