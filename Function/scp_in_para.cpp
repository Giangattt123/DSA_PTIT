#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ll a , b;
	cin >> a >> b;
	long long start , end = sqrt(b);
	long long can = sqrt(a);
	if(can * can == a) start = can;
	else start = can + 1;
	long long cnt = 0;
	for(long long i=start;i<=end;i++){
		++cnt;
//		cout << i * i<< " ";
	}
	cout << cnt;
}
