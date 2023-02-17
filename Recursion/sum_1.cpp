#include<bits/stdc++.h>
using namespace std;
int sum_1(int n){
	if(n == 0 || n == 1) return n;
	else return n + sum_1(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << sum_1(n);
}

