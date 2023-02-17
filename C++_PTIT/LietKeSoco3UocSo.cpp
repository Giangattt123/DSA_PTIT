#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool snt(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void test()
{
    ll l, r;
    cin >> l >> r;
    l = ceil(sqrt(l));
    r = floor(sqrt(r));
    int cnt = 0;
    for (int i = l; i <= r; ++i){
        if (snt(i))
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        test();
    return 0;
}