#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// dem so chu so cua 1 so la so nguyen to
int main(){
	ll n;
	cin>>n;
	int cnt = 0;
	while(n){
		int x = n%10;
		if(x==2 || x==3 || x==5 || x==7) ++cnt;
		n/=10;
	}
	cout<<cnt;
}
