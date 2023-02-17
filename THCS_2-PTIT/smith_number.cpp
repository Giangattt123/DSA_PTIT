/*
Cho s? t? nhiên N. Nhi?m v? c?a b?n là hãy ki?m tra N có ph?i là s? Smith hay không. M?t s? du?c g?i là s? Smith n?u N không ph?i là s? nguyên t? và có t?ng các ch? s? c?a N b?ng t?ng các ch? s? c?a các th?a s? nguyên t? trong phân tích c?a N. Ví d? N = 666 có các th?a s? nguyên t? là 2, 3, 3, 37 có t?ng các ch? s? là 18.

Input Format

S? nguyên duong N

Constraints

1=N=10^8.

Output Format

In ra YES n?u N là s? Smith, ngu?c l?i in ra NO.

Sample Input 0

22
Sample Output 0

YES
Submissions: 95
Max Score: 100
Rate This Challenge:

    
More

*/
#include<stdio.h>
#include<math.h>
#define ll long long
ll sum_digit(ll n){
	ll sum = 0;
	while(n){
		ll k = n % 10;
		sum += k;
		n/=10;
	}
	return sum;
}

ll pt(ll n){
	ll sum1 = 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				sum1+=sum_digit(i);
				n/=i;
			}
		}
	}
	if(n!=1) sum1+=sum_digit(n);
	return sum1;
}

ll check_Prime(ll n){
	if(n<2) return 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	ll n;
	scanf("%lld",&n);
	if(check_Prime(n)) printf("NO");
	else{
		if(pt(n)==sum_digit(n)) printf("YES");
		else printf("NO");
	}

}
