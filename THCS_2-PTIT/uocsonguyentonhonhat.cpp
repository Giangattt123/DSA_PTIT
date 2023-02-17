#include<bits/stdc++.h>
#include<algorithm>
using ll = long long;
typedef int songuyen;
using namespace std;
// constraints : 0<=n<=10^7
int p[10000001];
void sang(){
	for(int i=0;i<=10000000;i++){
		p[i] = i;
	}
	for(int i=2;i<=sqrt(10000000);i++){
		if(p[i]==i){
			for(int j=i*i;j<=10000000;j+=i){
				if(p[j]>i) p[j] = i;
			}
		}
	}
}
int main(){
	sang();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	for(long long i=1;i<=n;i++){
		cout << p[i] << endl;
	}
}
