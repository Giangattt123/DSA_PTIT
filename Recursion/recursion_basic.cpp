#include<bits/stdc++.h>
using ll =long long;
#include <cmath> --> max
using namespace std;
// Recurse
// bo nho ngan sep
// Xuat phat tu CTTH --> Diem dung giai thuat de quy , xd CTTH
/*
 GT(n) = 1 * 2 * 3 * ... * n --> n!
 Diem dung GT(0) = 1
 Xd CTTH : GT(n) = n*(n-1)!
*/
int gt(int n){
	if(n == 0) return 1;
	else return n*gt(n-1);
}

int S(int n){
	if(n == 0) return 0;
	else return n+S(n-1);
}

int fibo(int n){
	if(n==0 || n==1) return n;
	else return fibo(n-1) + fibo(n-2);
}

int gcd(int a , int b){
	if(b==0) return a;
	else return gcd(a,a%b);
}

int nCk(int n,int k){
	if(k==0 || n==k) return 1;
	else return nCk(n-1,k-1) + nCk(n-1,k);
}
int main(){
	cout << gt(5);
}
