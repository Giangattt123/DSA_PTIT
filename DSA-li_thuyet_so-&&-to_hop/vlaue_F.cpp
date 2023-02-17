// f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int MOD = 1e9 + 7;
int main(){
    ll n ; 
    cin >> n;
    if(n % 2 == 0) cout << n / 2;
    else cout << (n - 1) / 2 - n;
    return 0;
}


