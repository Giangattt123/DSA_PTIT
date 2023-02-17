#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    if(n == 1) {
        cout << a[0] << endl;
        return;
    }
    for(int i = 0; i < n; ++i){
        if (i == 0)
            cout << a[0] * a[1];
        else if (i == n - 1)
            cout << a[n - 1] * a[n - 2];
        else
            cout << a[i - 1] * a[i + 1];
        cout << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
       process();
}

