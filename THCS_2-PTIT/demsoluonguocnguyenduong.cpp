/*
Cho phân tích th?a s? nguyên t? c?a m?t s? nguyên duong N, hãy d?m s? lu?ng u?c s? c?a s? nguyên duong dó. Ví d? N = 60 = 2^2 * 3^1 * 5^1.

Input Format

Dòng d?u tiên là T : s? lu?ng th?a s? nguyên t? khác nhau c?a N T dòng ti?p theo, m?i dòng là 2 s? nguyên p và e l?n lu?t là th?a s? nguyên t? và s? mu tuong ?ng

Constraints

1=T=100; 2=p=100000; 1=e=100000;

Output Format

In ra s? lu?ng u?c s? c?a N, vì k?t qu? quá l?n, hãy l?y du v?i s? 1000000007 (1e9 + 7)

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
