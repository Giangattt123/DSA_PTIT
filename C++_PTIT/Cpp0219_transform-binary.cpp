#include<bits/stdc++.h>
using ll = long long;
using namespace std;
void in(){
	int n , m;
	cin >> n >> m;
	bool r[n] = {0} , c[m] = {0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int val;
			cin >> val;
			if(val == 1){
				r[i] = 1;
				c[j] = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(r[i] || c[j]) cout << "1 " ;
			else cout << "0 ";
		}
		cout << endl;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		in();	
}

