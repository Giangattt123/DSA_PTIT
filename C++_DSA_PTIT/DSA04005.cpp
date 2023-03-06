#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
const int MOD = 1e9 + 7;
ll F[94];
ll n , k;
// Dãy xâu Fibonnaci
void Fibo(){
    F[0] = 0 ; F[1] = 1;
    for(int i = 2 ; i <= 93 ; i++)
        F[i] = F[i - 1] + F[i - 2];
}
char cach(ll n , ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2])
        return cach(n - 2 , k);
    else
        return cach(n - 1 , k - F[n - 2]);
}
int main(){
  	int t;
  	cin >> t;
  	Fibo();
  	while(t--){
  		cin >> n >> k;
  		cout << cach(n , k) << endl;
	}
}