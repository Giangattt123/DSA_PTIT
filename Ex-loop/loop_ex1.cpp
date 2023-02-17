/** 
Tinh tong cac uoc cua 1 so nguyen duong 
Constrains 1 <= n <= 10^10
Sample input 1 : 28
Sample output 1 : 56
**/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	ll sum = 0;
	for(ll i = 1 ; i <= sqrt(n) ; i++){
		if(n%i==0){
			if(i!=n/i) sum+= i + n/i;
			else sum+=i;
		}
	}
	cout<< sum;
}
