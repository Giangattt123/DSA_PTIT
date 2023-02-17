// cu 28 xu mua dc 1 chai bia , cu 3 vo chai doi dc 1 chai bia --> tinh so bia doi duoc
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int n;
	cin >> n;
	int h = n / 28; 
	int k = h;
	int i,j;
	while(k >= 3){
		i = k / 3;
		j = k % 3;
		h = h + i;
		k = i + j;
	}
	cout << h;
}
