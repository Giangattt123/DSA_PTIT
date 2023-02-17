#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n < 4) cout << "-1";
	else if(n % 2 == 0){
		cout << n/2 << endl;
		for(int i=1;i<=n/2;i++){
			cout << "2" << " ";
		}
	}
	else{
		n = n - 3;
		cout << n/2 + 1<< endl;
		for(int i=1;i<=n/2;i++){
			cout << "2" << " ";
		}
		cout << "3";
	}

}
