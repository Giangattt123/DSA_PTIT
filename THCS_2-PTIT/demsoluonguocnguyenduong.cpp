/*
Cho ph�n t�ch th?a s? nguy�n t? c?a m?t s? nguy�n duong N, h�y d?m s? lu?ng u?c s? c?a s? nguy�n duong d�. V� d? N = 60 = 2^2 * 3^1 * 5^1.

Input Format

D�ng d?u ti�n l� T : s? lu?ng th?a s? nguy�n t? kh�c nhau c?a N T d�ng ti?p theo, m?i d�ng l� 2 s? nguy�n p v� e l?n lu?t l� th?a s? nguy�n t? v� s? mu tuong ?ng

Constraints

1=T=100; 2=p=100000; 1=e=100000;

Output Format

In ra s? lu?ng u?c s? c?a N, v� k?t qu? qu� l?n, h�y l?y du v?i s? 1000000007 (1e9 + 7)

Sample Input 0

3
2 2
3 1
5 1
Sample Output 0

12
*/
#include<stdio.h>
#include<math.h>
typedef long long ll;
const int MOD = (int) 1e9 + 7;
int main(){
	int t;
	scanf("%d",&t);
	ll ans = 1;
	while(t--){
		int n , m;
		scanf("%d %d",&n,&m);
		ans*=(m+1);
		ans %= MOD;
	}
	printf("%lld",ans);
}
