#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll sum_digit(ll n){
    ll sum = 0;
    while(n){
        ll k = n % 10;
        sum += k;
        n/=10;
    }
    return sum;
}

ll pt(ll n){
    ll sum1 = 0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                sum1+=sum_digit(i);
                n/=i;
            }
        }
    }
    if(n!=1) sum1+=sum_digit(n);
    return sum1;
}

ll check_Prime(ll n){
    if(n<2) return 0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    ll n;
    cin >> n;
    if(check_Prime(n)) cout<<"NO";
    else{
        if(pt(n)==sum_digit(n)) cout<<"YES";
        else cout<<"NO";
    }
}
