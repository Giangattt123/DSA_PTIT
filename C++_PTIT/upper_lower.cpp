#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	char c;
	    cin >> c;
	    if (c >= 'a' && c <= 'z')
	        c = toupper(c);
	    else if (c >= 'A' && c <= 'Z')
	        c = tolower(c);
	    cout << c << endl;
	} 
}
