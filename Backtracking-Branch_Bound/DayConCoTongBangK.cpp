#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1001], x[1001], k, n;
void Try(ll sum , ll i, ll pos)
{
    if(sum == k)
    {
        cout << "[" ;
        for(int j = 0 ; j < i ; j++)
        {
            cout << x[j];
            if(j != i - 1) cout << " ";
            else cout << "]";
        }
        cout << endl;
    }
    for(ll j = pos ; j < n ;++j)
    {
        if(sum + a[j] <= k)
        {
            x[i] = a[j];
            Try(sum + a[j] , i + 1 , j + 1);
        }
    }
}

int main()
{
    cin >> n >> k;
    for(ll i = 0 ; i < n ;i++) cin >> a[i];
    sort(a , a + n);
    Try(0 , 0 , 0);
}

