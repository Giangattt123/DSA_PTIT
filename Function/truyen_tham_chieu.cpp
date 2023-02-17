#include<bits/stdc++.h>
#include<algorithm>
#define endl "\n";
using namespace std;
using ll = long long;
typedef int songuyen;
int tong(int a , int b , int c){
	return a+b+c;
}
void add(int &a){ // pass by reference : truyen tham chieu
	a+=100;
}
int main(){
	int n=100;
	add(n);
	cout<<n;
}
