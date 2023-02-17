#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Recursion : Decimal --> Binary
void decimal_binary(ll n){
	if(n < 2) cout << n;
	else{
		decimal_binary(n / 2);
		cout << n % 2;
	}
}

// loop : Decimal --> Binary
long long Dec_2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

//Recursion : Decimal --> Hexadecimal
void decimal_16(ll n){
	if(n < 16){
		if(n < 10) cout << n;
		else cout << (char)(n + 55);
	}
	else{
		decimal_16(n / 16);
		int m = n % 16;
		if(m < 10) cout << m;
		else cout << (char)(m + 55);
	}
}

// Loop : Binary --> Decimal
int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}
int main(){
	ll n;
	cin >> n;
	decimal_binary(n);
	cout << endl;
	cout << Dec_2Bin(n) << endl;
	decimal_16(n);
	cout << endl;
	cout << BinToDec(n);
}
