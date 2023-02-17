#include<bits/stdc++.h>
using namespace std;
int sum_4(int n){
	if(n == 0) return 0;
	else return pow(-1,n)*n + sum_4(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << sum_4(n);
}

