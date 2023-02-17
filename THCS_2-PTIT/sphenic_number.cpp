/*
S? nguy�n duong N du?c g?i l� s? Sphenic n?u N du?c ph�n t�ch duy nh?t du?i d?ng t�ch c?a ba th?a s? nguy�n t? kh�c nhau. V� d? N=30 l� s? Sphenic v� 30 = 2�3�5; N = 60 kh�ng ph?i s? Sphenic v� 60 = 2�2�3�5. Cho s? t? nhi�n N, nhi?m v? c?a b?n l� ki?m tra xem N c� ph?i s? Sphenic hay kh�ng?

Input Format

M?t s? nguy�n duong N

Constraints

1=N=10^18

Output Format

�ua ra 1 ho?c 0 tuong ?ng v?i N l� s? Sphenic ho?c kh�ng.

Sample Input 0

999923001838986077
Sample Output 0

1
Sample Input 1

30
Sample Output 1

1
*/
#include<stdio.h>
#include<math.h>
#define ll long long
ll check(ll n){
	ll ans = 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ll cnt = 0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt > 1) return 0;
			else ans++;
		}
	}
	if(n!=1) ans++;
	if(ans==3) return 1;
	else return 0;
}
int main(){
	ll n;
	scanf("%lld",&n);
	if(check(n)) printf("1");
	else printf("0");
}
