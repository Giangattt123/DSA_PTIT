/* 	Giai thuat eulid mo rông --> nghich dao modular
	gcd(a,b)=gcd(b,a%b)=g
    ax + by = g (1) --> bx1 + (a % b)y1 = g
    Mà a % b  = a - a/b * b;
    --> bx1 + (a - a/b * b)y1 = g
    --> ay1 + (x1 - a/b * y1)b = g (2)
    Tu 1 va 2 --> x = y1
    			  y = x1 - a/b * y1
*/
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int x,y,g;
// ax + by = gcd(a,b) = g
// Time complexity : O(logN)
void extended_gcd(int a , int b){
	if(b == 0){
		g = a;
		x = 1;
		y = 0;
		return;
	}
	extended_gcd(b, a % b);
	int tmp = x;
	x = y;
	y =  tmp  - a / b * y;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	extended_gcd(24,17);
	cout << g << " " << x << " " << y << endl;
}
