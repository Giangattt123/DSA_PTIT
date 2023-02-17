#include<bits/stdc++.h>
using ll = long long ;
using namespace std;
int main(){
	// convert string --> number : int , long long
	string s = "1234321";
	// stoi : string to interger
	int n = stoi(s);
	cout << n << endl;
	// stoll : string to long long
	string t = "00000985743757348573";
	long long m = stoll(t);
	cout << m << endl;
	// convert number --> string : to_string
	int a = 12345;
	string str = to_string(a);
	cout << str << endl; 
	str += "678";
	cout << str << endl;
	
	
}