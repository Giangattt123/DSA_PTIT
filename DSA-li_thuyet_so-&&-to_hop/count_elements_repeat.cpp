#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
	int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	int a[n];
	    map<int, int> mp;
	    for (int i = 0; i < n; ++i) {
	        cin >> a[i];
	        mp[a[i]]++;
	    }
	    int cnt = 0;
	    for (auto x : mp) {
	        if (x.second > 1)
	            cnt += x.second;
	    }
	    cout << cnt << endl;
	}
}

    



