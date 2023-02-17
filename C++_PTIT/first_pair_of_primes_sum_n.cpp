#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
    	cin >> n;
    	int ok = 0;
    	for (int i = 2; i <= n / 2; ++i){
        	if (check(i) && check(n - i)){	
	            cout << i << " " << n - i << endl;
	          	ok = 1;
	          	break;
			}
    	}
    	if(ok == 0) cout << "-1" << endl;
	}
}

