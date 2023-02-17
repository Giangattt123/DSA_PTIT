#include<bits/stdc++.h>
using namespace std;
long long sum_2(int n){
	if(n == 0 || n == 1) return n;
	else return 1ll*n*n*n + 1ll*sum_2(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << sum_2(n);
}
