#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
	string s = "367426346732847823658237482374275475873423467";
	ll sum = 0;
	for(char x:s){
		sum+=x-'0';
	}
	cout << sum << endl;
}