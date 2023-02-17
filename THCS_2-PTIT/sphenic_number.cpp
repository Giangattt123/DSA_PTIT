/*
S? nguyên duong N du?c g?i là s? Sphenic n?u N du?c phân tích duy nh?t du?i d?ng tích c?a ba th?a s? nguyên t? khác nhau. Ví d? N=30 là s? Sphenic vì 30 = 2×3×5; N = 60 không ph?i s? Sphenic vì 60 = 2×2×3×5. Cho s? t? nhiên N, nhi?m v? c?a b?n là ki?m tra xem N có ph?i s? Sphenic hay không?

Input Format

M?t s? nguyên duong N

Constraints

1=N=10^18

Output Format

Ðua ra 1 ho?c 0 tuong ?ng v?i N là s? Sphenic ho?c không.

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
