/*
Cho s? t? nhi�n N. Nhi?m v? c?a b?n l� h�y ki?m tra N c� ph?i l� s? Smith hay kh�ng. M?t s? du?c g?i l� s? Smith n?u N kh�ng ph?i l� s? nguy�n t? v� c� t?ng c�c ch? s? c?a N b?ng t?ng c�c ch? s? c?a c�c th?a s? nguy�n t? trong ph�n t�ch c?a N. V� d? N = 666 c� c�c th?a s? nguy�n t? l� 2, 3, 3, 37 c� t?ng c�c ch? s? l� 18.

Input Format

S? nguy�n duong N

Constraints

1=N=10^8.

Output Format

In ra YES n?u N l� s? Smith, ngu?c l?i in ra NO.

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
