#include<bits/stdc++.h>
using ll = long long;
using namespace std;
bool check(int a[],int n){
	int dem25 = 0, dem50 = 0;
	for(int i=0;i<n;i++){
		if(a[i] == 25) ++dem25;
		else if(a[i] == 50){
			// khi nao khong tra lai dc tien
			if(dem25 == 0) return false;
			--dem25;
			++dem50;
		}
		else{
			// khi nao khong tra lai dc tien
			if(dem25 == 0 || (dem25 * 25 + dem50 * 50 < 75)) return false;
			if(dem50 != 0){
				--dem50;
				--dem25;
			}
			else{
				dem25 -= 3;
			} 
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	if(check(a,n)) cout << "YES";
	else cout << "NO";
}
