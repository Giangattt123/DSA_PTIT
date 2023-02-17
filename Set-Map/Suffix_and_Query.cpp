#include <bits/stdc++.h>
using namespace std;
/*
9
3 3 3 4 2 0 3 1 2 
4
8
6
1
7*/
int main()
{
    int n ; 
	cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    // 3 3 3 4 2 0 3 1 2 
    int dp[n + 1]; 
	set<int>se;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        se.insert(a[i]);
        dp[i] = se.size(); 
    }
    int q ; 
	cin >> q;
    while(q--)
    {
        int x ; 
		cin >> x;
        cout << dp[x] << endl;
    }
    return 0;
}