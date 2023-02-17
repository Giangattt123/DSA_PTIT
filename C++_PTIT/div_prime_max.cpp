#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll prime_max(ll n){
    ll tmp;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                tmp = i;
                n/=i;
            }
        }
    }
    if(n!=1) tmp=n;
    return tmp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << prime_max(n) << endl;
    }
}
