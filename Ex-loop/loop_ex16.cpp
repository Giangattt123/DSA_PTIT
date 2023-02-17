#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int dem(long long n);
int  dem(long long n)
{
	int cnt = 0;
	if (n == 0) cnt++;
	while (n != 0)
	{
		cnt++;
		n /= 10;

	}
	return cnt;
}

int main() {
	long long  n;
	cin >> n;
	cout << dem(n);
	return 0;

}

