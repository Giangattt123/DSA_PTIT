#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int p[1000001];
void sang(){
	for(int i=0;i<=1000000;i++){
		p[i] = 1;
	}
	p[0] = p[1] = 0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(p[i]){
			for(int j=i*i;j<=1000000;j+=i){
				p[j] = 0;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sang();
	int t;
	cin >> t;
	while(t--){
		int a , b;
		cin >> a >> b;
		for(int i=a;i<=b;i++){
			if(p[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
	
}

