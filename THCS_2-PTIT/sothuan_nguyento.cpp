#include <stdio.h>
#include <math.h>
using ll = long long;
bool checkPrime(ll n)
{
    if (n < 2)
        return 0;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

bool checkSum(ll n)
{
    ll sum = 0;
    while (n > 0)
    {
        ll x = n % 10;
        sum += x;
        if (x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
        n /= 10;
    }
    if (checkPrime(sum))
        return 1;
    return 0;
}

int main()
{
    ll dem=0;
    ll a,b;
    scanf("%lld %lld",&a,&b);
    for(ll i=a;i<=b;i++){
    	if(checkSum(i)){
    		if(checkPrime(i)){
    			dem++;
			}
		}
	}
	printf("%lld",dem);	
}

